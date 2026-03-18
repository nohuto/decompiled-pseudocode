/*
 * XREFs of ?EmitCreationCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009CD84
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C009BBF0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitCreationCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 i; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  for ( i = *((_QWORD *)this + 50);
        i
     && (*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i + 40LL))(i, a2);
        *((_QWORD *)this + 50) = i )
  {
    *(_DWORD *)(*((_QWORD *)this + 50) + 16LL) |= 1u;
    v5 = *((_QWORD *)this + 50);
    i = *(_QWORD *)(v5 + 8);
    if ( (*(_DWORD *)(v5 + 16) & 2) != 0 )
    {
      v6 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 96LL))(v5, 170LL) != 0 ? 8 : 0;
      *(_QWORD *)(*((_QWORD *)this + 50) + 8LL) = *(_QWORD *)((char *)this + v6 + 408);
      *(_QWORD *)((char *)this + v6 + 408) = *((_QWORD *)this + 50);
    }
    else
    {
      *(_QWORD *)(v5 + 8) = 0LL;
    }
  }
  return *((_QWORD *)this + 50) == 0LL;
}
