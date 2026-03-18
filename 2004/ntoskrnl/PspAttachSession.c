/*
 * XREFs of PspAttachSession @ 0x1406A4BAC
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     MmGetSessionById @ 0x1402BE830 (MmGetSessionById.c)
 *     MmAttachSession @ 0x1402DCB20 (MmAttachSession.c)
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
