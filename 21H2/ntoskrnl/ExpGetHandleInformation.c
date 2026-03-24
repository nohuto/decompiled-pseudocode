/*
 * XREFs of ExpGetHandleInformation @ 0x14094A384
 * Callers:
 *     ExpQuerySystemInformation @ 0x140651070 (ExpQuerySystemInformation.c)
 * Callees:
 *     ExUnlockUserBuffer @ 0x1402997FC (ExUnlockUserBuffer.c)
 *     ExLockUserBuffer @ 0x140683180 (ExLockUserBuffer.c)
 *     ObGetHandleInformation @ 0x1408DCDEC (ObGetHandleInformation.c)
 */

__int64 __fastcall ExpGetHandleInformation(unsigned __int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned int HandleInformation; // ebx
  _DWORD *v7; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  *a3 = 0;
  v7 = 0LL;
  P = 0LL;
  result = ExLockUserBuffer(a1, a2, KeGetCurrentThread()->PreviousMode, IoWriteAccess, &v7, (struct _MDL **)&P);
  if ( (int)result >= 0 )
  {
    HandleInformation = ObGetHandleInformation(v7, a2, a3);
    ExUnlockUserBuffer((struct _MDL *)P);
    return HandleInformation;
  }
  return result;
}
