/*
 * XREFs of _DwmSyncFlushWindowChanges@4 @ 0x1D2C0E
 * Callers:
 *     _xxxSynchronizeDWMWindowChanges@0 @ 0x148325 (_xxxSynchronizeDWMWindowChanges@0.c)
 * Callees:
 *     _DwmSyncFlushForceRenderAndWaitForBatch@8 @ 0x1D2B50 (_DwmSyncFlushForceRenderAndWaitForBatch@8.c)
 */

unsigned int __thiscall DwmSyncFlushWindowChanges(PVOID Object)
{
  int v1; // ebx
  unsigned int v2; // esi
  int v3; // edi

  v1 = HIDWORD(g_cDWMWindowUniqueness);
  v2 = -1073741823;
  v3 = g_cDWMWindowUniqueness;
  if ( Object )
  {
    v2 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( _gbInVideoPnpCallout || qword_26C788 == g_cDWMWindowUniqueness )
    {
      ObfDereferenceObject(Object);
    }
    else
    {
      v2 = DwmSyncFlushForceRenderAndWaitForBatch(Object, 0);
      LODWORD(qword_26C788) = v3;
      HIDWORD(qword_26C788) = v1;
    }
  }
  return v2;
}
