/*
 * XREFs of ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C0265404
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0126C7C (DxgkGetAllMonitorDevicesFromSessionView.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z @ 0x1C01866E4 (-AddEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@PEBU_LUID@@IH@Z.c)
 *     ?FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z @ 0x1C0265270 (-FindEntry@DXGADAPTERSOURCEHASH@@AEAAPEAUADAPTERSOURCEHASH_ENTRY@1@IHPEBU_LUID@@PEAI@Z.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
        DXGADAPTERSOURCEHASH *this,
        const struct _LUID *a2,
        unsigned int a3,
        unsigned int *a4)
{
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *Entry; // rax
  __int64 v9; // rdx
  struct DXGADAPTERSOURCEHASH::ADAPTERSOURCEHASH_ENTRY *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // ebx
  _BYTE v16[24]; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
  Entry = DXGADAPTERSOURCEHASH::FindEntry(this, 0LL, 1, a2, &v17);
  if ( Entry )
    goto LABEL_6;
  v10 = DXGADAPTERSOURCEHASH::FindEntry(this, 0LL, 1, a2, 0LL);
  if ( !v10 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = a2->HighPart;
    *(_QWORD *)(v13 + 32) = a2->LowPart;
    WdLogEvent5_WdAssertion(v13);
    v14 = -1073741811;
    goto LABEL_7;
  }
  Entry = DXGADAPTERSOURCEHASH::AddEntry(this, a2, a3, (*((_DWORD *)v10 + 3) & 2) != 0);
  if ( Entry )
  {
LABEL_6:
    *a4 = ((__int64)Entry - *((_QWORD *)this + 5)) >> 4;
    v14 = 0;
  }
  else
  {
    v14 = -1073741801;
  }
LABEL_7:
  if ( v16[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16, v9);
  return v14;
}
