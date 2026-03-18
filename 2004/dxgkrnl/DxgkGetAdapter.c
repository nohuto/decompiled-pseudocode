/*
 * XREFs of DxgkGetAdapter @ 0x1C0174090
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00187D4 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001FAB8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0114888 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0174288 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(
        struct DXGADAPTER **a1,
        struct _LUID *a2,
        PDEVICE_OBJECT *a3,
        struct DXGADAPTER **a4,
        _BYTE *a5)
{
  int DefaultRenderAdapterForSession; // ebx
  __int64 v10; // rdx
  PDEVICE_OBJECT *v11; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  DXGSESSIONMGR *v17; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGADAPTER *v20; // rdx
  __int64 v21; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int8 v25[8]; // [rsp+20h] [rbp-30h] BYREF
  struct DXGADAPTER *v26[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v27[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGADAPTER *v28; // [rsp+40h] [rbp-10h]
  char v29; // [rsp+48h] [rbp-8h]

  v26[0] = 0LL;
  v25[0] = 0;
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)v26,
                                     1u,
                                     v25);
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    v28 = v26[0];
    v29 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
    v11 = (PDEVICE_OBJECT *)*((unsigned int *)v26[0] + 50);
    if ( (_DWORD)v11 != 1 || (v11 = (PDEVICE_OBJECT *)v26[0], *((_BYTE *)v26[0] + 2609)) )
    {
      v21 = WdLogNewEntry5_WdError(v11, v10);
      DefaultRenderAdapterForSession = -1073741275;
      *(_QWORD *)(v21 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v21);
    }
    else
    {
      *a2 = *(struct _LUID *)((char *)v26[0] + 316);
      if ( a1 )
      {
        if ( !a4 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v11, v10);
          *(_QWORD *)(v23 + 24) = 4213LL;
          WdLogEvent5_WdAssertion(v23);
          v11 = (PDEVICE_OBJECT *)v26[0];
        }
        if ( !a3 )
        {
          v24 = WdLogNewEntry5_WdAssertion(v11, v10);
          *(_QWORD *)(v24 + 24) = 4214LL;
          WdLogEvent5_WdAssertion(v24);
          v11 = (PDEVICE_OBJECT *)v26[0];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v11[27]);
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v17 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 102);
        if ( v17 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16, v15);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v17,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, v26[0]);
        v20 = v26[0];
        if ( a5 )
          *a5 = *((_BYTE *)v26[0] + 209);
        v26[0] = 0LL;
        *a4 = v26[1];
        *a1 = v20;
      }
      DefaultRenderAdapterForSession = 0;
    }
    if ( v29 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v27);
  }
  DXGADAPTER_REFERENCE::Assign(v26, 0LL);
  return (unsigned int)DefaultRenderAdapterForSession;
}
