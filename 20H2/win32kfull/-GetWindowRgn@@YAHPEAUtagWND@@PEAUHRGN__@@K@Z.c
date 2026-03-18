/*
 * XREFs of ?GetWindowRgn@@YAHPEAUtagWND@@PEAUHRGN__@@K@Z @ 0x1C00E49E4
 * Callers:
 *     ?GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z @ 0x1C00E43A4 (-GetVisRgn@@YA_NPEAUtagWND@@KPEAUHRGN__@@@Z.c)
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00E4598 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 * Callees:
 *     CalcVisRgn @ 0x1C0043F90 (CalcVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C029E348 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall GetWindowRgn(struct tagWND *a1, HRGN a2, char a3)
{
  int v6; // ecx
  unsigned int v7; // r9d
  unsigned int RgnBox; // eax
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  HRGN v15; // [rsp+20h] [rbp-28h] BYREF
  __int128 v16; // [rsp+28h] [rbp-20h] BYREF

  v15 = a2;
  if ( (a3 & 2) != 0 )
  {
    v6 = (2 * (a3 & 4 | 0x4800200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v6 = 2 * (a3 & 4 | 0x4800200);
    v7 = v6 | 1;
    v16 = 0LL;
    if ( (a3 & 0x10) != 0 )
      v7 = v6;
    CalcVisRgn(&v15, a1, a1, v7);
    RgnBox = GreGetRgnBox(v15, &v16);
  }
  else
  {
    v12 = *((_QWORD *)a1 + 5);
    v13 = *(_QWORD *)(v12 + 168);
    if ( !v13 || (*(_BYTE *)(v12 + 21) & 8) != 0 )
      return 0LL;
    RgnBox = GreCombineRgn(a2, v13, 0LL, 5LL);
  }
  v9 = RgnBox;
  if ( !RgnBox )
    return 0LL;
  v10 = *((_QWORD *)a1 + 5);
  if ( (*(_WORD *)(v10 + 42) & 0x2FFF) != 0x29D )
    v9 = GreOffsetRgn(v15, (unsigned int)-*(_DWORD *)(v10 + 88), (unsigned int)-*(_DWORD *)(v10 + 92));
  if ( (a3 & 0x20) != 0
    && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
    && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456)
    && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 456) + 8LL) + 64LL) & 1) != 0 )
  {
    v14 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v14 + 288) & 0x4000000F) == 0x40000000 )
      GreScaleRgnToDestLogPixel(*(unsigned __int16 *)(v14 + 284), v15);
  }
  return v9;
}
