/*
 * XREFs of DxgkGetAdapter @ 0x1C0164640
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000F0BC (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C001FA68 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0116DB4 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C0164838 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
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
  __int64 v15; // rcx
  DXGSESSIONMGR *v16; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGADAPTER *v19; // rdx
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int8 v24[8]; // [rsp+20h] [rbp-30h] BYREF
  struct DXGADAPTER *v25[2]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v26[8]; // [rsp+38h] [rbp-18h] BYREF
  struct DXGADAPTER *v27; // [rsp+40h] [rbp-10h]
  char v28; // [rsp+48h] [rbp-8h]

  v25[0] = 0LL;
  v24[0] = 0;
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)v25,
                                     1u,
                                     v24);
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    v27 = v25[0];
    v28 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
    v11 = (PDEVICE_OBJECT *)*((unsigned int *)v25[0] + 50);
    if ( (_DWORD)v11 != 1 || (v11 = (PDEVICE_OBJECT *)v25[0], *((_BYTE *)v25[0] + 2585)) )
    {
      v20 = WdLogNewEntry5_WdError(v11, v10);
      DefaultRenderAdapterForSession = -1073741275;
      *(_QWORD *)(v20 + 24) = -1073741275LL;
      WdLogEvent5_WdError(v20);
    }
    else
    {
      *a2 = *(struct _LUID *)((char *)v25[0] + 316);
      if ( a1 )
      {
        if ( !a4 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v11, v10);
          *(_QWORD *)(v22 + 24) = 4194LL;
          WdLogEvent5_WdAssertion(v22);
          v11 = (PDEVICE_OBJECT *)v25[0];
        }
        if ( !a3 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v11, v10);
          *(_QWORD *)(v23 + 24) = 4195LL;
          WdLogEvent5_WdAssertion(v23);
          v11 = (PDEVICE_OBJECT *)v25[0];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v11[27]);
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v16 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v14, v13) + 88);
        if ( v16 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v15);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v16,
                                             CurrentProcessSessionId);
        }
        else
        {
          SessionDataForSpecifiedSession = 0LL;
        }
        if ( SessionDataForSpecifiedSession )
          DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, v25[0]);
        v19 = v25[0];
        if ( a5 )
          *a5 = *((_BYTE *)v25[0] + 209);
        v25[0] = 0LL;
        *a4 = v25[1];
        *a1 = v19;
      }
      DefaultRenderAdapterForSession = 0;
    }
    if ( v28 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v26);
  }
  DXGADAPTER_REFERENCE::Assign(v25, 0LL);
  return (unsigned int)DefaultRenderAdapterForSession;
}
