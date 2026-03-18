/*
 * XREFs of sub_1C0055D70 @ 0x1C0055D70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 */

__int64 __fastcall sub_1C0055D70(__int64 a1, IRP *a2)
{
  _QWORD *PoolWithTag; // rax
  unsigned int v4; // ebx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x42554855u);
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 15LL;
    v4 = 0;
    *(_OWORD *)PoolWithTag = xmmword_1C0062928;
    a2->IoStatus.Information = (ULONG_PTR)PoolWithTag;
  }
  else
  {
    v4 = -1073741670;
  }
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x18u, (__int64)&unk_1C0065258, v4);
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
