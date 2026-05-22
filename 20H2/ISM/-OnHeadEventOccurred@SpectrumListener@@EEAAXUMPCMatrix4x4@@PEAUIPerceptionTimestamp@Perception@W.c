/*
 * XREFs of ?OnHeadEventOccurred@SpectrumListener@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x18008B650
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGestureType@@W4InputType@@KPEAUInputInfo@@@Z @ 0x180089484 (-PopulateGenericMPCInputInfo@MPCInputInfoHelper@@SAJW4MPCAugmentedInputGestureType@@W4MPCGesture.c)
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z @ 0x18008AB40 (-QueueInput@MPCRawInputProvider@@QEAAJAEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpectrumListener::OnHeadEventOccurred(__int64 a1, __int128 *a2)
{
  int v4; // eax
  MPCRawInputProvider *v5; // rcx
  int v6; // eax
  int v7[12]; // [rsp+40h] [rbp-808h] BYREF
  char v8; // [rsp+70h] [rbp-7D8h]
  __int128 v9; // [rsp+300h] [rbp-548h]
  __int128 v10; // [rsp+310h] [rbp-538h]
  __int128 v11; // [rsp+320h] [rbp-528h]
  __int128 v12; // [rsp+330h] [rbp-518h]
  wil::details::in1diag3 *retaddr; // [rsp+848h] [rbp+0h]

  memset_0(v7, 0, 0x7F0uLL);
  v7[6] = 2032;
  v4 = MPCInputInfoHelper::PopulateGenericMPCInputInfo(0, 8, 0x20000, *(_DWORD *)(a1 + 76), (__int64)v7);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      104LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v9 = *a2;
  v10 = a2[1];
  v11 = a2[2];
  v12 = a2[3];
  v8 = 1;
  AcquireSRWLockShared((PSRWLOCK)(a1 + 64));
  v5 = *(MPCRawInputProvider **)(a1 + 16);
  if ( v5 )
  {
    v6 = MPCRawInputProvider::QueueInput(v5, (struct InputInfo *)v7);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        114LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\spectrumlistener.cpp",
        (const char *)(unsigned int)v6);
  }
  if ( a1 != -64 )
    ReleaseSRWLockShared((PSRWLOCK)(a1 + 64));
}
