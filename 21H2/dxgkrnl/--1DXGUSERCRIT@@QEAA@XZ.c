/*
 * XREFs of ??1DXGUSERCRIT@@QEAA@XZ @ 0x1C002B694
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0184FA4 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C019FB3C (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     DxgkSetDisplayMode @ 0x1C01C2EF0 (DxgkSetDisplayMode.c)
 *     DxgkCheckOcclusion @ 0x1C01C3920 (DxgkCheckOcclusion.c)
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0 (DxgkQueryVidPnExclusiveOwnership.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C02FF2BC (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGUSERCRIT::~DXGUSERCRIT(DXGUSERCRIT *this)
{
  __int64 v1; // rax

  if ( *((_BYTE *)this + 16) )
  {
    v1 = *((_QWORD *)this + 1);
    *((_BYTE *)this + 16) = 0;
    (*(void (**)(void))(*(_QWORD *)(v1 + 88) + 40LL))();
  }
}
