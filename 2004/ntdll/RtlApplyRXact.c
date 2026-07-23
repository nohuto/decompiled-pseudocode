/*
 * XREFs of RtlApplyRXact @ 0x1800E6100
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x18007FF60 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x18007FFA8 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x18009DA00 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009EB20 (ZwFlushKey.c)
 */

NTSTATUS __fastcall RtlApplyRXact(__int64 a1)
{
  void *v1; // rbx
  NTSTATUS result; // eax
  int v4; // edi
  void *v5; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  v1 = *(void **)(a1 + 8);
  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey(v1, &DestinationString, 0, 3u, *(PVOID *)(a1 + 24), *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8LL));
  if ( result >= 0 )
  {
    v4 = ZwFlushKey(v1);
    if ( v4 < 0 )
    {
      v5 = v1;
LABEL_4:
      ZwDeleteValueKey(v5, &DestinationString);
      return v4;
    }
    v4 = RXactpCommit((__int64 *)a1);
    v5 = v1;
    if ( v4 < 0 )
      goto LABEL_4;
    ZwDeleteValueKey(v1, &DestinationString);
    RtlAbortRXact(a1);
    return 0;
  }
  return result;
}
