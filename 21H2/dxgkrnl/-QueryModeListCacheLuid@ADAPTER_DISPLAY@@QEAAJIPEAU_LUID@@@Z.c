/*
 * XREFs of ?QueryModeListCacheLuid@ADAPTER_DISPLAY@@QEAAJIPEAU_LUID@@@Z @ 0x1C001EA94
 * Callers:
 *     DxgkQueryModeListCacheLuid @ 0x1C01E7910 (DxgkQueryModeListCacheLuid.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::QueryModeListCacheLuid(DXGADAPTER **this, unsigned int a2, struct _LUID *a3)
{
  __int64 v4; // rdi
  DXGADAPTER *v6; // rcx
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v4 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry1(1LL, 6240LL);
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
          (__int64)L"IsCoreResourceSharedOwner()",
          6240LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (unsigned int)v4 >= *((_DWORD *)this + 24) )
  {
    WdLogSingleEntry1(1LL, 6241LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0,
          2,
          -1,
          (__int64)L"VidPnSourceId < m_NumVidPnSources",
          6241LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( !*((_BYTE *)this + 292) )
    return 3221225473LL;
  v6 = this[16];
  if ( !*((_BYTE *)v6 + 4000 * v4 + 1116) )
    return 3221225473LL;
  *a3 = *(struct _LUID *)((char *)v6 + 4000 * v4 + 1124);
  return 0LL;
}
