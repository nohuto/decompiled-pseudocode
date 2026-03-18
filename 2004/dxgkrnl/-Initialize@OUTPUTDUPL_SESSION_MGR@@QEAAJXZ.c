/*
 * XREFs of ?Initialize@OUTPUTDUPL_SESSION_MGR@@QEAAJXZ @ 0x1C016A264
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C016A37C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016985C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_SESSION_MGR::Initialize(OUTPUTDUPL_SESSION_MGR *this)
{
  int v1; // esi
  unsigned int v3; // esi
  void **v4; // rax
  __int64 v5; // rdx
  void *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  void **v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx

  v1 = *(_DWORD *)this;
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  v3 = 32 * v1;
  v4 = (void **)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v9 = v4;
  if ( v4 )
  {
    *v4 = 0LL;
    *((_DWORD *)v4 + 2) = 0;
    *((_DWORD *)v4 + 3) = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, v3, 0);
  }
  else
  {
    v9 = 0LL;
  }
  *((_QWORD *)this + 2) = v9;
  if ( v9 && (v6 = *v9) != 0LL )
  {
    memset(v6, 0, v3);
    v10 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
    if ( v10 )
    {
      *v10 = 0LL;
      v10[1] = 0LL;
      v10[2] = 0LL;
      *((_DWORD *)v10 + 6) = 0;
      *((_DWORD *)v10 + 7) = 43;
      *((_DWORD *)v10 + 8) = 53;
    }
    *((_QWORD *)this + 1) = v10;
    if ( v10 )
    {
      v15 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
      if ( v15 )
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        *((_DWORD *)v15 + 6) = 0;
        *((_DWORD *)v15 + 7) = 43;
        *((_DWORD *)v15 + 8) = 53;
      }
      *((_QWORD *)this + 4) = v15;
      if ( v15 )
        return 0LL;
    }
    v19 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
    *(_QWORD *)(v19 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v22, v21);
  }
  else
  {
    v17 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    v18 = *((unsigned int *)this + 1);
    v19 = v17;
    *(_QWORD *)(v17 + 24) = v18;
    *(_QWORD *)(v17 + 32) = (unsigned int)PsGetCurrentProcessSessionId(v18, v20);
  }
  WdLogEvent5_WdLowResource(v19);
  return 3221225495LL;
}
