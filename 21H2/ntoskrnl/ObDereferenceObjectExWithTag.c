/*
 * XREFs of ObDereferenceObjectExWithTag @ 0x14028AE58
 * Callers:
 *     IopDropIrp @ 0x140234D58 (IopDropIrp.c)
 *     ObDereferenceObjectEx @ 0x14028AE3C (ObDereferenceObjectEx.c)
 *     ExTimerRundown @ 0x1402F0574 (ExTimerRundown.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall ObDereferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, unsigned int a2)
{
  __int64 v2; // rbx
  signed __int64 v3; // rsi
  signed __int64 BugCheckParameter4; // rdi

  v2 = (int)a2;
  v3 = BugCheckParameter2 - 48;
  ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48, a2);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, -(int)v2) - v2;
  if ( BugCheckParameter4 <= 0 )
  {
    if ( *(_QWORD *)(v3 + 8) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v3 + 24) ^ (unsigned __int64)BYTE1(v3)],
        BugCheckParameter2,
        6uLL,
        *(_QWORD *)(v3 + 8));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
    ObpDeferObjectDeletion(v3);
  }
  return BugCheckParameter4;
}
