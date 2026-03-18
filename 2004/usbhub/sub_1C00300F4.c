/*
 * XREFs of sub_1C00300F4 @ 0x1C00300F4
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C002DE04 @ 0x1C002DE04 (sub_1C002DE04.c)
 *     sub_1C0037BB4 @ 0x1C0037BB4 (sub_1C0037BB4.c)
 */

__int64 __fastcall sub_1C00300F4(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int v8; // ebx
  struct _IRP *MasterIrp; // rbx
  PDEVICE_OBJECT *v10; // rax
  __int64 v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h]

  v6 = sub_1C0011220(a2);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v13 = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options >= 0x20 )
  {
    MasterIrp = a3->AssociatedIrp.MasterIrp;
    v12 = *((_QWORD *)v6 + 145);
    v13 = sub_1C0037BB4(a1, a1);
    if ( v13 )
    {
      MasterIrp->AssociatedIrp.MasterIrp = (struct _IRP *)&v12;
      v10 = (PDEVICE_OBJECT *)sub_1C000F050(a1);
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v8 = IofCallDriver(v10[152], a3);
      sub_1C002DE04(a1, v13, a1, 0x48447472u);
      goto LABEL_7;
    }
    v8 = -1073741823;
  }
  else
  {
    v8 = -1073741789;
  }
  a3->IoStatus.Status = v8;
  IofCompleteRequest(a3, 0);
LABEL_7:
  sub_1C0014E84(a2, (ULONG_PTR)a3);
  return v8;
}
