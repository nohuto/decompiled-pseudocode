/*
 * XREFs of ?Release@MPCManagerClient@@UEAAKXZ @ 0x18010A7B0
 * Callers:
 *     ?Release@MPCManagerClient@@W7EAAKXZ @ 0x18004B9D0 (-Release@MPCManagerClient@@W7EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBA@EAAKXZ @ 0x18004B9E0 (-Release@MPCManagerClient@@WBA@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WBI@EAAKXZ @ 0x18004B9F0 (-Release@MPCManagerClient@@WBI@EAAKXZ.c)
 *     ?Release@MPCManagerClient@@WCA@EAAKXZ @ 0x18004BA00 (-Release@MPCManagerClient@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCManagerClient::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IMPCManager,Windows::Internal::Input::MPCManager::IMPCManagerClient,Windows::Internal::Input::MPCManager::IMPCManagerConnection>::Release(this);
}
