/*
 * XREFs of ?HideFlyout@CBaseTrayFlyoutExperienceManager@@QEAAJXZ @ 0x1800A1518
 * Callers:
 *     ?HideFlyout@MeetNowExperienceManager@@UEAAJXZ @ 0x1800A1570 (-HideFlyout@MeetNowExperienceManager@@UEAAJXZ.c)
 *     ?OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800A1C40 (-OnEventQueued@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@PEAUHSTRIN.c)
 *     ?OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A2210 (-OnSetForegroundFailed@CBaseTrayFlyoutExperienceManager@@UEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180083800 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ @ 0x1800873B0 (-Provider@SingleViewExperienceLogging@@SAQEBU_tlgProvider_t@@XZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180473DC0 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

__int64 __fastcall CBaseTrayFlyoutExperienceManager::HideFlyout(CBaseTrayFlyoutExperienceManager *this)
{
  const struct _tlgProvider_t *v2; // rax

  v2 = SingleViewExperienceLogging::Provider();
  if ( *(_DWORD *)v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v2,
      byte_180505DAE,
      0LL);
  CSingleViewShellExperience::DestroyView((CBaseTrayFlyoutExperienceManager *)((char *)this + 72));
  SetRectEmpty((LPRECT)((char *)this + 392));
  return 0LL;
}
