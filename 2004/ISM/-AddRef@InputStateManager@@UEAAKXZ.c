/*
 * XREFs of ?AddRef@InputStateManager@@UEAAKXZ @ 0x18001BF50
 * Callers:
 *     ?AddRef@DWMLegacyInputTarget@@W7EAAKXZ @ 0x18004A900 (-AddRef@DWMLegacyInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@InputStateManager@@WBA@EAAKXZ @ 0x18004A910 (-AddRef@InputStateManager@@WBA@EAAKXZ.c)
 *     ?AddRef@InputRedirectionProcessor@@WBI@EAAKXZ @ 0x18004A920 (-AddRef@InputRedirectionProcessor@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InputStateManager::AddRef(InputStateManager *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 8);
}
