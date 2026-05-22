/*
 * XREFs of ?GetDelegateSourceViewId@DWMFocusedInputTarget@@UEAAJPEAK@Z @ 0x18001C490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetDelegateSourceViewId(DWMFocusedInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 14);
  return 0LL;
}
