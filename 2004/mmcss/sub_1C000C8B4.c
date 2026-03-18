/*
 * XREFs of sub_1C000C8B4 @ 0x1C000C8B4
 * Callers:
 *     sub_1C000C494 @ 0x1C000C494 (sub_1C000C494.c)
 * Callees:
 *     sub_1C0001800 @ 0x1C0001800 (sub_1C0001800.c)
 */

LONG_PTR __fastcall sub_1C000C8B4(__int64 a1, __int64 a2)
{
  LONG_PTR result; // rax

  if ( Object )
  {
    ObfReferenceObject(Object);
    sub_1C0001800(8u);
    sub_1C0001800(0);
    KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(Object);
    Object = 0LL;
  }
  if ( *(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels )
  {
    LOBYTE(a2) = 1;
    return ExDeleteTimer(*(_QWORD *)&DeviceObject.Queue.Wcb.NumberOfChannels, a2, 0LL, 0LL);
  }
  return result;
}
