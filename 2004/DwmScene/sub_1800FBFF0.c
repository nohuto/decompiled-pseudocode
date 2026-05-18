/*
 * XREFs of sub_1800FBFF0 @ 0x1800FBFF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E544 @ 0x18007E544 (sub_18007E544.c)
 *     sub_1800EB1E0 @ 0x1800EB1E0 (sub_1800EB1E0.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

bool __fastcall sub_1800FBFF0(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  bool result; // al

  result = 0;
  if ( sub_1800EB1E0(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::Aimer `RTTI Type Descriptor',
           1);
    v5 = v4;
    if ( *(_QWORD *)(v4 + 96) == *(_QWORD *)(a1 + 96)
      && *(_DWORD *)(v4 + 88) == *(_DWORD *)(a1 + 88)
      && !sub_18007E544((unsigned __int64 *)(v4 + 112), (unsigned __int64 *)(a1 + 112))
      && !sub_18007E544((unsigned __int64 *)(v5 + 124), (unsigned __int64 *)(a1 + 124))
      && !sub_18007E544((unsigned __int64 *)(v5 + 140), (unsigned __int64 *)(a1 + 140))
      && *(float *)(v5 + 136) == *(float *)(a1 + 136) )
    {
      return 1;
    }
  }
  return result;
}
