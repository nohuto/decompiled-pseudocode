/*
 * XREFs of sub_14065F4CC @ 0x14065F4CC
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14065ED00 (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x14065F2F4 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_14065F530 @ 0x14065F530 (sub_14065F530.c)
 */

__int64 __fastcall sub_14065F4CC(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_14065F530((unsigned int)&qword_140C53C10, a1, 8, (unsigned int)&v5, 0LL);
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
