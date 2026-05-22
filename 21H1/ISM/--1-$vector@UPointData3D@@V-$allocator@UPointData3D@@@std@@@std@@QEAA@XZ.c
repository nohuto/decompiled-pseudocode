/*
 * XREFs of ??1?$vector@UPointData3D@@V?$allocator@UPointData3D@@@std@@@std@@QEAA@XZ @ 0x1800757DC
 * Callers:
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$14 @ 0x18004E6D4 (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$14.c)
 *     _MPCHolographicInputManager::MPCHolographicInputManager_::_1_::dtor$15 @ 0x18004E6ED (_MPCHolographicInputManager--MPCHolographicInputManager_--_1_--dtor$15.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<PointData3D>::~vector<PointData3D>(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(184 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v2) / 184LL)));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
