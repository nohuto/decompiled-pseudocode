/*
 * XREFs of ?UpdateWaveformInfoList@SimpleHapticsController@@IAEJGG@Z @ 0x1B551A
 * Callers:
 *     ?InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ @ 0x1B479D (-InitializeSupportedWaveformList@SimpleHapticsController@@IAEJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$01@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapperByVal@$01@@4@Z @ 0x1B3FB8 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$01@@U2@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider.c)
 */

int __thiscall SimpleHapticsController::UpdateWaveformInfoList(SimpleHapticsController *this, int a2, int a3)
{
  unsigned int v3; // eax
  int v4; // edx
  const char *v6; // [esp+4h] [ebp-4h] BYREF

  v3 = *((_DWORD *)this + 12);
  v4 = 0;
  if ( v3 )
  {
    this = (SimpleHapticsController *)*((_DWORD *)this + 11);
    while ( *((_WORD *)this + 4 * v4) != (_WORD)a2 )
    {
      if ( ++v4 >= v3 )
        goto LABEL_5;
    }
    *((_WORD *)this + 4 * v4 + 1) = a3;
    return 0;
  }
  else
  {
LABEL_5:
    if ( (unsigned int)dword_2662D0 > 4 )
    {
      HIWORD(a3) = a3;
      HIWORD(a2) = a2;
      v6 = "SimpleHapticsController::UpdateWaveformInfoList Ordinal not found";
      _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
        (int)this,
        byte_2574A4,
        (int)this,
        (int)this,
        &v6,
        (int)&a2 + 2,
        (int)&a3 + 2);
    }
    return -1073741275;
  }
}
