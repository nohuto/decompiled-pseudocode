/*
 * XREFs of ?Cancel@AlpcMessage@@QEAAXPEAX@Z @ 0x1800BF81C
 * Callers:
 *     ?Disconnect@AlpcPort@@UEAAXXZ @ 0x1800BFF70 (-Disconnect@AlpcPort@@UEAAXXZ.c)
 *     ?GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z @ 0x1800C0770 (-GetNextPortEvent@AlpcPort@@UEAAJAEAUSipcPortEvent@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall AlpcMessage::Cancel(AlpcMessage *this, void *a2)
{
  *((_WORD *)this + 2) &= ~0x2000u;
  NtAlpcCancelMessage(a2, 0LL, (char *)this + 376);
}
