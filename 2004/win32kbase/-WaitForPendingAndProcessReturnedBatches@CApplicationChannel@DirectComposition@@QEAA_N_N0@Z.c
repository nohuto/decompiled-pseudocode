/*
 * XREFs of ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N0@Z @ 0x1C0049B38
 * Callers:
 *     NtDCompositionWaitForChannel @ 0x1C0049AB0 (NtDCompositionWaitForChannel.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C009C55C (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     ?Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z @ 0x1C0049C40 (-Initialize@WaitForCommitCompletionData@CApplicationChannel@DirectComposition@@QEAAXPEAV23@@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C009BFB4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

char __fastcall DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(
        DirectComposition::CApplicationChannel *this,
        char a2,
        char a3)
{
  char v5; // bp
  char v6; // r15
  char v7; // si
  char v8; // di
  DirectComposition::CApplicationChannel::WaitForCommitCompletionData *v9; // rcx

  v5 = 0;
  v6 = 0;
  v7 = 1;
  v8 = 1;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *((int *)this + 57) > 0 )
      {
        v9 = (DirectComposition::CApplicationChannel::WaitForCommitCompletionData *)*((_QWORD *)this + 90);
        if ( v9 )
        {
          DirectComposition::CApplicationChannel::WaitForCommitCompletionData::Initialize(v9, this);
          *((_BYTE *)this + 241) |= 4u;
        }
      }
    }
  }
  do
  {
    if ( *((int *)this + 57) <= 0 )
      break;
    if ( v6 && KeWaitForSingleObject(*(PVOID *)(*((_QWORD *)this + 27) + 8LL), UserRequest, 0, 1u, 0LL) )
      v8 = 0;
    if ( DirectComposition::CApplicationChannel::ProcessReturnedBatches(this) )
      v5 = 1;
    if ( !a2 && v5 )
      v8 = 0;
    v6 = 1;
  }
  while ( v8 );
  *((_BYTE *)this + 241) &= ~4u;
  if ( !v5 || a2 && *((_DWORD *)this + 57) )
    return 0;
  return v7;
}
