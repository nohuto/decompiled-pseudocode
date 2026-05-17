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

char __thiscall TppCancelWait(int this, char a2, _DWORD *a3)
{
  char v4; // bl
  int v6; // eax
  char v7; // al
  char v8; // al

  if ( !*(_DWORD *)(this + 224) )
  {
    v4 = 1;
LABEL_3:
    *a3 = 0;
    goto LABEL_4;
  }
  v6 = ZwCancelWaitCompletionPacket(*(_DWORD *)(this + 228), (a2 & 2) != 0);
  if ( v6 )
  {
    if ( v6 != 259 && v6 != -1073741536 )
      TppRaiseInvalidParameter();
    v8 = *(_BYTE *)(this + 292);
    v4 = 0;
    if ( (v8 & 4) == 0 )
    {
      *(_BYTE *)(this + 292) = v8 | 4;
      TppBarrierAdjust(0);
    }
    goto LABEL_3;
  }
  *(_DWORD *)(this + 224) = 0;
  v4 = 1;
  v7 = TppCancelTimer(1);
  *a3 = -1;
  if ( v7 )
    *a3 = -2;
  if ( (*(_BYTE *)(this + 292) & 4) != 0 )
  {
    TppBarrierAdjust(0);
    *(_BYTE *)(this + 292) &= ~4u;
  }
LABEL_4:
  *(_BYTE *)(this + 292) &= 0xFCu;
  return v4;
}
