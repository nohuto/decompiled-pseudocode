/*
 * XREFs of ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C009C11C
 * Callers:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C009BBF0 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 * Callees:
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C001D6B8 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C00A1378 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  char *v5; // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  if ( *((_QWORD *)this + 56) )
  {
    do
    {
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x14uLL, &v8) )
        break;
      v5 = (char *)v8;
      *(_DWORD *)v8 = 20;
      *(_OWORD *)(v5 + 4) = 0LL;
      *((_DWORD *)v5 + 1) = 22;
      *((_DWORD *)v5 + 2) = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 56) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 56) + 24LL))
                                      + 24);
      *((_DWORD *)v5 + 3) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 56) + 16LL) + 24LL);
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*((_QWORD *)this + 56) + 12LL);
      v6 = (__int64 *)*((_QWORD *)this + 56);
      v7 = *v6;
      *v6 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(*((DirectComposition::CAnimationBinding **)this + 56), this);
      *((_QWORD *)this + 56) = v7;
    }
    while ( v7 );
  }
  return *((_QWORD *)this + 56) == 0LL;
}
