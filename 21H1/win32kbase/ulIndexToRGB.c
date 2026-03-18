/*
 * XREFs of ulIndexToRGB @ 0x1C0005750
 * Callers:
 *     GreGetNearestColor @ 0x1C00A89F0 (GreGetNearestColor.c)
 *     ulColorRefToRGB @ 0x1C00C7EF0 (ulColorRefToRGB.c)
 * Callees:
 *     ?ulIndexToRGB@XEPALOBJ@@QEAAKK@Z @ 0x1C00057A0 (-ulIndexToRGB@XEPALOBJ@@QEAAKK@Z.c)
 *     EngAcquireSemaphore @ 0x1C0017CA0 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C007B7C8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 */

unsigned int __fastcall ulIndexToRGB(HSEMAPHORE a1, __int64 a2, unsigned int a3)
{
  int v3; // esi
  char v4; // di
  __int64 v7; // rcx
  unsigned int v8; // edx
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  HSEMAPHORE v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = 0;
  v4 = a3;
  if ( a1 )
    return XEPALOBJ::ulIndexToRGB((XEPALOBJ *)&v11, a3);
  if ( a3 < 0xA )
    return *((_DWORD *)&logDefaultPal + a3 + 1);
  if ( a3 >= 0xF6 )
    return *((_DWORD *)&logDefaultPal + a3 - 235);
  v11 = ghsemPalette;
  EngAcquireSemaphore(ghsemPalette);
  v7 = *(_QWORD *)(a2 + 72);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a2 + 28);
    v9 = (_BYTE *)(v7 + 4);
    v10 = 0;
    if ( v8 )
    {
      while ( *v9 != v4 )
      {
        ++v10;
        ++v9;
        if ( v10 >= v8 )
          goto LABEL_13;
      }
      v3 = *(_DWORD *)(*(_QWORD *)(a2 + 112) + 4LL * v10);
    }
  }
LABEL_13:
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
  return v3;
}
