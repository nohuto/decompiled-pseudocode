/*
 * XREFs of KiFlushCurrentTbOnly @ 0x1403975CC
 * Callers:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     KiSetUserTbFlushPending @ 0x1403FF6D0 (KiSetUserTbFlushPending.c)
 */

struct _KTHREAD *__fastcall KiFlushCurrentTbOnly(int a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  struct _KTHREAD *result; // rax
  _KPROCESS *Process; // rcx
  unsigned __int64 v6; // rcx

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
    v6 = __readcr4();
    if ( (v6 & 0x20080) != 0 )
    {
      result = (struct _KTHREAD *)(v6 ^ 0x80);
      __writecr4(v6 ^ 0x80);
      __writecr4(v6);
      return result;
    }
LABEL_7:
    result = (struct _KTHREAD *)__readcr3();
    __writecr3((unsigned __int64)result);
    return result;
  }
  v3 = __readcr3();
  __writecr3(v3);
  result = KeGetCurrentThread();
  Process = result->ApcState.Process;
  if ( !Process->AddressPolicy )
    return (struct _KTHREAD *)KiSetUserTbFlushPending(Process, 0LL, a3);
  return result;
}
