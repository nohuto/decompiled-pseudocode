/*
 * XREFs of sub_180014CF0 @ 0x180014CF0
 * Callers:
 *     sub_180006830 @ 0x180006830 (sub_180006830.c)
 *     sub_18001058C @ 0x18001058C (sub_18001058C.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 *     sub_180030E14 @ 0x180030E14 (sub_180030E14.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180014CF0(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edi
  __int64 v4; // r14
  _WORD *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rbp
  __int64 v9; // r11
  _QWORD *v10; // r11
  __int64 v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-58h] BYREF
  char v14; // [rsp+28h] [rbp-50h]
  _QWORD v15[4]; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *(_QWORD *)(a1 + 240);
  v5 = (_WORD *)sub_180030E14(a1 & -(__int64)(a1 != 16));
  *a2 = 0LL;
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(v4 + 32);
  sub_18001A330(&lpCriticalSection);
  sub_18000CD64(v15, v5);
  v7 = *(_QWORD **)(v4 + 648);
  v8 = v7;
  v9 = v7[1];
  while ( !*(_BYTE *)(v9 + 25) )
  {
    if ( (unsigned __int8)sub_180017C9C(v6, v9 + 32, v15) )
    {
      v9 = v10[2];
    }
    else
    {
      v7 = v10;
      v9 = *v10;
    }
  }
  if ( v7 == v8 || (unsigned __int8)sub_180017C9C(v6, v15, v7 + 4) )
    v7 = v8;
  sub_180009CF0((__int64)v15);
  if ( v7 == *(_QWORD **)(v4 + 648) )
  {
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
    return (unsigned int)-2147023728;
  }
  else
  {
    v11 = v7[8];
    if ( v11 )
    {
      *a2 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      *a2 = 0LL;
    }
    if ( v14 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v2;
}
