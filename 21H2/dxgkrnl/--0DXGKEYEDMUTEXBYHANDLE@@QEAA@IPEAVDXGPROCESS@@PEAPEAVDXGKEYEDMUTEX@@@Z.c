/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00598B8
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1C033E6E8 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C03413E0 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C03432D0 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C0343590 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000FB18 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005583C (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct DXGPROCESS *a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // ecx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  DXGKEYEDMUTEX *v14; // rax
  _BYTE v16[32]; // [rsp+60h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v16, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 >= *((_DWORD *)a3 + 74)
    || (v9 = *((_QWORD *)a3 + 35),
        v10 = *(_DWORD *)(v9 + 16 * v8 + 8),
        ((a2 >> 25) & 0x60) != (*(_BYTE *)(v9 + 16 * v8 + 8) & 0x60))
    || (v10 & 0x2000) != 0
    || (v10 & 0x1F) == 0 )
  {
LABEL_9:
    v14 = 0LL;
    goto LABEL_10;
  }
  if ( (v10 & 0x1F) != 9 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        v12,
        v11,
        v13,
        0LL,
        0,
        -1,
        L"Handle type mismatch",
        267LL,
        0LL,
        0LL,
        0LL,
        0LL);
    goto LABEL_9;
  }
  v14 = *(DXGKEYEDMUTEX **)(v9 + 16LL * (unsigned int)v8);
LABEL_10:
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    DXGKEYEDMUTEX::AcquireReference(v14);
    v14 = *(DXGKEYEDMUTEX **)this;
  }
  *a4 = v14;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  return this;
}
