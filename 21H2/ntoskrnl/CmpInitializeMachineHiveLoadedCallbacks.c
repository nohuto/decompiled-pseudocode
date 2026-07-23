/*
 * XREFs of CmpInitializeMachineHiveLoadedCallbacks @ 0x1407CB728
 * Callers:
 *     CmInitSystem1 @ 0x140A5AF78 (CmInitSystem1.c)
 * Callees:
 *     KeInitializeEvent @ 0x14035E640 (KeInitializeEvent.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

_QWORD *CmpInitializeMachineHiveLoadedCallbacks()
{
  _QWORD *v0; // rbx
  __int64 v1; // rdi
  _QWORD *result; // rax

  KeInitializeEvent(&CmpMachineHiveCallbackEvent, NotificationEvent, 0);
  v0 = &unk_140C00F98;
  v1 = 7LL;
  do
  {
    *(v0 - 2) = 0LL;
    *(v0 - 1) = 0LL;
    v0[1] = v0;
    *v0 = v0;
    KeInitializeEvent((PRKEVENT)(v0 - 5), NotificationEvent, 0);
    result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x32394D43u);
    v0[2] = result;
    *result = 0LL;
    result[2] = CmpMachineHiveLoadedWorkItem;
    result[3] = v0 - 19;
    *((_DWORD *)v0 + 6) = 0;
    v0 += 25;
    --v1;
  }
  while ( v1 );
  return result;
}
