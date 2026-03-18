/*
 * XREFs of PostEvent @ 0x1C01A9808
 * Callers:
 *     ?SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActivationObject@@@Z @ 0x1C012AA2C (-SetForeground@CActivationObjectManager@@AEAAJ_NW4ACTIVATIONOBJECTSTATECHANGE_REASON@@PEAVCActiv.c)
 *     NtMITPostWindowEventMessage @ 0x1C012DE90 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C005541C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0055474 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     EditionPostInputEvent @ 0x1C00B3A24 (EditionPostInputEvent.c)
 */

char PostEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, ...)
{
  va_list va; // [rsp+78h] [rbp+30h] BYREF

  va_start(va, a5);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)va);
  LOBYTE(a4) = (unsigned int)EditionPostInputEvent(30LL, a1, a2, a3, a4, a5) != 0;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)va);
  return a4;
}
