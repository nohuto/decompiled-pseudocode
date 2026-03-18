/*
 * XREFs of MiPartitionWorkingSetManager @ 0x140533C40
 * Callers:
 *     <none>
 * Callees:
 *     MiWorkingSetManager @ 0x1402662A0 (MiWorkingSetManager.c)
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 *     KeWaitForMultipleObjects @ 0x1402DCE40 (KeWaitForMultipleObjects.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall MiPartitionWorkingSetManager(__int64 a1)
{
  NTSTATUS result; // eax
  int v3; // eax
  int v4; // edx
  PVOID Object[3]; // [rsp+40h] [rbp-28h] BYREF

  KeSetPriorityThread(KeGetCurrentThread(), 17);
  Object[0] = (PVOID)(a1 + 104);
  Object[1] = &stru_140C4ECD0;
  Object[2] = (PVOID)(*(_QWORD *)(a1 + 6848) + 96LL);
  while ( 1 )
  {
    result = KeWaitForMultipleObjects(3u, Object, WaitAny, Executive, 0, 0, 0LL, 0LL);
    if ( !result )
      return result;
    v3 = result - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
      {
        v4 = 1;
        goto LABEL_7;
      }
    }
    else
    {
      v4 = 0;
LABEL_7:
      MiWorkingSetManager(a1, v4);
    }
  }
}
