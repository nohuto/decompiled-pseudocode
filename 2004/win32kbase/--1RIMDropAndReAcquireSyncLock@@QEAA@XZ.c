/*
 * XREFs of ??1RIMDropAndReAcquireSyncLock@@QEAA@XZ @ 0x1C005E510
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0064040 (RIMDeviceIoControl.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C00AFD40 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
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
