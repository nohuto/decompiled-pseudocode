/*
 * XREFs of ?GetDelegateSourceProcessId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18001DB30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetDelegateSourceProcessId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 18);
  return 0LL;
}
