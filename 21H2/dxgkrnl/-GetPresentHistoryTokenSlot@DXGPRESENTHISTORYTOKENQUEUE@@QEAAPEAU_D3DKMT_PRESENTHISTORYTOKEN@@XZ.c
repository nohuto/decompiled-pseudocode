/*
 * XREFs of ?GetPresentHistoryTokenSlot@DXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAU_D3DKMT_PRESENTHISTORYTOKEN@@XZ @ 0x1C0334978
 * Callers:
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 * Callees:
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C01DA370 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 */

struct _SLIST_ENTRY *__fastcall DXGPRESENTHISTORYTOKENQUEUE::GetPresentHistoryTokenSlot(union _SLIST_HEADER *this)
{
  PSLIST_ENTRY v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  v2 = ExpInterlockedPopEntrySList(this + 3);
  if ( v2 )
    return v2 + 1;
  if ( DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this, v3, v4, v5)
    && (v2 = ExpInterlockedPopEntrySList(this + 3)) != 0LL )
  {
    return v2 + 1;
  }
  else
  {
    return 0LL;
  }
}
