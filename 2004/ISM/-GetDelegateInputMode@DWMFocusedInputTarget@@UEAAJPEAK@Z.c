/*
 * XREFs of ?GetDelegateInputMode@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18001DF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetDelegateInputMode(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 19);
  return 0LL;
}
