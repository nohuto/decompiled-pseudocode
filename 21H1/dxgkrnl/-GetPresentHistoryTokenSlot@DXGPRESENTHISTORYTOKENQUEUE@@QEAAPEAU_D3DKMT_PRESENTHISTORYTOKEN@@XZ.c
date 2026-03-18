/*
 * XREFs of ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C027F514
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00D87E8 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 */

struct _SLIST_ENTRY *__fastcall DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rax

  v2 = ExpInterlockedPopEntrySList(this + 3);
  if ( v2 )
    return v2 + 1;
  if ( DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this)
    && (v2 = ExpInterlockedPopEntrySList(this + 3)) != 0LL )
  {
    return v2 + 1;
  }
  else
  {
    return 0LL;
  }
}
