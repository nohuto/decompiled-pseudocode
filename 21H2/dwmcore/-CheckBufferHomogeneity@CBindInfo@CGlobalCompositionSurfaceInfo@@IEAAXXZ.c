/*
 * XREFs of ?CheckBufferHomogeneity@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x180248230
 * Callers:
 *     ?Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18006B800 (-Initialize@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::CBindInfo::CheckBufferHomogeneity(
        CGlobalCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 **v2; // rcx
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // [rsp+38h] [rbp-39h] BYREF
  __int64 v20; // [rsp+40h] [rbp-31h] BYREF
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // [rsp+48h] [rbp-29h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+50h] [rbp-21h] BYREF
  _DWORD v23[12]; // [rsp+58h] [rbp-19h] BYREF
  _DWORD v24[12]; // [rsp+88h] [rbp+17h] BYREF

  *((_BYTE *)this + 32) = 1;
  v2 = (__int64 **)*((_QWORD *)this + 10);
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 11) - (_QWORD)v2) >> 3) >= 2 )
  {
    v19 = 0LL;
    v3 = *v2;
    v4 = *v3;
    v21 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v4 + 144))(v3, &v21, 0LL);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0LL, v5, 0x54Cu);
    }
    else
    {
      wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v19);
      v7 = (**v21)(v21, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v19);
      v9 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v7, 0x54Du);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v19 + 80LL))(v19, v23);
        v10 = *((_QWORD *)this + 10);
        v11 = 1;
        if ( (unsigned __int64)((*((_QWORD *)this + 11) - v10) >> 3) <= 1 )
        {
LABEL_20:
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
          if ( v9 >= 0 )
            return;
          goto LABEL_29;
        }
        v12 = 1LL;
        while ( 1 )
        {
          v20 = 0LL;
          v13 = *(__int64 **)(v10 + 8 * v12);
          v14 = *v13;
          v22 = 0LL;
          v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v14 + 144))(v13, &v22, 0LL);
          if ( v15 < 0 )
            break;
          wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v20);
          v17 = (**v22)(v22, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v20);
          v9 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, v17, 0x557u);
            goto LABEL_24;
          }
          (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v20 + 80LL))(v20, v24);
          if ( v24[0] != v23[0]
            || v24[1] != v23[1]
            || v24[2] != v23[2]
            || v24[3] != v23[3]
            || v24[4] != v23[4]
            || v24[5] != v23[5]
            || v24[6] != v23[6]
            || v24[7] != v23[7]
            || v24[8] != v23[8]
            || v24[9] != v23[9]
            || v24[10] != v23[10] )
          {
            *((_BYTE *)this + 32) = 0;
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
            wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
            goto LABEL_20;
          }
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
          v10 = *((_QWORD *)this + 10);
          v12 = ++v11;
          if ( v11 >= (unsigned __int64)((*((_QWORD *)this + 11) - v10) >> 3) )
            goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0LL, v15, 0x556u);
LABEL_24:
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v20);
        wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v22);
      }
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v19);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v21);
LABEL_29:
    *((_BYTE *)this + 32) = 0;
  }
}
