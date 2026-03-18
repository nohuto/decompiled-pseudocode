/*
 * XREFs of sub_1C001AA90 @ 0x1C001AA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C00101B0 @ 0x1C00101B0 (sub_1C00101B0.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 *     sub_1C003C33C @ 0x1C003C33C (sub_1C003C33C.c)
 */

NTSTATUS __fastcall sub_1C001AA90(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r10
  PVOID DeviceExtension; // rdi
  volatile signed __int32 *v6; // rax
  __int64 v7; // rcx
  struct _IO_STACK_LOCATION *v8; // r8
  __int64 Options; // r11
  __int64 v10; // rdx
  ULONG v11; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( !DeviceObject )
    sub_1C002DC78(0LL, 0LL);
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension )
    goto LABEL_20;
  if ( *(_DWORD *)DeviceExtension != 541218120 )
    sub_1C002DC78(DeviceObject, DeviceObject->DeviceExtension);
  v6 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    v7 = *((_QWORD *)DeviceExtension + 111)
       + 32LL
       * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension
                                                                                                  + 221));
    *(_DWORD *)v7 = 1952805712;
    *(_QWORD *)(v7 + 8) = 0LL;
    *(_QWORD *)(v7 + 16) = 0LL;
    *(_QWORD *)(v7 + 24) = Irp;
    v6 = (volatile signed __int32 *)DeviceObject->DeviceExtension;
  }
  if ( !v6 )
LABEL_20:
    sub_1C002DC78(DeviceObject, 0LL);
  if ( *v6 != 541218120 )
    sub_1C002DC78(DeviceObject, v6);
  v8 = Irp->Tail.Overlay.CurrentStackLocation;
  Options = v8->Parameters.Create.Options;
  if ( (unsigned int)Options <= 1 )
  {
    if ( (dword_1C006B268 & 0x10) != 0 )
    {
      v10 = *((_QWORD *)v6 + 111) + 32LL * ((unsigned int)_InterlockedDecrement(v6 + 220) & v6[221]);
      *(_DWORD *)v10 = 860770128;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = v8;
      *(_QWORD *)(v10 + 24) = Irp;
    }
    *(_QWORD *)&v6[2 * Options + 210] = Irp;
    *(_QWORD *)&v6[2 * Options + 214] = v8;
    v6[Options + 218] = 1743;
  }
  v11 = CurrentStackLocation->Parameters.Create.Options;
  if ( !v11 )
    return sub_1C000E9B0(DeviceObject, Irp);
  if ( v11 == 1 )
    return sub_1C00101B0(DeviceObject, Irp);
  sub_1C003C33C(DeviceObject, Irp, 1753LL);
  ++Irp->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  return PoCallDriver(*((PDEVICE_OBJECT *)DeviceExtension + 151), Irp);
}
