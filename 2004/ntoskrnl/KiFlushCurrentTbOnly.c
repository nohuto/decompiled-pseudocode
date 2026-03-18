/*
 * XREFs of KiFlushCurrentTbOnly @ 0x140394BEC
 * Callers:
 *     KeFlushTb @ 0x14021E550 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B4498 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1403F82A0 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1)
{
  unsigned __int64 v1; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v4; // rcx

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
    v4 = __readcr4();
    if ( (v4 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v4 ^ 0x80);
      __writecr4(v4 ^ 0x80);
      __writecr4(v4);
      return result;
    }
LABEL_7:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  v1 = __readcr3();
  __writecr3(v1);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL);
  return result;
}
