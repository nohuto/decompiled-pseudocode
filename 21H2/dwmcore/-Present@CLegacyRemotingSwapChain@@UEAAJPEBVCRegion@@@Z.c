/*
 * XREFs of ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1800FEBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1800FECC0 (-CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800FED78 (-UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ.c)
 *     ?Flush@CD3DDevice@@QEAAXXZ @ 0x1800FEE74 (-Flush@CD3DDevice@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::Present(CD3DDevice **this, const struct CRegion *a2)
{
  HGDIOBJ v2; // rdi
  int updated; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int HRGN; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v13; // eax
  __int64 v14; // rcx
  HGDIOBJ ho; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0LL;
  ho = 0LL;
  if ( *((int *)g_pComposition + 276) > 3 )
  {
    v7 = -2003304309;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2003304309, 0xF3u);
  }
  else
  {
    CD3DDevice::Flush(this[9]);
    if ( *(_DWORD *)this[16] )
    {
      updated = CLegacyRemotingSwapChain::UpdateSectionBits((CLegacyRemotingSwapChain *)this);
      v7 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, updated, 0xE1u);
        goto LABEL_10;
      }
    }
    if ( a2 )
    {
      HRGN = CRegion::CreateHRGN(a2, (HRGN *)&ho);
      v7 = HRGN;
      if ( HRGN >= 0 )
        goto LABEL_6;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, HRGN, 0xE7u);
    }
    else
    {
      v13 = CRegion::CreateHRGN((CRegion *)(this + 16), (HRGN *)&ho);
      v7 = v13;
      if ( v13 >= 0 )
      {
LABEL_6:
        v2 = ho;
        v10 = (*(__int64 (__fastcall **)(CD3DDevice *, HGDIOBJ, _QWORD, _QWORD))(*(_QWORD *)this[13] + 24LL))(
                this[13],
                ho,
                0LL,
                0LL);
        v7 = v10;
        if ( v10 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0LL, v10, 0xEEu);
        goto LABEL_8;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, v13, 0xEBu);
    }
    v2 = ho;
  }
LABEL_8:
  if ( v2 )
    DeleteObject(v2);
LABEL_10:
  *(_DWORD *)this[16] = 0;
  return v7;
}
