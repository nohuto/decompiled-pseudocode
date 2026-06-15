/*
 * XREFs of sub_18000C840 @ 0x18000C840
 * Callers:
 *     sub_18000BC74 @ 0x18000BC74 (sub_18000BC74.c)
 *     sub_18000BD50 @ 0x18000BD50 (sub_18000BD50.c)
 *     sub_18000BF18 @ 0x18000BF18 (sub_18000BF18.c)
 *     sub_18000C088 @ 0x18000C088 (sub_18000C088.c)
 * Callees:
 *     sub_180009888 @ 0x180009888 (sub_180009888.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000B610 @ 0x18000B610 (sub_18000B610.c)
 *     sub_18000D0F8 @ 0x18000D0F8 (sub_18000D0F8.c)
 *     sub_18000F150 @ 0x18000F150 (sub_18000F150.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall sub_18000C840(LPCRITICAL_SECTION lpCriticalSection, __int64 a2)
{
  LPCRITICAL_SECTION v2; // rsi
  __int64 v3; // rdi
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned int i; // r14d
  unsigned int j; // esi
  __int64 v8; // r14
  __int64 v9; // r8
  __int64 v10; // rcx
  ATL::CAtlException *v12; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-60h]
  __int64 v15; // [rsp+40h] [rbp-58h]
  int v16; // [rsp+48h] [rbp-50h]
  __int64 v17; // [rsp+50h] [rbp-48h] BYREF
  int v18; // [rsp+58h] [rbp-40h]
  _BYTE v19[8]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v20; // [rsp+68h] [rbp-30h]
  unsigned __int64 v24; // [rsp+B8h] [rbp+20h]

  v2 = lpCriticalSection;
  v3 = 0LL;
  v13 = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v5 = 0LL;
  EnterCriticalSection(lpCriticalSection);
  for ( i = 0; (unsigned __int64)i < *(_QWORD *)&v2[1].LockCount; ++i )
  {
    try
    {
      if ( (unsigned __int64)i >= *(_QWORD *)&v2[1].LockCount )
        sub_18000A174(-2147024809);
      sub_18000D0F8(&v13, (char *)v2[1].DebugInfo + 32 * i);
      v24 = ++v5;
    }
    catch ( ATL::CAtlException *v12 )
    {
      if ( *(_DWORD *)v12 == -1073741571 )
        o__resetstkoflw();
      v2 = lpCriticalSection;
      v5 = v24;
    }
    v4 = v14;
    v3 = v13;
  }
  LeaveCriticalSection(v2);
  for ( j = 0; j < v5; ++j )
  {
    if ( j >= v4 )
      sub_18000A174(-2147024809);
    v8 = v3 + 32LL * j;
    v17 = *(_QWORD *)v8;
    v18 = *(_DWORD *)(v8 + 8);
    sub_18000F150(v19, v8 + 16);
    v10 = *(_QWORD *)(v8 + 24);
    v20 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    sub_18000B610(a2, &v17, v9);
  }
  if ( v3 )
  {
    sub_180009888(v3, v4);
    _o_free(v3);
  }
  return 0LL;
}
