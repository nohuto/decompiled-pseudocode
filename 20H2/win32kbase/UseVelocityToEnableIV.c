/*
 * XREFs of UseVelocityToEnableIV @ 0x1C00369A4
 * Callers:
 *     IsMouseIVEnabled @ 0x1C003694C (IsMouseIVEnabled.c)
 *     IsPTPIVEnabled @ 0x1C00AF270 (IsPTPIVEnabled.c)
 *     IsKeyboardIVEnabled @ 0x1C01B4DB8 (IsKeyboardIVEnabled.c)
 *     IsPenIVEnabled @ 0x1C01B4E20 (IsPenIVEnabled.c)
 *     IsTouchIVEnabled @ 0x1C01B4EA0 (IsTouchIVEnabled.c)
 * Callees:
 *     RIMIsRunningOnDesktop @ 0x1C00369D0 (RIMIsRunningOnDesktop.c)
 *     isRootPartition @ 0x1C0036A7C (isRootPartition.c)
 */

char UseVelocityToEnableIV()
{
  char v0; // bl

  v0 = 0;
  if ( (unsigned __int8)isRootPartition() || (unsigned int)RIMIsRunningOnDesktop() )
    return 1;
  return v0;
}
