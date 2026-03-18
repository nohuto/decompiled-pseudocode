/*
 * XREFs of DwmAsyncDirtySprite @ 0x1C008CA08
 * Callers:
 *     ?bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z @ 0x1C008C920 (-bSpDwmNotifyDirty@@YAHPEAUHSPRITE__@@PEAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026DAB4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 * Callees:
 *     memset @ 0x1C015F880 (memset.c)
 */

__int64 __fastcall DwmAsyncDirtySprite(PVOID Object, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int v8; // ebx
  _QWORD v10[8]; // [rsp+20h] [rbp-48h] BYREF

  v8 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset(v10, 0, sizeof(v10));
    LODWORD(v10[0]) = 4194328;
    WORD2(v10[0]) = 0x8000;
    v10[7] = a5;
    LODWORD(v10[5]) = 1073741828;
    v10[6] = a2;
    HIDWORD(v10[5]) = a4;
    EtwUpdateEvent(a2, 1073741828LL);
    v8 = LpcRequestPort(Object, v10);
    ObfDereferenceObject(Object);
  }
  return v8;
}
