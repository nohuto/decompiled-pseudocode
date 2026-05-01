/*
 * XREFs of sub_180004984 @ 0x180004984
 * Callers:
 *     sub_180007308 @ 0x180007308 (sub_180007308.c)
 * Callees:
 *     sub_180004820 @ 0x180004820 (sub_180004820.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180004984(__int64 a1, unsigned int a2, int a3, int a4, _DWORD *a5, _DWORD *a6)
{
  unsigned int v10; // edi
  FARPROC RtlQueryFeatureConfiguration; // rax
  HMODULE ModuleHandleW; // rax
  int v13; // r8d
  unsigned int v14; // edx
  unsigned int v15; // ecx
  _BYTE v17[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  int v19; // [rsp+40h] [rbp-48h]

  if ( a5 )
    *a5 = 0;
  *a6 = 1;
  v10 = 0;
  v18 = 0LL;
  v19 = 0;
  RtlQueryFeatureConfiguration = (FARPROC)qword_18005AB60;
  if ( qword_18005AB60 )
    goto LABEL_8;
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlQueryFeatureConfiguration = GetProcAddress(ModuleHandleW, "RtlQueryFeatureConfiguration");
  qword_18005AB60 = (__int64)RtlQueryFeatureConfiguration;
  if ( RtlQueryFeatureConfiguration )
LABEL_8:
    v13 = ((__int64 (__fastcall *)(_QWORD, bool, _BYTE *, __int64 *))RtlQueryFeatureConfiguration)(
            a2,
            a3 == 0,
            v17,
            &v18);
  else
    v13 = -1073741511;
  if ( v13 )
  {
    if ( v13 == 279 )
      *(_DWORD *)(a1 + 16) = (HIDWORD(v18) >> 7) & 1;
  }
  else
  {
    v14 = HIDWORD(v18);
    v10 = 1;
    v15 = HIDWORD(v18);
    *(_DWORD *)(a1 + 12) = v19;
    *(_DWORD *)(a1 + 8) = (unsigned __int16)v15 >> 14;
    *(_DWORD *)a1 = (v15 >> 4) & 3;
    *(_BYTE *)(a1 + 4) = BYTE1(v14) & 0x3F;
    *(_DWORD *)(a1 + 16) = (v14 >> 7) & 1;
    *(_DWORD *)(a1 + 20) = (v14 >> 6) & 1;
  }
  if ( a5 )
    *a5 = v13 != -2147483614;
  if ( !v10 )
    return (unsigned int)sub_180004820(a4, a1, a2, a3, a5);
  return v10;
}
