/*
 * XREFs of ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x18015A0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::HandleWindowBecameUnowned(CImmersiveApp *this, HWND a2)
{
  return CImmersiveApp::CImmersiveWindowCollection::AddOrphanedWindow((CImmersiveApp *)((char *)this + 184), a2);
}
