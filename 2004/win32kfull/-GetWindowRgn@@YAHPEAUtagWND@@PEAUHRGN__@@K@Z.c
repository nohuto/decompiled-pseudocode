/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C002FBA4
 * Callers:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C002F570 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C002F758 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0072BA0 (CalcVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029F798 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  unsigned int RgnBox; // eax
  unsigned int v7; // edi
  __int64 v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  HRGN v13; // [rsp+20h] [rbp-28h] BYREF
  __int128 v14; // [rsp+28h] [rbp-20h] BYREF

  v13 = a2;
  if ( (a3 & 2) != 0 )
  {
    v14 = 0LL;
    CalcVisRgn(&v13);
    RgnBox = GreGetRgnBox(v13, &v14);
  }
  else
  {
    v10 = *((_QWORD *)a1 + 5);
    v11 = *(_QWORD *)(v10 + 168);
    if ( !v11 || (*(_BYTE *)(v10 + 21) & 8) != 0 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v11, 0LL, 5LL);
  }
  v7 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v8 + 42) & 0x3FFF) != 0x29D )
    v7 = GreOffsetRgn(v13, (unsigned int)-*(_DWORD *)(v8 + 88), (unsigned int)-*(_DWORD *)(v8 + 92));
  if ( (a3 & 0x20) != 0
    && W32GetThreadWin32Thread(KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 448) + 8LL) + 64LL) & 1) != 0 )
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v12 + 288) & 0x4000000F) == 0x40000000 )
      GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v12 + 284), v13);
  }
  return v7;
}
