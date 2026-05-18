/*
 * XREFs of sub_1801308E7 @ 0x1801308E7
 * Callers:
 *     <none>
 * Callees:
 *     ?__ExceptionPtrCreate@@YAXPEAX@Z @ 0x180125338 (-__ExceptionPtrCreate@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x18012533E (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrCurrentException@@YAXPEAX@Z @ 0x180125350 (-__ExceptionPtrCurrentException@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrAssign@@YAXPEAXPEBX@Z @ 0x180125444 (-__ExceptionPtrAssign@@YAXPEAXPEBX@Z.c)
 */

__int64 __fastcall sub_1801308E7(__int64 a1, __int64 a2)
{
  void *v3; // rbx

  v3 = **(void ***)(a2 + 48);
  *(_OWORD *)(a2 + 32) = 0LL;
  __ExceptionPtrCreate((void *)(a2 + 32));
  __ExceptionPtrCurrentException((void *)(a2 + 32));
  __ExceptionPtrAssign(v3, (const void *)(a2 + 32));
  __ExceptionPtrDestroy((void *)(a2 + 32));
  return 0LL;
}
