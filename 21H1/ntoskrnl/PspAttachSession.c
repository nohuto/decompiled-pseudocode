/*
 * XREFs of PspAttachSession @ 0x1407111BC
 * Callers:
 *     PspAllocateProcess @ 0x1406F3CB0 (PspAllocateProcess.c)
 * Callees:
 *     MmGetSessionById @ 0x14022BBB0 (MmGetSessionById.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     MmAttachSession @ 0x14035DAE0 (MmAttachSession.c)
 */

__int64 __fastcall PspAttachSession(unsigned int a1, __int64 a2, _KPROCESS **a3)
{
  _KPROCESS *SessionById; // rax
  struct _DMA_ADAPTER *v6; // rbx
  int v7; // edi

  SessionById = (_KPROCESS *)MmGetSessionById(a1);
  v6 = (struct _DMA_ADAPTER *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v7 = MmAttachSession(SessionById, a2);
  if ( v7 < 0 )
    HalPutDmaAdapter(v6);
  return (unsigned int)v7;
}
