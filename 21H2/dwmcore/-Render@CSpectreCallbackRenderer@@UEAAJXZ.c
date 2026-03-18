/*
 * XREFs of ?Render@CSpectreCallbackRenderer@@UEAAJXZ @ 0x1801E6920
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EB80 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800DCDBC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?reset@?$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E98E4 (-reset@-$com_ptr_t@UID3D11ShaderResourceView@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@PEAUISpectreLightNode@@V?$allocator@PEAUISpectreLightNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801AF16C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@PEAUISpectreLightNode@@V-$allocator@PEAUIS.c)
 *     _lambda_2c23dc335d575e6068a59f43383614b1_::operator() @ 0x1801AF470 (_lambda_2c23dc335d575e6068a59f43383614b1_--operator().c)
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
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  char *v18; // rdi
  _BYTE *v19; // rdx
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  size_t v22; // rbx
  unsigned __int64 v23; // r14
  __int64 v24; // rcx
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, __int64); // rbx
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ebx
  void *v32[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h]
  __int64 v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  int v38; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v39[2]; // [rsp+70h] [rbp-90h] BYREF
  char v40; // [rsp+80h] [rbp-80h]
  _OWORD v41[4]; // [rsp+90h] [rbp-70h] BYREF
  int v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+E0h] [rbp-20h] BYREF
  int v44; // [rsp+E4h] [rbp-1Ch]
  int v45; // [rsp+E8h] [rbp-18h]
  int v46; // [rsp+ECh] [rbp-14h]
  float v47[4]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+38h]

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 24LL))(*((_QWORD *)this + 3));
  v36 = 0LL;
  v3 = v2;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
  (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 320LL))(v4, &v36);
  v5 = 1;
  v38 = 1;
  (*(void (__fastcall **)(__int64, int *, int *))(*(_QWORD *)v36 + 768LL))(v36, &v38, &v43);
  if ( v45 <= v43 || v46 <= v44 )
  {
LABEL_24:
    v30 = 0;
    goto LABEL_25;
  }
  v6 = v36;
  v35 = 0LL;
  v7 = *(void (__fastcall **)(__int64, __int64, __int64 **, _QWORD))(*(_QWORD *)v36 + 712LL);
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset((__int64 *)&v35);
  v7(v6, 1LL, &v35, 0LL);
  v8 = *v35;
  v37 = 0LL;
  (*(void (__fastcall **)(__int64 *, void (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v8 + 56))(v35, &v37);
  v34 = 0LL;
  wil::com_ptr_t<ID3D11ShaderResourceView,wil::err_returncode_policy>::reset(&v34);
  (**v37)(v37, &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c, &v34);
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
  v33 = 0LL;
  *(_OWORD *)v32 = 0LL;
  v10 = v9;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  v39[0] = v10;
  v39[1] = v32;
  v13 = *((_QWORD *)this + 16);
  v40 = 1;
  if ( *((_QWORD *)this + 15) != v13 )
  {
    v14 = *((_OWORD *)this + 2);
    v42 = 0;
    v15 = *((_OWORD *)this + 3);
    v16 = *((_OWORD *)this + 4);
    v17 = *((_OWORD *)this + 5);
    v41[0] = v14;
    v41[1] = v15;
    v41[2] = v16;
    v41[3] = v17;
    if ( CMILMatrix::Invert((CMILMatrix *)v41, v11, v12) )
    {
      v18 = (char *)v32[1];
      v19 = v32[0];
      v20 = (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3;
      v21 = ((char *)v32[1] - (char *)v32[0]) >> 3;
      if ( v20 < v21 )
      {
        v18 = (char *)v32[0] + 8 * v20;
LABEL_11:
        v32[1] = v18;
        goto LABEL_12;
      }
      if ( v20 > v21 )
      {
        if ( v20 <= (signed __int64)(v33 - (unsigned __int64)v32[0]) >> 3 )
        {
          v22 = 8 * (v20 - v21);
          memset_0(v32[1], 0, v22);
          v19 = v32[0];
          v18 += v22;
          goto LABEL_11;
        }
        std::vector<ISpectreLightNode *>::_Resize_reallocate<std::_Value_init_tag>(
          (__int64)v32,
          (__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 15)) >> 3);
        v19 = v32[0];
        v18 = (char *)v32[1];
      }
LABEL_12:
      v23 = 0LL;
      if ( (v18 - v19) >> 3 )
      {
        do
        {
          v24 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v23);
          if ( (*(int (__fastcall **)(__int64, _OWORD *, _BYTE *))(*(_QWORD *)v24 + 272LL))(v24, v41, &v19[8 * v23]) >= 0 )
          {
            v25 = *((_QWORD *)v32[0] + v23);
            v26 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 24LL);
            v27 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 40LL))(*((_QWORD *)this + 3));
            v26(v25, v27);
          }
          ++v23;
          v19 = v32[0];
        }
        while ( v23 < ((char *)v32[1] - (char *)v32[0]) >> 3 );
      }
      v5 = 0;
    }
  }
  (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 16LL))(v10, (char *)this + 96);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v34);
  v28 = *(_QWORD *)v10;
  v47[0] = (float)v43;
  v47[1] = (float)v44;
  v47[2] = (float)v45;
  v47[3] = (float)v46;
  (*(void (__fastcall **)(__int64, float *))(v28 + 32))(v10, v47);
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *, _QWORD, char))(*(_QWORD *)v10 + 40LL))(
          v10,
          *((_QWORD *)this + 3),
          (char *)this + 32,
          0LL,
          v5);
  v30 = v29;
  if ( v29 >= 0 )
  {
    lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v39);
    if ( v32[0] )
    {
      std::_Deallocate<16,0>(v32[0], (v33 - (unsigned __int64)v32[0]) & 0xFFFFFFFFFFFFFFF8uLL);
      v33 = 0LL;
      *(_OWORD *)v32 = 0LL;
    }
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
    goto LABEL_24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x8E,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\spatialcallbackrenderer.cpp",
    (const char *)(unsigned int)v29);
  lambda_2c23dc335d575e6068a59f43383614b1_::operator()(v39);
  if ( v32[0] )
  {
    std::_Deallocate<16,0>(v32[0], (v33 - (unsigned __int64)v32[0]) & 0xFFFFFFFFFFFFFFF8uLL);
    v33 = 0LL;
    *(_OWORD *)v32 = 0LL;
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v37);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v35);
LABEL_25:
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v36);
  return v30;
}
