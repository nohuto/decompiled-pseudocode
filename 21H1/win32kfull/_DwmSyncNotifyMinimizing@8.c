/*
 * XREFs of _DwmSyncNotifyMinimizing@8 @ 0xB4E30
 * Callers:
 *     _xxxMinMaximizeEx@24 @ 0xB3AD2 (_xxxMinMaximizeEx@24.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 */

unsigned int __fastcall DwmSyncNotifyMinimizing(PVOID Object, int a2)
{
  unsigned int v3; // esi
  int v5; // [esp+4h] [ebp-2Ch]
  struct _PORT_MESSAGE *v6; // [esp+8h] [ebp-28h]
  _WORD v7[3]; // [esp+Ch] [ebp-24h] BYREF
  int v8; // [esp+12h] [ebp-1Eh]
  int v9; // [esp+16h] [ebp-1Ah]
  int v10; // [esp+1Ah] [ebp-16h]
  int v11; // [esp+1Eh] [ebp-12h]
  __int16 v12; // [esp+22h] [ebp-Eh]
  int v13; // [esp+24h] [ebp-Ch]
  int v14; // [esp+28h] [ebp-8h]
  int v15; // [esp+2Ch] [ebp-4h] BYREF

  v3 = -1073741823;
  if ( Object )
  {
    v3 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      v13 = 1073741825;
      v12 = 0;
      v7[0] = 8;
      v7[2] = 0x8000;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v7[1] = 32;
      v14 = a2;
      v15 = 32;
      LpcSendWaitReceivePort(Object, &loc_20000, v7, v7, &v15, 0);
      v3 = SyncLpcCheckNtStatus(v5, v6);
    }
    ObfDereferenceObject(Object);
  }
  return v3;
}
