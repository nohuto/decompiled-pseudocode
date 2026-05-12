/*
 * XREFs of RiGetEnqueueReason @ 0x1C000B340
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C000B000 (RaidInsertDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000B44C (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiIsDeviceQueueBusy @ 0x1C000B420 (RiIsDeviceQueueBusy.c)
 *     RiPeekDeviceQueue @ 0x1C000B538 (RiPeekDeviceQueue.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, __int64 a3)
{
  int IsDeviceQueueBusy; // eax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  int v7; // r8d
  __int64 v8; // rax
  char v9; // al
  bool v11; // zf
  int v12; // eax

  LOBYTE(a2) = a3;
  IsDeviceQueueBusy = RiIsDeviceQueueBusy(a1, a2, a3, a1);
  LOBYTE(v7) = 0;
  if ( IsDeviceQueueBusy )
    return 1LL;
  if ( *(_BYTE *)(v5 + 37) && (*(_BYTE *)(v6 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v5 + 36) && (*(_BYTE *)(v6 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v5 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v5 + 38) )
    return 5LL;
  if ( *(_DWORD *)(v5 + 20) || *(_DWORD *)(v5 + 16) )
  {
    v8 = RiPeekDeviceQueue(v5, v4, 0LL);
    if ( v6 != v8 )
    {
      v11 = (*(_BYTE *)(v8 + 22) & 1) == 0;
      v12 = v7;
      if ( !v11 )
        LOBYTE(v12) = (*(_BYTE *)(v6 + 22) & 6) == 0;
      if ( v12 )
        return 6LL;
    }
  }
  v9 = *(_BYTE *)(v6 + 22);
  if ( (v9 & 1) != 0 && *(int *)(v5 + 76) >= 1 )
    return 7LL;
  if ( *(_BYTE *)(v5 + 39) != (_BYTE)v7 && (v9 & 8) == 0 )
    return 8LL;
  if ( (v9 & 0x10) != 0 )
    return 9LL;
  return (v9 & 0x40) != 0 ? 0xA : 0;
}
