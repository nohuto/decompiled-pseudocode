/*
 * XREFs of DxgkGetAdapter @ 0x1C01F2740
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3A0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F3FC (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000FB94 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C00246F8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0183C78 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z @ 0x1C01F2964 (-DxgkpFindDefaultRenderAdapterForSession@@YAJAEAU_LUID@@AEAVDXGADAPTER_REFERENCE@@EAEAE@Z.c)
 */

__int64 __fastcall DxgkGetAdapter(
        struct DXGADAPTER **a1,
        struct _LUID *a2,
        PDEVICE_OBJECT *a3,
        struct DXGADAPTER **a4,
        _BYTE *a5)
{
  int DefaultRenderAdapterForSession; // ebx
  struct DXGADAPTER *v10; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  __int64 v12; // rcx
  DXGSESSIONMGR *v13; // rbx
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  struct DXGADAPTER *v16; // rdx
  unsigned __int8 v18[8]; // [rsp+50h] [rbp-30h] BYREF
  struct DXGADAPTER *v19[2]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v20[8]; // [rsp+68h] [rbp-18h] BYREF
  struct DXGADAPTER *v21; // [rsp+70h] [rbp-10h]
  char v22; // [rsp+78h] [rbp-8h]

  v19[0] = 0LL;
  v18[0] = 0;
  DefaultRenderAdapterForSession = DxgkpFindDefaultRenderAdapterForSession(
                                     a2,
                                     (struct DXGADAPTER_REFERENCE *)v19,
                                     1u,
                                     v18);
  if ( DefaultRenderAdapterForSession >= 0 )
  {
    v21 = v19[0];
    v22 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
    if ( *((_DWORD *)v19[0] + 50) != 1 || (v10 = v19[0], *((_BYTE *)v19[0] + 2705)) )
    {
      DefaultRenderAdapterForSession = -1073741275;
      WdLogSingleEntry1(2LL, -1073741275LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkGetAdapter(): Aadapter found is not active, returning 0x%I64x.",
        -1073741275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      *a2 = *(struct _LUID *)((char *)v19[0] + 404);
      if ( a1 )
      {
        if ( !a4 )
        {
          WdLogSingleEntry1(1LL, 4572LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != pReferenceCookie)",
            4572LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v10 = v19[0];
        }
        if ( !a3 )
        {
          WdLogSingleEntry1(1LL, 4573LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"(NULL != ppPhysicalDeviceHandle)",
            4573LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v10 = v19[0];
        }
        DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*((PDEVICE_OBJECT *)v10 + 27));
        *a3 = DeviceAttachmentBaseRef;
        ObfDereferenceObject(DeviceAttachmentBaseRef);
        v13 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
        if ( v13 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v12);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v13,
                                             CurrentProcessSessionId);
          if ( SessionDataForSpecifiedSession )
            DXGSESSIONDATA::SetAdapterLuidInRemoteSession(SessionDataForSpecifiedSession, v19[0]);
        }
        v16 = v19[0];
        if ( a5 )
          *a5 = *((_BYTE *)v19[0] + 209);
        *a4 = v19[1];
        *a1 = v16;
        v19[0] = 0LL;
      }
      DefaultRenderAdapterForSession = 0;
    }
    if ( v22 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v20);
  }
  DXGADAPTER_REFERENCE::Assign(v19, 0LL);
  return (unsigned int)DefaultRenderAdapterForSession;
}
