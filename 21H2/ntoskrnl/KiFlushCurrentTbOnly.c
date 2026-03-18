/*
 * XREFs of KiFlushCurrentTbOnly @ 0x1403A35B8
 * Callers:
 *     KeFlushTb @ 0x1402F391C (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403AD034 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x140420AD0 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v7; // rcx

  if ( KiKvaShadow )
  {
    if ( !a1 || a1 == 2 )
      goto LABEL_7;
  }
  else if ( a1 && a1 <= 2 )
  {
    goto LABEL_7;
  }
  if ( !KiFlushPcid )
  {
    v7 = __readcr4();
    if ( (v7 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v7 ^ 0x80);
      __writecr4(v7 ^ 0x80);
      __writecr4(v7);
      return result;
    }
LABEL_7:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  v4 = __readcr3();
  __writecr3(v4);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL, a3, a4);
  return result;
}
