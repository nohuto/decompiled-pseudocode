/*
 * XREFs of ?UpdateSupportedInput@DWMInputTarget@@UEAAJKK@Z @ 0x18001C1A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::UpdateSupportedInput(DWMInputTarget *this, int a2, int a3)
{
  __int64 result; // rax

  *((_DWORD *)this + 22) = a2;
  result = 0LL;
  *((_DWORD *)this + 23) = a3;
  return result;
}
