/*
 * XREFs of _DwmAsyncDirtySprite@24 @ 0x2531C
 * Callers:
 *     ?bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z @ 0x25270 (-bSpDwmNotifyDirty@@YGHPAUHSPRITE__@@PAVSFMLOGICALSURFACE@@K_K@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncDirtySprite(void *a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v6; // esi
  PVOID v7; // edi
  _WORD v9[3]; // [esp+Ch] [ebp-3Ch] BYREF
  int v10; // [esp+12h] [ebp-36h]
  int v11; // [esp+16h] [ebp-32h]
  int v12; // [esp+1Ah] [ebp-2Eh]
  int v13; // [esp+1Eh] [ebp-2Ah]
  __int16 v14; // [esp+22h] [ebp-26h]
  int v15; // [esp+24h] [ebp-24h]
  int v16; // [esp+28h] [ebp-20h]
  int v17; // [esp+2Ch] [ebp-1Ch]
  int v18; // [esp+30h] [ebp-18h]
  int v19; // [esp+34h] [ebp-14h]
  int v20; // [esp+38h] [ebp-10h]
  PVOID Object; // [esp+3Ch] [ebp-Ch]
  unsigned int v22; // [esp+40h] [ebp-8h]
  int v23; // [esp+44h] [ebp-4h]

  v20 = a2;
  Object = a1;
  v23 = -1073741823;
  do
  {
    v22 = HIDWORD(g_cDWMWindowUniqueness);
    v6 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v22, v6) );
  v7 = Object;
  if ( Object )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v9[0] = 20;
    v9[1] = 44;
    v9[2] = 0x8000;
    v16 = a4;
    v18 = a5;
    v15 = 1073741828;
    v17 = v20;
    v19 = a6;
    EtwUpdateEvent(v20, 1073741828);
    v23 = LpcRequestPort(Object, v9);
    ObfDereferenceObject(v7);
  }
  return v23;
}
