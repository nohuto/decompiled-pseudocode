/*
 * XREFs of ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x18001E128
 * Callers:
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x18001C730 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 *     ?UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x18001C850 (-UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x18001D98C (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
        __int64 a1,
        unsigned int *a2,
        int *a3,
        unsigned int *a4,
        _QWORD *a5)
{
  unsigned int v5; // eax
  __int64 v8; // r8
  __int64 v9; // rdx

  v5 = *a2;
  *a4 = *a2;
  *a3 = v5 % *(_DWORD *)(a1 + 16);
  if ( !*(_QWORD *)a1 )
    return 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)*a3);
  if ( !v9 )
    return 0LL;
  while ( *(_DWORD *)(v9 + 24) != *a4 || *(_QWORD *)v9 != *(_QWORD *)a2 )
  {
    v8 = v9;
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      return 0LL;
  }
  *a5 = v8;
  return v9;
}
