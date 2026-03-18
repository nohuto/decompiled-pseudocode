/*
 * XREFs of _DwmSyncDesktopSwitch@12 @ 0xB257C
 * Callers:
 *     _xxxSwitchDesktop@16 @ 0xB0C6A (_xxxSwitchDesktop@16.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

unsigned int __fastcall DwmSyncDesktopSwitch(void *a1, int a2, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // edi
  int v6; // [esp+4h] [ebp-3Ch]
  struct _PORT_MESSAGE *v7; // [esp+8h] [ebp-38h]
  int v9; // [esp+14h] [ebp-2Ch] BYREF
  _WORD v10[3]; // [esp+18h] [ebp-28h] BYREF
  int v11; // [esp+1Eh] [ebp-22h]
  int v12; // [esp+22h] [ebp-1Eh]
  int v13; // [esp+26h] [ebp-1Ah]
  int v14; // [esp+2Ah] [ebp-16h]
  __int16 v15; // [esp+2Eh] [ebp-12h]
  int v16; // [esp+30h] [ebp-10h]
  int v17; // [esp+34h] [ebp-Ch]
  int v18; // [esp+38h] [ebp-8h]

  do
  {
    v9 = HIDWORD(g_cDWMWindowUniqueness);
    v3 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v9, v3) );
  v4 = -1073741823;
  if ( a1 )
  {
    v4 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v16 = 1073741839;
      v15 = 0;
      v10[0] = 12;
      v10[2] = 0x8000;
      v18 = a2;
      v17 = a3;
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v10[1] = 36;
      v9 = 36;
      LpcSendWaitReceivePort(a1, &loc_20000, v10, v10, &v9, 0);
      v4 = SyncLpcCheckNtStatus(v6, v7);
    }
    ObfDereferenceObject(a1);
  }
  return v4;
}
