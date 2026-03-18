/*
 * XREFs of GreGetSystemPaletteUse @ 0x1C00BC03C
 * Callers:
 *     NtGdiGetSystemPaletteUse @ 0x1C00BAD80 (NtGdiGetSystemPaletteUse.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     CreateScreenPalette @ 0x1C0244AEC (CreateScreenPalette.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreGetSystemPaletteUse(HDC a1)
{
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  int v8; // edi
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v9, a1);
  if ( v9[0] )
  {
    v5 = *(_QWORD *)(v9[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v10, v2, v3, v4);
    if ( (*(_DWORD *)(v5 + 2172) & 0x100) != 0 )
    {
      v8 = *(_DWORD *)(*(_QWORD *)(v5 + 1808) + 24LL);
      if ( (v8 & 0x1000) != 0 )
        v1 = 2;
      else
        v1 = (v8 & 0x10000 | 0x8000u) >> 15;
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
    if ( v9[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v9);
  }
  return v1;
}
