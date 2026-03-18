/*
 * XREFs of VidSchiFlushPendingFlips @ 0x1C00D1208
 * Callers:
 *     VidSchiSetFlipDevice @ 0x1C0002924 (VidSchiSetFlipDevice.c)
 * Callees:
 *     memset @ 0x1C0016E40 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C008069C (VidSchiWaitFlushCompletion.c)
 */

char __fastcall VidSchiFlushPendingFlips(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  int *v5; // rdi
  int v6; // eax
  _QWORD v8[20]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v9[20]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2 + 2344;
  if ( *(_DWORD *)(a2 + 2344) )
  {
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[4]) |= 0x10u;
    LODWORD(v8[2]) = 3;
    v8[5] = v2;
    VidSchiWaitFlushCompletion(a1, (__int64)v8, 0x17u);
  }
  v5 = (int *)(a2 + 2348);
  v6 = *v5;
  if ( *v5 && !*(_BYTE *)(a1 + 2912) )
  {
    memset(v9, 0, sizeof(v9));
    LODWORD(v9[4]) |= 0x10u;
    LODWORD(v9[2]) = 1;
    v9[5] = v5;
    LOBYTE(v6) = VidSchiWaitFlushCompletion(a1, (__int64)v9, 0x17u);
  }
  return v6;
}
