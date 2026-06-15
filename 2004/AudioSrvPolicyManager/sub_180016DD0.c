/*
 * XREFs of sub_180016DD0 @ 0x180016DD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001802C @ 0x18001802C (sub_18001802C.c)
 *     sub_1800187C8 @ 0x1800187C8 (sub_1800187C8.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180016DD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  ATL::CAtlException *v8; // rbx
  __int64 v9; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v11; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+90h] [rbp+8h] BYREF
  __int64 v15; // [rsp+98h] [rbp+10h]
  __int64 v16; // [rsp+A0h] [rbp+18h] BYREF
  char v17; // [rsp+A8h] [rbp+20h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 608);
  v13 = 0;
  sub_18001A330(&lpCriticalSection);
  if ( sub_1800187C8((int)a1 + 648, (unsigned int)&v16, (unsigned int)&v17, (unsigned int)&v14, (__int64)v10) )
    goto LABEL_8;
  try
  {
    v6 = 0;
    sub_18001802C(a1 + 648, &v16, &v9);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v8 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      o__resetstkoflw();
    v14 = *(_DWORD *)v8;
    v6 = v14;
    v4 = v15;
    if ( v14 >= 0 )
    {
      v3 = v16;
      goto LABEL_7;
    }
LABEL_8:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    result = v6;
  }
LABEL_7:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  goto LABEL_8;
}
