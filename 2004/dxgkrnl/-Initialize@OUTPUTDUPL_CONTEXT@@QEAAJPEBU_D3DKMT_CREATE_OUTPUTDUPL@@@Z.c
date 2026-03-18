/*
 * XREFs of ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C02A0C50
 * Callers:
 *     ?CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_OUTPUTDUPL_FLAGS@@@Z @ 0x1C0298B8C (-CreateOutputDuplication@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_CREATE_OUTPUTDUPL@@PEAU_D3DKMT_CREATE_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0pxqt_EtwWriteTransfer @ 0x1C00259AC (McTemplateK0pxqt_EtwWriteTransfer.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C016985C (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z @ 0x1C02983B0 (-AddRef@OUTPUTDUPL_SESSION_MGR@@QEAAHPEAU_EPROCESS@@PEAU_D3DKMT_OUTPUTDUPL_ACTIVE_CTX@@@Z.c)
 *     ?GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA?AU_LUID@@XZ @ 0x1C02996CC (-GetAdapterLuid@OUTPUTDUPL_MGR@@QEAA-AU_LUID@@XZ.c)
 *     ?Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z @ 0x1C029A098 (-Initialize@DXGDXGIKEYEDMUTEX@@QEAAJPEAX@Z.c)
 *     ?OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z @ 0x1C029ADC4 (-OpenLocalMutex@DXGDXGIKEYEDMUTEX@@QEAAJW4_OUTPUTDUPL_MUTEX_TYPE@@@Z.c)
 *     ??0DDAMetaData@@QEAA@II@Z @ 0x1C029FD40 (--0DDAMetaData@@QEAA@II@Z.c)
 *     ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C02A0B54 (-Initialize@DDAMetaData@@QEAAHII@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::Initialize(OUTPUTDUPL_CONTEXT *this, const struct _D3DKMT_CREATE_OUTPUTDUPL *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  DXGSESSIONMGR *v6; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v9; // rax
  struct DXGFASTMUTEX **v11; // rdi
  struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *v12; // r8
  __int64 *AdapterLuid; // rax
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebp
  UINT KeyedMutexCount; // eax
  char *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  DXGDXGIKEYEDMUTEX *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  int v27; // edi
  __int64 v28; // r8
  struct DXGPROCESS *Current; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ebp
  _QWORD *i; // r14
  DDAMetaData *v36; // rax
  DDAMetaData *v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int128 v45; // [rsp+40h] [rbp-48h] BYREF
  __int64 v46; // [rsp+50h] [rbp-38h]
  char v47; // [rsp+A0h] [rbp+18h] BYREF

  v6 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 102);
  if ( v6 )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v5, v4);
    SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v6, CurrentProcessSessionId);
  }
  else
  {
    SessionDataForSpecifiedSession = 0LL;
  }
  if ( !SessionDataForSpecifiedSession )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = 1226LL;
LABEL_6:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v11 = (struct DXGFASTMUTEX **)*((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v11 )
  {
    v9 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v9 + 24) = 1233LL;
    goto LABEL_6;
  }
  *((_DWORD *)this + 4) = a2->VidPnSourceId;
  v12 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  if ( *((_DWORD *)this + 81) && !*((_DWORD *)this + 82) )
  {
    AdapterLuid = (__int64 *)OUTPUTDUPL_MGR::GetAdapterLuid(*((OUTPUTDUPL_MGR **)this + 37), (__int64)&v47);
    v12 = (struct _D3DKMT_OUTPUTDUPL_ACTIVE_CTX *)&v45;
    v14 = *AdapterLuid;
    LODWORD(v46) = *((_DWORD *)this + 4);
    *(_QWORD *)&v45 = *((_QWORD *)this + 4);
    *((_QWORD *)&v45 + 1) = v14;
  }
  if ( !(unsigned int)OUTPUTDUPL_SESSION_MGR::AddRef(v11, *((struct _EPROCESS **)this + 3), v12) )
    return 3221225643LL;
  v17 = 0;
  *((_DWORD *)this + 76) = 1;
  KeyedMutexCount = a2->KeyedMutexCount;
  *((_DWORD *)this + 10) = KeyedMutexCount;
  if ( KeyedMutexCount )
  {
    while ( 1 )
    {
      v19 = (char *)operator new[](0x90uLL, 0x674D444Fu, PagedPool);
      v24 = (DXGDXGIKEYEDMUTEX *)v19;
      if ( v19 )
      {
        *(_QWORD *)v19 = 0LL;
        *((_QWORD *)v19 + 1) = 0LL;
        *((_QWORD *)v19 + 11) = 0LL;
        *((_DWORD *)v19 + 24) = 0;
        *((_QWORD *)v19 + 13) = 0LL;
        *((_QWORD *)v19 + 14) = 0LL;
        *((_QWORD *)v19 + 15) = 0LL;
        *((_DWORD *)v19 + 32) = 0;
        memset(v19 + 16, 0, 0x48uLL);
      }
      else
      {
        v24 = 0LL;
      }
      *((_QWORD *)this + v17 + 6) = v24;
      if ( !v24 )
        goto LABEL_46;
      v27 = DXGDXGIKEYEDMUTEX::Initialize(v24, a2->KeyedMutexs[v17].hSharedSurfaceNt);
      if ( v27 < 0 )
        break;
      v27 = DXGDXGIKEYEDMUTEX::OpenLocalMutex(*((_QWORD *)this + v17 + 6), 1, v28);
      if ( v27 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v16, v15);
        *(_QWORD *)(v33 + 24) = 1284LL;
LABEL_26:
        WdLogEvent5_WdError(v33);
        return (unsigned int)v27;
      }
      if ( ++v17 >= *((_DWORD *)this + 10) )
        goto LABEL_22;
    }
    v33 = WdLogNewEntry5_WdError(v26, v25);
    *(_QWORD *)(v33 + 24) = 1277LL;
    goto LABEL_26;
  }
LABEL_22:
  Current = DXGPROCESS::GetCurrent(v16, v15);
  if ( Current )
    v32 = *((_QWORD *)Current + 11);
  else
    v32 = 0LL;
  if ( !v32 )
  {
    v9 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v9 + 24) = 1293LL;
    goto LABEL_6;
  }
  v34 = 0;
  for ( i = (_QWORD *)((char *)this + 160); ; i += 12 )
  {
    v36 = (DDAMetaData *)operator new[](0x50uLL, 0x674D444Fu, PagedPool);
    v37 = v36 ? DDAMetaData::DDAMetaData(v36, v20) : 0LL;
    *(i - 10) = v37;
    if ( !v37 || !(unsigned int)DDAMetaData::Initialize(v37) )
      break;
    v38 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
    v43 = v38;
    if ( v38 )
    {
      *v38 = 0LL;
      v38[1] = 0LL;
      AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v38, 0x4000u, 0);
    }
    else
    {
      v43 = 0LL;
    }
    *i = v43;
    if ( !v43 || !*v43 )
    {
      v44 = WdLogNewEntry5_WdLowResource(v40, v39, v41, v42);
      *(_QWORD *)(v44 + 24) = 0x4000LL;
      *(_QWORD *)(v44 + 32) = a2->VidPnSourceId;
      goto LABEL_47;
    }
    if ( (unsigned int)++v34 >= 2 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pxqt_EtwWriteTransfer(
          a2->hAdapter,
          &EventOutputDuplicationCreate,
          v41,
          this,
          a2->hAdapter,
          a2->VidPnSourceId,
          a2->KeyedMutexCount);
      return 0LL;
    }
  }
LABEL_46:
  v44 = WdLogNewEntry5_WdLowResource(v21, v20, v22, v23);
  *(_QWORD *)(v44 + 24) = a2->VidPnSourceId;
LABEL_47:
  WdLogEvent5_WdLowResource(v44);
  return 3221225495LL;
}
