/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x1C02D1AF0
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x1C02D1604 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  bool v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rbx

  v4 = 0;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C00AFBA0);
    qword_1C00AFBD8 = (__int64)KeGetCurrentThread();
    if ( v4 && !--dword_1C00AFBF0 )
      KeSetEvent(&Event, 0, 0);
    v5 = qword_1C00AFBE0;
    if ( (__int64 *)qword_1C00AFBE0 == &qword_1C00AFBE0 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_1C00AFBE0 + 8) != &qword_1C00AFBE0
        || (v6 = *(_QWORD *)qword_1C00AFBE0, *(_QWORD *)(*(_QWORD *)qword_1C00AFBE0 + 8LL) != qword_1C00AFBE0) )
      {
        __fastfail(3u);
      }
      qword_1C00AFBE0 = *(_QWORD *)qword_1C00AFBE0;
      *(_QWORD *)(v6 + 8) = &qword_1C00AFBE0;
    }
    qword_1C00AFBD8 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C00AFBA0);
    if ( !v5 )
      break;
    v4 = *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((char *)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
