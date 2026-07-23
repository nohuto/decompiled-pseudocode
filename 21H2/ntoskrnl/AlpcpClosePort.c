/*
 * XREFs of AlpcpClosePort @ 0x1406D2400
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     AlpcpSendCloseMessage @ 0x1406D1728 (AlpcpSendCloseMessage.c)
 *     AlpcpDoPortCleanup @ 0x1406D1848 (AlpcpDoPortCleanup.c)
 */

_QWORD *__fastcall AlpcpClosePort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // rax

  CurrentThread = KeGetCurrentThread();
  v6 = a1;
  --CurrentThread->KernelApcDisable;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 256) & 0x100000) != 0 )
      goto LABEL_6;
    v7 = 0LL;
    if ( (*(_QWORD *)(a2 + 24) & 1) == 0 )
      v7 = *(_QWORD *)(a2 + 24);
    if ( v7 == a1 )
    {
LABEL_6:
      AlpcpDoPortCleanup(a2);
      if ( (*(_DWORD *)(a2 + 256) & 0x1000) == 0 )
        AlpcpSendCloseMessage(a2);
    }
  }
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, a3, a4);
}
