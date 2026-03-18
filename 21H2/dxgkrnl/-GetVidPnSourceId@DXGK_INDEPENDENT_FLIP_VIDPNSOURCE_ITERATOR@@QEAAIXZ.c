/*
 * XREFs of ?GetVidPnSourceId@DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR@@QEAAIXZ @ 0x1C0008B2C
 * Callers:
 *     DxgkSetIndependentFlipMode @ 0x1C0161E30 (DxgkSetIndependentFlipMode.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR::GetVidPnSourceId(
        DXGK_INDEPENDENT_FLIP_VIDPNSOURCE_ITERATOR *this)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d

  if ( !*(_DWORD *)this )
  {
    WdLogSingleEntry1(1LL, 1872LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v4, v3, v5, 0, 2, -1, (__int64)L"vidPnSourceMask != 0", 80, 0, 0, 0, 0);
    }
  }
  return *((unsigned int *)this + 1);
}
