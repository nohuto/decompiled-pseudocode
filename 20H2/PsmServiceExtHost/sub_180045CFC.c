/*
 * XREFs of sub_180045CFC @ 0x180045CFC
 * Callers:
 *     sub_180013210 @ 0x180013210 (sub_180013210.c)
 *     sub_180032330 @ 0x180032330 (sub_180032330.c)
 *     sub_180035368 @ 0x180035368 (sub_180035368.c)
 *     PsmInitializeServiceExtension4 @ 0x18003F370 (PsmInitializeServiceExtension4.c)
 *     sub_180040C14 @ 0x180040C14 (sub_180040C14.c)
 *     sub_180040EF0 @ 0x180040EF0 (sub_180040EF0.c)
 *     sub_1800411AC @ 0x1800411AC (sub_1800411AC.c)
 *     sub_18006EB6C @ 0x18006EB6C (sub_18006EB6C.c)
 *     sub_180077F2C @ 0x180077F2C (sub_180077F2C.c)
 * Callees:
 *     ApiSetQueryApiSetPresence @ 0x180045900 (ApiSetQueryApiSetPresence.c)
 */

char sub_180045CFC()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_1800B3C90 == 1 )
    return 1;
  if ( dword_1800B3C90 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence((__int64)L"68", (__int64)&v1) < 0 )
    return 0;
  result = v1;
  dword_1800B3C90 = 2 - (v1 != 0);
  return result;
}
