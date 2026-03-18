/*
 * XREFs of ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C0176D40
 * Callers:
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0176C74 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C029BEF4 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016985C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::CreateSourceContextLists(OUTPUTDUPL_MGR *this, __int64 a2)
{
  unsigned int v3; // eax
  SIZE_T v4; // rax
  unsigned __int64 v5; // kr00_8
  PVOID v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r14d
  AUTOEXPANDALLOCATION *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  AUTOEXPANDALLOCATION *v16; // rdi
  __int64 v17; // rsi
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rcx
  SIZE_T v24; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax

  if ( *((_QWORD *)this + 2) )
  {
    v26 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v26 + 24) = 993LL;
    WdLogEvent5_WdError(v26);
    return 3221227272LL;
  }
  else
  {
    v3 = *((_DWORD *)this + 13);
    if ( v3 )
    {
      v5 = v3;
      v4 = 32LL * v3;
      if ( !is_mul_ok(v5, 0x20uLL) )
        v4 = -1LL;
      v6 = operator new[](v4, 0x674D444Fu, PagedPool);
      *((_QWORD *)this + 2) = v6;
      if ( v6 )
      {
        v11 = 0;
        if ( !*((_DWORD *)this + 13) )
          return 0LL;
        while ( 1 )
        {
          v12 = (AUTOEXPANDALLOCATION *)operator new[](0x10uLL, 0x674D444Fu, PagedPool);
          v16 = v12;
          if ( v12 )
          {
            *(_QWORD *)v12 = 0LL;
            *((_QWORD *)v12 + 1) = 0LL;
            AUTOEXPANDALLOCATION::GetBuffer(v12, 0x100u, 0);
          }
          else
          {
            v16 = 0LL;
          }
          v17 = 32LL * v11;
          *(_QWORD *)(v17 + *((_QWORD *)this + 2) + 16) = v16;
          v18 = *(_QWORD **)(v17 + *((_QWORD *)this + 2) + 16);
          if ( !v18 || !*v18 )
            break;
          v19 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
          v23 = v19;
          if ( v19 )
          {
            *v19 = 0LL;
            v19[1] = 0LL;
            v19[2] = 0LL;
            *((_DWORD *)v19 + 6) = 0;
            *((_DWORD *)v19 + 7) = 42;
            *((_DWORD *)v19 + 8) = 18;
          }
          else
          {
            v23 = 0LL;
          }
          *(_QWORD *)(v17 + *((_QWORD *)this + 2)) = v23;
          if ( !*(_QWORD *)(v17 + *((_QWORD *)this + 2)) )
            goto LABEL_22;
          v24 = 8LL * *((unsigned int *)this + 2);
          if ( !is_mul_ok(*((unsigned int *)this + 2), 8uLL) )
            v24 = -1LL;
          *(_QWORD *)(v17 + *((_QWORD *)this + 2) + 8) = operator new[](v24, 0x674D444Fu, PagedPool);
          v23 = *(void **)(v17 + *((_QWORD *)this + 2) + 8);
          if ( !v23 )
          {
LABEL_22:
            v28 = WdLogNewEntry5_WdLowResource(v23, v20, v21, v22);
            *(_QWORD *)(v28 + 24) = v11;
            goto LABEL_23;
          }
          memset(v23, 0, 8LL * *((unsigned int *)this + 2));
          ++v11;
          *(_DWORD *)(v17 + *((_QWORD *)this + 2) + 24) = 0;
          if ( v11 >= *((_DWORD *)this + 13) )
            return 0LL;
        }
        v28 = WdLogNewEntry5_WdLowResource(v18, v13, v14, v15);
        *(_QWORD *)(v28 + 24) = 1018LL;
      }
      else
      {
        v28 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
        *(_QWORD *)(v28 + 24) = 1006LL;
      }
LABEL_23:
      WdLogEvent5_WdLowResource(v28);
      return 3221225495LL;
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(this, a2);
      *(_QWORD *)(v27 + 24) = 998LL;
      WdLogEvent5_WdError(v27);
      return 3221225485LL;
    }
  }
}
