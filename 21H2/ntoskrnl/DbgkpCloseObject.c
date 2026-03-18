/*
 * XREFs of DbgkpCloseObject @ 0x1409276D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     PsGetNextProcess @ 0x1407B6B90 (PsGetNextProcess.c)
 *     PsTerminateProcess @ 0x1407D80A4 (PsTerminateProcess.c)
 *     DbgkpMarkProcessPeb @ 0x1409279CC (DbgkpMarkProcessPeb.c)
 *     DbgkpWakeTarget @ 0x1409289DC (DbgkpWakeTarget.c)
 */

void __fastcall DbgkpCloseObject(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  _QWORD *v5; // rsi
  int v6; // ebx
  __int64 *NextProcess; // rdi
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
    NextProcess = PsGetNextProcess(0LL);
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
              PsTerminateProcess((__int64)NextProcess, 0xC0000354);
            ObfDereferenceObject((PVOID)a2);
          }
        }
        NextProcess = PsGetNextProcess(NextProcess);
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
