/*
 * XREFs of sub_1C0002A30 @ 0x1C0002A30
 * Callers:
 *     sub_1C0001170 @ 0x1C0001170 (sub_1C0001170.c)
 *     sub_1C0001F40 @ 0x1C0001F40 (sub_1C0001F40.c)
 *     sub_1C0002A80 @ 0x1C0002A80 (sub_1C0002A80.c)
 *     sub_1C0002B50 @ 0x1C0002B50 (sub_1C0002B50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0002A30(__int64 a1)
{
  __int64 result; // rax

  if ( (dword_1C0007264 != 0) != byte_1C0007268 && (!dword_1C0007264 || !dword_1C000726C) )
  {
    byte_1C0007268 = dword_1C0007264 != 0;
    LOBYTE(a1) = dword_1C0007264 != 0;
    return PoNotifyMediaBuffering(a1);
  }
  return result;
}
