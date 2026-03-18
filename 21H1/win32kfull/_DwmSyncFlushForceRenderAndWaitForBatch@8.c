/*
 * XREFs of _DwmSyncFlushForceRenderAndWaitForBatch@8 @ 0x1D2B50
 * Callers:
 *     _DwmSyncFlushWindowChanges@4 @ 0x1D2C0E (_DwmSyncFlushWindowChanges@4.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 */

int __stdcall DwmSyncFlushForceRenderAndWaitForBatch(PVOID Object, int a2)
{
  int v2; // esi
  int v3; // eax
  int v5; // [esp+4h] [ebp-24h] BYREF
  struct _PORT_MESSAGE *v6; // [esp+8h] [ebp-20h] BYREF
  __int16 v7; // [esp+Ch] [ebp-1Ch] BYREF
  int v8; // [esp+Eh] [ebp-1Ah]
  int v9; // [esp+12h] [ebp-16h]
  int v10; // [esp+16h] [ebp-12h]
  int v11; // [esp+1Ah] [ebp-Eh]
  __int16 v12; // [esp+1Eh] [ebp-Ah]
  int v13; // [esp+20h] [ebp-8h]
  int v14; // [esp+24h] [ebp-4h]

  v2 = -1073741823;
  if ( Object )
  {
    v2 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !_gbInVideoPnpCallout )
    {
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchBegin(-1);
      v13 = -2147483639;
      v12 = 0;
      v6 = (struct _PORT_MESSAGE *)(&loc_200004 + 4);
      v7 = 0x8000;
      v14 = a2;
      v8 = 0;
      v9 = 0;
      v10 = 0;
      v11 = 0;
      v5 = 32;
      v3 = LpcSendWaitReceivePort(Object, &loc_20000, &v6, &v6, &v5, 0);
      v2 = SyncLpcCheckNtStatus(v3, (int)&v7);
      EtwTraceDwmSyncFlushForceRenderAndWaitForBatchEnd(-1);
    }
    ObfDereferenceObject(Object);
  }
  return v2;
}
