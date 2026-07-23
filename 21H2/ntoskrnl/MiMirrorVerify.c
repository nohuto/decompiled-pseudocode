/*
 * XREFs of MiMirrorVerify @ 0x14038447C
 * Callers:
 *     MmDuplicateMemory @ 0x14099625C (MmDuplicateMemory.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorVerify(__int64 a1)
{
  int v1; // ebp
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r8
  _QWORD *v7; // rdi
  __int64 i; // r9
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned __int64 v16; // r9
  _DWORD *v17; // rdx
  unsigned __int64 j; // rcx
  unsigned __int64 v19; // rbx

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 24) )
    return 0LL;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = v4 & -(__int64)(v4 < qword_140C4E750);
    v6 = qword_140C4E750 - 1;
    while ( 1 )
    {
      if ( v6 - v5 == -1LL )
        goto LABEL_7;
      v7 = (_QWORD *)(qword_140C4E758 + 8 * (v5 >> 6));
      for ( i = ~*v7 | ((1LL << (v5 & 0x3F)) - 1); i == -1; i = ~*v7 )
      {
        if ( (unsigned __int64)++v7 > qword_140C4E758 + 8 * (v6 >> 6) )
          goto LABEL_7;
      }
      _BitScanForward64(&v10, ~i);
      v9 = v10 + (((__int64)v7 - qword_140C4E758) >> 3 << 6);
      if ( v9 > v6 )
      {
LABEL_7:
        v9 = -1LL;
      }
      else if ( v9 != -1LL )
      {
        break;
      }
      if ( !v5 )
        break;
      v11 = v4 + 1;
      if ( v4 + 1 > qword_140C4E750 )
        v11 = qword_140C4E750;
      v6 = v11 - 1;
      v5 = 0LL;
    }
    if ( v9 < v4 || v9 == -1LL )
      return (unsigned int)v1;
    if ( qword_140C4E750 > v9 )
    {
      v13 = v9;
      v14 = qword_140C4E758 + 4 * ((unsigned __int64)(qword_140C4E750 - 1) >> 5);
      v15 = (_DWORD *)(qword_140C4E758 + 4 * (v9 >> 5));
      if ( v15 != (_DWORD *)v14 && (*v15 | *((_DWORD *)qword_140012120 + (v9 & 0x1F))) == -1 )
      {
        v13 = (v9 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v15; (unsigned __int64)v15 < v14 && *v15 == -1; ++v15 )
          v13 += 32LL;
      }
      while ( v13 < qword_140C4E750 && _bittest64((const signed __int64 *)qword_140C4E758, v13) )
        ++v13;
      v12 = 0LL;
      if ( v15 == (_DWORD *)v14 )
        goto LABEL_38;
      v16 = v13 & 0x1F;
      if ( (~*((_DWORD *)qword_140012120 + v16) & *v15) != 0 )
        goto LABEL_38;
      v12 = 32 - v16;
      if ( v16 != 33 )
      {
        v17 = v15 + 1;
        while ( (unsigned __int64)v17 < v14 && !*v17 )
        {
          ++v17;
          v12 += 32LL;
          if ( v12 == -1LL )
            goto LABEL_43;
        }
LABEL_38:
        for ( j = v12 + v13;
              j < qword_140C4E750 && !_bittest64((const signed __int64 *)qword_140C4E758, j) && v12 != -1LL;
              ++j )
        {
          ++v12;
        }
      }
LABEL_43:
      if ( v12 )
        goto LABEL_45;
      goto LABEL_44;
    }
    v12 = 0LL;
LABEL_44:
    v13 = qword_140C4E750;
LABEL_45:
    v19 = v13 - v9;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 24))(v9 << 12, v19 << 12);
    if ( v1 >= 0 )
    {
      v4 = v19 + v12 + v9;
      if ( v4 < qword_140C4E750 )
        continue;
    }
    return (unsigned int)v1;
  }
}
