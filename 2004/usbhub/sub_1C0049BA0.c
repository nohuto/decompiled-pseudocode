/*
 * XREFs of sub_1C0049BA0 @ 0x1C0049BA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0046960 @ 0x1C0046960 (sub_1C0046960.c)
 *     sub_1C00469A4 @ 0x1C00469A4 (sub_1C00469A4.c)
 *     sub_1C0059E9C @ 0x1C0059E9C (sub_1C0059E9C.c)
 */

NTSTATUS __fastcall sub_1C0049BA0(PDEVICE_OBJECT DeviceObject, PIRP Irp, int a3, int a4, unsigned int a5, char *a6)
{
  __int64 v10; // r10
  int v11; // r11d
  int v12; // ebx
  NTSTATUS v13; // r8d
  _BYTE *v14; // r9
  __int64 v15; // r10
  int v16; // eax
  unsigned int v17; // eax
  PDEVICE_OBJECT *v18; // rax
  char v19; // bl
  BOOL Data; // [rsp+50h] [rbp+18h] BYREF

  sub_1C000F050((__int64)DeviceObject);
  sub_1C000FD80((__int64)DeviceObject, 64, 1935101257, 0LL, 0LL);
  if ( !a3 )
    goto LABEL_17;
  v12 = a3 - 2;
  if ( !v12 )
  {
    if ( !a5 )
      goto LABEL_7;
    if ( !a4 && *(_DWORD *)(v10 + 3280) != 6 )
    {
      v19 = *a6;
      sub_1C0059E9C(DeviceObject, 5 - (unsigned int)(*a6 != 0));
      sub_1C0046960((__int64)DeviceObject, v19 != 0);
      goto LABEL_12;
    }
LABEL_17:
    v13 = -1073741808;
    return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
  }
  if ( v12 == 1 )
  {
    if ( *(&stru_1C006B480.AlignmentRequirement + 1) == 3 )
    {
      sub_1C000FD80((__int64)DeviceObject, v11, 2003659059, (__int64)a6, a5);
      if ( !a5 )
      {
LABEL_7:
        v13 = -1073741789;
        return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
      }
      v16 = *(_DWORD *)(v15 + 2560);
      if ( *v14 )
        v17 = v16 | 0x1000000;
      else
        v17 = v16 & 0xFEFFFFFF;
      *(_DWORD *)(v15 + 2560) = v17;
      Data = *v14 != 0;
      v18 = (PDEVICE_OBJECT *)sub_1C000F050((__int64)DeviceObject);
      sub_1C00469A4(v18[149], L"WakeSystemOnConnect", 4u, &Data, 4u);
LABEL_12:
      v13 = 0;
      return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
    }
    goto LABEL_17;
  }
  v13 = -1073741163;
  return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
}
