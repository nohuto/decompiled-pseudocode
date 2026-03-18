/*
 * XREFs of VidSchiCleanupQueuedCommand @ 0x1C003C648
 * Callers:
 *     VidSchFlushAdapter @ 0x1C00D2340 (VidSchFlushAdapter.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0010CE0 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00112BC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiCleanupPacket_PriorityTable @ 0x1C00D5338 (VidSchiCleanupPacket_PriorityTable.c)
 */

void __fastcall VidSchiCleanupQueuedCommand(__int64 a1)
{
  char v2; // al
  _QWORD v3[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v4; // [rsp+40h] [rbp-18h]

  v4 = 0;
  v3[0] = a1 + 1712;
  AcquireSpinLock::Acquire((Acquire *)v3);
  *(_BYTE *)(a1 + 2940) |= 1u;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
  VidSchiCleanupPacket_PriorityTable(a1);
  v2 = *(_BYTE *)(a1 + 2940);
  if ( (v2 & 2) == 0 )
    *(_BYTE *)(a1 + 2940) = v2 & 0xFE;
  AcquireSpinLock::Release((AcquireSpinLock *)v3);
}
