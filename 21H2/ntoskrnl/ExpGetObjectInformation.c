/*
 * XREFs of ExpGetObjectInformation @ 0x14094A6D4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402161DC (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x1405E45FC (ExLockUserBuffer.c)
 *     ObGetObjectInformation @ 0x1408DD5D8 (ObGetObjectInformation.c)
 */

__int64 __fastcall ExpGetObjectInformation(unsigned __int64 a1, unsigned int a2, unsigned int *a3)
{
  __int64 result; // rax
  unsigned int ObjectInformation; // ebx
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v8 = 0LL;
  P = 0LL;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v8, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    ObjectInformation = ObGetObjectInformation(a1, v8, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return ObjectInformation;
  }
  return result;
}
