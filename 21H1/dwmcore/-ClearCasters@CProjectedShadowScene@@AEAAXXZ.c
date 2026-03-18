/*
 * XREFs of ?ClearCasters@CProjectedShadowScene@@AEAAXXZ @ 0x18000B2C4
 * Callers:
 *     ??1CProjectedShadowScene@@UEAA@XZ @ 0x18000CA34 (--1CProjectedShadowScene@@UEAA@XZ.c)
 *     ?ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHADOWSCENE_CLEARCASTERS@@@Z @ 0x1801E8A00 (-ProcessClearCasters@CProjectedShadowScene@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PROJECTEDSHAD.c)
 * Callees:
 *     ?ClearShadows@CProjectedShadowScene@@AEAAX_N@Z @ 0x18000B134 (-ClearShadows@CProjectedShadowScene@@AEAAX_N@Z.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@@@?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@1@PEAU01@@Z @ 0x18000B360 (--$_Free_non_head@V-$allocator@U-$_List_node@UCasterEntry@CProjectedShadowScene@@PEAX@std@@@std@.c)
 *     memmove_0 @ 0x1800EBD77 (memmove_0.c)
 */

void __fastcall CProjectedShadowScene::ClearCasters(CProjectedShadowScene *this)
{
  CProjectedShadowScene **j; // rcx
  _QWORD *v3; // r14
  _QWORD *i; // rbx
  __int64 v5; // rsi
  CProjectedShadowScene **v6; // r8

  CProjectedShadowScene::ClearShadows(this, 0);
  v3 = (_QWORD *)*((_QWORD *)this + 7);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[2];
    v6 = *(CProjectedShadowScene ***)(v5 + 96);
    for ( j = *(CProjectedShadowScene ***)(v5 + 88); j != v6 && *j != this; ++j )
      ;
    if ( j != v6 )
    {
      memmove_0(j, j + 1, (char *)v6 - (char *)(j + 1));
      *(_QWORD *)(v5 + 96) -= 8LL;
    }
  }
  std::_List_node<CProjectedShadowScene::CasterEntry,void *>::_Free_non_head<std::allocator<std::_List_node<CProjectedShadowScene::CasterEntry,void *>>>(
    j,
    *((_QWORD *)this + 7));
  **((_QWORD **)this + 7) = *((_QWORD *)this + 7);
  *(_QWORD *)(*((_QWORD *)this + 7) + 8LL) = *((_QWORD *)this + 7);
  *((_QWORD *)this + 8) = 0LL;
}
