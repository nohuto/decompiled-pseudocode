/*
 * XREFs of HvUnCOWReconciledPages @ 0x1402F7750
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 * Callees:
 *     RtlMergeBitMaps @ 0x1402F7B98 (RtlMergeBitMaps.c)
 *     HvpViewMapUnCOWAndSealRange @ 0x1406FBB24 (HvpViewMapUnCOWAndSealRange.c)
 */

void __fastcall HvUnCOWReconciledPages(__int64 a1)
{
  unsigned int *v2; // rsi
  unsigned int v3; // edx
  __int64 v4; // r10
  int *v5; // r9
  int v6; // r8d
  int v7; // r8d
  struct _KTHREAD *v8; // r10
  unsigned __int64 v9; // r9
  _DWORD *v10; // rdx
  unsigned int v11; // edi
  _DWORD *v12; // r8
  int v13; // ebx
  unsigned int i; // eax
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // r10d
  __int64 v18; // rdx
  _DWORD *v19; // r8
  int v20; // eax
  int v21; // edx
  unsigned int j; // eax
  _DWORD *v23; // r8
  _DWORD *v24; // rdx

  if ( (*(_DWORD *)(a1 + 160) & 0x20000) != 0 )
  {
    v2 = (unsigned int *)(a1 + 1728);
    if ( *(struct _KTHREAD **)(a1 + 4232) == KeGetCurrentThread() )
      RtlMergeBitMaps(a1 + 1728, a1 + 1680);
    v3 = *v2;
    v4 = 0LL;
    while ( v3 )
    {
      v5 = (int *)(*((_QWORD *)v2 + 1) + 4 * v4);
      v6 = *v5;
      if ( v3 < 0x20 )
      {
        v20 = 1 << v3;
        v3 = 0;
        v7 = (v20 - 1) ^ v6;
      }
      else
      {
        v3 -= 32;
        v7 = ~v6;
      }
      *v5 = v7;
      v4 = (unsigned int)(v4 + 1);
    }
    RtlMergeBitMaps(v2, a1 + 88);
    RtlMergeBitMaps(v2, a1 + 112);
    v8 = *(struct _KTHREAD **)(a1 + 4232);
    if ( v8 && v8 != KeGetCurrentThread() )
      RtlMergeBitMaps(v2, a1 + 1680);
    v9 = *v2;
    if ( (_DWORD)v9 )
    {
      v10 = (_DWORD *)*((_QWORD *)v2 + 1);
      v11 = 0;
      v12 = &v10[(unsigned __int64)(unsigned int)(v9 - 1) >> 5];
      if ( v10 != v12 && *v10 == -1 )
      {
        v11 = 32;
        for ( ++v10; v10 < v12 && *v10 == -1; ++v10 )
          v11 += 32;
      }
      for ( ; v11 < (unsigned int)v9; ++v11 )
      {
        if ( !_bittest(*((const signed __int32 **)v2 + 1), v11) )
          break;
      }
      v13 = 0;
      if ( v10 != v12 )
      {
        v9 = v11 & 0x1F;
        if ( (*v10 & ~*((_DWORD *)qword_140012120 + v9)) == 0 )
        {
          v13 = 32 - v9;
          if ( (_DWORD)v9 == 33 )
            goto LABEL_26;
          v24 = v10 + 1;
          while ( v24 < v12 && !*v24 )
          {
            ++v24;
            v13 += 32;
            if ( v13 == -1 )
              goto LABEL_26;
          }
        }
      }
      for ( i = v13 + v11; i < *v2; ++v13 )
      {
        if ( _bittest(*((const signed __int32 **)v2 + 1), i) )
          break;
        if ( v13 == -1 )
          break;
        ++i;
      }
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_26:
          if ( !v13 )
            return;
          v15 = ((v11 << 9) + (v13 << 9)) & 0xFFFFF000;
          v16 = ((v11 << 9) + 4095) & 0xFFFFF000;
          if ( (_DWORD)v16 != v15 )
            HvpViewMapUnCOWAndSealRange(a1 + 216, v16, v15 - (unsigned int)v16, v9);
          v17 = *v2;
          v11 += v13;
          if ( *v2 <= v11 )
            return;
          v18 = *((_QWORD *)v2 + 1);
          v9 = v18 + 4 * ((unsigned __int64)(v17 - 1) >> 5);
          v19 = (_DWORD *)(v18 + 4 * ((unsigned __int64)v11 >> 5));
          if ( v19 != (_DWORD *)v9 && (*v19 | *((_DWORD *)qword_140012120 + (v11 & 0x1F))) == -1 )
          {
            v11 = v11 - (v11 & 0x1F) + 32;
            for ( ++v19; (unsigned __int64)v19 < v9 && *v19 == -1; ++v19 )
              v11 += 32;
          }
          for ( ; v11 < v17; ++v11 )
          {
            if ( !_bittest(*((const signed __int32 **)v2 + 1), v11) )
              break;
          }
          v13 = 0;
          if ( v19 != (_DWORD *)v9 )
          {
            v21 = v11 & 0x1F;
            if ( (*v19 & ~*((_DWORD *)qword_140012120 + (v11 & 0x1F))) == 0 )
              break;
          }
LABEL_42:
          for ( j = v13 + v11; j < *v2; ++v13 )
          {
            if ( _bittest(*((const signed __int32 **)v2 + 1), j) )
              break;
            if ( v13 == -1 )
              break;
            ++j;
          }
        }
        v13 = 32 - v21;
        if ( v21 != 33 )
        {
          v23 = v19 + 1;
          while ( (unsigned __int64)v23 < v9 && !*v23 )
          {
            ++v23;
            v13 += 32;
            if ( v13 == -1 )
              goto LABEL_26;
          }
          goto LABEL_42;
        }
      }
    }
  }
}
