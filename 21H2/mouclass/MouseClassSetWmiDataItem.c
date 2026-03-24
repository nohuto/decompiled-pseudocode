/*
 * XREFs of MouseClassSetWmiDataItem @ 0x1C000E420
 * Callers:
 *     <none>
 * Callees:
 *     MouseToggleWaitWake @ 0x1C000543C (MouseToggleWaitWake.c)
 */

NTSTATUS __fastcall MouseClassSetWmiDataItem(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  NTSTATUS v9; // eax

  if ( a3 )
  {
    if ( a3 == 1 )
    {
      if ( a6 )
      {
        if ( a5 != 1 || a4 )
          v9 = -1073741808;
        else
          v9 = MouseToggleWaitWake((__int64)DeviceObject->DeviceExtension, *a7);
      }
      else
      {
        v9 = -1073741789;
      }
    }
    else
    {
      v9 = -1073741163;
    }
  }
  else
  {
    v9 = -1073741114;
  }
  return WmiCompleteRequest(DeviceObject, Irp, v9, 0, 0);
}
