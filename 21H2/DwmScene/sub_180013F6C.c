/*
 * XREFs of sub_180013F6C @ 0x180013F6C
 * Callers:
 *     sub_180013CC8 @ 0x180013CC8 (sub_180013CC8.c)
 *     sub_180014200 @ 0x180014200 (sub_180014200.c)
 *     sub_180014650 @ 0x180014650 (sub_180014650.c)
 *     sub_1800149C0 @ 0x1800149C0 (sub_1800149C0.c)
 *     sub_180014CA8 @ 0x180014CA8 (sub_180014CA8.c)
 *     sub_18009ABB0 @ 0x18009ABB0 (sub_18009ABB0.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 *     sub_180100170 @ 0x180100170 (sub_180100170.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_180013F6C(__int64 *a1, _QWORD *a2)
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
