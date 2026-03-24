/*
 * XREFs of MouseClassRead @ 0x1C0001AD0
 * Callers:
 *     <none>
 * Callees:
 *     MouseClassHandleRead @ 0x1C0002230 (MouseClassHandleRead.c)
 *     WPP_RECORDER_SF_ @ 0x1C000572C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall MouseClassRead(__int64 a1, IRP *a2)
{
  IRP *v2; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  __int64 v5; // rsi
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
  v5 = *(_QWORD *)(a1 + 64);
  Length = CurrentStackLocation->Parameters.Read.Length;
  if ( Length )
  {
    if ( Length == 24 * (Length / 0x18uLL) )
    {
      if ( *(_BYTE *)(v5 + 346) )
      {
        v7 = -1073741667;
      }
      else if ( DriverEntry == CurrentStackLocation->FileObject->FsContext2 )
      {
        v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 32), v2, File, 1u, 0x20u);
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
    return MouseClassHandleRead(v5, v2);
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
