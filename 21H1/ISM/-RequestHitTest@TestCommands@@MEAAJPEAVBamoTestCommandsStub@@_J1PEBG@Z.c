/*
 * XREFs of ?RequestHitTest@TestCommands@@MEAAJPEAVBamoTestCommandsStub@@_J1PEBG@Z @ 0x180171170
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x180011654 (-_Tidy@-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1800CD96C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIHolographicDisplayInternal@Internal@Holographic@Graph.c)
 *     ??$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA?AV?$vector@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIAttachableInputObjectSampleProxy@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180170D60 (--$GetAllAttachedObjectsByType@UIAttachableInputObjectSampleProxy@@@InputSite@@QEAA-AV-$vector@V.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TestCommands::RequestHitTest(
        TestCommands *this,
        struct BamoTestCommandsStub *a2,
        __int64 a3,
        __int64 a4,
        const unsigned __int16 *a5)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rbx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // rsi
  __int64 *v16; // rbx
  __int64 v18[2]; // [rsp+30h] [rbp-A1h] BYREF
  __int64 *v19; // [rsp+40h] [rbp-91h] BYREF
  __int64 *v20; // [rsp+48h] [rbp-89h]
  __int64 v21; // [rsp+50h] [rbp-81h]
  _BYTE v22[8]; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v23[3]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v24; // [rsp+80h] [rbp-51h]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+57h]

  v18[0] = 0LL;
  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 7);
  v8 = **v7;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v18);
  v9 = v8(v7, &GUID_b694737b_3300_4bb1_8b67_44715c8db610, v18);
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      25LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\bamos\\server\\testcommands.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = *(_QWORD *)v18[0];
  v18[1] = __PAIR64__(a4, a3);
  (*(void (__fastcall **)(__int64, _BYTE *, unsigned __int64))(v10 + 24))(v18[0], v22, __PAIR64__(a4, a3));
  if ( v22[0] )
  {
    v13 = (__int64 *)v23[0];
    v14 = (__int64 *)v23[1];
    while ( v13 != v14 )
    {
      InputSite::GetAllAttachedObjectsByType<IAttachableInputObjectSampleProxy>(*v13, (__int64 *)&v19);
      v15 = v20;
      v16 = v19;
      if ( v19 != v20 )
      {
        do
        {
          (*(void (__fastcall **)(__int64, __int64, __int64, const unsigned __int16 *))(*(_QWORD *)*v16 + 24LL))(
            *v16,
            a3,
            a4,
            a5);
          ++v16;
        }
        while ( v16 != v15 );
        v15 = v20;
        v16 = v19;
      }
      if ( v16 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal>>>(
          v16,
          v15);
        std::_Deallocate<16,0>(v16, (const struct std::nothrow_t *)((v21 - (_QWORD)v16) & 0xFFFFFFFFFFFFFFF8uLL));
      }
      ++v13;
    }
  }
  if ( (unsigned __int64)(v24 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v24);
  std::vector<Microsoft::WRL::ComPtr<InputSite>>::_Tidy(v23, v11, v12);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v18);
  return 0LL;
}
