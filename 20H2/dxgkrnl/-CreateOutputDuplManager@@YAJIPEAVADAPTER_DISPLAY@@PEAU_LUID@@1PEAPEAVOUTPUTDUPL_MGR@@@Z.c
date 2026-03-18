/*
 * XREFs of ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01759F0
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C0179310 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 *     ?CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z @ 0x1C0297E94 (-CreateRemoteOutputDuplMgr@OUTPUTDUPL_SESSION_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C00496E0 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 *     ??_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z @ 0x1C0049780 (--_GOUTPUTDUPL_MGR@@QEAAPEAXI@Z.c)
 *     ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C0175AC4 (-Initialize@OUTPUTDUPL_MGR@@QEAAJXZ.c)
 */

__int64 __fastcall CreateOutputDuplManager(
        __int64 a1,
        struct ADAPTER_DISPLAY *a2,
        struct _LUID *a3,
        struct _LUID *a4,
        struct OUTPUTDUPL_MGR **a5)
{
  unsigned int v8; // ebp
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // rcx
  _QWORD *v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned int v17; // edi
  __int64 v18; // rax
  OUTPUTDUPL_MGR_INDIRECT *v19; // rax
  OUTPUTDUPL_MGR_INDIRECT *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax

  v8 = a1;
  if ( a5 )
  {
    *a5 = 0LL;
    if ( a4 && a3 )
    {
      v19 = (OUTPUTDUPL_MGR_INDIRECT *)operator new[](0x78uLL, 0x674D444Fu, PagedPool);
      if ( v19 )
        v20 = OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(v19, *a4, *a3, v8);
      else
        v20 = 0LL;
      v21 = (unsigned __int64)v20 + 24;
      v13 = -(__int128)(unsigned __int64)v20;
      *((_QWORD *)&v13 + 1) &= v21;
    }
    else
    {
      v9 = (char *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
      *((_QWORD *)&v13 + 1) = v9;
      if ( v9 )
      {
        *((_DWORD *)v9 + 2) = 0;
        *((_QWORD *)v9 + 2) = 0LL;
        *((_QWORD *)v9 + 3) = 0LL;
        *((_QWORD *)v9 + 7) = 0LL;
        *((_QWORD *)v9 + 8) = 0LL;
        *(_QWORD *)v9 = a2;
        *((_DWORD *)v9 + 12) = 1;
        *((_DWORD *)v9 + 13) = v8;
        v9[72] = 0;
        v14 = v9 + 32;
        v14[1] = v14;
        *v14 = v14;
      }
      else
      {
        *((_QWORD *)&v13 + 1) = 0LL;
      }
    }
    if ( *((_QWORD *)&v13 + 1) )
    {
      result = OUTPUTDUPL_MGR::Initialize(*((OUTPUTDUPL_MGR **)&v13 + 1));
      v17 = result;
      if ( (int)result < 0 )
      {
        v23 = WdLogNewEntry5_WdError(v13, v16);
        *(_QWORD *)(v23 + 24) = a2;
        WdLogEvent5_WdError(v23);
        OUTPUTDUPL_MGR::`scalar deleting destructor'(*((OUTPUTDUPL_MGR **)&v13 + 1));
        return v17;
      }
      else
      {
        *a5 = (struct OUTPUTDUPL_MGR *)*((_QWORD *)&v13 + 1);
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdLowResource(v13, v10, v11, v12);
      *(_QWORD *)(v22 + 24) = a2;
      WdLogEvent5_WdLowResource(v22);
      return 3221225495LL;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    return 3221225485LL;
  }
  return result;
}
