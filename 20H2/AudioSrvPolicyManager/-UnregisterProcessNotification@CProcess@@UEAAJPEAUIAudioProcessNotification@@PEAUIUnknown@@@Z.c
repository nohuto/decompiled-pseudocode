/*
 * XREFs of ?UnregisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x180016EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x1800187C8 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?FreeNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180018F1C (-FreeNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001A330 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::UnregisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  unsigned int v5; // edi
  __int64 Node; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-18h] BYREF
  char v13; // [rsp+40h] [rbp-10h]
  char v14; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown *v15; // [rsp+80h] [rbp+30h] BYREF
  char v16; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  v5 = -2147024809;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 608);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v11 = 0LL;
  Node = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
           (int)this + 648,
           (unsigned int)&v15,
           (unsigned int)&v16,
           (unsigned int)&v14,
           (__int64)&v11);
  v7 = Node;
  if ( Node )
  {
    v8 = (unsigned int)(*(_DWORD *)(Node + 24) % *((_DWORD *)this + 166));
    v9 = *(_QWORD *)(Node + 16);
    if ( v11 )
      *(_QWORD *)(v11 + 16) = v9;
    else
      *(_QWORD *)(*((_QWORD *)this + 81) + 8 * v8) = v9;
    ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::FreeNode(
      (char *)this + 648,
      v7);
    ((void (__fastcall *)(struct IUnknown *))a3->lpVtbl->Release)(a3);
    v5 = 0;
  }
  if ( v13 )
    LeaveCriticalSection(lpCriticalSection);
  return v5;
}
