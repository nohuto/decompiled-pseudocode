/*
 * XREFs of VidSchiFlushPendingHWSubmittedFlips @ 0x1C001C29C
 * Callers:
 *     VidSchiSuspendFlipQueues @ 0x1C00ABA9C (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     memset @ 0x1C001DC40 (memset.c)
 *     VidSchiWaitFlushCompletion @ 0x1C009A288 (VidSchiWaitFlushCompletion.c)
 */

__int64 __fastcall VidSchiFlushPendingHWSubmittedFlips(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int *v5; // rbx
  __int64 result; // rax
  _QWORD v7[40]; // [rsp+28h] [rbp-E0h] BYREF

  v2 = a2 + 3000;
  if ( *(_DWORD *)(a2 + 3000) )
  {
    memset(v7, 0, 0xA0uLL);
    LODWORD(v7[4]) |= 0x10u;
    LODWORD(v7[2]) = 3;
    v7[5] = v2;
    VidSchiWaitFlushCompletion(a1);
  }
  v5 = (unsigned int *)(a2 + 2996);
  result = *v5;
  if ( (_DWORD)result )
  {
    memset(&v7[20], 0, 0xA0uLL);
    LODWORD(v7[24]) |= 0x10u;
    LODWORD(v7[22]) = 1;
    v7[25] = v5;
    return VidSchiWaitFlushCompletion(a1);
  }
  return result;
}
