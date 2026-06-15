/*
 * XREFs of ?GetCellularEnable@PhoneTopology@@UEAAJPEAU_TelephonyInstanceData@@PEAH@Z @ 0x180140450
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x1800675D0 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     memset_0 @ 0x18006B59C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z @ 0x180140CBC (-GetNewestWorkItem@PhoneTopology@@AEAAHPEAVPhoneTopologyWorkItem@@@Z.c)
 *     ?Lookup@?$CAtlMap@IV?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UITelephonyControllerCallInstance@@@ATL@@@2@@ATL@@QEBA_NIAEAV?$CComPtr@UITelephonyControllerCallInstance@@@2@@Z @ 0x180140F08 (-Lookup@-$CAtlMap@IV-$CComPtr@UITelephonyControllerCallInstance@@@ATL@@V-$CElementTraits@I@2@V-$.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PhoneTopology::GetCellularEnable(PhoneTopology *this, struct _TelephonyInstanceData *a2, int *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-38h] BYREF
  char v12; // [rsp+28h] [rbp-30h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+68h] [rbp+10h]

  ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
    (__int64)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 136));
  v6 = 0;
  v7 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  if ( a2 && a3 )
  {
    if ( *(int *)a2 < 3 )
    {
      v9 = operator new(0x438uLL);
      v8 = v9;
      v14 = v9;
      if ( v9 )
      {
        *v9 = &PhoneTopologyWorkItem::`vftable';
        v9[1] = *(_QWORD *)a2;
        *((_DWORD *)v9 + 4) = 0;
        *((_DWORD *)v9 + 5) = 0;
        *((_DWORD *)v9 + 268) = 0;
        memset_0(v9 + 3, 0, 0x418uLL);
        *v8 = &CallEnableWorkItem::`vftable';
      }
      else
      {
        v8 = 0LL;
      }
      v14 = v8;
      if ( v8 )
      {
        if ( (unsigned int)PhoneTopology::GetNewestWorkItem(this, (struct PhoneTopologyWorkItem *)v8) )
        {
          *a3 = *((_DWORD *)v8 + 4);
        }
        else
        {
          *a3 = (unsigned __int8)ATL::CAtlMap<unsigned int,ATL::CComPtr<ITelephonyControllerCallInstance>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<ITelephonyControllerCallInstance>>>::Lookup(
                                   (char *)this + 184,
                                   *((unsigned int *)a2 + 1),
                                   &v13) != 0;
          v7 = v13;
        }
      }
      else
      {
        v6 = -2147024882;
      }
    }
    else
    {
      v6 = -2147024809;
    }
  }
  else
  {
    v6 = -2147467261;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v8 + 8LL))(v8, 1LL);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
