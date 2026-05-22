/*
 * XREFs of ?GetProcessId@DWMLegacyInputTarget@@UEAAJPEAK@Z @ 0x18001DFC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMLegacyInputTarget::GetProcessId(DWMLegacyInputTarget *this, unsigned int *a2)
{
  *a2 = *((_DWORD *)this + 6);
  return 0LL;
}
