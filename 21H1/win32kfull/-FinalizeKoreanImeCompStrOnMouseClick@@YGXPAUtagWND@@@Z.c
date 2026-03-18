/*
 * XREFs of ?FinalizeKoreanImeCompStrOnMouseClick@@YGXPAUtagWND@@@Z @ 0x146A3E
 * Callers:
 *     _EditionFinalizeKoreanImeCompStrOnMouseClick@8 @ 0x1478DB (_EditionFinalizeKoreanImeCompStrOnMouseClick@8.c)
 * Callees:
 *     _PostInputMessage@60 @ 0x467D0 (_PostInputMessage@60.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _GetAppImeCompatFlags@4 @ 0xA2FB2 (_GetAppImeCompatFlags@4.c)
 */

void __thiscall FinalizeKoreanImeCompStrOnMouseClick(int *this)
{
  int v1; // esi
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // edx
  int v8; // esi
  int i; // ecx
  int v10; // esi
  int j; // ecx
  int v12; // ecx
  int v13; // esi
  int v14; // esi
  int k; // ecx
  int v16; // ecx
  int v17; // esi
  _DWORD v18[2]; // [esp+8h] [ebp-Ch] BYREF
  int v19; // [esp+10h] [ebp-4h]

  v18[0] = 0;
  v18[1] = 0;
  v1 = this[2];
  if ( !*(_DWORD *)(_gpqForeground + 56) && (GetAppImeCompatFlags(this[2]) & 0x400000) == 0 )
  {
    if ( *(_WORD *)(v1 + 340) <= 0x400u )
    {
      SetSystemInputSource(v18);
      v3 = *(_DWORD *)(_gpqForeground + 64);
      if ( v3 )
        v4 = *(_DWORD *)(v3 + 8);
      else
        v4 = 0;
      v5 = gObjDummyLock;
      if ( v4 )
        v5 = v4 + 216;
      v6 = *(_DWORD *)(_gpqForeground + 48);
      v7 = v6 + 216;
      if ( v6 )
        v19 = v6 + 216;
      else
        v19 = gObjDummyLock;
      if ( !v6 )
        v7 = gObjDummyLock;
      v8 = gpsiLock;
      for ( i = 3; i; --i )
        v8 += 4;
      v10 = _gpqForeground;
      for ( j = 3; j; --j )
        v10 += 4;
      v12 = 3;
      v13 = v7;
      while ( v12 )
      {
        v13 += 4;
        --v12;
      }
      v14 = v19;
      for ( k = 3; k; --k )
        v14 += 4;
      v16 = 3;
      v17 = v5;
      while ( v16 )
      {
        v17 += 4;
        --v16;
      }
      PostInputMessage(
        _gpqForeground,
        0,
        0,
        (struct tagWND *)0x101,
        0xE5u,
        0,
        0,
        0,
        0,
        0,
        (unsigned int)v18,
        0,
        0,
        0,
        0);
    }
    else
    {
      v2 = *(_DWORD *)(v1 + 436);
      if ( v2 )
      {
        if ( *(char *)(*(_DWORD *)(v2 + 20) + 12) >= 0 )
          _PostMessage(v2, 647, 32, 0);
      }
    }
  }
}
