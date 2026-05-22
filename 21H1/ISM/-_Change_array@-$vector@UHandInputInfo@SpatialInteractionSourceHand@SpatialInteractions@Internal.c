/*
 * XREFs of ?_Change_array@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@AEAAXQEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@_K1@Z @ 0x1800E24E4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@?$vector@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@V?$allocator@UHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@@std@@@std@@QEAAPEAUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAU23456@AEBU23456@@Z @ 0x1800DDD10 (--$_Emplace_reallocate@AEBUHandInputInfo@SpatialInteractionSourceHand@SpatialInteractions@Intern.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::vector<Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::HandInputInfo>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v6; // rcx
  __int64 result; // rax

  v6 = *(void **)a1;
  if ( v6 )
    std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)(1328 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v6) / 1328LL)));
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 1328 * a3;
  result = a2 + 1328 * a4;
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
