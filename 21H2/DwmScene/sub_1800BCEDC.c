/*
 * XREFs of sub_1800BCEDC @ 0x1800BCEDC
 * Callers:
 *     sub_1800BA07C @ 0x1800BA07C (sub_1800BA07C.c)
 *     sub_1800BB424 @ 0x1800BB424 (sub_1800BB424.c)
 *     sub_1800BE488 @ 0x1800BE488 (sub_1800BE488.c)
 *     sub_1800FD150 @ 0x1800FD150 (sub_1800FD150.c)
 * Callees:
 *     __RTDynamicCast @ 0x18012397C (__RTDynamicCast.c)
 */

__int64 *__fastcall sub_1800BCEDC(__int64 *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx

  v4 = _RTDynamicCast(
         *a2,
         0LL,
         &Spectre::Engine::Component `RTTI Type Descriptor',
         &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
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
