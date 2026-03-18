/*
 * XREFs of ?CheckOwnership@DXGDISPLAYMANAGEROBJECT@@SAJU_LUID@@IPEAX@Z @ 0x1C015FD70
 * Callers:
 *     ?SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@PEBQEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F778 (-SetVidPnSourceOwnerInternal@@YAJPEBU_D3DKMT_SETVIDPNSOURCEOWNER@@U_D3DKMT_VIDPNSOURCEOWNER_FLAG.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C0009CB8 (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?reset@?$auto_rc@V?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV?$rc_buffer@U?$AlpcRequest@$07@DispBroker@@@@@Z @ 0x1C001A22C (-reset@-$auto_rc@V-$rc_buffer@U-$AlpcRequest@$07@DispBroker@@@@@@QEAAXPEAV-$rc_buffer@U-$AlpcReq.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C01213CC (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___ @ 0x1C015FED0 (DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765___.c)
 *     ??1?$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ @ 0x1C015FF94 (--1-$NT_OBJECT_REFERENCE@PEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@@QEAA@XZ.c)
 *     ?GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV?$auto_rc@VDXGDISPLAYMANAGEROBJECT@@@@@Z @ 0x1C02B018C (-GetDisplayManagerObject@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBAXAEAV-$auto_rc@VDXGDISPLAYMANAGEROBJ.c)
 *     ?IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ @ 0x1C02B0328 (-IsValid@DXGDISPLAYMANAGERSOURCEOBJECT@@QEBA_NXZ.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::CheckOwnership(struct _LUID a1, unsigned int a2, void *a3)
{
  DWORD LowPart; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int i; // ebx
  int v13; // eax
  __int64 v14; // rdx
  NTSTATUS v15; // edi
  __int64 v16; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  DXGDISPLAYMANAGERSOURCEOBJECT *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct _LUID v29; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v31; // [rsp+50h] [rbp-B0h] BYREF
  ReferenceCounted *v32; // [rsp+58h] [rbp-A8h] BYREF
  ReferenceCounted *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGADAPTER *v34[3]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v35[144]; // [rsp+80h] [rbp-80h] BYREF

  Object = 0LL;
  v29 = a1;
  LowPart = a1.LowPart;
  if ( a3 )
  {
    v15 = ObReferenceObjectByHandleWithTag(a3, 0x20000u, g_pDxgkDisplayManagerObjectType, 1, 0x4B677844u, &Object, 0LL);
    if ( v15 < 0 )
    {
      v20 = WdLogNewEntry5_WdError(v19, v18);
      *(_QWORD *)(v20 + 24) = a3;
      WdLogEvent5_WdError(v20);
      goto LABEL_15;
    }
    v21 = (DXGDISPLAYMANAGERSOURCEOBJECT *)*((_QWORD *)Object + 1);
    if ( !v21 )
    {
      v22 = WdLogNewEntry5_WdError(0LL, v18);
      *(_QWORD *)(v22 + 24) = Object;
      WdLogEvent5_WdError(v22);
      v15 = -1073741811;
      goto LABEL_15;
    }
    if ( !DXGDISPLAYMANAGERSOURCEOBJECT::IsValid(v21) )
    {
      v25 = WdLogNewEntry5_WdError(v24, v23);
      *(_QWORD *)(v25 + 24) = Object;
      WdLogEvent5_WdError(v25);
      v15 = -1073741790;
      goto LABEL_15;
    }
  }
  v34[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v34, &v29);
  if ( v34[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v34[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v35, 0LL) < 0 )
    {
      v27 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v27 + 24) = v29.HighPart;
      *(_QWORD *)(v27 + 32) = LowPart;
      WdLogEvent5_WdWarning(v27);
      v15 = -1073741275;
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        v31 = -1;
        v13 = DmmEnumClientVidPnPathTargetsFromSource((_QWORD *)v34[0], a2, i, &v31);
        v15 = v13;
        if ( v13 < 0 )
          break;
        if ( v13 == 1075708748 || (v14 = v31, v31 == -1) )
        {
          v15 = 0;
          break;
        }
        v33 = 0LL;
        v32 = (ReferenceCounted *)&v33;
        v15 = DmmDoForSpecifiedTarget__lambda_faea55654f1a9ab00e317b5a4ca43765_(v34[0], v31, &v32);
        if ( v15 < 0 )
          break;
        v32 = v33;
        if ( a3 )
        {
          if ( !v33 )
            goto LABEL_30;
          v29 = 0LL;
          DXGDISPLAYMANAGERSOURCEOBJECT::GetDisplayManagerObject(*((_QWORD *)Object + 1), &v29);
          if ( *(ReferenceCounted **)&v29 != v33 )
          {
            auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)&v29, 0LL);
LABEL_30:
            v28 = WdLogNewEntry5_WdError(v16, v14);
            *(_QWORD *)(v28 + 24) = 471LL;
            WdLogEvent5_WdError(v28);
            auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v32, 0LL);
            v15 = -1073741790;
            break;
          }
          auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset((ReferenceCounted **)&v29, 0LL);
        }
        else if ( v33 && *((_BYTE *)v33 + 144) )
        {
          goto LABEL_30;
        }
        auto_rc<rc_buffer<DispBroker::AlpcRequest<8>>>::reset(&v32, 0LL);
      }
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35, v14);
  }
  else
  {
    v26 = WdLogNewEntry5_WdWarning(v7, v6, v8);
    *(_QWORD *)(v26 + 24) = v29.HighPart;
    *(_QWORD *)(v26 + 32) = LowPart;
    WdLogEvent5_WdWarning(v26);
    v15 = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v34, 0LL);
LABEL_15:
  NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>::~NT_OBJECT_REFERENCE<DXGDISPLAYMANAGEROBJECT_CONTAINER *>(&Object);
  return (unsigned int)v15;
}
