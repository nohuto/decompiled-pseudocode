/*
 * XREFs of ?ValidateAndLockCursor@@YGHPAPAUtagCURSOR@@H@Z @ 0x47118
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __fastcall ValidateAndLockCursor(unsigned int *a1, int a2)
{
  unsigned int v4; // ecx
  int v6; // edx
  int v7; // ecx

  v4 = *a1;
  if ( !v4 )
    return 1;
  if ( HMValidateHandleNoSecure(v4, 3) || !a2 )
  {
    *a1 = 0;
    HMAssignmentLock(v7, v6);
    return 1;
  }
  UserSetLastError(87);
  return 0;
}
