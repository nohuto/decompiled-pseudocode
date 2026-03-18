/*
 * XREFs of ?AdjustRequiredPermission@DXGPROCESSMUTEXBYHANDLE@@QEAAXK@Z @ 0x1C0049780
 * Callers:
 *     DxgkQueryVidPnExclusiveOwnership @ 0x1C01ECBE0 (DxgkQueryVidPnExclusiveOwnership.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

void __fastcall DXGPROCESSMUTEXBYHANDLE::AdjustRequiredPermission(DXGPROCESSMUTEXBYHANDLE *this)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d

  if ( *((_BYTE *)this + 28) )
  {
    WdLogSingleEntry1(1LL, 1690LL);
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
          L"m_Acquired == FALSE",
          1690LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  *((_DWORD *)this + 6) = 1024;
}
