/*
 * XREFs of ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0001BC0
 * Callers:
 *     ?DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z @ 0x1C015A2D4 (-DxgkCddUpdatePresentRects@@YAJPEAVADAPTER_DISPLAY@@IPEAPEBUtagRECT@@PEAI@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@PEBIIU_D3DKMT_VIDPNSOURCEOWNER_FLAGS@@@Z @ 0x1C01C3D18 (-AcquireVidPnSourceOwner@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@PEBW4_D3DKMT_VIDPNSOURCEOWNER_TYPE.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C01EAE60 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

const struct _CDDDXGK_INTERFACE *__fastcall ADAPTER_DISPLAY::GetCddInterface(DXGADAPTER **this, unsigned int a2)
{
  __int64 v3; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // r8d

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6112LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v6,
          v5,
          v7,
          0,
          2,
          -1,
          (__int64)L"IsCoreResourceSharedOwner()",
          224,
          0,
          0,
          0,
          0);
    }
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6113LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v9,
          v8,
          v10,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          225,
          0,
          0,
          0,
          0);
    }
  }
  return (const struct _CDDDXGK_INTERFACE *)*((_QWORD *)this[16] + 500 * v3 + 10);
}
