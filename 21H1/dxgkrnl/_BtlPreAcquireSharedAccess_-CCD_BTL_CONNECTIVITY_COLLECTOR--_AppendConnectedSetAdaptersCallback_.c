/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C0122B60
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009F98 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D3D0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D42C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C000E1E8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C000E2C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000EE64 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C0050A74 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00EDF24 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        struct DXGADAPTER *a1,
        __int64 a2)
{
  struct DXGADAPTER *const v4; // rdx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int appended; // ebx
  _QWORD *v11; // rax
  DXGADAPTER *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-C8h] BYREF
  struct DXGADAPTER *v15; // [rsp+28h] [rbp-C0h]
  char v16; // [rsp+30h] [rbp-B8h]
  _BYTE v17[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v18[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp-60h] BYREF

  v15 = a1;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  v17[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v18, a1);
  COREACCESS::COREACCESS((COREACCESS *)v19, v4);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  appended = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_5;
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = a1;
    v11[4] = *((int *)a1 + 80);
    v11[5] = *((unsigned int *)a1 + 79);
    v11[6] = a2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)a1 + 2585) || DXGADAPTER::IsBddFallbackDriver(a1) && !DxgkIsMSBDDFallbackEnabled() )
  {
LABEL_4:
    appended = 0;
    goto LABEL_5;
  }
  appended = DmmAppendCcdConnectedSetForAdapter(v13, (struct _UNICODE_STRING *)(a2 + 8));
LABEL_5:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6);
  if ( v16 )
    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  return appended;
}
