/*
 * XREFs of ObReferenceObjectExWithTag @ 0x140229FF0
 * Callers:
 *     MiCreateImageOrDataSection @ 0x1406FDCD0 (MiCreateImageOrDataSection.c)
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObReferenceObjectExWithTag(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rax

  v3 = a2;
  if ( ObpTraceFlags )
    ObpPushStackInfo(BugCheckParameter2 - 48);
  v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), v3);
  if ( v4 <= 0 )
    KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x10uLL, v3 + v4);
  return v3 + v4;
}
