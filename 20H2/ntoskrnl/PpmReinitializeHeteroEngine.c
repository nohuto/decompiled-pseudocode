/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x1407B4E88
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1403A2A40 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsBackupInit @ 0x1403CD224 (PpmHeteroHgsBackupInit.c)
 *     PpmHeteroHgsUpdateWorker @ 0x140576190 (PpmHeteroHgsUpdateWorker.c)
 *     PpmCheckInitProcessors @ 0x1407B4EB8 (PpmCheckInitProcessors.c)
 *     PpmRegisterPerfStates @ 0x1407B5080 (PpmRegisterPerfStates.c)
 *     PpmEnableProfile @ 0x1407C1914 (PpmEnableProfile.c)
 *     PopPpmHeteroPolicyCallback @ 0x1407CF810 (PopPpmHeteroPolicyCallback.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407D0610 (PopSetupHighPerfPowerRequest.c)
 *     PpmUpdatePerfStates @ 0x1408E8D90 (PpmUpdatePerfStates.c)
 *     PpmDisableProfile @ 0x1408F8488 (PpmDisableProfile.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x1407B5AA0 (PpmReapplyPerfPolicy.c)
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
