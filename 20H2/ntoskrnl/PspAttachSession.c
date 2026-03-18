/*
 * XREFs of PspAttachSession @ 0x1406DF204
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MmAttachSession @ 0x14023C940 (MmAttachSession.c)
 *     MmGetSessionById @ 0x140297320 (MmGetSessionById.c)
 */

__int64 __fastcall PspAttachSession(__int64 a1, __int64 a2, ULONG_PTR *a3)
{
  ULONG_PTR SessionById; // rax
  struct _DMA_ADAPTER *v5; // rbx
  int v6; // edi

  SessionById = MmGetSessionById(a1, a2);
  v5 = (struct _DMA_ADAPTER *)SessionById;
  if ( !SessionById )
    return 3221225738LL;
  *a3 = SessionById;
  v6 = MmAttachSession(SessionById);
  if ( v6 < 0 )
    HalPutDmaAdapter(v5);
  return (unsigned int)v6;
}
