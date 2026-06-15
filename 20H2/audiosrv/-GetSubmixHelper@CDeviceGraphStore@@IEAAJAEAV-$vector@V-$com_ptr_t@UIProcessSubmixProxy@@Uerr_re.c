/*
 * XREFs of ?GetSubmixHelper@CDeviceGraphStore@@IEAAJAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@$$QEAV?$function@$$A6A_NAEBV?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@Z@3@@Z @ 0x1800E8690
 * Callers:
 *     ?GetFilteredSubmixes@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@KAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x18006ED00 (-GetFilteredSubmixes@CDeviceGraphStore@@UEAAJKW4ProcessSubmixCapture@@KAEAV-$vector@V-$com_ptr_t.c)
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800E8D00 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000F6D8 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047410 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180047588 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x1800488C0 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@0AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800CD47C (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800CD4B4 (--$_Emplace_reallocate@AEBV-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UISt.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1800D1634 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioStreamVolumeCallback@@Uerr_returncode_policy@wil@@@wi.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CDeviceGraphStore::GetSubmixHelper(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // r14
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  _QWORD *v7; // rbx
  __int64 *v8; // r12
  __int64 *v9; // r8
  __int64 **v10; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 *v13; // r15
  __int64 *k; // r13
  int v15; // eax
  unsigned int v16; // edi
  void *v17; // rbx
  __int64 result; // rax
  __int64 *v19; // rbx
  _QWORD *m; // rsi
  int v21; // eax
  unsigned int v22; // edi
  void *v23; // rbx
  void *v24; // rbx
  __int64 *v25; // rbx
  _QWORD *n; // rdi
  int v27; // eax
  unsigned int v28; // r13d
  void *v29; // rbx
  void *v30; // rbx
  void *v31; // rbx
  __int64 *v32; // r13
  __int64 *ii; // rbx
  __int64 v34; // rcx
  __int64 **v35; // rcx
  __int64 *v36; // rdx
  __int64 v37; // rax
  int v38[4]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v39; // [rsp+30h] [rbp-88h]
  __int128 v40; // [rsp+38h] [rbp-80h] BYREF
  __int64 v41; // [rsp+48h] [rbp-70h]
  __int128 v42; // [rsp+50h] [rbp-68h] BYREF
  __int64 v43; // [rsp+60h] [rbp-58h]
  __int128 v44; // [rsp+68h] [rbp-50h] BYREF
  __int64 *v45; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+C0h] [rbp+8h] BYREF
  __int64 **v48; // [rsp+C8h] [rbp+10h]
  __int64 v49; // [rsp+D0h] [rbp+18h]
  __int64 *v50; // [rsp+D8h] [rbp+20h]

  v49 = a3;
  v48 = a2;
  v44 = 0LL;
  v4 = 0LL;
  v45 = 0LL;
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v47 = v5;
  v7 = **(_QWORD ***)(a1 + 56);
  v8 = 0LL;
  try
  {
    while ( v7 != *(_QWORD **)(a1 + 56) )
    {
      v9 = v7 + 8;
      if ( v4 == v8 )
      {
        std::vector<Microsoft::WRL::ComPtr<IStreamGroupProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IStreamGroupProxy> const &>(
          (__int64 *)&v44,
          (__int64)v8,
          v9);
        v4 = v45;
        v8 = (__int64 *)*((_QWORD *)&v44 + 1);
      }
      else
      {
        *v8 = *v9;
        Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v8++);
        *((_QWORD *)&v44 + 1) = v8;
      }
      v10 = (__int64 **)v7[2];
      if ( *((_BYTE *)v10 + 25) )
      {
        for ( i = v7[1]; !*(_BYTE *)(i + 25) && v7 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v7 = (_QWORD *)i;
        v7 = (_QWORD *)i;
      }
      else
      {
        v7 = (_QWORD *)v7[2];
        for ( j = *v10; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v7 = j;
      }
    }
    if ( v5 )
      LeaveCriticalSection(v5);
    v13 = (__int64 *)v44;
    for ( k = (__int64 *)v44; ; ++k )
    {
      v50 = k;
      if ( k == v8 )
        break;
      *(_OWORD *)v38 = 0LL;
      v39 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)*k + 80LL))(*k, v38);
      v16 = v15;
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E0,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
          (const char *)(unsigned int)v15);
        v17 = *(void **)v38;
        if ( *(_QWORD *)v38 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            *(__int64 **)v38,
            *(__int64 **)&v38[2]);
          std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)((v39 - (_QWORD)v17) & 0xFFFFFFFFFFFFFFF8uLL));
          *(_OWORD *)v38 = 0LL;
          v39 = 0LL;
        }
        if ( v13 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
          std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
        }
        return v16;
      }
      v19 = *(__int64 **)v38;
      for ( m = *(_QWORD **)v38; m != *(_QWORD **)&v38[2]; ++m )
      {
        v40 = 0LL;
        v41 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)*k + 104LL))(*k, *m, &v40);
        v22 = v21;
        if ( v21 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2EF,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
            (const char *)(unsigned int)v21);
          v23 = (void *)v40;
          if ( (_QWORD)v40 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              (__int64 *)v40,
              *((__int64 **)&v40 + 1));
            std::_Deallocate<16,0>(v23, (const struct std::nothrow_t *)((v41 - (_QWORD)v23) & 0xFFFFFFFFFFFFFFF8uLL));
            v40 = 0LL;
            v41 = 0LL;
          }
          v24 = *(void **)v38;
          if ( *(_QWORD *)v38 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
              *(__int64 **)v38,
              *(__int64 **)&v38[2]);
            std::_Deallocate<16,0>(v24, (const struct std::nothrow_t *)((v39 - (_QWORD)v24) & 0xFFFFFFFFFFFFFFF8uLL));
            *(_OWORD *)v38 = 0LL;
            v39 = 0LL;
          }
          if ( v13 )
          {
            std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
            std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
          }
          return v22;
        }
        v25 = (__int64 *)v40;
        for ( n = (_QWORD *)v40; n != *((_QWORD **)&v40 + 1); ++n )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 152LL))(*n)
            || (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*n + 232LL))(*n) )
          {
            v42 = 0LL;
            v43 = 0LL;
            v27 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*n + 344LL))(*n, &v42);
            v28 = v27;
            if ( v27 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2FC,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                (const char *)(unsigned int)v27);
              v29 = (void *)v42;
              if ( (_QWORD)v42 )
              {
                std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                  (__int64 *)v42,
                  *((__int64 **)&v42 + 1));
                std::_Deallocate<16,0>(
                  v29,
                  (const struct std::nothrow_t *)((v43 - (_QWORD)v29) & 0xFFFFFFFFFFFFFFF8uLL));
                v42 = 0LL;
                v43 = 0LL;
              }
              v30 = (void *)v40;
              if ( (_QWORD)v40 )
              {
                std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                  (__int64 *)v40,
                  *((__int64 **)&v40 + 1));
                std::_Deallocate<16,0>(
                  v30,
                  (const struct std::nothrow_t *)((v41 - (_QWORD)v30) & 0xFFFFFFFFFFFFFFF8uLL));
                v40 = 0LL;
                v41 = 0LL;
              }
              v31 = *(void **)v38;
              if ( *(_QWORD *)v38 )
              {
                std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                  *(__int64 **)v38,
                  *(__int64 **)&v38[2]);
                std::_Deallocate<16,0>(
                  v31,
                  (const struct std::nothrow_t *)((v39 - (_QWORD)v31) & 0xFFFFFFFFFFFFFFF8uLL));
                *(_OWORD *)v38 = 0LL;
                v39 = 0LL;
              }
              if ( v13 )
              {
                std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
                std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
              }
              return v28;
            }
            v32 = (__int64 *)v42;
            for ( ii = (__int64 *)v42; ii != *((__int64 **)&v42 + 1); ++ii )
            {
              v34 = *(_QWORD *)(v49 + 56);
              if ( !v34 )
                std::_Xbad_function_call();
              if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 16LL))(v34, ii) )
              {
                ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(
                  &v47,
                  *ii);
                v35 = v48;
                v36 = v48[1];
                if ( v48[2] == v36 )
                {
                  std::vector<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioStreamVolumeCallback,wil::err_returncode_policy>>(
                    v48,
                    v36,
                    (__int64 *)&v47);
                }
                else
                {
                  v37 = (__int64)v47;
                  v47 = 0LL;
                  *v36 = v37;
                  ++v35[1];
                }
                wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
              }
              v32 = (__int64 *)v42;
            }
            if ( v32 )
            {
              std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
                v32,
                *((__int64 **)&v42 + 1));
              std::_Deallocate<16,0>(v32, (const struct std::nothrow_t *)((v43 - (_QWORD)v32) & 0xFFFFFFFFFFFFFFF8uLL));
            }
          }
          v25 = (__int64 *)v40;
        }
        if ( v25 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v25, *((__int64 **)&v40 + 1));
          std::_Deallocate<16,0>(v25, (const struct std::nothrow_t *)((v41 - (_QWORD)v25) & 0xFFFFFFFFFFFFFFF8uLL));
        }
        v19 = *(__int64 **)v38;
        k = v50;
      }
      if ( v19 )
      {
        std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v19, *(__int64 **)&v38[2]);
        std::_Deallocate<16,0>(v19, (const struct std::nothrow_t *)((v39 - (_QWORD)v19) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    if ( v13 )
    {
      std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(v13, v8);
      std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(8 * (v4 - v13)));
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v47) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x30D,
                     (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                     v6);
    return (unsigned int)v47;
  }
  return result;
}
