/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001E0B4
 * Callers:
 *     _ATL::CAtlMap_IUnknown___ATL::CComPtr_IAudioProcessNotification__ATL::CElementTraits_IUnknown____ATL::CElementTraits_ATL::CComPtr_IAudioProcessNotification_____::SetAt_::_1_::catch$0 @ 0x1800418D8 (_ATL--CAtlMap_IUnknown___ATL--CComPtr_IAudioProcessNotification__ATL--CElementTrait_ea_1800418D8.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000F974 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x18001E87C (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveAtPos(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 i; // rcx
  __int64 v8; // rcx

  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *((_DWORD *)a1 + 4));
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8 * v4);
  if ( a2 == v6 )
  {
    v6 = 0LL;
  }
  else
  {
    for ( i = *(_QWORD *)(v6 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v6 = i;
  }
  v8 = *(_QWORD *)(a2 + 16);
  if ( v6 )
    *(_QWORD *)(v6 + 16) = v8;
  else
    *(_QWORD *)(v5 + 8 * v4) = v8;
  return ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::FreeNode(
           a1,
           a2);
}
