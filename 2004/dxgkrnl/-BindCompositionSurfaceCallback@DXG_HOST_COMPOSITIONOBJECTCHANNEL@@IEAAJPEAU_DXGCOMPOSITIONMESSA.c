/*
 * XREFs of ?BindCompositionSurfaceCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE@@PEAU_DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN@@@Z @ 0x1C028BDA8
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028D430 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002808 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BB0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006598 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001A110 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C005DA54 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z @ 0x1C028A3F0 (-DxgkExtractRemoteBundleObject@@YAJIKPEAPEAXPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::BindCompositionSurfaceCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE *a2,
        struct _DXGCOMPOSITIONMESSAGE_BINDCOMPOSITIONSURFACE_RETURN *a3)
{
  __int64 RemoteBundleObject; // rbx
  DxgkCompositionObject *v7; // r14
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGFASTMUTEX *v15; // rax
  DxgkCompositionObject *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  struct _KPROCESS *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 i; // rdx
  bool v29; // zf
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rsi
  HANDLE v36; // rcx
  __int64 v37; // rax
  _BYTE v39[16]; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-C0h] BYREF
  char v41; // [rsp+70h] [rbp-90h]
  HANDLE Handle[32]; // [rsp+80h] [rbp-80h] BYREF

  LODWORD(RemoteBundleObject) = -1073741811;
  v7 = 0LL;
  memset(Handle, 0, sizeof(Handle));
  v9 = *((_DWORD *)a2 + 41);
  v10 = 31LL;
  if ( v9 < 0x1F )
    v10 = v9;
  *((_DWORD *)a2 + 41) = v10;
  Current = DXGPROCESS::GetCurrent(v10, v8);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    v15 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v39, v15, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v39);
    v16 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v16 )
    {
      v7 = v16;
      DxgkCompositionObject::AddRef(v16);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(_QWORD *)(v21 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v21);
    }
    if ( v39[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v39, v20);
  }
  else
  {
    v22 = WdLogNewEntry5_WdWarning(v13, v12, v14);
    *(_QWORD *)(v22 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v22);
  }
  if ( v7 )
  {
    v23 = (struct _KPROCESS *)*((_QWORD *)this + 5);
    v41 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v23);
    RemoteBundleObject = (int)DxgkExtractRemoteBundleObject(
                                *((unsigned int *)a2 + 266),
                                (unsigned int)(*((_DWORD *)a2 + 41) + 1),
                                Handle,
                                *((struct _EPROCESS **)this + 3));
    if ( v41 )
      KeUnstackDetachProcess(&ApcState);
    if ( (int)RemoteBundleObject < 0 )
    {
      v37 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v37 + 24) = RemoteBundleObject;
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      v27 = *((unsigned int *)a2 + 41);
      for ( i = 0LL; (unsigned int)i < (unsigned int)v27; v27 = *((unsigned int *)a2 + 41) )
      {
        *((_QWORD *)a2 + 3 * i + 21) = Handle[i];
        i = (unsigned int)(i + 1);
      }
      v29 = *((_DWORD *)a2 + 4) == 0;
      *((_QWORD *)a2 + 116) = Handle[v27];
      LOBYTE(v26) = !v29;
      v30 = (*(__int64 (__fastcall **)(_QWORD *, char *, __int64, char *))(*((_QWORD *)v7 + 4) + 24LL))(
              (_QWORD *)v7 + 4,
              (char *)a2 + 24,
              v26,
              (char *)a3 + 16);
      RemoteBundleObject = v30;
      if ( v30 < 0 )
      {
        v34 = WdLogNewEntry5_WdWarning(v32, v31, v33);
        *(_QWORD *)(v34 + 24) = RemoteBundleObject;
        WdLogEvent5_WdWarning(v34);
      }
      v35 = 0LL;
      if ( *((_DWORD *)a2 + 41) != -1 )
      {
        do
        {
          v36 = Handle[v35];
          if ( v36 )
            ObCloseHandle(v36, 1);
          v35 = (unsigned int)(v35 + 1);
        }
        while ( (unsigned int)v35 < *((_DWORD *)a2 + 41) + 1 );
      }
    }
    DxgkCompositionObject::Release(v7);
  }
  *((_DWORD *)a3 + 1) = RemoteBundleObject;
  return (unsigned int)RemoteBundleObject;
}
