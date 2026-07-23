/*
 * XREFs of _TppCancelWait@16 @ 0x4B2B7B98
 * Callers:
 *     _TpWaitForWait@8 @ 0x4B2B1D80 (_TpWaitForWait@8.c)
 *     _TpReleaseWait@4 @ 0x4B2B1E70 (_TpReleaseWait@4.c)
 *     _TpSetWaitEx@16 @ 0x4B2B7AB0 (_TpSetWaitEx@16.c)
 *     _TppStopWaitCallbackGeneration@8 @ 0x4B3843E0 (_TppStopWaitCallbackGeneration@8.c)
 * Callees:
 *     _TppCancelTimer@12 @ 0x4B2B7D76 (_TppCancelTimer@12.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _ZwCancelWaitCompletionPacket@8 @ 0x4B2F32D0 (_ZwCancelWaitCompletionPacket@8.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 */

char __fastcall TppCancelWait(int a1, int a2, char a3, _DWORD *a4)
{
  char v6; // bl
  NTSTATUS v8; // eax
  char v9; // al
  char v10; // al

  if ( !*(_DWORD *)(a1 + 224) )
  {
    v6 = 1;
LABEL_3:
    *a4 = 0;
    goto LABEL_4;
  }
  v8 = ZwCancelWaitCompletionPacket(*(HANDLE *)(a1 + 228), (a3 & 2) != 0);
  if ( v8 )
  {
    if ( v8 != 259 && v8 != -1073741536 )
      TppRaiseInvalidParameter();
    v10 = *(_BYTE *)(a1 + 292);
    v6 = 0;
    if ( (v10 & 4) == 0 )
    {
      *(_BYTE *)(a1 + 292) = v10 | 4;
      TppBarrierAdjust(0);
    }
    goto LABEL_3;
  }
  *(_DWORD *)(a1 + 224) = 0;
  v6 = 1;
  v9 = TppCancelTimer(a1, a2, 1);
  *a4 = -1;
  if ( v9 )
    *a4 = -2;
  if ( (*(_BYTE *)(a1 + 292) & 4) != 0 )
  {
    TppBarrierAdjust(0);
    *(_BYTE *)(a1 + 292) &= ~4u;
  }
LABEL_4:
  *(_BYTE *)(a1 + 292) &= 0xFCu;
  return v6;
}
