/*
 * XREFs of ?PopulateEndpointCharacteristicsCache@CEndpointCharacteristicsCache@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180058660
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$emplace_back@AEAPEAVCEndpointCharacteristics@@@?$vector@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXAEAPEAVCEndpointCharacteristics@@@Z @ 0x1800589C0 (--$emplace_back@AEAPEAVCEndpointCharacteristics@@@-$vector@V-$com_ptr_t@VCEndpointCharacteristic.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180058BB4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@w.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_b1bf813238bea76d99dc89795d1a2868___ @ 0x18005BD50 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_wil--com_ptr_t_CEndpoint.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
void __fastcall CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache(
        PTP_CALLBACK_INSTANCE Instance,
        _BYTE *Context,
        PTP_WORK Work)
{
  int v4; // eax
  __int64 v5; // r8
  unsigned int i; // edi
  __int64 v7; // rcx
  void *v8; // rbx
  LPVOID v9; // rcx
  LPVOID v10; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  LPVOID v12; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-28h] BYREF
  __int128 v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp-10h]
  LPVOID v17; // [rsp+98h] [rbp+28h] BYREF
  LPVOID ppv; // [rsp+A8h] [rbp+38h] BYREF

  if ( CoInitializeEx(0LL, 0) >= 0 )
  {
    ppv = 0LL;
    if ( CoCreateInstance(
           &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
           0LL,
           0x17u,
           &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
           &ppv) >= 0 )
    {
      v15 = 0LL;
      v16 = 0LL;
      if ( !Context[104] )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, _QWORD, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 0LL, &v11) >= 0 )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v11 + 40LL))(v11, &v12) >= 0 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v12,
              0LL,
              1LL,
              &v17);
            v9 = v17;
            if ( v17 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v15,
                &v17);
              v9 = v17;
            }
            if ( v9 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
          }
          CoTaskMemFree(v12);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        if ( !Context[104] )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, _QWORD, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 0LL, &v12) >= 0 )
          {
            v17 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &v17) >= 0 )
            {
              v14 = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
                Context,
                v17,
                0LL,
                1LL,
                &v14);
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            CoTaskMemFree(v17);
          }
          if ( v12 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( !Context[104] )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 32LL))(ppv, 0LL, 2LL, &v11) >= 0 )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v11 + 40LL))(v11, &v12) >= 0 )
          {
            v17 = 0LL;
            (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, LPVOID *))(*(_QWORD *)Context + 24LL))(
              Context,
              v12,
              0LL,
              1LL,
              &v17);
            v10 = v17;
            if ( v17 )
            {
              std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                &v15,
                &v17);
              v10 = v17;
            }
            if ( v10 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v10 + 16LL))(v10);
          }
          CoTaskMemFree(v12);
        }
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        if ( !Context[104] )
        {
          v12 = 0LL;
          if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 32LL))(ppv, 1LL, 2LL, &v12) >= 0 )
          {
            v17 = 0LL;
            if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, &v17) >= 0 )
            {
              v14 = 0LL;
              (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
                Context,
                v17,
                0LL,
                1LL,
                &v14);
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            CoTaskMemFree(v17);
          }
          if ( v12 )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
          if ( !Context[104] )
          {
            v12 = 0LL;
            v4 = PerformEndpointDiscoveryForUnpluggedEndpoints();
            v5 = 1LL;
            if ( v4 )
              v5 = 9LL;
            if ( (*(int (__fastcall **)(LPVOID, __int64, __int64, LPVOID *))(*(_QWORD *)ppv + 24LL))(ppv, 2LL, v5, &v12) >= 0
              && (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v12 + 24LL))(v12, &v17) >= 0 )
            {
              for ( i = 0; !Context[104] && i < (unsigned int)v17; ++i )
              {
                v14 = 0LL;
                if ( (*(int (__fastcall **)(LPVOID, _QWORD, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, i, &v14) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v14 + 40LL))(v14, &pv) >= 0 )
                  {
                    v11 = 0LL;
                    (*(void (__fastcall **)(_BYTE *, LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)Context + 24LL))(
                      Context,
                      pv,
                      0LL,
                      1LL,
                      &v11);
                    v7 = v11;
                    if ( v11 )
                    {
                      std::vector<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>::emplace_back<CEndpointCharacteristics * &>(
                        &v15,
                        &v11);
                      v7 = v11;
                    }
                    if ( v7 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
                  }
                  CoTaskMemFree(pv);
                }
                if ( v14 )
                  (*(void (**)(void))(*(_QWORD *)v14 + 16LL))();
              }
            }
            if ( v12 )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
          }
        }
      }
      v8 = (void *)v15;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_wil::com_ptr_t_CEndpointCharacteristics_wil::err_returncode_policy_________lambda_b1bf813238bea76d99dc89795d1a2868___(
        &v17,
        v15,
        *((_QWORD *)&v15 + 1));
      if ( v8 )
      {
        std::_Destroy_range<std::allocator<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>>(
          v8,
          *((_QWORD *)&v15 + 1));
        std::_Deallocate<16,0>(v8, (const struct std::nothrow_t *)((v16 - (_QWORD)v8) & 0xFFFFFFFFFFFFFFF8uLL));
      }
    }
    CoUninitialize();
    if ( ppv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  }
}
