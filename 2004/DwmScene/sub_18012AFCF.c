/*
 * XREFs of sub_18012AFCF @ 0x18012AFCF
 * Callers:
 *     <none>
 * Callees:
 *     ?__ExceptionPtrCreate@@YAXPEAX@Z @ 0x18011FA68 (-__ExceptionPtrCreate@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrDestroy@@YAXPEAX@Z @ 0x18011FA6E (-__ExceptionPtrDestroy@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrCurrentException@@YAXPEAX@Z @ 0x18011FA80 (-__ExceptionPtrCurrentException@@YAXPEAX@Z.c)
 *     ?__ExceptionPtrAssign@@YAXPEAXPEBX@Z @ 0x18011FB74 (-__ExceptionPtrAssign@@YAXPEAXPEBX@Z.c)
 */

__int64 __fastcall sub_18012AFCF(__int64 a1, __int64 a2)
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
