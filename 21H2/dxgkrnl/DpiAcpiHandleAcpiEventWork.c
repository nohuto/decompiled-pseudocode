/*
 * XREFs of DpiAcpiHandleAcpiEventWork @ 0x1C0394C20
 * Callers:
 *     <none>
 * Callees:
 *     DpiAcpiHandleAcpiEvent @ 0x1C0394794 (DpiAcpiHandleAcpiEvent.c)
 */

void __fastcall DpiAcpiHandleAcpiEventWork(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // rax
  void *v7; // rbx

  v4 = 0;
  while ( 1 )
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(&dword_1C0130620);
    qword_1C0130658 = (__int64)KeGetCurrentThread();
    if ( v4 )
    {
      if ( !--dword_1C0130670 )
        KeSetEvent(&Event, 0, 0);
    }
    v5 = qword_1C0130660;
    if ( (__int64 *)qword_1C0130660 == &qword_1C0130660 )
    {
      v5 = 0LL;
      ::IoWorkItem = 0LL;
    }
    else
    {
      if ( *(__int64 **)(qword_1C0130660 + 8) != &qword_1C0130660
        || (v6 = *(_QWORD *)qword_1C0130660, *(_QWORD *)(*(_QWORD *)qword_1C0130660 + 8LL) != qword_1C0130660) )
      {
        __fastfail(3u);
      }
      qword_1C0130660 = *(_QWORD *)qword_1C0130660;
      *(_QWORD *)(v6 + 8) = &qword_1C0130660;
      if ( *(_DWORD *)(v5 + 24) == 2 && *(_DWORD *)(v5 + 28) == 4 )
      {
        v4 = 1;
        byte_1C0130690 = *(_QWORD *)(v5 + 32) != 0LL;
      }
      else
      {
        v4 = 0;
      }
    }
    qword_1C0130658 = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(&dword_1C0130620);
    if ( !v5 )
      break;
    v7 = *(void **)(v5 + 16);
    DpiAcpiHandleAcpiEvent((char *)v5);
    ObfDereferenceObject(v7);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
