/*
 * XREFs of KdpReadPhysicalMemory @ 0x1409B8870
 * Callers:
 *     KdpReadPhysicalMemoryLong @ 0x1409B89C0 (KdpReadPhysicalMemoryLong.c)
 *     KdpSendWaitContinue @ 0x1409B94F4 (KdpSendWaitContinue.c)
 * Callees:
 *     RunLengthEncode @ 0x1405118D8 (RunLengthEncode.c)
 *     MmDbgCopyMemory @ 0x140546CDC (MmDbgCopyMemory.c)
 *     KdpCopyMemoryChunks @ 0x1409BAB9C (KdpCopyMemoryChunks.c)
 */

__int64 __fastcall KdpReadPhysicalMemory(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  _QWORD v16[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v17 = a3;
  v4 = *(unsigned int *)(a1 + 24);
  v16[0] = 56LL;
  v16[1] = a1;
  if ( v4 > (unsigned __int64)(unsigned int)KdTransportMaxPacketSize - 56 )
    LODWORD(v4) = KdTransportMaxPacketSize - 56;
  v8 = *(unsigned __int16 *)(a2 + 2);
  v9 = 6;
  v10 = *(_DWORD *)(a1 + 28);
  if ( (unsigned int)v4 > v8 )
    LODWORD(v4) = v8;
  LODWORD(v17) = v4;
  v11 = v10 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v9 = 38;
    }
    else
    {
      v9 = 22;
    }
  }
  else
  {
    v9 = 14;
  }
  if ( *(_DWORD *)a1 == 12642 )
  {
    if ( (unsigned int)v4 > 4096 - (*(_DWORD *)(a1 + 16) & 0xFFFu) )
      LODWORD(v4) = 4096 - (*(_DWORD *)(a1 + 16) & 0xFFF);
    v13 = MmDbgCopyMemory(*(char **)(a1 + 16), *(_BYTE **)(a2 + 8), v4, 0, v9);
    *(_DWORD *)(a1 + 8) = v13;
    if ( v13 < 0 )
      LODWORD(v4) = 0;
  }
  else
  {
    v14 = KdpCopyMemoryChunks(*(PVOID *)(a1 + 16), v9, (__int64)&v17);
    LODWORD(v4) = v17;
    *(_DWORD *)(a1 + 8) = v14;
  }
  *(_DWORD *)(a1 + 28) = v4;
  if ( *(_DWORD *)a1 == 12642 && (unsigned int)v4 >= 4 && RunLengthEncode(*(int **)(a2 + 8), v4) )
  {
    *(_DWORD *)(a1 + 28) = ((unsigned int)v4 >> 2) | 0x40000000;
    LOWORD(v4) = 4;
  }
  *(_WORD *)a2 = v4;
  return KdSendPacket(2LL, v16, a2, a4);
}
