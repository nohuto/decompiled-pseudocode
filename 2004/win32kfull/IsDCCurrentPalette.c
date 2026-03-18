/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B8180
 * Callers:
 *     xxxRealizePalette @ 0x1C00308F0 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v2 = v6[0];
  if ( v6[0] )
  {
    if ( *(HPALETTE *)(v6[0] + 80LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v6[0] + 976LL) + 208LL) == 1
      && (v3 = (unsigned __int16)*(_DWORD *)(v6[0] + 80LL) | (*(_DWORD *)(v6[0] + 80LL) >> 8) & 0xFF0000u,
          (_DWORD)v3 == ((unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000))
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v3),
          v2 = v6[0],
          hForePID == CurrentProcessWin32Process) )
    {
      v1 = 1;
    }
    if ( v2 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  }
  return v1;
}
