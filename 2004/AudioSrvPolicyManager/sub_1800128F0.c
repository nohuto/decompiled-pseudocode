/*
 * XREFs of sub_1800128F0 @ 0x1800128F0
 * Callers:
 *     sub_180026564 @ 0x180026564 (sub_180026564.c)
 *     sub_180026714 @ 0x180026714 (sub_180026714.c)
 * Callees:
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_180017F24 @ 0x180017F24 (sub_180017F24.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800128F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned int v4; // ebx
  _QWORD *v5; // rdi
  __int64 v6; // rcx
  ATL::CAtlException *v8; // rbx
  ATL::CAtlException *v9; // [rsp+28h] [rbp-30h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+38h] [rbp-20h]
  __int64 v12; // [rsp+60h] [rbp+8h] BYREF
  __int64 v13; // [rsp+68h] [rbp+10h]
  int v14; // [rsp+70h] [rbp+18h]
  _QWORD *v15; // [rsp+78h] [rbp+20h]

  v13 = a2;
  v12 = a1;
  v2 = a2;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v11 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = 0;
  sub_180017F24(v2);
  v5 = *(_QWORD **)(a1 + 72);
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    v15 = v5;
    v12 = v6;
    if ( !*(_DWORD *)(v6 + 448) && *(_DWORD *)(v6 + 528) )
    {
      try
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        v4 = 0;
        sub_180017E30(v2, &v12);
      }
      catch ( ATL::CAtlException *v9 )
      {
        v8 = v9;
        if ( *(_DWORD *)v9 == -1073741571 )
          o__resetstkoflw();
        v14 = *(_DWORD *)v8;
        v4 = v14;
        if ( v14 < 0 )
          break;
        v2 = v13;
        v5 = v15;
      }
    }
  }
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
