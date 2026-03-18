/*
 * XREFs of ?GetVidPnSourceOwnerEmulated@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0020E8C
 * Callers:
 *     ?QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01ECED0 (-QueryVidPnExclusiveOwnershipCallBack@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     DxgkAdjustFullscreenGamma @ 0x1C02D0490 (DxgkAdjustFullscreenGamma.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

struct DXGDEVICE *__fastcall ADAPTER_DISPLAY::GetVidPnSourceOwnerEmulated(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  int v5; // edx
  int v6; // r8d

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6167LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          0,
          v5,
          v6,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6167LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return *(struct DXGDEVICE **)(4000 * v3 + *((_QWORD *)this + 16) + 744);
}
