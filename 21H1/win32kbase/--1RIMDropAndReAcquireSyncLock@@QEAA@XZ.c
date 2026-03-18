/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C0050A10
 * Callers:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C009DDE0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     RIMDeviceIoControl @ 0x1C00A3290 (RIMDeviceIoControl.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 */

void __fastcall RIMDropAndReAcquireSyncLock::~RIMDropAndReAcquireSyncLock(PVOID *this)
{
  char *v2; // rcx

  v2 = (char *)*this;
  if ( v2 )
  {
    RIMLockExclusive(v2 + 104);
    ObfDereferenceObject(*this);
  }
}
