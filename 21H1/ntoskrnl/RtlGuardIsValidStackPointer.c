/*
 * XREFs of RtlGuardIsValidStackPointer @ 0x1406F2D20
 * Callers:
 *     KiContinuePreviousModeUser @ 0x14032F2E0 (KiContinuePreviousModeUser.c)
 *     KeVerifyContextRecord @ 0x14032FB88 (KeVerifyContextRecord.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlGuardIsValidStackPointer(unsigned __int64 a1, _QWORD *Teb)
{
  struct _KTHREAD *CurrentThread; // rdx

  if ( !Teb )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
      Teb = 0LL;
    else
      Teb = CurrentThread->Teb;
  }
  return a1 >= Teb[2] && a1 <= Teb[1];
}
