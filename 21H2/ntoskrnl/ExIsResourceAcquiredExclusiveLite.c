/*
 * XREFs of ExIsResourceAcquiredExclusiveLite @ 0x140212860
 * Callers:
 *     HvpTruncateBins @ 0x140689848 (HvpTruncateBins.c)
 * Callees:
 *     ExIsFastResourceHeldExclusive @ 0x14039C670 (ExIsFastResourceHeldExclusive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

BOOLEAN __stdcall ExIsResourceAcquiredExclusiveLite(PERESOURCE Resource)
{
  USHORT Flag; // ax
  BOOLEAN v3; // cl
  unsigned __int8 CurrentIrql; // al

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 2uLL, 0LL);
    return ExIsFastResourceHeldExclusive((ULONG_PTR)Resource);
  }
  else
  {
    v3 = 0;
    if ( (Flag & 0x80u) != 0 )
      return Resource->OwnerEntry.OwnerThread == (_QWORD)KeGetCurrentThread();
    return v3;
  }
}
