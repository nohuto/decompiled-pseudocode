/*
 * XREFs of DxgkGetAdapterMiracastInfo @ 0x1C0054594
 * Callers:
 *     DxgkEscape @ 0x1C00F8350 (DxgkEscape.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015AF6C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkGetAdapterMiracastInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  int v4; // eax
  unsigned int v5; // edx
  int v6; // ecx
  int v7; // edx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 64);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_DWORD *)(a2 + 24) = 128;
  v4 = (*(_DWORD *)(v2 + 3224) != -1) + 128;
  *(_DWORD *)(a2 + 24) = v4;
  if ( (v4 & 1) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    *(_DWORD *)(a2 + 24) ^= (*(_DWORD *)(a2 + 24) ^ (2 * *(_DWORD *)(v2 + 3220))) & 2;
    v5 = *(_DWORD *)(a2 + 24) & 0xFFFFFFFB | (*(_QWORD *)(v2 + 3232) != 0LL ? 4 : 0);
    *(_DWORD *)(a2 + 24) = v5;
    if ( (v5 & 4) != 0 )
    {
      v6 = v5 ^ ((unsigned __int8)v5 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 8;
      *(_DWORD *)(a2 + 24) = v6;
      v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 0x10;
      *(_DWORD *)(a2 + 24) = v7;
      *(_DWORD *)(a2 + 24) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(8
                                                                         * *(_DWORD *)(*(_QWORD *)(v2 + 3232) + 600LL))) & 0x20;
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 608LL);
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 616LL);
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(*(_QWORD *)(v2 + 3232) + 624LL);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    *(_DWORD *)(a2 + 24) = v4;
  }
}
