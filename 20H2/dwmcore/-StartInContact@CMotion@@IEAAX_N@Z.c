/*
 * XREFs of ?StartInContact@CMotion@@IEAAX_N@Z @ 0x18020BD54
 * Callers:
 *     ?StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ @ 0x180202F10 (-StartInContactWorker@CInteractionTrackerPositionAnimation@@MEAAXXZ.c)
 *     ?StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ @ 0x180203550 (-StartInContactWorker@CInteractionTrackerScaleAnimation@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z @ 0x180201350 (-ScrollAxisToString@@YAPEBGW4ScrollAxis@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18020B39C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall CMotion::StartInContact(CMotion *this, char a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  wchar_t *v6; // [rsp+40h] [rbp+8h] BYREF
  CMotion *v7; // [rsp+50h] [rbp+18h] BYREF

  *((_BYTE *)this + 8) &= ~2u;
  *((_BYTE *)this + 8) |= 2 * a2;
  *((_DWORD *)this + 4) = 1;
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)this + 17);
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v6 = (wchar_t *)ScrollAxisToString(*((_DWORD *)this + 3));
    v7 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v3,
      byte_1802E6F1C,
      v4,
      v5,
      (__int64)&v7,
      &v6);
  }
}
