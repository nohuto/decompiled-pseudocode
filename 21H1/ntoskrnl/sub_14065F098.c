/*
 * XREFs of sub_14065F098 @ 0x14065F098
 * Callers:
 *     WbRemoveWarbirdProcess @ 0x14065E8CC (WbRemoveWarbirdProcess.c)
 *     WbGetWarbirdProcess @ 0x14065EEC0 (WbGetWarbirdProcess.c)
 * Callees:
 *     sub_14065F0FC @ 0x14065F0FC (sub_14065F0FC.c)
 */

__int64 __fastcall sub_14065F098(int a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0LL;
  result = sub_14065F0FC((unsigned int)&qword_140C53C90, a1, 8, (unsigned int)&v5, 0LL);
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
