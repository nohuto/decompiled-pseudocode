/*
 * XREFs of sub_180013E8C @ 0x180013E8C
 * Callers:
 *     sub_180013BE8 @ 0x180013BE8 (sub_180013BE8.c)
 *     sub_180014120 @ 0x180014120 (sub_180014120.c)
 *     sub_180014570 @ 0x180014570 (sub_180014570.c)
 *     sub_1800148E0 @ 0x1800148E0 (sub_1800148E0.c)
 *     sub_180014BC8 @ 0x180014BC8 (sub_180014BC8.c)
 *     sub_1800952E0 @ 0x1800952E0 (sub_1800952E0.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 *     sub_1800FA8A0 @ 0x1800FA8A0 (sub_1800FA8A0.c)
 * Callees:
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180013E8C(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::MeshInstance `RTTI Type Descriptor',
         0);
  *a1 = 0LL;
  a1[1] = 0LL;
  if ( v4 )
  {
    v5 = a2[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = a2[1];
    }
    *a1 = v4;
    a1[1] = v5;
  }
  return a1;
}
