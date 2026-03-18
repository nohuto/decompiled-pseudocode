/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C00234D4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C00214C8 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C014BC78 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( qword_1C024D240 )
  {
    if ( dword_1C024D230 )
      ObfDereferenceObject(qword_1C024D240);
    qword_1C024D240 = 0LL;
  }
  qword_1C024D234 = 0LL;
  *(_OWORD *)&Dest = 0LL;
  xmmword_1C024D258 = 0LL;
}
