/*
 * XREFs of ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D1AC0
 * Callers:
 *     ?Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00D1BB0 (-Disconnect@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAAXPEAVCApplicationC.c)
 *     ?RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@I@Z @ 0x1C00D1BC8 (-RemoveTrackerBindings@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@QEAAXPEAVCA.c)
 *     ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01F2BC8 (-EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NP.c)
 * Callees:
 *     ?Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z @ 0x1C00C10A0 (-Shrink@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_K@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 *     ?SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicationChannel@2@PEAVCInteractionTrackerBindingManagerMarshaler@2@@Z @ 0x1C01F1D5C (-SetBindingManagerMarshaler@CInteractionTrackerMarshaler@DirectComposition@@QEAAXPEAVCApplicatio.c)
 */

void __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  unsigned int v3; // esi
  unsigned __int64 v4; // rdx
  unsigned int v5; // edi
  __int64 v7; // rax
  __int64 v8; // r9
  size_t v9; // r8
  bool v10; // zf
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  DirectComposition::CInteractionTrackerMarshaler *v13; // rcx
  DirectComposition::CInteractionTrackerMarshaler *v14; // rcx
  _OWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  DirectComposition::CInteractionTrackerMarshaler *v16[2]; // [rsp+40h] [rbp-28h]

  v3 = 0;
  v4 = *((_QWORD *)this + 12);
  v5 = 0;
  if ( v4 )
  {
    v7 = 0LL;
    do
    {
      v8 = *((_QWORD *)this + 9);
      v9 = *((_QWORD *)this + 13);
      v10 = *(_DWORD *)(v7 * v9 + v8 + 16) == 0;
      v11 = *(_OWORD *)(v7 * v9 + v8);
      *(_OWORD *)v16 = v11;
      if ( v10 )
      {
        v13 = v16[0];
        v10 = (*((_DWORD *)v16[0] + 16))-- == 1;
        if ( v10 )
          DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v13, a2, 0LL);
        v14 = v16[1];
        v10 = (*((_DWORD *)v16[1] + 16))-- == 1;
        if ( v10 )
          DirectComposition::CInteractionTrackerMarshaler::SetBindingManagerMarshaler(v14, a2, 0LL);
      }
      else
      {
        v12 = *(_OWORD *)(v7 * v9 + v8 + 16);
        Src[0] = v11;
        Src[1] = v12;
        memmove((void *)(v8 + v9 * v3++), Src, v9);
      }
      v4 = *((_QWORD *)this + 12);
      v7 = ++v5;
    }
    while ( v5 < v4 );
  }
  DirectComposition::CDCompDynamicArrayBase::Shrink(
    (DirectComposition::CInteractionTrackerBindingManagerMarshaler *)((char *)this + 72),
    v4 - v3);
}
