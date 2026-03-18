/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C0086BC4
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C0084BB8 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C01497A8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( Object )
  {
    if ( dword_1C024B240 )
      ObfDereferenceObject(Object);
    Object = 0LL;
  }
  qword_1C024B244 = 0LL;
  *(_OWORD *)&Dest = 0LL;
  xmmword_1C024B268 = 0LL;
}
