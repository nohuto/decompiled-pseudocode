/*
 * XREFs of sub_1800152B8 @ 0x1800152B8
 * Callers:
 *     sub_18001B18C @ 0x18001B18C (sub_18001B18C.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800152B8(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  unsigned __int64 v6; // rcx
  _QWORD *v7; // r8
  int v8; // edx
  _QWORD *i; // rcx
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 result; // rax
  __int64 *v15; // rbp
  _DWORD *v16; // rbx
  __int64 *v17; // rdx
  __int64 v18; // [rsp+0h] [rbp-48h] BYREF
  ATL::CAtlException *v19; // [rsp+20h] [rbp-28h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v21; // [rsp+30h] [rbp-18h]
  signed int v22; // [rsp+50h] [rbp+8h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 32);
  v21 = 0;
  sub_18001A330(&lpCriticalSection);
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 104) )
  {
LABEL_13:
    v10 = *(__int64 **)(a1 + 104);
    v11 = *v10;
    v10[2] = a2;
    *(_QWORD *)(a1 + 104) = v11;
    v10[1] = 0LL;
    *v10 = v5;
    ++*(_QWORD *)(a1 + 88);
    v12 = *(_QWORD *)(a1 + 72);
    if ( v12 )
      *(_QWORD *)(v12 + 8) = v10;
    else
      *(_QWORD *)(a1 + 80) = v10;
    *(_QWORD *)(a1 + 72) = v10;
    goto LABEL_23;
  }
  v6 = *(unsigned int *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 112) )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v6 < 0x18 )
    {
LABEL_8:
      v7 = 0LL;
      goto LABEL_9;
    }
    v6 *= 24LL;
  }
  if ( ~v6 < 8 )
    goto LABEL_8;
  v7 = (_QWORD *)o_malloc(v6 + 8);
  if ( !v7 )
    goto LABEL_32;
  while ( 1 )
  {
    *v7 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)(a1 + 96) = v7;
LABEL_9:
    if ( v7 )
    {
      v8 = *(_DWORD *)(a1 + 112);
      for ( i = &v7[2 * (v8 - 1) + 1 + (unsigned int)(v8 - 1)]; --v8 >= 0; i -= 3 )
      {
        *i = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 104) = i;
      }
      goto LABEL_13;
    }
LABEL_32:
    try
    {
      sub_18000A174(-2147024882);
    }
    catch ( ATL::CAtlException *v19 )
    {
      v17 = &v18;
      v15 = v17;
      v16 = (_DWORD *)v17[4];
      if ( *v16 == -1073741571 )
        o__resetstkoflw();
      *((_DWORD *)v15 + 20) = *v16;
      v4 = v22;
      if ( v22 < 0 )
      {
        v13 = off_18004F000;
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)v13 + 7) & 0x40000000) != 0
          && *((_BYTE *)v13 + 25) >= 2u )
        {
          sub_1800050FC(v13[2], 0x2Au, &stru_180043390, v4);
        }
        sub_180005724("CProcess::AddSession", 3112, v4);
      }
LABEL_23:
      if ( v21 )
        LeaveCriticalSection(lpCriticalSection);
      result = v4;
    }
  }
}
