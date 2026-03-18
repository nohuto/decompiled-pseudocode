/*
 * XREFs of ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x180236CA4
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1800EB830 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180237C70 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180031E90 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x180039C08 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x1800EBABC (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDDisplaySwapChain::ExecutePresent(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplayScanout *a2)
{
  __int64 v2; // rsi
  CD2DContext *v4; // rcx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, __int64 *); // r14
  int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  int v22; // eax
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  CDDisplayManager *v29; // rcx
  struct CD3DDevice *v30; // rdx
  int VBlankFence; // eax
  __int64 v32; // rcx
  __int64 v34; // [rsp+60h] [rbp+30h] BYREF
  __int64 v35; // [rsp+70h] [rbp+40h] BYREF

  v2 = *((_QWORD *)this + 35);
  v4 = (CD2DContext *)(*((_QWORD *)this + 11) + 16LL);
  v35 = 0LL;
  CD2DContext::ReleaseCachedD2DTarget(v4, (unsigned int)a2);
  v6 = *((_QWORD *)this + 12);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 48LL);
  if ( v35 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  v8 = v7(v6, &v35);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xE3u, 0LL);
  }
  else
  {
    v11 = *((_QWORD *)this + 11);
    v12 = *((_QWORD *)this + 13);
    *(_BYTE *)(v11 + 1435) = 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v11 + 264) + 152LL))(
            *(_QWORD *)(v11 + 264),
            v12,
            v2 + 1);
    v10 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xE6u, 0LL);
    }
    else
    {
      v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v35 + 56LL))(
              v35,
              *((_QWORD *)this + 15),
              v2 + 1);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xE7u, 0LL);
      }
      else
      {
        v17 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v35 + 48LL))(
                v35,
                a2);
        v10 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xEAu, 0LL);
        }
        else
        {
          v19 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
                  *((_QWORD *)this + 12),
                  v35);
          v10 = v19;
          if ( v19 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xEBu, 0LL);
          }
          else
          {
            ++*((_QWORD *)this + 35);
            if ( !*((_BYTE *)this + 288) )
            {
              v21 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 23);
              v34 = 0LL;
              v22 = (**v21)(v21, &GUID_8f12f506_f08f_4adb_a368_473e4dd42d43, &v34);
              v10 = v22;
              if ( v22 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xF4u, 0LL);
              }
              else
              {
                v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 21) + 96LL))(
                        *((_QWORD *)this + 21),
                        *((unsigned int *)this + 48),
                        0LL);
                v10 = v24;
                if ( v24 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0xF5u, 0LL);
                }
                else
                {
                  v26 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 21) + 160LL))(
                          *((_QWORD *)this + 21),
                          v34);
                  v10 = v26;
                  if ( v26 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xF6u, 0LL);
                  }
                  else
                  {
                    v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 12) + 56LL))(
                            *((_QWORD *)this + 12),
                            v35);
                    v10 = v28;
                    if ( v28 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast((__int64)v29, 0LL, 0, v28, 0xF9u, 0LL);
                    }
                    else
                    {
                      v30 = (struct CD3DDevice *)*((_QWORD *)this + 11);
                      ++*((_QWORD *)this + 35);
                      VBlankFence = CDDisplayManager::CreateVBlankFence(
                                      v29,
                                      v30,
                                      (CDDisplaySwapChain *)((char *)this + 144),
                                      (CDDisplaySwapChain *)((char *)this + 128));
                      v10 = VBlankFence;
                      if ( VBlankFence < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, VBlankFence, 0xFDu, 0LL);
                      else
                        *((_BYTE *)this + 288) = 1;
                    }
                  }
                }
              }
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
  return v10;
}
