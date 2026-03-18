/*
 * XREFs of ?GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAI@Z @ 0x1C02ACC94
 * Callers:
 *     DxgkDispMgrTargetOperation @ 0x1C02AD820 (DxgkDispMgrTargetOperation.c)
 * Callees:
 *     ?AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z @ 0x1C00098FC (-AssignByLuid@DXGADAPTER_REFERENCE@@QEAA_NAEAU_LUID@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C00E7FDC (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z @ 0x1C02AC7C8 (-ContainsTarget@DXGDISPLAYMANAGEROBJECT@@QEAA_NU_LUID@@I@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::GetOwnedSourceFromTarget(
        struct DXGFASTMUTEX *const *this,
        struct _LUID a2,
        unsigned int a3,
        unsigned int *a4)
{
  DWORD LowPart; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rax
  unsigned int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdx
  struct _LUID v19; // [rsp+20h] [rbp-89h] BYREF
  struct DXGADAPTER *v20[3]; // [rsp+28h] [rbp-81h] BYREF
  _BYTE v21[144]; // [rsp+40h] [rbp-69h] BYREF

  v19 = a2;
  LowPart = a2.LowPart;
  if ( !DXGDISPLAYMANAGEROBJECT::ContainsTarget(this, a2, a3) )
    return 3221226021LL;
  v20[0] = 0LL;
  DXGADAPTER_REFERENCE::AssignByLuid((DXGADAPTER_REFERENCE *)v20, &v19);
  v11 = v20[0];
  if ( v20[0] )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v20[0], 0LL);
    if ( (int)COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL) >= 0 && *((_QWORD *)v11 + 334) )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v11, a3, a4);
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v17 + 24) = v19.HighPart;
      *(_QWORD *)(v17 + 32) = LowPart;
      WdLogEvent5_WdWarning(v17);
      SourceConnectedToTargetInClientVidPn = -1073741275;
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21, v18);
  }
  else
  {
    v12 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v19.HighPart;
    *(_QWORD *)(v12 + 32) = LowPart;
    WdLogEvent5_WdWarning(v12);
    SourceConnectedToTargetInClientVidPn = -1073741275;
  }
  DXGADAPTER_REFERENCE::Assign(v20, 0LL);
  return SourceConnectedToTargetInClientVidPn;
}
