/*
 * XREFs of ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C02951DC
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C029C760 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 *     ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C029E330 (-ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

struct _LUID __fastcall OUTPUTDUPL_MGR::GetAdapterLuid(OUTPUTDUPL_MGR *this, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax

  v4 = *(_QWORD *)this;
  if ( v4 && !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v4 + 16)) )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v7 + 24) = 2551LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)this + 72) )
  {
    *(_QWORD *)a2 = *((_QWORD *)this + 10);
  }
  else if ( *(_QWORD *)this )
  {
    *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 16LL) + 316LL);
  }
  else
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
  }
  return (struct _LUID)a2;
}
