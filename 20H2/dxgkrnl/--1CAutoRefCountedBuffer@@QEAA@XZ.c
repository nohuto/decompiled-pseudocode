/*
 * XREFs of ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C003FBA0
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0239DC4 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001DA54 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall CAutoRefCountedBuffer::~CAutoRefCountedBuffer(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rcx

  v1 = *this;
  if ( v1 )
    CRefCountedBuffer::RefCountedBufferRelease(v1);
}
