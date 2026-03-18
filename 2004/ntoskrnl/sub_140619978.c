/*
 * XREFs of sub_140619978 @ 0x140619978
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x1406191AC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x1406197A0 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_1406199DC @ 0x1406199DC (sub_1406199DC.c)
 */

__int64 __fastcall sub_140619978(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_1406199DC((unsigned int)&qword_140C53B90, a1, 8, (unsigned int)&v5, 0LL);
  if ( (int)result >= 0 && a2 )
  {
    v4 = v5;
    if ( v5 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(v5 + 232));
      v4 = v5;
    }
    *a2 = v4;
  }
  return result;
}
