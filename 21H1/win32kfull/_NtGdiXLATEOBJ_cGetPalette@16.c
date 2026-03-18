/*
 * XREFs of _NtGdiXLATEOBJ_cGetPalette@16 @ 0x21B468
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z @ 0x9593E (-GetThreadCurrentObj@UMPDOBJ@@SGPAV1@PAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z @ 0x216116 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QAEPAU_XLATEOBJ@@PAU1@@Z.c)
 *     ?bSafeCopyBits@@YGHPAX0K@Z @ 0x216D5F (-bSafeCopyBits@@YGHPAX0K@Z.c)
 *     _XLATEOBJ_cGetPalette@16 @ 0x2257C0 (_XLATEOBJ_cGetPalette@16.c)
 */

ULONG __stdcall NtGdiXLATEOBJ_cGetPalette(XLATEOBJ *pxlo, ULONG iPal, ULONG cPal, char *a4)
{
  ULONG Palette; // edi
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  struct UMPDOBJ *ThreadCurrentObj; // eax
  struct UMPDOBJ *v8; // esi
  XLATEOBJ *v9; // ecx
  ULONG *v10; // eax
  void *v12; // [esp+0h] [ebp-10h]
  unsigned int v13; // [esp+4h] [ebp-Ch]
  PATHOBJ *v14; // [esp+Ch] [ebp-4h]
  XLATEOBJ *pxloa; // [esp+18h] [ebp+8h]

  Palette = 0;
  v14 = 0;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return Palette;
  ++*((_DWORD *)ThreadCurrentObj + 57);
  v9 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>(ThreadCurrentObj, (int)pxlo);
  pxloa = v9;
  if ( v9 )
  {
    if ( !a4 )
    {
      v10 = 0;
LABEL_7:
      if ( v10 )
      {
        Palette = XLATEOBJ_cGetPalette(v9, iPal, cPal, v10);
        if ( Palette )
          Palette &= -(bSafeCopyBits(v14, a4, 4 * cPal, v12, v13) != 0);
        Win32FreePool(v14);
      }
      goto LABEL_11;
    }
    if ( cPal <= 0x9C4000 )
    {
      v10 = (ULONG *)PALLOCMEM2(4 * cPal, 1886221639, 0);
      v9 = pxloa;
      v14 = (PATHOBJ *)v10;
      goto LABEL_7;
    }
  }
LABEL_11:
  if ( v8 )
    --*((_DWORD *)v8 + 57);
  return Palette;
}
