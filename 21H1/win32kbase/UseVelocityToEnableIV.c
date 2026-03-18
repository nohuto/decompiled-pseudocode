/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0065790
 * Callers:
 *     IsPTPIVEnabled @ 0x1C005F440 (IsPTPIVEnabled.c)
 *     IsMouseIVEnabled @ 0x1C006561C (IsMouseIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01BCE88 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01BCEF0 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01BCF70 (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C00657BC (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0065868 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
