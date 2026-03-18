/*
 * XREFs of InvalidateChildRelationsOnAdapterCallback @ 0x1C0292B40
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall InvalidateChildRelationsOnAdapterCallback(struct _DEVICE_OBJECT **a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 v9; // rax
  _BYTE v11[144]; // [rsp+20h] [rbp-A8h] BYREF

  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v11, (struct DXGADAPTER *const)a1, 0LL);
  v2 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v11, 0LL);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = a1[27];
    if ( v5 )
    {
      DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v5);
      if ( !DeviceAttachmentBaseRef )
      {
        v9 = WdLogNewEntry5_WdAssertion(v7, v6);
        *(_QWORD *)(v9 + 24) = 2509LL;
        WdLogEvent5_WdAssertion(v9);
      }
      IoInvalidateDeviceRelations(DeviceAttachmentBaseRef, BusRelations);
      ObfDereferenceObject(DeviceAttachmentBaseRef);
    }
    v4 = 0;
  }
  else if ( v2 == -1073741130 )
  {
    v4 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v11, v3);
  return v4;
}
