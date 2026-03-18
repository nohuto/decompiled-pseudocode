/*
 * XREFs of PiSwPnPInfoInit @ 0x140764758
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1409539A8 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     PnpAllocateMultiSZ @ 0x140764814 (PnpAllocateMultiSZ.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiSwPnPInfoInit(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _OWORD *Pool2; // rax

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 64);
  result = PnpAllocateMultiSZ(*(void **)(a2 + 32));
  if ( (int)result >= 0 )
  {
    result = PnpAllocateMultiSZ(*(void **)(a2 + 48));
    if ( (int)result >= 0 )
    {
      if ( *(_QWORD *)(a2 + 56) )
      {
        Pool2 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 1466986064LL);
        *(_QWORD *)(a1 + 16) = Pool2;
        if ( !Pool2 )
          return 3221225626LL;
        *Pool2 = *(_OWORD *)*(_QWORD *)(a2 + 56);
      }
      result = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 72));
      if ( (int)result >= 0 )
        return PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(a2 + 80));
    }
  }
  return result;
}
