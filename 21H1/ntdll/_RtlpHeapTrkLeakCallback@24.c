/*
 * XREFs of _RtlpHeapTrkLeakCallback@24 @ 0x4B364B50
 * Callers:
 *     <none>
 * Callees:
 *     _DbgPrint @ 0x4B2AB8D0 (_DbgPrint.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     RtlpHeapTrkDumpOutstandingAllocs @ 0x4B364580 (RtlpHeapTrkDumpOutstandingAllocs.c)
 *     RtlpHeapTrkDumpStacks @ 0x4B3646AA (RtlpHeapTrkDumpStacks.c)
 *     RtlpHeapTrkFindStack @ 0x4B3647C2 (RtlpHeapTrkFindStack.c)
 *     RtlpHeapTrkReportResult @ 0x4B364CBD (RtlpHeapTrkReportResult.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x4B364D91 (RtlpHeapTrkSyncWithDiagnoser.c)
 */

int __stdcall RtlpHeapTrkLeakCallback(int a1, int a2, unsigned int Src, const void *a4, int a5, int a6)
{
  int Stack; // eax
  int v7; // esi
  int v8; // eax
  _DWORD v10[2]; // [esp+8h] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-4h] BYREF

  v11 = 0x10000;
  v10[0] = 0;
  v10[1] = 0;
  if ( !byte_4B3A6DA8 )
  {
    if ( !byte_4B3A3954
      || (byte_4B3A3954 = 0,
          _InterlockedExchange(&dword_4B3A6DAC, 1),
          ZwMapViewOfSection((int)Handle, -1, (int)&TrkContext, 0, 0, (int)v10, (int)&v11, 1, 0, 4) >= 0)
      && TrkContext
      && (*(_DWORD *)(TrkContext + 24) = NtCurrentTeb()->ClientId.UniqueProcess, RtlpHeapTrkDumpStacks()) )
    {
      if ( TrkContext )
      {
        if ( !a2 )
        {
          RtlpHeapTrkDumpOutstandingAllocs();
          if ( *(_DWORD *)(TrkContext + 36) )
          {
            if ( !(unsigned __int8)RtlpHeapTrkSyncWithDiagnoser() )
              return 0;
            *(_DWORD *)(TrkContext + 36) = 0;
            dword_4B3A3958 = 0;
          }
          RtlpHeapTrkSyncWithDiagnoser();
          return 0;
        }
        Stack = RtlpHeapTrkFindStack((void *)((Src >> 3) | 0xE0000000));
        v7 = Stack;
        if ( Stack )
          v8 = *(_DWORD *)(Stack + 12);
        else
          v8 = 0;
        if ( (unsigned __int8)RtlpHeapTrkReportResult(0x14u, v8, (int)a4, &Src, 4u) && v7 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ");
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            " Leaked Block 0x%p size 0x%p (stack %p depth %u)\n",
            (const void *)Src,
            a4,
            (const void *)(v7 + 16),
            *(unsigned __int16 *)(v7 + 8));
        }
      }
    }
  }
  return 0;
}
