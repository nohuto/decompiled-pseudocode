/*
 * XREFs of ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800EDF80
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x180292C10 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@?$vector@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800EE1B4 (--$_Emplace_reallocate@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@@st.c)
 *     ??1CSwapChainBuffer@@QEAA@XZ @ 0x1800F4C54 (--1CSwapChainBuffer@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacySwapChain::Initialize(CLegacySwapChain *this)
{
  __int64 v1; // rax
  int v3; // eax
  __int64 v4; // rcx
  int v5; // edi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)); // rbx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  void (__fastcall ***v13)(_QWORD, __int64 *); // rcx
  int v14; // r15d
  int v15; // ebx
  CSwapChainBuffer *v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rcx
  _DWORD *v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // rax
  CSwapChainBuffer *v22; // rbx
  CSwapChainBuffer **v23; // rdx
  CSwapChainBuffer *v24; // rbx
  char *v25; // rcx
  CSwapChainBuffer *v27; // rbx
  CSwapChainBuffer *v28; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall ***v29)(_QWORD, GUID *, char *); // [rsp+40h] [rbp-21h] BYREF
  __int64 v30; // [rsp+48h] [rbp-19h] BYREF
  __int64 v31; // [rsp+50h] [rbp-11h]
  _BYTE v32[48]; // [rsp+58h] [rbp-9h] BYREF

  v1 = *(_QWORD *)this;
  v29 = 0LL;
  v3 = (*(__int64 (__fastcall **)(CLegacySwapChain *))(v1 + 56))(this);
  v5 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0LL, v3, 0x62u);
  }
  else
  {
    v6 = *((_QWORD *)this + 9);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v6 + 72LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v29);
    v8 = v7(v6, (unsigned int)(*((_DWORD *)this + 51) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v29);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, v8, 0x66u);
    }
    else
    {
      v10 = *((_QWORD *)this + 12);
      *((_QWORD *)this + 12) = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      v11 = (**v29)(v29, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, (char *)this + 96);
      v5 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x68u);
      }
      else
      {
        v13 = (void (__fastcall ***)(_QWORD, __int64 *))(*((_QWORD *)this + 10)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 16LL));
        (**v13)(v13, &v30);
        v14 = 0;
        if ( *((_DWORD *)this + 51) )
        {
          while ( 1 )
          {
            v15 = v30;
            v31 = v30;
            v5 = 0;
            v28 = 0LL;
            v16 = 0LL;
            v17 = DefaultHeap::Alloc(0xB0uLL);
            v19 = v17;
            if ( v17 )
            {
              v16 = (CSwapChainBuffer *)v17;
              v17[3] = HIDWORD(v31);
              v20 = (__int64)(v17 + 6);
              *(_QWORD *)v17 = 0LL;
              v17[2] = v15;
              *((_QWORD *)v17 + 2) = v17 + 6;
              v17[6] = 0;
              v17[22] = v14;
              *((_QWORD *)v17 + 12) = 0LL;
              v21 = v17 + 28;
              *((_QWORD *)v19 + 13) = v21;
              *v21 = 0;
            }
            else
            {
              v5 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024882, 0x17u);
            }
            v22 = v28;
            v28 = v16;
            if ( v22 )
            {
              CSwapChainBuffer::~CSwapChainBuffer(v22);
              operator delete(v22, 0xB0uLL);
              v16 = v28;
            }
            if ( v5 < 0 )
              break;
            v23 = (CSwapChainBuffer **)*((_QWORD *)this + 14);
            if ( v23 == *((CSwapChainBuffer ***)this + 15) )
            {
              std::vector<std::unique_ptr<CSwapChainBuffer>>::_Emplace_reallocate<std::unique_ptr<CSwapChainBuffer>>(
                (char *)this + 104,
                v23,
                &v28);
            }
            else
            {
              v28 = 0LL;
              *v23 = v16;
              *((_QWORD *)this + 14) += 8LL;
            }
            v24 = v28;
            if ( v28 )
            {
              CSwapChainBuffer::~CSwapChainBuffer(v28);
              operator delete(v24, 0xB0uLL);
            }
            if ( (unsigned int)++v14 >= *((_DWORD *)this + 51) )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v5, 0x73u);
          v27 = v28;
          if ( v28 )
          {
            CSwapChainBuffer::~CSwapChainBuffer(v28);
            operator delete(v27, 0xB0uLL);
          }
        }
        else
        {
LABEL_17:
          v25 = (char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24;
          (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v25 + 120LL))(v25, v32);
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  return (unsigned int)v5;
}
