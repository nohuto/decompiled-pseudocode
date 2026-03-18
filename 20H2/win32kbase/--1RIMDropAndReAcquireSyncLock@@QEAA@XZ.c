/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C00223E0
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0024840 (RIMDeviceIoControl.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00251C0 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0036330 (RIMLockExclusive.c)
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
