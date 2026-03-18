/*
 * XREFs of sub_1C0043960 @ 0x1C0043960
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0043960(PDEVICE_OBJECT DeviceObject, PIRP Irp, __int64 Context)
{
  _DWORD *v4; // rdi
  PIO_SECURITY_CONTEXT SecurityContext; // rcx
  __int128 v6; // xmm1
  NTSTATUS Status; // [rsp+28h] [rbp-10h]

  v4 = sub_1C000F050(Context);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
  {
    Status = Irp->IoStatus.Status;
    sub_1C002E188((__int64)::DeviceObject->DeviceExtension, 0, 1u, 0x12u, (__int64)&unk_1C0062F40, Status);
  }
  if ( Irp->PendingReturned )
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  SecurityContext = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  HIDWORD(SecurityContext->SecurityQos) |= 0x200u;
  *((_OWORD *)v4 + 312) = *(_OWORD *)&SecurityContext->SecurityQos;
  *((_OWORD *)v4 + 313) = *(_OWORD *)&SecurityContext->DesiredAccess;
  *((_OWORD *)v4 + 314) = *(_OWORD *)&SecurityContext[1].AccessState;
  v6 = *(_OWORD *)&SecurityContext[2].SecurityQos;
  v4[640] |= 0x200u;
  *((_OWORD *)v4 + 315) = v6;
  KeSetEvent((PRKEVENT)(v4 + 650), 0, 0);
  return (unsigned int)Irp->IoStatus.Status;
}
