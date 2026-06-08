/*
 * XREFs of ProcLibCapChange @ 0x1C0027914
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00038A0 (EvtDeviceD0Entry.c)
 *     PccCapWorker @ 0x1C000E150 (PccCapWorker.c)
 *     CpcGuaranteedNotifyWorker @ 0x1C0020548 (CpcGuaranteedNotifyWorker.c)
 *     AcpiPStateNotifyWorker @ 0x1C0025FD0 (AcpiPStateNotifyWorker.c)
 *     AcpiTStateNotifyWorker @ 0x1C00270B0 (AcpiTStateNotifyWorker.c)
 *     ProcLibDeviceStart @ 0x1C0027B70 (ProcLibDeviceStart.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x1C0034050 (PepUpdatePerformanceConstraintWorker.c)
 * Callees:
 *     QueueCapTrace @ 0x1C0028CF8 (QueueCapTrace.c)
 */

__int64 __fastcall ProcLibCapChange(__int64 a1, int a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v9; // rcx
  bool v10; // zf

  result = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(a1 + 728);
  if ( v9 )
  {
    if ( !a2 && !a3 && a4 == 100 )
    {
      result = MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 736) += MEMORY[0xFFFFF78000000014] - v9;
      *(_QWORD *)(a1 + 728) = 0LL;
    }
  }
  else if ( a2 || a3 || a4 < 0x64 )
  {
    v10 = *(_BYTE *)(a1 + 908) == 0;
    *(_QWORD *)(a1 + 728) = MEMORY[0xFFFFF78000000014];
    if ( v10 )
      result = QueueCapTrace(a1 + 760, 300LL);
    if ( !*(_BYTE *)(a1 + 1060) )
      result = QueueCapTrace(a1 + 912, 86400LL);
  }
  if ( a2 != *(_DWORD *)(a1 + 448) )
  {
    ++*(_DWORD *)(a1 + 744);
    *(_DWORD *)(a1 + 448) = a2;
  }
  if ( a3 != *(_DWORD *)(a1 + 496) )
  {
    ++*(_DWORD *)(a1 + 748);
    *(_DWORD *)(a1 + 496) = a3;
  }
  if ( a4 != *(_DWORD *)(a1 + 724) )
  {
    ++*(_DWORD *)(a1 + 752);
    *(_DWORD *)(a1 + 724) = a4;
  }
  return result;
}
