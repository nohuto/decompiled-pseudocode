/*
 * XREFs of ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801A04F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z @ 0x180036874 (-SetToInverse@CMILMatrix@@QEAA_NAEBV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800CCCB4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180175DB0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x18017601C (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
 */

__int64 __fastcall CSpectreCallbackRenderer::Render(CSpectreCallbackRenderer *this)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  char v5; // r15
  __int64 v6; // rbx
  void (__fastcall *v7)(__int64, __int64, __int64 **, _QWORD); // rdi
  __int64 v8; // rax
  void (__fastcall ***v9)(_QWORD); // rax
  void (__fastcall ***v10)(_QWORD); // r12
  __int64 v11; // rbx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  char *v16; // rdi
  _BYTE *v17; // rdx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rcx
  size_t v20; // rbx
  unsigned __int64 v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rdi
  void (__fastcall *v24)(__int64, __int64); // rbx
  __int64 v25; // rax
  void (__fastcall *v26)(_QWORD); // rax
  int v27; // eax
  unsigned int v28; // ebx
  void *v30[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h]
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v33; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v35)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  int v36; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  char v38; // [rsp+80h] [rbp-80h]
  _OWORD v39[4]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+D0h] [rbp-30h]
  _BYTE v41[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v42; // [rsp+120h] [rbp+20h]
  int v43; // [rsp+130h] [rbp+30h] BYREF
  int v44; // [rsp+134h] [rbp+34h]
  int v45; // [rsp+138h] [rbp+38h]
  int v46; // [rsp+13Ch] [rbp+3Ch]
  float v47[4]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v34 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 320LL))(v4, &v34);
  v5 = 1;
  v36 = 1;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v34 + 768LL))(v34, &v36, &v43);
  if ( v45 <= v43 || v46 <= v44 )
  {
LABEL_24:
    v28 = 0;
    goto LABEL_25;
  }
  v6 = v34;
  v33 = 0LL;
  v7 = *(void (__fastcall **)(__int64, __int64, __int64 **, _QWORD))(*(_QWORD *)v34 + 712LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v33);
  v7(v6, 1LL, &v33, 0LL);
  v8 = *v33;
  v35 = 0LL;
  (*(void (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v8 + 56))(v33, &v35);
  v32 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v32);
  (**v35)(v35, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v32);
  v9 = (void (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v31 = 0LL;
  v10 = v9;
  *(_OWORD *)v30 = 0LL;
  (**v9)(v9);
  v11 = *((_QWORD *)this + 16);
  v37[1] = v30;
  v37[0] = v10;
  v38 = 1;
  if ( *((_QWORD *)this + 15) != v11 )
  {
    v12 = *((_OWORD *)this + 2);
    v40 = 0;
    v13 = *((_OWORD *)this + 3);
    v42 = 0;
    v39[0] = v12;
    v14 = *((_OWORD *)this + 4);
    v39[1] = v13;
    v15 = *((_OWORD *)this + 5);
    v39[2] = v14;
    v39[3] = v15;
    if ( CMILMatrix::SetToInverse((CMILMatrix *)v41, (const struct CMILMatrix *)v39) )
    {
      v16 = (char *)v30[1];
      v17 = v30[0];
      v18 = (v11 - *((_QWORD *)this + 15)) >> 3;
      v19 = ((char *)v30[1] - (char *)v30[0]) >> 3;
      if ( v18 < v19 )
      {
        v16 = (char *)v30[0] + 8 * v18;
LABEL_11:
        v30[1] = v16;
        goto LABEL_12;
      }
      if ( v18 > v19 )
      {
        if ( v18 <= (signed __int64)(v31 - (unsigned __int64)v30[0]) >> 3 )
        {
          v20 = 8 * (v18 - v19);
          memset_0(v30[1], 0, v20);
          v17 = v30[0];
          v16 += v20;
          goto LABEL_11;
        }
        std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>((__int64)v30, v18);
        v17 = v30[0];
        v16 = (char *)v30[1];
      }
LABEL_12:
      v21 = 0LL;
      if ( (v16 - v17) >> 3 )
      {
        do
        {
          v22 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v21);
          if ( (*(int (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v22 + 288LL))(v22, v41, &v17[8 * v21]) >= 0 )
          {
            v23 = *((_QWORD *)v30[0] + v21);
            v24 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v23 + 24LL);
            v25 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
            v24(v23, v25);
          }
          ++v21;
          v17 = v30[0];
        }
        while ( v21 < ((char *)v30[1] - (char *)v30[0]) >> 3 );
      }
      v5 = 0;
    }
  }
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), char *))(*v10)[1])(v10, (char *)this + 96);
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), __int64))(*v10)[2])(v10, v32);
  v26 = (*v10)[3];
  v47[0] = (float)v43;
  v47[1] = (float)v44;
  v47[2] = (float)v45;
  v47[3] = (float)v46;
  ((void (__fastcall *)(void (__fastcall ***)(_QWORD), float *))v26)(v10, v47);
  v27 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD), _QWORD, char *, _QWORD, char))(*v10)[4])(
          v10,
          *((_QWORD *)this + 3),
          (char *)this + 32,
          0LL,
          v5);
  v28 = v27;
  if ( v27 >= 0 )
  {
    lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v37);
    if ( v30[0] )
    {
      std::_Deallocate<16,0>(v30[0], (v31 - (unsigned __int64)v30[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v31 = 0LL;
      *(_OWORD *)v30 = 0LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8E,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\spatialcallbackrenderer.cpp",
    (const char *)(unsigned int)v27);
  lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v37);
  if ( v30[0] )
  {
    std::_Deallocate<16,0>(v30[0], (v31 - (unsigned __int64)v30[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    v31 = 0LL;
    *(_OWORD *)v30 = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v32);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v33);
LABEL_25:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  return v28;
}
