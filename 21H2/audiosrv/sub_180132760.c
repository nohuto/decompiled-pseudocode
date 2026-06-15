/*
 * XREFs of sub_180132760 @ 0x180132760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memcmp @ 0x180074433 (memcmp.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180132760(__int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 *v7; // rdx
  __int64 v8; // r9
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r13
  __int64 v11; // rcx
  __int16 v12; // r11
  int v13; // r10d
  __int16 v14; // si
  __int16 v15; // ax
  __int16 v16; // r8
  __int64 v17; // rax
  int v18; // esi
  unsigned __int64 v19; // rcx
  int v20; // esi
  int v21; // ecx
  int v22; // edx
  _WORD *v23; // r10
  __int128 v25; // [rsp+20h] [rbp-40h]
  __int128 v26; // [rsp+38h] [rbp-28h]

  v3 = 0;
  if ( a2 && a3 )
  {
    *a3 = 0;
    if ( a1 == a2 )
    {
      *a3 = 14;
      return v3;
    }
    v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v7 = *(__int64 **)(a1 + 16);
    v8 = v6;
    if ( !v6 )
    {
      if ( v7 )
        return 1;
      else
        *a3 |= 0xEu;
      return v3;
    }
    if ( v7 )
    {
      v9 = *(_WORD *)(v6 + 16);
      v10 = *((_WORD *)v7 + 8);
      v26 = *(_OWORD *)v6;
      v11 = *v7;
      v25 = *(_OWORD *)v7;
      if ( WORD1(*(_OWORD *)v7) )
      {
        v12 = WORD1(*(_OWORD *)v6);
      }
      else
      {
        v12 = 0;
        WORD1(v26) = 0;
        DWORD2(v26) = 0;
        WORD6(v26) = 0;
      }
      if ( HIDWORD(*v7) )
      {
        v13 = HIDWORD(*(_QWORD *)v6);
      }
      else
      {
        v13 = 0;
        *(_QWORD *)((char *)&v26 + 4) = 0LL;
      }
      if ( HIWORD(v25) )
      {
        v14 = HIWORD(*(_OWORD *)v6);
      }
      else
      {
        v14 = 0;
        HIDWORD(v26) = 0;
      }
      v15 = *(_OWORD *)v7;
      if ( (_WORD)v25 )
      {
        v16 = v26;
      }
      else
      {
        v16 = 0;
        LOWORD(v26) = 0;
      }
      if ( !v12 )
      {
        WORD1(v25) = 0;
        v11 = v25;
        DWORD2(v25) = 0;
        WORD6(v25) = 0;
      }
      if ( !v13 )
      {
        *(_QWORD *)((char *)&v25 + 4) = 0LL;
        v11 = (unsigned int)v25;
      }
      if ( !v14 )
        HIDWORD(v25) = 0;
      if ( !v16 )
      {
        LOWORD(v25) = 0;
        v15 = 0;
        v11 = v25;
      }
      if ( v16 == 1 )
        v9 = 0;
      if ( v15 == 1 )
        v10 = 0;
      if ( v16 != v15 )
        return 1;
      if ( *(_WORD *)v7 == 0xFFFE )
      {
        v17 = *(_QWORD *)(v8 + 24) - v7[3];
        if ( !v17 )
          v17 = *(_QWORD *)(v8 + 32) - v7[4];
        if ( v17 )
          return 1;
      }
      if ( v9 != v10 )
        return 1;
      v18 = *a3 | 2;
      *a3 = v18;
      v19 = v11 - v26;
      if ( !v19 )
      {
        v19 = *((_QWORD *)&v25 + 1) - *((_QWORD *)&v26 + 1);
        if ( *((_QWORD *)&v25 + 1) == *((_QWORD *)&v26 + 1) )
          v19 = v10 - (unsigned __int64)v9;
      }
      if ( v19 )
        return 1;
      v20 = v18 | 4;
      v21 = 18;
      *a3 = v20;
      v22 = 18;
      v23 = *(_WORD **)(a1 + 16);
      if ( *v23 != 1 )
        v22 = (unsigned __int16)v23[8] + 18;
      if ( *(_WORD *)v8 != 1 )
        v21 = *(unsigned __int16 *)(v8 + 16) + 18;
      if ( v22 != v21 )
        return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
      if ( memcmp(v23 + 9, (const void *)(v8 + 18), *(unsigned __int16 *)(v8 + 16)) )
        return 1;
      *a3 = v20 | 8;
    }
    return ((unsigned __int8)~*(_BYTE *)a3 >> 3) & 1;
  }
  return 2147942487LL;
}
