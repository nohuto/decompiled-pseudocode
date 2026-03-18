/*
 * XREFs of VidSchiFlushPendingHWSubmittedFlips @ 0x1C002F7E4
 * Callers:
 *     VidSchiSuspendFlipQueues @ 0x1C00D1920 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C00695DC (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingHWSubmittedFlips(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int *v5; // rbx
  __int64 result; // rax
  _QWORD v7[20]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v8[20]; // [rsp+C8h] [rbp-40h] BYREF

  v2 = a2 + 2352;
  if ( *(_DWORD *)(a2 + 2352) )
  {
    memset(v7, 0, sizeof(v7));
    LODWORD(v7[4]) |= 0x10u;
    LODWORD(v7[2]) = 3;
    v7[5] = v2;
    VidSchiWaitFlushCompletion(a1, v7, 23LL);
  }
  v5 = (unsigned int *)(a2 + 2348);
  result = *v5;
  if ( (_DWORD)result )
  {
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[4]) |= 0x10u;
    LODWORD(v8[2]) = 1;
    v8[5] = v5;
    return VidSchiWaitFlushCompletion(a1, v8, 23LL);
  }
  return result;
}
