/*
 * XREFs of IvtInvalidateContextEntry @ 0x1404DEC90
 * Callers:
 *     IvtInvalidateExtendedContextEntry @ 0x1404DECEC (IvtInvalidateExtendedContextEntry.c)
 *     IvtUpdateContextEntry @ 0x1404DF1AC (IvtUpdateContextEntry.c)
 * Callees:
 *     IvtIommuSendCommand @ 0x1404DEE20 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404DF020 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateContextEntry(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4, char a5)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = 0LL;
  v8[0] = ((a3 | ((unsigned __int64)a2 << 16)) << 16) | 0x31;
  result = IvtIommuSendCommand(a1, v8, 1LL);
  if ( a5 )
    return IvtIommuWaitCommand(a1, v7, 1LL);
  return result;
}
