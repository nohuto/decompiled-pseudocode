/*
 * XREFs of HalpDispatchWmi @ 0x1407C26A0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A45BC (HalpPassIrpFromFdoToPdo.c)
 */

__int64 __fastcall HalpDispatchWmi(__int64 a1, IRP *a2)
{
  unsigned int Status; // ebx

  if ( **(_DWORD **)(a1 + 64) == 193 )
  {
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  else
  {
    Status = a2->IoStatus.Status;
    IofCompleteRequest(a2, 0);
  }
  return Status;
}
