/*
 * XREFs of ??1DXGSHAREDVMOBJECT@@AEAA@XZ @ 0x1C005CBD4
 * Callers:
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGSHAREDVMOBJECT::~DXGSHAREDVMOBJECT(DXGSHAREDVMOBJECT *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  int v7; // r8d

  if ( *((_QWORD *)this + 1) )
  {
    WdLogSingleEntry1(1LL, 140LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v3,
          v2,
          v4,
          0LL,
          2,
          -1,
          L"NULL == m_pDxgkObject",
          140LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry1(1LL, 141LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(v6, v5, v7, 0LL, 2, -1, L"0 == m_Reference", 141LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
}
