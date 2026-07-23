/*
 * XREFs of _TppTerminateProcess@4 @ 0x4B38492C
 * Callers:
 *     _TppWorkerpInnerExceptionFilter@12 @ 0x4B385109 (_TppWorkerpInnerExceptionFilter@12.c)
 *     _TppWorkerpOuterExceptionFilter@8 @ 0x4B38516A (_TppWorkerpOuterExceptionFilter@8.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 */

NTSTATUS __thiscall TppTerminateProcess(NTSTATUS **this)
{
  return ZwTerminateProcess((HANDLE)0xFFFFFFFF, **this);
}
