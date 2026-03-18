/*
 * XREFs of UseVelocityToEnableIV @ 0x1C0071160
 * Callers:
 *     IsPTPIVEnabled @ 0x1C0068F50 (IsPTPIVEnabled.c)
 *     IsMouseIVEnabled @ 0x1C0070FEC (IsMouseIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01B7128 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B7190 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B7210 (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C007118C (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0071238 (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
