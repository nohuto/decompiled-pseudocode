/*
 * XREFs of ?BatchDrawListEntry@CDrawListBatchManager@@QEAAJPEAVCBaseDrawListEntry@@@Z @ 0x1801ABFEC
 * Callers:
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800643E0 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z @ 0x180066168 (-SetLightingCollection@CDrawListEntryBatch@@QEAAJPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z @ 0x1801ABFA4 (-AppendDrawListEntry@CDrawListEntryBatch@@QEAAJPEAVCDrawListEntry@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z @ 0x18007E7A0 (-AddMultipleAndSet@-$DynArray@PEAVCBaseDrawListEntry@@$0A@@@QEAAJPEFBQEAVCBaseDrawListEntry@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawListBatchManager::BatchDrawListEntry(
        CDrawListBatchManager *this,
        struct CBaseDrawListEntry *a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  struct CBaseDrawListEntry *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = DynArray<CBaseDrawListEntry *,0>::AddMultipleAndSet((__int64)this, &v6, 1LL);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x93u, 0LL);
  }
  else
  {
    (**(void (__fastcall ***)(struct CBaseDrawListEntry *))v6)(v6);
    ++*((_DWORD *)v6 + 2);
  }
  return v4;
}
