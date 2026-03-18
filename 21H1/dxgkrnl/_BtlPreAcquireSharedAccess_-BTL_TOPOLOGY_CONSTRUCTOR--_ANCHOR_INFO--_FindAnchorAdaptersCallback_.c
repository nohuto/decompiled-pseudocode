/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_ @ 0x1C012AB60
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009B60 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0050A74 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012A63C (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_0_1_(
        DXGADAPTER *this,
        _DWORD *a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int AnchorAdaptersCallback; // ebx
  _QWORD *v10; // rax
  struct DXGADAPTER *v12; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-C8h] BYREF
  DXGADAPTER *v14; // [rsp+28h] [rbp-C0h]
  char v15; // [rsp+30h] [rbp-B8h]
  _BYTE v16[144]; // [rsp+40h] [rbp-A8h] BYREF

  v14 = this;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, this, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  AnchorAdaptersCallback = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_5;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = this;
    v10[4] = *((int *)this + 80);
    v10[5] = *((unsigned int *)this + 79);
    v10[6] = a2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 2585) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_4:
    AnchorAdaptersCallback = 0;
    goto LABEL_5;
  }
  AnchorAdaptersCallback = BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback(v12, a2);
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5);
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return AnchorAdaptersCallback;
}
