/*
 * XREFs of ?Initialize@CLegacySwapChain@@MEAAJXZ @ 0x1800D61A0
 * Callers:
 *     ?Initialize@CConversionSwapChain@@MEAAJXZ @ 0x180250700 (-Initialize@CConversionSwapChain@@MEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180006810 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180039700 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Release@CDrawListEntry@@UEAAKXZ @ 0x18003A090 (-Release@CDrawListEntry@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5D44 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@?$vector@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@V?$allocator@V?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@std@@@2@@std@@QEAAPEAV?$unique_ptr@VCSwapChainBuffer@@U?$default_delete@VCSwapChainBuffer@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800D63A0 (--$_Emplace_reallocate@V-$unique_ptr@VCSwapChainBuffer@@U-$default_delete@VCSwapChainBuffer@@@st.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
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
  void *v16; // r14
  _DWORD *v17; // rax
  __int64 v18; // rcx
  void *v19; // rbx
  _QWORD *v20; // rdx
  void **v21; // rbx
  char *v22; // rcx
  CDrawListEntry *v24; // rcx
  CDrawListEntry *v25; // rcx
  void **v26; // rbx
  CDrawListEntry *v27; // rcx
  void *v28; // [rsp+38h] [rbp-29h] BYREF
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
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x39u, 0LL);
  }
  else
  {
    v6 = *((_QWORD *)this + 9);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, char *)))(*(_QWORD *)v6 + 72LL);
    wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v29);
    v8 = v7(v6, (unsigned int)(*((_DWORD *)this + 44) - 1), &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v29);
    v5 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3Du, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x3Fu, 0LL);
      }
      else
      {
        v13 = (void (__fastcall ***)(_QWORD, __int64 *))(*((_QWORD *)this + 10)
                                                       + 8LL
                                                       + *(int *)(*(_QWORD *)(*((_QWORD *)this + 10) + 8LL) + 16LL));
        (**v13)(v13, &v30);
        v14 = 0;
        if ( *((_DWORD *)this + 44) )
        {
          while ( 1 )
          {
            v15 = v30;
            v31 = v30;
            v5 = 0;
            v28 = 0LL;
            v16 = 0LL;
            v17 = DefaultHeap::Alloc(0x68uLL);
            if ( v17 )
            {
              v17[3] = HIDWORD(v31);
              v18 = (__int64)(v17 + 6);
              *(_QWORD *)v17 = 0LL;
              v17[2] = v15;
              *((_QWORD *)v17 + 2) = v17 + 6;
              v17[6] = 0;
              v17[22] = v14;
              *((_QWORD *)v17 + 12) = 0LL;
            }
            else
            {
              v17 = 0LL;
            }
            if ( v17 )
            {
              v16 = v17;
            }
            else
            {
              v5 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, -2147024882, 0x17u, 0LL);
            }
            v19 = v28;
            v28 = v16;
            if ( v19 )
            {
              v24 = (CDrawListEntry *)*((_QWORD *)v19 + 12);
              if ( v24 )
                CDrawListEntry::Release(v24);
              FastRegion::CRegion::FreeMemory((void **)v19 + 2);
              operator delete(v19);
              v16 = v28;
            }
            if ( v5 < 0 )
              break;
            v20 = (_QWORD *)*((_QWORD *)this + 14);
            if ( *((_QWORD **)this + 15) == v20 )
            {
              std::vector<std::unique_ptr<CSwapChainBuffer>>::_Emplace_reallocate<std::unique_ptr<CSwapChainBuffer>>(
                (char *)this + 104,
                v20,
                &v28);
            }
            else
            {
              v28 = 0LL;
              *v20 = v16;
              *((_QWORD *)this + 14) += 8LL;
            }
            v21 = (void **)v28;
            if ( v28 )
            {
              v25 = (CDrawListEntry *)*((_QWORD *)v28 + 12);
              if ( v25 )
                CDrawListEntry::Release(v25);
              FastRegion::CRegion::FreeMemory(v21 + 2);
              operator delete(v21);
            }
            if ( (unsigned int)++v14 >= *((_DWORD *)this + 44) )
              goto LABEL_17;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v5, 0x4Au, 0LL);
          v26 = (void **)v28;
          if ( v28 )
          {
            v27 = (CDrawListEntry *)*((_QWORD *)v28 + 12);
            if ( v27 )
              CDrawListEntry::Release(v27);
            FastRegion::CRegion::FreeMemory(v26 + 2);
            operator delete(v26);
          }
        }
        else
        {
LABEL_17:
          v22 = (char *)this + *(int *)(*((_QWORD *)this + 3) + 16LL) + 24;
          (*(void (__fastcall **)(char *, _BYTE *))(*(_QWORD *)v22 + 72LL))(v22, v32);
        }
      }
    }
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v29);
  return (unsigned int)v5;
}
