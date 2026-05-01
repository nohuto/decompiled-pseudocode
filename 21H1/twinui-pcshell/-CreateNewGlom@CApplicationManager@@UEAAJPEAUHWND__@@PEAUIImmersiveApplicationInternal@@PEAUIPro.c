/*
 * XREFs of ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1801251E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18001DDA4 (-_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Win.c)
 *     ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x180046B14 (-_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18007F164 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x18011E994 (--$As@UIImmersiveApplication2@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@.c)
 *     ?GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z @ 0x180127A24 (-GetNextGlomId@CActivationBasedAppAndGlomCollection@@QEAAKPEBG@Z.c)
 *     ?_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@W4RemoveWindowReason@1@PEAPEAUITaskWindow@@@Z @ 0x180134AB8 (-_RemoveWindowFromGlom@CApplicationManager@@AEAA_NAEBVCTaskWindowFinder@@PEAUIImmersiveApplicati.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CApplicationManager::CreateNewGlom(
        CApplicationManager *this,
        HWND a2,
        struct IImmersiveApplicationInternal *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4,
        struct IImmersiveApplicationInternal **a5)
{
  struct IImmersiveApplicationInternal **v9; // r15
  __int64 (__fastcall *v10)(struct IImmersiveApplicationInternal *, GUID *, _QWORD); // rbx
  int ImmersiveApp; // ebx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, __int64 *); // rbx
  __int64 (__fastcall *v13)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v14)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **); // rbx
  struct IImmersiveMonitor *v15; // rbx
  int NextGlomId; // eax
  struct IImmersiveApplicationInternal **v17; // rax
  const struct _GUID *v19; // [rsp+30h] [rbp-49h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-31h] BYREF
  struct IImmersiveMonitor *v21; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h] BYREF
  __int64 v23; // [rsp+60h] [rbp-19h] BYREF
  unsigned __int16 *v24; // [rsp+68h] [rbp-11h] BYREF
  __int64 v25; // [rsp+70h] [rbp-9h]
  __int64 v26; // [rsp+78h] [rbp-1h]
  unsigned __int64 v27; // [rsp+80h] [rbp+7h] BYREF
  HWND v28; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v29; // [rsp+90h] [rbp+17h] BYREF
  char v30; // [rsp+98h] [rbp+1Fh]
  __int64 v31; // [rsp+E8h] [rbp+6Fh] BYREF

  v9 = a5;
  *a5 = 0LL;
  a5 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v10 = **(__int64 (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, _QWORD))a3;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  ImmersiveApp = v10(a3, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v20);
  if ( ImmersiveApp >= 0 )
  {
    ImmersiveApp = Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(&v20, &v23);
    if ( ImmersiveApp >= 0 )
    {
      v27 = -1LL;
      ImmersiveApp = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v23 + 24LL))(v23, &v27);
      if ( ImmersiveApp >= 0 )
      {
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v12 = v20;
        v13 = (*v20)[4];
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
        v25 = -1LL;
        v26 = -1LL;
        ImmersiveApp = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), unsigned __int16 **))v13)(
                         v12,
                         &v24);
        if ( ImmersiveApp >= 0 )
        {
          v31 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
          v28 = a2;
          v29 = 0LL;
          v30 = 0;
          CApplicationManager::_RemoveWindowFromGlom((char *)this - 240, &v28, a3);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
          v22 = 0LL;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
          ImmersiveApp = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**((_QWORD **)this + 42) + 32LL))(
                           *((_QWORD *)this + 42),
                           0LL,
                           &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
                           &v22);
          if ( ImmersiveApp < 0 )
            goto LABEL_9;
          v21 = 0LL;
          v14 = *(void (__fastcall **)(struct IImmersiveApplicationInternal *, struct IImmersiveMonitor **))(*(_QWORD *)a3 + 464LL);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
          v14(a3, &v21);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
          v15 = v21;
          NextGlomId = CActivationBasedAppAndGlomCollection::GetNextGlomId(
                         (CApplicationManager *)((char *)this + 384),
                         v24);
          ImmersiveApp = CApplicationManager::_CreateImmersiveApp(
                           (CApplicationManager *)((char *)this - 240),
                           (CallerIdentity *)v24,
                           (unsigned __int16 **)v27,
                           NextGlomId,
                           v15,
                           v19,
                           (void **)&a5);
          if ( ImmersiveApp >= 0 )
            ImmersiveApp = CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, a5, 0, v31, (__int64)a4);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
          if ( ImmersiveApp < 0 )
LABEL_9:
            CApplicationManager::_AddViewToGlom((__int64)this - 240, 0LL, a3, 9, v31, (__int64)a4);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        }
        Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v24);
        if ( ImmersiveApp >= 0 )
        {
          v17 = a5;
          a5 = 0LL;
          *v9 = (struct IImmersiveApplicationInternal *)v17;
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v20);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&a5);
  return (unsigned int)ImmersiveApp;
}
