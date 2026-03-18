/*
 * XREFs of ?UpdateSectionBits@CLegacyRemotingSwapChain@@IEAAJXZ @ 0x1800E0E98
 * Callers:
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJXZ @ 0x1800E0D20 (-Present@CLegacyRemotingSwapChain@@UEAAJXZ.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180250320 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800446B4 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800C0B90 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRemotingSwapChain::UpdateSectionBits(FastRegion::Internal::CRgnData **this)
{
  int v1; // ebx
  FastRegion::Internal::CRgnData *v3; // r8
  __int64 v4; // rcx
  int v5; // eax
  FastRegion::Internal::CRgnData *v6; // rcx
  int v7; // eax
  FastRegion::Internal::CRgnData *v8; // rcx
  int v9; // edi
  _BYTE v11[8]; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-48h]
  int *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch]
  int v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+6Ch] [rbp-14h]

  v1 = 0;
  if ( !*((_BYTE *)this + 216) )
  {
    FastRegion::Internal::CRgnData::BeginIterator(this[16], (struct FastRegion::CRegion::Iterator *)v11);
    while ( (unsigned __int64)v13 < v12 )
    {
      v16 = 0;
      v17 = 0;
      v3 = this[12];
      v17 = *v13;
      v19 = v13[2];
      v4 = 2 * v15;
      v16 = *(_DWORD *)(v14 + 4 * v4);
      v5 = *(_DWORD *)(v14 + 4 * v4 + 4);
      v6 = this[11];
      v18 = v5;
      v7 = (*(__int64 (__fastcall **)(FastRegion::Internal::CRgnData *, int *, FastRegion::Internal::CRgnData *))(*(_QWORD *)v6 + 48LL))(
             v6,
             &v16,
             v3);
      v9 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, v7, 0x19Eu, 0LL);
      if ( !v1 || v1 >= 0 && v9 < 0 )
        v1 = v9;
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v11);
    }
  }
  return (unsigned int)v1;
}
