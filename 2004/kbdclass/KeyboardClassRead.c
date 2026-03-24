/*
 * XREFs of KeyboardClassRead @ 0x1C00012F0
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardClassHandleRead @ 0x1C00026D0 (KeyboardClassHandleRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C00060CC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall KeyboardClassRead(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  struct _IO_REMOVE_LOCK *v5; // rsi
  ULONG Length; // eax
  NTSTATUS v7; // edi
  __int64 v9; // rdx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, a2, 3LL);
  }
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v5 = *(struct _IO_REMOVE_LOCK **)(a1 + 64);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 12 * (Length / 0xCuLL) )
    {
      if ( v5[11].Common.RemoveEvent.Header.Reserved1 )
      {
        v7 = -1073741667;
      }
      else if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
      {
        v7 = IoAcquireRemoveLockEx(v5 + 1, v2, File, 1u, 0x20u);
        if ( v7 >= 0 )
          v7 = 259;
      }
      else
      {
        v7 = -1073741727;
      }
    }
    else
    {
      v7 = -1073741789;
    }
  }
  else
  {
    v7 = 0;
  }
  v2->IoStatus.Status = v7;
  v2->IoStatus.Information = 0LL;
  if ( v7 == 259 )
    return KeyboardClassHandleRead(v5, v2);
  IofCompleteRequest(v2, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v9) = 5;
      WPP_RECORDER_SF_(WPP_GLOBAL_Control->DeviceExtension, v9, 3LL);
    }
  }
  return (unsigned int)v7;
}
