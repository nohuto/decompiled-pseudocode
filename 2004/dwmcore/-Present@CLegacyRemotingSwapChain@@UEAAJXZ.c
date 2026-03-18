/*
 * XREFs of ?Present@CLegacyRemotingSwapChain@@UEAAJXZ @ 0x1800E0D20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800D6458 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800E0DE0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800E0E98 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Present(CLegacyRemotingSwapChain *this)
{
  HRGN v2; // rdi
  CD3DDevice *v3; // rcx
  int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  HRGN v12; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = (CD3DDevice *)*((_QWORD *)this + 3);
  v12 = 0LL;
  CD3DDevice::Flush(v3);
  if ( !**((_DWORD **)this + 9) )
  {
LABEL_5:
    v9 = (*(__int64 (__fastcall **)(_QWORD, HRGN, _QWORD, _QWORD))(**((_QWORD **)this + 7) + 24LL))(
           *((_QWORD *)this + 7),
           v2,
           0LL,
           0LL);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xE3u, 0LL);
    goto LABEL_7;
  }
  updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)((char *)this - 56));
  v6 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, updated, 0xDEu, 0LL);
    goto LABEL_9;
  }
  v7 = CRegion::CreateHRGN((CLegacyRemotingSwapChain *)((char *)this + 72), &v12);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v2 = v12;
    goto LABEL_5;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xE0u, 0LL);
  v2 = v12;
LABEL_7:
  if ( v2 )
    DeleteObject(v2);
LABEL_9:
  **((_DWORD **)this + 9) = 0;
  return v6;
}
