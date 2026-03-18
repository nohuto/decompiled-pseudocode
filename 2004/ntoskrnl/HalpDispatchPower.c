/*
 * XREFs of HalpDispatchPower @ 0x140994E50
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140284EB0 (IofCompleteRequest.c)
 *     HalpDispatchSystemStateTransition @ 0x140389200 (HalpDispatchSystemStateTransition.c)
 *     HalpPassIrpFromFdoToPdo @ 0x1403A45BC (HalpPassIrpFromFdoToPdo.c)
 */

__int64 __fastcall HalpDispatchPower(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Status; // ebx
  unsigned __int8 v6; // dl
  int v7; // eax
  unsigned int v8; // esi

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  v6 = CurrentStackLocation->MinorFunction - 2;
  if ( **(_DWORD **)(a1 + 64) != 193 )
  {
    if ( v6 <= 1u )
    {
      Status = 0;
      a2->IoStatus.Status = 0;
    }
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( v6 > 1u )
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  if ( CurrentStackLocation->Parameters.Create.Options
    || (v7 = HalpDispatchSystemStateTransition((__int64)a2), v8 = v7, v7 >= 0) )
  {
    a2->IoStatus.Status = 0;
    return (unsigned int)HalpPassIrpFromFdoToPdo(a1, a2);
  }
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return v8;
}
