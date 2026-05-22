/*
 * XREFs of ?GetWindowId@DWMFocusedInputTarget@@UEAAJPEA_K@Z @ 0x18001DF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetWindowId(DWMFocusedInputTarget *this, unsigned __int64 *a2)
{
  *a2 = *((_QWORD *)this + 8);
  return 0LL;
}
