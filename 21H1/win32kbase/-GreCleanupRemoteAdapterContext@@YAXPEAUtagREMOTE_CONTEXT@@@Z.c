/*
 * XREFs of ?GreCleanupRemoteAdapterContext@@YAXPEAUtagREMOTE_CONTEXT@@@Z @ 0x1C000E594
 * Callers:
 *     MultiUserNtGreCleanup @ 0x1C000C588 (MultiUserNtGreCleanup.c)
 *     DrvUpdateRemoteGraphicsDeviceList @ 0x1C0151FC8 (DrvUpdateRemoteGraphicsDeviceList.c)
 * Callees:
 *     <none>
 */

void __fastcall GreCleanupRemoteAdapterContext(struct tagREMOTE_CONTEXT *a1)
{
  if ( qword_1C0253250 )
  {
    if ( dword_1C0253240 )
      ObfDereferenceObject(qword_1C0253250);
    qword_1C0253250 = 0LL;
  }
  qword_1C0253244 = 0LL;
  *(_OWORD *)&Dest = 0LL;
  xmmword_1C0253268 = 0LL;
}
