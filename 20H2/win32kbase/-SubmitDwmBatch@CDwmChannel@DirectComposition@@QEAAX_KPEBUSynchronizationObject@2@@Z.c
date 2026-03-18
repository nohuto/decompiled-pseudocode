/*
 * XREFs of ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C005F87C
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C005F7F0 (NtDCompositionSubmitDWMBatch.c)
 * Callees:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C005F934 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C005FB2C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 */

void __fastcall DirectComposition::CDwmChannel::SubmitDwmBatch(
        DirectComposition::CDwmChannel *this,
        __int64 a2,
        const struct DirectComposition::SynchronizationObject *a3)
{
  struct DirectComposition::CBatch *BatchFragment; // rdx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // rcx
  _QWORD *v11; // rcx

  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, 1, 1);
  v7 = 0LL;
  *((_BYTE *)BatchFragment + 32) ^= (*((_BYTE *)BatchFragment + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
  *((_BYTE *)this + 48) |= 2u;
  v8 = *((_QWORD *)BatchFragment + 17);
  *((_DWORD *)BatchFragment + 5) = 8;
  v9 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(4096 - v9) >= 8 )
  {
    v10 = *(_QWORD *)(v8 + 56);
    *(_QWORD *)(v8 + 40) = v9 + 8;
    v11 = (_QWORD *)(v9 + v10);
    if ( v11 )
    {
      *((_QWORD *)BatchFragment + 19) += 8LL;
      v7 = v11;
    }
  }
  *v7 = a2;
  *(_BYTE *)(*((_QWORD *)BatchFragment + 17) + 64LL) = 0;
  DirectComposition::CApplicationChannel::SubmitBatch(this, BatchFragment, BatchFragment, 0, a3);
}
