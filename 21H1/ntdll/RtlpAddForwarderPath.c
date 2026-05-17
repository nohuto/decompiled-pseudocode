/*
 * XREFs of RtlpAddForwarderPath @ 0x4B33CF6E
 * Callers:
 *     _RtlpComputePath@16 @ 0x4B2B2EA8 (_RtlpComputePath@16.c)
 * Callees:
 *     RtlpAddSystemPath @ 0x4B33CF91 (RtlpAddSystemPath.c)
 */

int __fastcall RtlpAddForwarderPath(char a1, void *a2)
{
  void *v2; // eax

  v2 = a2;
  if ( a1 )
    v2 = (void *)RtlpAddSystemPath(L"\\Forwarders\\alt", a2);
  return RtlpAddSystemPath(L"\\Forwarders", v2);
}
