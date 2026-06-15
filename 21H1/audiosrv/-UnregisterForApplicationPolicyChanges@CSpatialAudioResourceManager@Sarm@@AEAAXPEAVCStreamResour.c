/*
 * XREFs of ?UnregisterForApplicationPolicyChanges@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180109A60
 * Callers:
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x180108FC4 (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FC18 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180028390 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006D6F0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x180074B5B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CBC04 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18010A2FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z @ 0x18010BC6C (-GetProcess@CStreamResource@Sarm@@QEAAJPEAPEAUIAudioProcess@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Sarm::CSpatialAudioResourceManager::UnregisterForApplicationPolicyChanges(
        Sarm::CSpatialAudioResourceManager *this,
        struct Sarm::CStreamResource *a2,
        __int64 a3,
        int a4)
{
  int v6; // r8d
  _DWORD *v7; // rcx
  _DWORD *i; // rbx
  int v9; // eax
  Sarm::CSpatialAudioResourceManager *v11; // rbx
  const struct _GUID *v12; // rcx
  const struct _GUID *v13; // rcx
  __int64 v14; // rax
  Sarm::CSpatialAudioResourceManager *v15; // rcx
  __int64 v16; // r9
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IAudioProcess *v19; // [rsp+60h] [rbp+20h] BYREF
  Sarm::CSpatialAudioResourceManager *v20; // [rsp+68h] [rbp+28h] BYREF
  int v21; // [rsp+70h] [rbp+30h] BYREF

  v6 = *((_DWORD *)a2 + 13);
  v7 = (_DWORD *)*((_QWORD *)this + 40);
  for ( i = (_DWORD *)*((_QWORD *)this + 39); i != v7 && *i != v6; i += 2 )
    ;
  if ( i == v7 )
    v9 = 0;
  else
    v9 = i[1];
  if ( (unsigned int)dword_18019D350 > 5 )
  {
    LODWORD(v19) = v9;
    LODWORD(v20) = i != v7;
    v21 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_18019D350,
      (unsigned int)&unk_18016A1EF,
      v6,
      a4,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19);
  }
  if ( i != *((_DWORD **)this + 40) && i[1]-- == 1 )
  {
    memmove_0(i, i + 2, *((_QWORD *)this + 40) - (_QWORD)(i + 2));
    *((_QWORD *)this + 40) -= 8LL;
    v11 = 0LL;
    v20 = 0LL;
    if ( InlineIsEqualGUID(&GUID_e60ae324_1652_4fcc_a7f2_36aab2a4f68b, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v11 = this;
      v14 = *(_QWORD *)this;
      v15 = this;
    }
    else
    {
      if ( InlineIsEqualGUID(v12, &GUID_2c794bb5_12d9_433a_b0a1_e3e5c6f54b6b) )
      {
        v11 = this;
      }
      else
      {
        if ( !InlineIsEqualGUID(v13, v13) )
        {
          v16 = 2147500034LL;
LABEL_21:
          if ( (int)v16 >= 0 )
          {
            v19 = 0LL;
            wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)&v19);
            if ( Sarm::CStreamResource::GetProcess(a2, &v19) >= 0 )
            {
              v17 = (*(__int64 (__fastcall **)(struct IAudioProcess *, Sarm::CSpatialAudioResourceManager *))(*(_QWORD *)v19 + 544LL))(
                      v19,
                      v11);
              if ( v17 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  768LL,
                  (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                  (const char *)(unsigned int)v17);
            }
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v19);
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              763LL,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
              (const char *)v16);
          }
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v20);
          return;
        }
        v11 = (Sarm::CSpatialAudioResourceManager *)((char *)this + 8);
      }
      v14 = *(_QWORD *)v11;
      v15 = v11;
    }
    v20 = v11;
    (*(void (__fastcall **)(Sarm::CSpatialAudioResourceManager *))(v14 + 8))(v15);
    v16 = 0LL;
    goto LABEL_21;
  }
}
