/*
 * XREFs of ?NotifyISMPenButtonYieldSettingChange@@YAXXZ @ 0x1C01D6B50
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C003E1F8 (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     <none>
 */

void NotifyISMPenButtonYieldSettingChange(void)
{
  int v0; // [rsp+30h] [rbp+8h] BYREF
  BOOL v1; // [rsp+34h] [rbp+Ch]

  v0 = 2;
  v1 = (HIDWORD(gpdwCPUserPreferencesMask) & 0x200) == 0;
  SendMessageTo(17LL, &v0);
}
