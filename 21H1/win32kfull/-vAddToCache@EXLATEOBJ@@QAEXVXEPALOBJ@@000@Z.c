/*
 * XREFs of ?vAddToCache@EXLATEOBJ@@QAEXVXEPALOBJ@@000@Z @ 0x9C5F6
 * Callers:
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z @ 0x5D130 (-bInitXlateObj@EXLATEOBJ@@QAEHPAXJVXEPALOBJ@@111KKKK@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __thiscall EXLATEOBJ::vAddToCache(void *this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v7; // edx
  struct _XLATETABLE *v8; // edx
  int v9; // edx
  struct _XLATETABLE *v10; // edx
  int v11; // edx
  struct _XLATETABLE *v12; // edx
  int v13; // ecx
  struct _XLATETABLE *v14; // edx
  int v15; // [esp+Ch] [ebp-4h] BYREF

  v15 = _ghsemPalette;
  GreAcquireSemaphore(_ghsemPalette);
  v6 = 0;
  while ( *(&xlateTable + 6 * ulTableIndex + 1) )
  {
    if ( !*(&xlateTable + 6 * ulTableIndex) )
    {
      FreeThreadBufferWithTag(*(&xlateTable + 6 * ulTableIndex + 1));
      break;
    }
    ++v6;
    ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
    if ( v6 >= 8 )
      goto LABEL_14;
  }
  PopThreadGuardedObject(*(_DWORD *)this - 16);
  *(&xlateTable + 6 * ulTableIndex) = (struct _XLATETABLE *)1;
  *(&xlateTable + 6 * ulTableIndex + 1) = *(struct _XLATETABLE **)this;
  v7 = a2[20];
  if ( (_DWORD *)v7 == a2 )
    v8 = (struct _XLATETABLE *)a2[6];
  else
    v8 = *(struct _XLATETABLE **)(v7 + 24);
  *(&xlateTable + 6 * ulTableIndex + 2) = v8;
  v9 = *(_DWORD *)(a3 + 80);
  if ( v9 == a3 )
    v10 = *(struct _XLATETABLE **)(a3 + 24);
  else
    v10 = *(struct _XLATETABLE **)(v9 + 24);
  *(&xlateTable + 6 * ulTableIndex + 3) = v10;
  v11 = *(_DWORD *)(a4 + 80);
  if ( v11 == a4 )
    v12 = *(struct _XLATETABLE **)(a4 + 24);
  else
    v12 = *(struct _XLATETABLE **)(v11 + 24);
  *(&xlateTable + 6 * ulTableIndex + 4) = v12;
  v13 = *(_DWORD *)(a5 + 80);
  if ( v13 == a5 )
    v14 = *(struct _XLATETABLE **)(a5 + 24);
  else
    v14 = *(struct _XLATETABLE **)(v13 + 24);
  *(&xlateTable + 6 * ulTableIndex + 5) = v14;
  *(_DWORD *)(*(_DWORD *)this + 32) = ulTableIndex;
  a2[10] = ulTableIndex;
  ulTableIndex = ((_BYTE)ulTableIndex + 1) & 7;
LABEL_14:
  SEMOBJ::vUnlock((SEMOBJ *)&v15);
}
