/*
 * XREFs of KeFindConfigurationEntry @ 0x140A92FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeFindConfigurationNextEntry @ 0x140A653A0 (KeFindConfigurationNextEntry.c)
 */

__int64 __fastcall KeFindConfigurationEntry(__int64 a1, int a2, int a3, int *a4)
{
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0LL;
  return KeFindConfigurationNextEntry(a1, a2, a3, a4, v5);
}
