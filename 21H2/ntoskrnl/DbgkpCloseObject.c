/*
 * XREFs of DbgkpCloseObject @ 0x140884830
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     PsTerminateProcess @ 0x1406BC4B8 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 *     DbgkpMarkProcessPeb @ 0x140884B2C (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140885B10 (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  _QWORD *NextProcess; // rdi
  char v8; // bl
  _DWORD *v9; // rcx

  if ( a4 <= 1 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 24));
    *(_DWORD *)(a2 + 96) |= 1u;
    v5 = *(_QWORD **)(a2 + 80);
    *(_QWORD *)(a2 + 80) = a2 + 80;
    *(_QWORD *)(a2 + 88) = a2 + 80;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 24));
    KeSetEvent((PRKEVENT)a2, 0, 0);
    v6 = *(_DWORD *)(a2 + 96) & 2;
    NextProcess = (_QWORD *)PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      v8 = v6 != 0 ? 2 : 0;
      do
      {
        if ( NextProcess[175] == a2 )
        {
          v8 &= ~1u;
          ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
          if ( NextProcess[175] == a2 )
          {
            NextProcess[175] = 0LL;
            v8 |= 1u;
          }
          KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
          if ( (v8 & 1) != 0 )
          {
            DbgkpMarkProcessPeb((ULONG_PTR)NextProcess);
            if ( (v8 & 2) != 0 )
              PsTerminateProcess((ULONG_PTR)NextProcess);
            HalPutDmaAdapter((PADAPTER_OBJECT)a2);
          }
        }
        NextProcess = (_QWORD *)PsGetNextProcess(NextProcess);
      }
      while ( NextProcess );
    }
    while ( v5 != (_QWORD *)(a2 + 80) )
    {
      v9 = v5;
      v5 = (_QWORD *)*v5;
      v9[18] = -1073740972;
      DbgkpWakeTarget(v9);
    }
  }
}
