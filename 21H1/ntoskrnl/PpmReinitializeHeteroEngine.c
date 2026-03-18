/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1407A4748
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x14039FDE0 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403C9804 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140572110 (PpmHeteroHgsUpdateWorker.c)
 *     PpmCheckInitProcessors @ 0x1407A4778 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407A4940 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1407B0854 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407BDD60 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407BEB20 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408E1CD0 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408F1588 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1407A5360 (PpmReapplyPerfPolicy.c)
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
