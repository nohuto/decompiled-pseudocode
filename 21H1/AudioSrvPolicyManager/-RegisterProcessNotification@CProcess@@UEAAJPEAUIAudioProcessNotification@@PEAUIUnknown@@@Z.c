/*
 * XREFs of ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x18001C730
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x18001D98C (-SetAt@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@PE.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x18001E128 (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcess::RegisterProcessNotification(
        CProcess *this,
        struct IAudioProcessNotification *a2,
        struct IUnknown *a3)
{
  struct IUnknown *v3; // rsi
  struct IAudioProcessNotification *v4; // rbx
  unsigned int v6; // edi
  __int64 result; // rax
  ATL::CAtlException *v8; // rbx
  struct IAudioProcessNotification *v9; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-50h] BYREF
  ATL::CAtlException *v11; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  char v13; // [rsp+50h] [rbp-38h]
  int v14; // [rsp+90h] [rbp+8h] BYREF
  struct IAudioProcessNotification *v15; // [rsp+98h] [rbp+10h]
  struct IUnknown *v16; // [rsp+A0h] [rbp+18h] BYREF
  char v17; // [rsp+A8h] [rbp+20h] BYREF

  v16 = a3;
  v15 = a2;
  v3 = a3;
  v4 = a2;
  v6 = 0;
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IAudioProcessNotification *))(*(_QWORD *)a2 + 8LL))(a2);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 608);
  v13 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
         (int)this + 648,
         (unsigned int)&v16,
         (unsigned int)&v17,
         (unsigned int)&v14,
         (__int64)v10) )
  {
    goto LABEL_8;
  }
  try
  {
    v6 = 0;
    ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::SetAt(
      (char *)this + 648,
      &v16,
      &v9);
  }
  catch ( ATL::CAtlException *v11 )
  {
    v8 = v11;
    if ( *(_DWORD *)v11 == -1073741571 )
      _o__resetstkoflw();
    v14 = *(_DWORD *)v8;
    v6 = v14;
    v4 = v15;
    if ( v14 >= 0 )
    {
      v3 = v16;
      goto LABEL_7;
    }
LABEL_8:
    if ( v13 )
      LeaveCriticalSection(lpCriticalSection);
    if ( v4 )
      (*(void (__fastcall **)(struct IAudioProcessNotification *))(*(_QWORD *)v4 + 16LL))(v4);
    result = v6;
  }
LABEL_7:
  ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->AddRef)(v3);
  goto LABEL_8;
}
