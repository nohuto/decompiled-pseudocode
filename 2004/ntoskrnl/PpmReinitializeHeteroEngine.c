/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1407A6E98
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1403A0570 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CA5E4 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140572760 (PpmHeteroHgsUpdateWorker.c)
 *     PpmCheckInitProcessors @ 0x1407A6EC8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A7090 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1407B39C4 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407C0F80 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C1E10 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408E2F50 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408F2878 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1407A7AB0 (PpmReapplyPerfPolicy.c)
 */

__int64 __fastcall PpmReinitializeHeteroEngine(char a1)
{
  int v1; // eax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v1 = 2048;
  else
    v1 = 4096;
  v3 = v1;
  return PpmReapplyPerfPolicy(&v3);
}
