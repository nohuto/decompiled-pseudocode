/*
 * XREFs of IsDCCurrentPalette @ 0x1C02B6BE0
 * Callers:
 *     xxxRealizePalette @ 0x1C0113460 (xxxRealizePalette.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall IsDCCurrentPalette(HDC a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rcx
  struct _W32PROCESS *CurrentProcessWin32Process; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v8, a1);
  v2 = v8[0];
  if ( v8[0] )
  {
    if ( *(HPALETTE *)(v8[0] + 80LL) == hForePalette
      || *(_DWORD *)(*(_QWORD *)(v8[0] + 976LL) + 208LL) == 1
      && (v3 = *(unsigned int *)(v8[0] + 80LL),
          v4 = (unsigned __int16)hForePalette | ((unsigned int)hForePalette >> 8) & 0xFF0000,
          v5 = (unsigned __int16)v3 | (*(_DWORD *)(v8[0] + 80LL) >> 8) & 0xFF0000u,
          (_DWORD)v5 == (_DWORD)v4)
      && (CurrentProcessWin32Process = (struct _W32PROCESS *)PsGetCurrentProcessWin32Process(v5, v3, v4),
          v2 = v8[0],
          hForePID == CurrentProcessWin32Process) )
    {
      v1 = 1;
    }
    if ( v2 )
      XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  }
  return v1;
}
