/*
 * XREFs of ?RegisterIndirectTarget@CBaseExpression@@QEAAJPEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1802291E0
 * Callers:
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker@@PEAVCBaseExpression@@W4Enum@InteractionTrackerProperty@@@Z @ 0x180220EF4 (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractio.c)
 * Callees:
 *     ?InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression@@PEAVSubchannelMaskInfo@@@Z @ 0x18004A3E0 (-InsertExpressionIntoTargetMap@CExpressionManager@@AEAAJAEAVCTargetMapEntry@@PEAVCBaseExpression.c)
 *     ??1CTargetMapEntry@@QEAA@XZ @ 0x18004A4F8 (--1CTargetMapEntry@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x1802287A8 (--$_Emplace_reallocate@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakRe.c)
 */

__int64 __fastcall CBaseExpression::RegisterIndirectTarget(struct CBaseExpression *a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  __int128 **v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rax
  CExpressionManager *v8; // rdi
  int inserted; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  int v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  int v17; // [rsp+70h] [rbp+18h] BYREF

  v17 = a3;
  v16 = a2;
  v4 = a2;
  v5 = (__int128 **)((char *)a1 + 304);
  v6 = *((_QWORD *)a1 + 39);
  if ( v6 == *((_QWORD *)a1 + 40) )
  {
    std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
      v5,
      (char *)v6,
      &v16,
      &v17);
    a3 = v17;
    v4 = v16;
  }
  else
  {
    *(_QWORD *)v6 = v4;
    *(_DWORD *)(v6 + 8) = a3;
    ++v5[1];
  }
  v7 = *((_QWORD *)a1 + 2);
  v15 = 0LL;
  v13 = v4;
  v14 = a3;
  v8 = *(CExpressionManager **)(v7 + 424);
  inserted = CExpressionManager::InsertExpressionIntoTargetMap(v8, (struct CTargetMapEntry *)&v13, a1, 0LL);
  v11 = inserted;
  if ( inserted < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, inserted, 0xBDu);
  }
  else
  {
    *((_BYTE *)v8 + 448) |= 4u;
    v11 = 0;
  }
  CTargetMapEntry::~CTargetMapEntry((CTargetMapEntry *)&v13);
  return v11;
}
