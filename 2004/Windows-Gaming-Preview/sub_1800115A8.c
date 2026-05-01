/*
 * XREFs of sub_1800115A8 @ 0x1800115A8
 * Callers:
 *     sub_180011718 @ 0x180011718 (sub_180011718.c)
 *     sub_18003B0B8 @ 0x18003B0B8 (sub_18003B0B8.c)
 * Callees:
 *     sub_1800112F4 @ 0x1800112F4 (sub_1800112F4.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800115A8(signed __int32 *a1, unsigned int a2, int a3, int a4, unsigned int a5, int a6)
{
  __int64 v10; // rax
  unsigned int v11; // ebx
  FARPROC RtlNotifyFeatureUsage; // rax
  HMODULE ModuleHandleW; // rax
  unsigned int v15; // [rsp+30h] [rbp-40h] BYREF
  int v16; // [rsp+34h] [rbp-3Ch]
  __int64 v17; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+44h] [rbp-2Ch]
  int v20; // [rsp+4Ch] [rbp-24h]
  __int128 v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+60h] [rbp-10h]

  v10 = sub_1800112F4((__int64)&v17, a1, a5, a6);
  v11 = 0;
  v21 = *(_OWORD *)v10;
  v22 = *(_QWORD *)(v10 + 16);
  if ( qword_18005AD48 )
  {
    qword_18005AD48(a2, a5, 1LL, a1, &v21);
    if ( a3 )
    {
      v17 = 0LL;
      v19 = 0LL;
      v18 = a5;
      v20 = a4;
      qword_18005AD48(a2, a5, 1LL, 0LL, &v17);
    }
  }
  else if ( a3 && a5 != 254 )
  {
    v15 = a2;
    v16 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v16) |= 1u;
    RtlNotifyFeatureUsage = (FARPROC)qword_18005AB58;
    if ( qword_18005AB58 )
      goto LABEL_12;
    ModuleHandleW = hModule;
    if ( !hModule )
    {
      ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
      hModule = ModuleHandleW;
    }
    RtlNotifyFeatureUsage = GetProcAddress(ModuleHandleW, "RtlNotifyFeatureUsage");
    qword_18005AB58 = (__int64)RtlNotifyFeatureUsage;
    if ( RtlNotifyFeatureUsage )
LABEL_12:
      ((void (__fastcall *)(unsigned int *))RtlNotifyFeatureUsage)(&v15);
  }
  LOBYTE(v11) = (_DWORD)v22 == 0;
  return v11;
}
