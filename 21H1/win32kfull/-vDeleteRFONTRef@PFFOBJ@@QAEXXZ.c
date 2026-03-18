/*
 * XREFs of ?vDeleteRFONTRef@PFFOBJ@@QAEXXZ @ 0xACDB4
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ??1PFFREFOBJ@@QAE@XZ @ 0xF830F (--1PFFREFOBJ@@QAE@XZ.c)
 *     vKillRFONTList @ 0x1D0F5D (vKillRFONTList.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 *     ?vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z @ 0x207D5B (-vInit@RFONTOBJ@@QAEXAAVXDCOBJ@@PAVPFE@@PAU_EUDCLOGFONT@@H@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z @ 0x209520 (-bSetNewFDX@RFONTOBJ@@QAEHAAVXDCOBJ@@AAU_FD_XFORM@@K@Z.c)
 *     ?vRestartbRealizeFont@@YGXPAVRFONT@@@Z @ 0x209DBD (-vRestartbRealizeFont@@YGXPAVRFONT@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z @ 0xCDEB6 (-vCleanupFontFile@@YGXPAVPFFCLEANUP@@@Z.c)
 *     ?vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z @ 0xCE01C (-vPFFC_Delete@PFFOBJ@@QAEXPAVPFFCLEANUP@@@Z.c)
 */

void __thiscall PFFOBJ::vDeleteRFONTRef(PFFOBJ *this)
{
  int v2; // esi
  _DWORD *v3; // eax
  struct PFFCLEANUP *v4; // [esp+0h] [ebp-20h]
  _BYTE v5[12]; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+1Ch] [ebp-4h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = 0;
  v6 = _ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  --*(_DWORD *)(*(_DWORD *)this + 48);
  v3 = *(_DWORD **)this;
  if ( !*(_DWORD *)(*(_DWORD *)this + 36) && !v3[10] && !v3[23] && !v3[12] && !v3[11] )
  {
    PFFOBJ::vPFFC_Delete(this, (struct PFFCLEANUP *)v5);
    v2 = 1;
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
  if ( v2 )
    vCleanupFontFile(v4);
}
