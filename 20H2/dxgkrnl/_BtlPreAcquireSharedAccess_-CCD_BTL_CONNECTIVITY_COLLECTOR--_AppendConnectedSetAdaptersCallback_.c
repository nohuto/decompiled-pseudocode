/*
 * XREFs of _BtlPreAcquireSharedAccess_&CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_ @ 0x1C0118910
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00063E8 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006444 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0007050 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00072C8 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00073A8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ @ 0x1C0009738 (-IsBddFallbackDriver@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     DxgkIsMSBDDFallbackEnabled @ 0x1C00519C4 (DxgkIsMSBDDFallbackEnabled.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C0123418 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall BtlPreAcquireSharedAccess__CCD_BTL_CONNECTIVITY_COLLECTOR::_AppendConnectedSetAdaptersCallback_0_1_(
        DXGADAPTER *this,
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
  void *v13; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-C8h] BYREF
  DXGADAPTER *v15; // [rsp+28h] [rbp-C0h]
  char v16; // [rsp+30h] [rbp-B8h]
  _BYTE v17[8]; // [rsp+40h] [rbp-A8h] BYREF
  _BYTE v18[64]; // [rsp+48h] [rbp-A0h] BYREF
  _BYTE v19[72]; // [rsp+88h] [rbp-60h] BYREF

  v15 = this;
  v16 = 0;
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v14);
  v17[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v18, this);
  COREACCESS::COREACCESS((COREACCESS *)v19, v4);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17, 0LL);
  appended = v5;
  if ( v5 < 0 )
  {
    if ( v5 != -1073741130 )
      goto LABEL_5;
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v11[3] = this;
    v11[4] = *((int *)this + 80);
    v11[5] = *((unsigned int *)this + 79);
    v11[6] = a2;
    goto LABEL_4;
  }
  if ( *((_BYTE *)this + 2609) || DXGADAPTER::IsBddFallbackDriver(this) && !DxgkIsMSBDDFallbackEnabled() )
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
