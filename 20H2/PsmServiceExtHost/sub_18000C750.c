/*
 * XREFs of sub_18000C750 @ 0x18000C750
 * Callers:
 *     sub_18000C6B0 @ 0x18000C6B0 (sub_18000C6B0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_18000C750(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax

  result = TpAllocWork(a1, &sub_180070AA0, a2, *(_QWORD *)(a2 + 48) + 2568LL);
  if ( result >= 0 )
  {
    result = NtCreateEvent((PHANDLE)(a1 + 8), 0x1F0003u, 0LL, NotificationEvent, 0);
    if ( result >= 0 )
    {
      result = NtCreateEvent((PHANDLE)(a1 + 16), 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
