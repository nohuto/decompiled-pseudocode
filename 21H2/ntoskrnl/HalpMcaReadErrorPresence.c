/*
 * XREFs of HalpMcaReadErrorPresence @ 0x1403A0EE8
 * Callers:
 *     HalpCmcPollProcessor @ 0x1403A0C60 (HalpCmcPollProcessor.c)
 *     HalpMceHandlerCore @ 0x1404BB004 (HalpMceHandlerCore.c)
 *     HalpHandlePreviousMcaErrorsOnProcessor @ 0x1409A7D20 (HalpHandlePreviousMcaErrorsOnProcessor.c)
 * Callees:
 *     HalpWheaReadMsrStatus @ 0x1403A0F6C (HalpWheaReadMsrStatus.c)
 */

__int64 __fastcall HalpMcaReadErrorPresence(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = -1073741275;
  if ( !HalpMcaNumberOfBanks )
  {
    v7 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v7;
  }
  v4 = (unsigned __int8)HalpMcaNumberOfBanks;
  v5 = 0;
  v8 = 0LL;
  if ( HalpMcaNumberOfBanks )
  {
    while ( HalpWheaReadMsrStatus(a2, v5, &v8) >= 0 )
    {
      if ( ++v5 >= v4 )
        return v3;
    }
    return 0;
  }
  return v3;
}
