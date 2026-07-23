/*
 * XREFs of MiMirrorPerformBlackWrites @ 0x140382708
 * Callers:
 *     MiMirrorBlackPhase @ 0x1403F4064 (MiMirrorBlackPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiMirrorPerformBlackWrites(__int64 a1)
{
  int v1; // r14d
  unsigned __int64 v2; // rdx
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r8
  _QWORD *v6; // rdi
  __int64 i; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  _DWORD *v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // r9
  unsigned __int64 j; // rcx
  unsigned __int64 v16; // rbx
  _DWORD *v18; // rdx
  __int64 v19; // r8

  v1 = 0;
  v2 = 0LL;
  while ( 1 )
  {
    v4 = v2 & -(__int64)(v2 < qword_140C4E760);
    v5 = qword_140C4E760 - 1;
    while ( 1 )
    {
      if ( v5 - v4 == -1LL )
        goto LABEL_39;
      v6 = (_QWORD *)(qword_140C4E768 + 8 * (v4 >> 6));
      for ( i = ~*v6 | ((1LL << (v4 & 0x3F)) - 1); i == -1; i = ~*v6 )
      {
        if ( (unsigned __int64)++v6 > qword_140C4E768 + 8 * (v5 >> 6) )
          goto LABEL_39;
      }
      _BitScanForward64(&v8, ~i);
      v9 = v8 + (((__int64)v6 - qword_140C4E768) >> 3 << 6);
      if ( v9 > v5 )
      {
LABEL_39:
        v9 = -1LL;
      }
      else if ( v9 != -1LL )
      {
        break;
      }
      if ( !v4 )
        break;
      v19 = v2 + 1;
      if ( v2 + 1 > qword_140C4E760 )
        v19 = qword_140C4E760;
      v5 = v19 - 1;
      v4 = 0LL;
    }
    if ( v9 < v2 || v9 == -1LL )
      return (unsigned int)v1;
    if ( qword_140C4E760 > v9 )
    {
      v10 = v9;
      v11 = qword_140C4E768 + 4 * ((unsigned __int64)(qword_140C4E760 - 1) >> 5);
      v12 = (_DWORD *)(qword_140C4E768 + 4 * (v9 >> 5));
      if ( v12 != (_DWORD *)v11 && (*v12 | *((_DWORD *)qword_140012120 + (v9 & 0x1F))) == -1 )
      {
        v10 = (v9 & 0xFFFFFFFFFFFFFFE0uLL) + 32;
        for ( ++v12; (unsigned __int64)v12 < v11 && *v12 == -1; ++v12 )
          v10 += 32LL;
      }
      while ( v10 < qword_140C4E760 && _bittest64((const signed __int64 *)qword_140C4E768, v10) )
        ++v10;
      v13 = 0LL;
      if ( v12 == (_DWORD *)v11 )
        goto LABEL_20;
      v14 = v10 & 0x1F;
      if ( (~*((_DWORD *)qword_140012120 + v14) & *v12) != 0 )
        goto LABEL_20;
      v13 = 32 - v14;
      if ( v14 != 33 )
      {
        v18 = v12 + 1;
        while ( (unsigned __int64)v18 < v11 && !*v18 )
        {
          ++v18;
          v13 += 32LL;
          if ( v13 == -1LL )
            goto LABEL_25;
        }
LABEL_20:
        for ( j = v13 + v10;
              j < qword_140C4E760 && !_bittest64((const signed __int64 *)qword_140C4E768, j) && v13 != -1LL;
              ++j )
        {
          ++v13;
        }
      }
LABEL_25:
      if ( v13 )
        goto LABEL_26;
      goto LABEL_41;
    }
    v13 = 0LL;
LABEL_41:
    v10 = qword_140C4E760;
LABEL_26:
    v16 = v10 - v9;
    v1 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64))(a1 + 16))(v9 << 12, v16 << 12);
    if ( v1 >= 0 )
    {
      v2 = v16 + v13 + v9;
      if ( v2 < qword_140C4E760 )
        continue;
    }
    return (unsigned int)v1;
  }
}
