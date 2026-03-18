/*
 * XREFs of ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C001A49C
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0159A40 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C017D520 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

DXGPRESENTMUTEX *__fastcall DXGPRESENTMUTEX::DXGPRESENTMUTEX(DXGPRESENTMUTEX *this, struct ADAPTER_RENDER *const a2)
{
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  *((_QWORD *)this + 1) = a2;
  *((_BYTE *)this + 16) = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 7655LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v5,
          v4,
          v6,
          0,
          2,
          -1,
          (__int64)L"m_pRenderCore != NULL",
          7655LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 1) + 688LL) == KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 7660LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0,
          2,
          -1,
          (__int64)L"!m_pRenderCore->m_PresentMutex.IsOwner()",
          7660LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  return this;
}
