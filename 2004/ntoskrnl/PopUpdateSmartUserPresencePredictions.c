/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x1408F231C
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x14075FBB0 (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x1408E0BB0 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14037F914 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x140576DD8 (PopIdleArmAoAcDozeS4Timer.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(unsigned __int64 a1, unsigned int a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( !byte_140C238ED && a1 >= MEMORY[0xFFFFF78000000014] && MEMORY[0xFFFFF78000000014] - a1 >= 0x10C388D000LL )
    v2 = a1;
  if ( qword_140C22DA8 != v2 )
  {
    qword_140C22DA8 = v2;
    if ( PopSmartUserPresenceAction )
    {
      if ( byte_140C22DD1 && (PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22)) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
