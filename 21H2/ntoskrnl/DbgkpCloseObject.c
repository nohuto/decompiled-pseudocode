/*
 * XREFs of DbgkpCloseObject @ 0x140884990
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     PsTerminateProcess @ 0x14061B628 (PsTerminateProcess.c)
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     DbgkpMarkProcessPeb @ 0x140884C8C (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x140885C70 (DbgkpWakeTarget.c)
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
