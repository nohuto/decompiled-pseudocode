/*
 * XREFs of _BtlPreAcquireSharedAccess_&BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_ @ 0x1C02ED1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0009A9C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0051A84 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C02ED770 (-_AddExternalPathsAdaptersCallback@BTL_TOPOLOGY_CONSTRUCTOR@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        BTL_TOPOLOGY_CONSTRUCTOR *this)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ebx
  _QWORD *v10; // rax
  struct DXGADAPTER *v11; // rcx
  _BYTE v13[8]; // [rsp+20h] [rbp-C8h] BYREF
  struct DXGADAPTER *v14; // [rsp+28h] [rbp-C0h]
  char v15; // [rsp+30h] [rbp-B8h]
  _BYTE v16[144]; // [rsp+40h] [rbp-A8h] BYREF

  v14 = a1;
  v15 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v16, a1, 0LL);
  v4 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v16, 0LL);
  v9 = v4;
  if ( v4 < 0 )
  {
    if ( v4 != -1073741130 )
      goto LABEL_9;
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
    v10[3] = a1;
    v10[4] = *((int *)a1 + 80);
    v10[5] = *((unsigned int *)a1 + 79);
    v10[6] = this;
    goto LABEL_7;
  }
  if ( *((_BYTE *)a1 + 2609) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_7:
    v9 = 0;
    goto LABEL_9;
  }
  v9 = BTL_TOPOLOGY_CONSTRUCTOR::_AddExternalPathsAdaptersCallback(v11, this);
LABEL_9:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v16, v5);
  if ( v15 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v13);
  return v9;
}
