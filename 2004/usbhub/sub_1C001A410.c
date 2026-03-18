/*
 * XREFs of sub_1C001A410 @ 0x1C001A410
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C003C3F8 @ 0x1C003C3F8 (sub_1C003C3F8.c)
 */

__int64 __fastcall sub_1C001A410(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  volatile signed __int32 *DeviceExtension; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  char QuadPart; // bl
  int MinorFunction; // r11d
  __int64 v8; // rcx
  PVOID v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // ebx
  PDEVICE_OBJECT *v14; // rax
  int v15; // eax

  if ( KeGetCurrentIrql() >= 2u )
  {
    v15 = sub_1C003C3F8(a1, a1, sub_1C003BB20, a2);
    v12 = v15;
    if ( v15 >= 0 )
    {
      return 259;
    }
    else
    {
      a2->IoStatus.Status = v15;
      IofCompleteRequest(a2, 0);
    }
  }
  else
  {
    if ( !a1 )
      sub_1C002DC78(0LL, 0LL);
    DeviceExtension = (volatile signed __int32 *)a1->DeviceExtension;
    if ( !DeviceExtension )
      sub_1C002DC78(a1, 0LL);
    if ( *DeviceExtension != 541218120 )
      sub_1C002DC78(a1, a1->DeviceExtension);
    CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    QuadPart = -1;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( (_BYTE)MinorFunction )
    {
      if ( (unsigned __int8)(MinorFunction - 2) <= 1u )
      {
        QuadPart = LOBYTE(CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart) | 0x80;
        if ( CurrentStackLocation->Parameters.Create.Options != 1 )
          QuadPart = CurrentStackLocation->Parameters.LockControl.ByteOffset.QuadPart;
      }
    }
    else
    {
      QuadPart = CurrentStackLocation->Parameters.SetLock.Lock;
    }
    v8 = ((unsigned __int8)_InterlockedExchangeAdd(DeviceExtension + 321, 1u) + 1) & 0xF;
    *((_BYTE *)DeviceExtension + v8 + 1288) = MinorFunction;
    *((_BYTE *)DeviceExtension + v8 + 1304) = QuadPart;
    *((_DWORD *)DeviceExtension + 4) = MinorFunction;
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v9 = a1->DeviceExtension;
      if ( v9 )
      {
        v10 = *((_QWORD *)v9 + 111)
            + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v9 + 220) & *((_DWORD *)v9 + 221));
        *(_DWORD *)v10 = 1349477478;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = a2;
      }
    }
    v11 = CurrentStackLocation->MinorFunction;
    if ( (unsigned __int8)v11 >= 4u )
    {
      v14 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)a1);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      return (unsigned int)PoCallDriver(v14[151], a2);
    }
    else
    {
      return (unsigned int)off_1C005E128[2 * v11](a1, a2);
    }
  }
  return v12;
}
