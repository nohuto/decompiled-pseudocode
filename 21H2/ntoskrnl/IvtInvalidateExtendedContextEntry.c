/*
 * XREFs of IvtInvalidateExtendedContextEntry @ 0x1404E093C
 * Callers:
 *     IvtUpdateExtendedContextEntry @ 0x1404E0FB0 (IvtUpdateExtendedContextEntry.c)
 * Callees:
 *     IvtInvalidateContextEntry @ 0x1404E08E0 (IvtInvalidateContextEntry.c)
 *     IvtIommuSendCommand @ 0x1404E0A70 (IvtIommuSendCommand.c)
 *     IvtIommuWaitCommand @ 0x1404E0C70 (IvtIommuWaitCommand.c)
 */

__int64 __fastcall IvtInvalidateExtendedContextEntry(__int64 a1, unsigned __int16 a2, unsigned __int16 a3, __int64 a4)
{
  __int64 v6; // rdx
  unsigned __int64 v8; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-10h]

  IvtInvalidateContextEntry(a1, a2, a3, a4, 0);
  v9 = 0LL;
  v8 = 7LL;
  IvtIommuSendCommand(a1, &v8, 1LL);
  v9 = 0LL;
  v8 = 6LL;
  IvtIommuSendCommand(a1, &v8, 1LL);
  v8 = ((unsigned __int64)a2 << 32) | 3;
  v9 = 0x8000000000000001uLL;
  IvtIommuSendCommand(a1, &v8, 1LL);
  return IvtIommuWaitCommand(a1, v6, 1LL);
}
