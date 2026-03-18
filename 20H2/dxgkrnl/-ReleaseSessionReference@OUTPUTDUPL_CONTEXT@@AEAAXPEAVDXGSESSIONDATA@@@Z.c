/*
 * XREFs of ?ReleaseSessionReference@OUTPUTDUPL_CONTEXT@@AEAAXPEAVDXGSESSIONDATA@@@Z @ 0x1C02A1840
 * Callers:
 *     ??1OUTPUTDUPL_CONTEXT@@QEAA@XZ @ 0x1C029EEB8 (--1OUTPUTDUPL_CONTEXT@@QEAA@XZ.c)
 *     ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C029FFD8 (-MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C02986EC (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C029B1A0 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::ReleaseSessionReference(OUTPUTDUPL_MGR **this, struct DXGSESSIONDATA *a2)
{
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v2; // r8
  __int64 v4; // rax
  struct DXGFASTMUTEX **v5; // rdi
  __int64 *AdapterLuid; // rax
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]
  char v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0LL;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdError(this, 0LL);
    *(_QWORD *)(v4 + 24) = 2529LL;
LABEL_5:
    WdLogEvent5_WdError(v4);
    return;
  }
  v5 = (struct DXGFASTMUTEX **)*((_QWORD *)a2 + 1);
  if ( !v5 )
  {
    v4 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v4 + 24) = 2536LL;
    goto LABEL_5;
  }
  v8 = 0LL;
  v9 = 0LL;
  if ( *((_DWORD *)this + 81) )
  {
    if ( !*((_DWORD *)this + 82) )
    {
      AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(this[37], (__int64)&v10);
      v2 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v8;
      v7 = *AdapterLuid;
      LODWORD(v9) = *((_DWORD *)this + 4);
      *(_QWORD *)&v8 = this[4];
      *((_QWORD *)&v8 + 1) = v7;
    }
  }
  OUTPUTDUPL_SESSION_MGR::Release(v5, this[3], v2);
}
