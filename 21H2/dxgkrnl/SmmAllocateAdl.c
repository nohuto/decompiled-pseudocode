/*
 * XREFs of SmmAllocateAdl @ 0x1C006EDB8
 * Callers:
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x1C006F3E0 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

_QWORD *__fastcall SmmAllocateAdl(unsigned int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  _QWORD *Pool2; // rbx
  __int64 v9; // r9
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  _QWORD *v13; // rax
  int v14; // edx
  int v15; // ecx
  int v16; // r8d

  v6 = 0LL;
  v7 = 24LL;
  if ( !a2 )
    v7 = 8LL * a1 + 24;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, v7, 846428228LL, a4);
  if ( !Pool2 )
  {
    _InterlockedIncrement(&dword_1C0130B5C);
    WdLogSingleEntry1(6LL, 112LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v11,
          v10,
          v12,
          0LL,
          1,
          -1,
          L"Failed to allocate SYSMM_ADL",
          112LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
    return 0LL;
  }
  if ( (dword_1C0130B08 & 0x20) != 0 )
  {
    v13 = (_QWORD *)ExAllocatePool2(64LL, 32LL, 846428228LL, v9);
    v6 = v13;
    if ( !v13 )
    {
      _InterlockedIncrement(&dword_1C0130B60);
      WdLogSingleEntry1(6LL, 121LL);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v15,
          v14,
          v16,
          0LL,
          1,
          -1,
          L"Failed to allocate SYSMM_ADL_DEBUG",
          121LL,
          0LL,
          0LL,
          0LL,
          0LL);
      ExFreePoolWithTag(Pool2, 0);
      return 0LL;
    }
    *v13 = 0LL;
    v13[2] = 0LL;
    v13[3] = Pool2;
  }
  *Pool2 = v6;
  *((_DWORD *)Pool2 + 2) = a1;
  *((_DWORD *)Pool2 + 3) = a2 == 1;
  if ( (unsigned int)(a2 - 1) > 1 )
    Pool2[2] = Pool2 + 3;
  else
    Pool2[2] = 0LL;
  return Pool2;
}
