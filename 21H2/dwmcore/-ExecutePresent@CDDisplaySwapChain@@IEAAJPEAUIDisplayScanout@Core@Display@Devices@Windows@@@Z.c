/*
 * XREFs of ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AA80
 * Callers:
 *     ?Present@CDDisplaySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x18027BFC0 (-Present@CDDisplaySwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@I@.c)
 *     ?PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x18027C130 (-PresentMPO@CDDisplaySwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ @ 0x1800228A0 (-ReleaseCachedD2DTarget@CD2DContext@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x180284B20 (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 */

__int64 __fastcall CDDisplaySwapChain::ExecutePresent(
        CDDisplaySwapChain *this,
        struct Windows::Devices::Display::Core::IDisplayScanout *a2)
{
  int v2; // r14d
  CD2DContext *v4; // rcx
  unsigned int v6; // r14d
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64 *); // rsi
  int v9; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  int v29; // eax
  CDDisplayManager *v30; // rcx
  struct CD3DDevice *v31; // rdx
  int VBlankFence; // eax
  __int64 v33; // rcx
  __int64 v35; // [rsp+60h] [rbp+30h] BYREF
  __int64 v36; // [rsp+70h] [rbp+40h] BYREF

  v2 = *((_DWORD *)this + 87);
  v4 = (CD2DContext *)(*((_QWORD *)this + 16) + 16LL);
  v36 = 0LL;
  v6 = v2 + 1;
  CD2DContext::ReleaseCachedD2DTarget(v4, (unsigned int)a2);
  v7 = *((_QWORD *)this + 17);
  v8 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 48LL);
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  v9 = v8(v7, &v36);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0LL, v9, 0x10Cu);
  }
  else
  {
    v12 = *((_QWORD *)this + 16);
    v13 = *((_QWORD *)this + 18);
    *(_BYTE *)(v12 + 1507) = 0;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v12 + 224) + 152LL))(
            *(_QWORD *)(v12 + 224),
            v13,
            v6);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x10Fu);
    }
    else
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v36 + 56LL))(
              v36,
              *((_QWORD *)this + 20),
              v6);
      v11 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, v16, 0x110u);
      }
      else
      {
        v18 = (*(__int64 (__fastcall **)(__int64, struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v36 + 48LL))(
                v36,
                a2);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x113u);
        }
        else
        {
          v20 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 56LL))(
                  *((_QWORD *)this + 17),
                  v36);
          v11 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0LL, v20, 0x114u);
          }
          else
          {
            ++*((_DWORD *)this + 87);
            if ( !*((_BYTE *)this + 352) )
            {
              v22 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 29);
              v35 = 0LL;
              v23 = (**v22)(v22, &GUID_8f12f506_f08f_4adb_a368_473e4dd42d43, &v35);
              v11 = v23;
              if ( v23 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0LL, v23, 0x11Du);
              }
              else
              {
                v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 27) + 96LL))(
                        *((_QWORD *)this + 27),
                        *((unsigned int *)this + 66),
                        0LL);
                v11 = v25;
                if ( v25 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0x11Eu);
                }
                else
                {
                  v27 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 27) + 160LL))(
                          *((_QWORD *)this + 27),
                          v35);
                  v11 = v27;
                  if ( v27 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0x11Fu);
                  }
                  else
                  {
                    v29 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 17) + 56LL))(
                            *((_QWORD *)this + 17),
                            v36);
                    v11 = v29;
                    if ( v29 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast((__int64)v30, 0LL, 0LL, v29, 0x122u);
                    }
                    else
                    {
                      v31 = (struct CD3DDevice *)*((_QWORD *)this + 16);
                      ++*((_DWORD *)this + 87);
                      VBlankFence = CDDisplayManager::CreateVBlankFence(
                                      v30,
                                      v31,
                                      (CDDisplaySwapChain *)((char *)this + 184),
                                      (CDDisplaySwapChain *)((char *)this + 168));
                      v11 = VBlankFence;
                      if ( VBlankFence < 0 )
                        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0LL, VBlankFence, 0x126u);
                      else
                        *((_BYTE *)this + 352) = 1;
                    }
                  }
                }
              }
              wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v35);
            }
          }
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  return v11;
}
