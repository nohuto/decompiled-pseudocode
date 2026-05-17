/*
 * XREFs of RtlApplyRXact @ 0x1800E6550
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlAbortRXact @ 0x180080060 (RtlAbortRXact.c)
 *     RXactpCommit @ 0x1800800A8 (RXactpCommit.c)
 *     ZwSetValueKey @ 0x18009DCA0 (ZwSetValueKey.c)
 *     ZwDeleteValueKey @ 0x18009EB60 (ZwDeleteValueKey.c)
 *     ZwFlushKey @ 0x18009EDC0 (ZwFlushKey.c)
 */

__int64 __fastcall RtlApplyRXact(__int64 *a1)
{
  __int64 result; // rax
  int v3; // edi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Log");
  result = ZwSetValueKey();
  if ( (int)result >= 0 )
  {
    v3 = ZwFlushKey();
    if ( v3 < 0 || (v3 = RXactpCommit(a1), v3 < 0) )
    {
      ZwDeleteValueKey();
      return (unsigned int)v3;
    }
    else
    {
      ZwDeleteValueKey();
      RtlAbortRXact((__int64)a1);
      return 0LL;
    }
  }
  return result;
}
