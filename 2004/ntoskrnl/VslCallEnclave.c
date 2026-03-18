/*
 * XREFs of VslCallEnclave @ 0x14088BB04
 * Callers:
 *     PsCallEnclave @ 0x140909E00 (PsCallEnclave.c)
 * Callees:
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     KeAlertThreadByThreadId @ 0x14027D880 (KeAlertThreadByThreadId.c)
 *     MmUnlockPages @ 0x140283990 (MmUnlockPages.c)
 *     VslpEnterIumSecureMode @ 0x1402E56B0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall VslCallEnclave(
        __int64 a1,
        int *a2,
        _QWORD *a3,
        int a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _BYTE *a9)
{
  __int64 CurrentThread; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // rdx
  __int64 MemoryDescriptorList; // [rsp+40h] [rbp-F8h] BYREF
  __int16 MemoryDescriptorList_8; // [rsp+48h] [rbp-F0h]
  __int16 MemoryDescriptorList_10; // [rsp+4Ah] [rbp-EEh]
  __int128 MemoryDescriptorList_12; // [rsp+4Ch] [rbp-ECh]
  int MemoryDescriptorList_28; // [rsp+5Ch] [rbp-DCh]
  unsigned __int64 MemoryDescriptorList_32; // [rsp+60h] [rbp-D8h]
  int MemoryDescriptorList_40; // [rsp+68h] [rbp-D0h]
  _BYTE MemoryDescriptorList_44[12]; // [rsp+6Ch] [rbp-CCh]
  _QWORD v25[14]; // [rsp+80h] [rbp-B8h] BYREF

  memset(v25, 0, 0x68uLL);
  MemoryDescriptorList_12 = 0LL;
  MemoryDescriptorList_28 = 0;
  *(_DWORD *)&MemoryDescriptorList_44[8] = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  MemoryDescriptorList = 0LL;
  MemoryDescriptorList_8 = 8 * (((unsigned __int16)((CurrentThread & 0xFFF) + 6295) >> 12) + 6);
  MemoryDescriptorList_10 = 0;
  MemoryDescriptorList_32 = CurrentThread & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)MemoryDescriptorList_44 = CurrentThread & 0xFFF;
  MemoryDescriptorList_40 = 2200;
  MmProbeAndLockPages((PMDL)&MemoryDescriptorList, 0, IoWriteAccess);
  LODWORD(v25[1]) = a4;
  HIDWORD(v25[1]) = *(_DWORD *)(a1 + 40);
  v25[2] = *a3;
  v25[3] = *a5;
  v25[4] = *(_QWORD *)&MemoryDescriptorList_44[4];
  BYTE4(v25[7]) = 0;
  v25[5] = *a6;
  v25[6] = *a7;
  v12 = VslpEnterIumSecureMode(1u, 0, *a2, (__int64)v25);
  if ( v12 < 0 )
  {
    *a9 = 0;
  }
  else
  {
    *a2 = HIDWORD(v25[0]);
    *a3 = v25[2];
    *a5 = v25[3];
    *a8 = v25[7];
    *a6 = v25[5];
    *a7 = v25[6];
    *a9 = BYTE5(v25[7]);
  }
  MmUnlockPages((PMDL)&MemoryDescriptorList);
  if ( BYTE4(v25[7]) )
    KeAlertThreadByThreadId(CurrentThread, v13);
  return (unsigned int)v12;
}
