/*
 * XREFs of ?Unregister3DCompositor@MPC3DStateHelper@@QEAAXXZ @ 0x180069C5C
 * Callers:
 *     ?Unregister3DCompositor@@YAHXZ @ 0x180068F90 (-Unregister3DCompositor@@YAHXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z @ 0x180069A48 (-On3DCompositorStateChanged@MPC3DStateHelper@@AEAA_N_N@Z.c)
 */

void __fastcall MPC3DStateHelper::Unregister3DCompositor(PSRWLOCK SRWLock)
{
  DWORD v2; // eax
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( MPC3DStateHelper::On3DCompositorStateChanged(SRWLock, 0) )
  {
    v2 = WaitForSingleObjectEx(SRWLock[9].Ptr, 0xFFFFFFFF, 0);
    if ( v2 != 258 )
    {
      if ( v2 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          2569LL,
          (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
          v3);
        __debugbreak();
      }
    }
  }
  AcquireSRWLockExclusive(SRWLock);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&SRWLock[3]);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
