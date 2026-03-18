/*
 * XREFs of KiFlushCurrentTbWorker @ 0x140338630
 * Callers:
 *     KxFlushEntireTb @ 0x14021E6D0 (KxFlushEntireTb.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbWorker(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v5; // rcx

  if ( KiFlushPcid )
  {
    v2 = __readcr3();
    __writecr3(v2);
    result = KeGetCurrentThread();
    Process = result->ApcState.Process;
    if ( !Process->AddressPolicy )
      return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, a2);
  }
  else
  {
    v5 = __readcr4();
    if ( (v5 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v5 ^ 0x80);
      __writecr4(v5 ^ 0x80);
      __writecr4(v5);
    }
    else
    {
      result = (struct _KTHREAD *)__readcr3();
      __writecr3((unsigned __int64)result);
    }
  }
  return result;
}
