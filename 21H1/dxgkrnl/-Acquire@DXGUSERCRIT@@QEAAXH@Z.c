/*
 * XREFs of ?Acquire@DXGUSERCRIT@@QEAAXH@Z @ 0x1C0011BB8
 * Callers:
 *     DxgkEscape @ 0x1C00FB2D0 (DxgkEscape.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C011F10C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C01237E4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ?DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z @ 0x1C0132734 (-DxgkEnumAdaptersInternal@@YAJPEAUENUMADAPTERSINTERNAL@@DEW4_KWAIT_REASON@@@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0133700 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1C0133D00 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C015D840 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025AFC4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0294BB8 (-DxgkCreateOutputDuplInternal@@YAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::Acquire(DXGUSERCRIT *this, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax

  v2 = a2;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = WdLogNewEntry5_WdCriticalError(this, a2);
    *(_QWORD *)(v4 + 24) = 275LL;
    *(_QWORD *)(v4 + 32) = 4LL;
    *(_QWORD *)(v4 + 40) = this;
    *(_OWORD *)(v4 + 48) = 0LL;
    WdLogEvent5_WdCriticalError(v4);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 1) + 88LL) + 32LL))(v2);
  *((_BYTE *)this + 16) = 1;
}
