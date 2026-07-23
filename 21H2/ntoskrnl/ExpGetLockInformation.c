/*
 * XREFs of ExpGetLockInformation @ 0x14094A654
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ExQuerySystemLockInformation @ 0x1409B3B94 (ExQuerySystemLockInformation.c)
 */

__int64 __fastcall ExpGetLockInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int SystemLockInformation; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0LL;
  P = 0LL;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    SystemLockInformation = ExQuerySystemLockInformation(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return SystemLockInformation;
  }
  return result;
}
