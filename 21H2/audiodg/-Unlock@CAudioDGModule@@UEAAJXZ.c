/*
 * XREFs of ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x140019960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioDGModule::Unlock(CAudioDGModule *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 3);
  if ( !(_DWORD)result )
    *((_BYTE *)this + 97) = 1;
  return result;
}
