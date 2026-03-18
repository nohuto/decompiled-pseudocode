/*
 * XREFs of sub_1C00153F0 @ 0x1C00153F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0012400 @ 0x1C0012400 (sub_1C0012400.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 */

__int64 __fastcall sub_1C00153F0(__int64 DeviceObject, PIRP Irp, PVOID Context)
{
  _DWORD *v5; // rbx
  unsigned int v6; // edi

  sub_1C000FD80(DeviceObject, 16, 1717000041, 0LL, (__int64)Irp);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(::DeviceObject->DeviceType) )
    sub_1C002E0B4(::DeviceObject->DeviceExtension, 0, 1, 12, (__int64)&unk_1C0062DE8);
  v5 = sub_1C000F050(DeviceObject);
  if ( _InterlockedExchange(v5 + 1221, 7) == 4 )
  {
    v6 = 0;
    v5[640] = (PoGetSystemWake(Irp) != 0 ? 0x4000000 : 0) | v5[640] & 0xFBFFFFFF;
  }
  else
  {
    v6 = -1073741802;
  }
  sub_1C0012400(DeviceObject, (__int64)Irp, 0LL, &stru_1C0061E30);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 306), Irp, 0x20u);
  return v6;
}
