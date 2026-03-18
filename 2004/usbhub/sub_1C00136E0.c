/*
 * XREFs of sub_1C00136E0 @ 0x1C00136E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0016028 @ 0x1C0016028 (sub_1C0016028.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

NTSTATUS __fastcall sub_1C00136E0(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8
  PVOID DeviceExtension; // rbx
  __int64 Options; // rdx
  __int64 v7; // rcx
  ULONG v8; // ecx
  PDEVICE_OBJECT *v9; // rbx
  _DWORD *v10; // rax
  struct _IO_STACK_LOCATION *v11; // r11
  _DWORD *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r10

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v7 = *((_QWORD *)DeviceExtension + 111)
         + 32LL
         * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
      *(_DWORD *)v7 = 860770128;
      *(_QWORD *)(v7 + 8) = 0LL;
      *(_QWORD *)(v7 + 16) = CurrentStackLocation;
      *(_QWORD *)(v7 + 24) = Irp;
    }
    *((_QWORD *)DeviceExtension + Options + 105) = Irp;
    *((_QWORD *)DeviceExtension + Options + 107) = CurrentStackLocation;
    *((_DWORD *)DeviceExtension + Options + 218) = 1161;
  }
  v8 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v8 )
    return sub_1C0016028(DeviceObject, Irp);
  if ( v8 == 1 )
  {
    v9 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
    sub_1C000FD80((__int64)DeviceObject, 16, 1365536883, 0LL, (__int64)Irp);
    v10 = sub_1C000F050((__int64)DeviceObject);
    v11 = Irp->Tail.Overlay.CurrentStackLocation;
    v12 = v10;
    v13 = v11->Parameters.Create.Options;
    if ( (unsigned int)v13 <= 1 )
    {
      sub_1C000FD80((__int64)DeviceObject, 16, 1347374641, *(_QWORD *)&v12[2 * v13 + 210], (__int64)Irp);
      sub_1C000FD80((__int64)DeviceObject, 16, 1347374642, *(_QWORD *)&v12[2 * v14 + 214], v15);
      *(_QWORD *)&v12[2 * v16 + 210] = 0LL;
      *(_QWORD *)&v12[2 * v16 + 214] = 0LL;
      v12[v16 + 218] = 1386;
      PoStartNextPowerIrp(Irp);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
    }
    ++Irp->CurrentLocation;
    Irp->Tail.Overlay.CurrentStackLocation = v11 + 1;
    return PoCallDriver(v9[151], Irp);
  }
  else
  {
    sub_1C003C33C(DeviceObject, Irp, 1172LL);
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
  }
}
