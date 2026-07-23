/*
 * XREFs of PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x1408B8E78
 * Callers:
 *     PnpRecordBlackbox @ 0x14066ACF0 (PnpRecordBlackbox.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxDelayedRemoveWorkerInformation(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 v2; // rdi
  __int64 v4; // rbp
  _DWORD *PoolWithTag; // rax
  _QWORD InputBuffer[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v7; // [rsp+40h] [rbp-18h]
  int v8; // [rsp+48h] [rbp-10h]
  int v9; // [rsp+4Ch] [rbp-Ch]

  v7 = 0LL;
  v9 = 0;
  v1 = 0LL;
  v2 = 0LL;
  v4 = MEMORY[0xFFFFF78000000008];
  if ( a1 )
  {
    v2 = 64LL;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4B706E50u);
    v1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x40uLL);
      *v1 = 1;
      v1[1] = 64;
      v1[3] = (v4 - **(_QWORD **)(a1 + 24)) / 0x2710uLL;
      *((_QWORD *)v1 + 3) = *(_QWORD *)(a1 + 8);
      *((_QWORD *)v1 + 4) = *(_QWORD *)(a1 + 16);
      *((_QWORD *)v1 + 2) = *(_QWORD *)a1;
      *((_QWORD *)v1 + 5) = PnpDeviceEventThread;
      *((_QWORD *)v1 + 6) = PnpDeviceActionThread[0];
      *((_QWORD *)v1 + 7) = PnpDelayedRemoveWorkerThread;
    }
  }
  v7 = 0LL;
  v9 = 0;
  v8 = 11;
  InputBuffer[0] = v1;
  InputBuffer[1] = v2;
  NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x4B706E50u);
}
