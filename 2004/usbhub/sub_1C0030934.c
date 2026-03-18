/*
 * XREFs of sub_1C0030934 @ 0x1C0030934
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C002B680 @ 0x1C002B680 (sub_1C002B680.c)
 *     sub_1C002E62C @ 0x1C002E62C (sub_1C002E62C.c)
 */

__int64 __fastcall sub_1C0030934(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  NTSTATUS v7; // eax

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E62C((__int64)DeviceObject->DeviceExtension, a2, 1u, 0xAu, (__int64)&unk_1C0062C38, a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  sub_1C0011220(a2);
  v7 = sub_1C002B680(a1, a2, CurrentStackLocation->Parameters.Create.SecurityContext, 0x10u);
  a3->IoStatus.Status = v7;
  LODWORD(CurrentStackLocation) = v7;
  IofCompleteRequest(a3, 0);
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return (unsigned int)CurrentStackLocation;
}
