/*
 * XREFs of sub_18001F3D0 @ 0x18001F3D0
 * Callers:
 *     sub_180024C00 @ 0x180024C00 (sub_180024C00.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F3D0(__int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 60));
}
