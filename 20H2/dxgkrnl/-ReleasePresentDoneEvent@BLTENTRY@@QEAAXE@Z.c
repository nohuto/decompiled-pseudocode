/*
 * XREFs of ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C02FDE90
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C01583F0 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 *     ?Cleanup@BLTENTRY@@QEAAXE@Z @ 0x1C02FB7B8 (-Cleanup@BLTENTRY@@QEAAXE@Z.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C02FC310 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTENTRY::ReleasePresentDoneEvent(BLTENTRY *this, char a2)
{
  struct _KEVENT *v3; // rcx

  v3 = (struct _KEVENT *)*((_QWORD *)this + 6);
  if ( v3 )
  {
    if ( a2 )
    {
      KeSetEvent(v3, 0, 0);
      v3 = (struct _KEVENT *)*((_QWORD *)this + 6);
    }
    ObfDereferenceObject(v3);
    *((_QWORD *)this + 6) = 0LL;
  }
}
