/*
 * XREFs of Isoch_TransferUrb_MarkLatePackets @ 0x1C0043054
 * Callers:
 *     Isoch_RetrieveNextStage @ 0x1C0007C30 (Isoch_RetrieveNextStage.c)
 * Callees:
 *     Controller_GetFrameNumber @ 0x1C000AA60 (Controller_GetFrameNumber.c)
 *     Isoch_GetPacketLength @ 0x1C0042748 (Isoch_GetPacketLength.c)
 */

__int64 __fastcall Isoch_TransferUrb_MarkLatePackets(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // r15
  unsigned int v6; // ebx
  unsigned int FrameNumber; // r11d
  __int64 result; // rax
  unsigned int v9; // r14d
  int v10; // r10d

  v3 = (unsigned int)(*(_DWORD *)(a2 + 108) + *(_DWORD *)(a2 + 104));
  v5 = *(_QWORD *)(a2 + 48);
  v6 = *(_DWORD *)(v5 + 128) + (unsigned int)(v3 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356);
  FrameNumber = Controller_GetFrameNumber(*(_QWORD *)(a1 + 40), 2, 0LL, 0LL);
  result = (unsigned int)(*(_DWORD *)(a2 + 96) - v3 + *(_DWORD *)(a1 + 356) - 1) / *(_DWORD *)(a1 + 356);
  v9 = v6 + result;
  while ( v6 < v9 )
  {
    if ( v6 > FrameNumber )
    {
      result = v6 - FrameNumber;
      if ( (unsigned int)result < 0x7FFFFFFF )
        break;
    }
    if ( *(_DWORD *)(a1 + 356) )
    {
      do
      {
        *(_DWORD *)(v5 + 12 * v3 + 148) = -1073414144;
        result = Isoch_GetPacketLength(a2, v3);
        *(_DWORD *)(a2 + 92) += result;
        v3 = (unsigned int)(v3 + 1);
        ++*(_DWORD *)(a2 + 108);
      }
      while ( (unsigned int)(v10 + 1) < *(_DWORD *)(a1 + 356) );
    }
    ++v6;
  }
  return result;
}
