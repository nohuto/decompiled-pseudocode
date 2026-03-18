/*
 * XREFs of ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x1801E9E80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024DE0 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E1920 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     _lambda_05398b4549421d065ab404e0dbeea144_::operator() @ 0x1801E9D68 (_lambda_05398b4549421d065ab404e0dbeea144_--operator().c)
 *     _lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator() @ 0x1801E9DA4 (_lambda_a6cadc748e29644dcd3cf84dc08806d7_--operator().c)
 *     ?GetSharedSectionData@CSharedSectionWrapper@@QEBA?AV?$span@E$0?0@gsl@@XZ @ 0x1801EDB6C (-GetSharedSectionData@CSharedSectionWrapper@@QEBA-AV-$span@E$0-0@gsl@@XZ.c)
 */

__int64 __fastcall CSceneMesh::OnSceneFrameTick(CSceneMesh *this, struct ISpectreRenderer *a2)
{
  CSceneMesh *v3; // rbx
  __int64 v4; // rdx
  int v5; // r9d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 (__fastcall *v20)(struct ISpectreRenderer *, __int64 *); // rbx
  int v21; // eax
  unsigned int v23; // [rsp+28h] [rbp-39h]
  _BYTE v24[16]; // [rsp+38h] [rbp-29h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-19h] BYREF
  char v26; // [rsp+58h] [rbp-9h]
  unsigned int v27; // [rsp+68h] [rbp+7h] BYREF
  __int64 v28; // [rsp+70h] [rbp+Fh]
  __int128 v29; // [rsp+78h] [rbp+17h]
  __int128 v30; // [rsp+88h] [rbp+27h]
  CSceneMesh *v31; // [rsp+98h] [rbp+37h]
  int v32; // [rsp+A0h] [rbp+3Fh]
  __int128 v33; // [rsp+A8h] [rbp+47h]
  __int64 v34; // [rsp+C8h] [rbp+67h] BYREF

  v3 = this;
  if ( !*((_BYTE *)this + 16) )
    return 0;
  v4 = *((_QWORD *)this - 6);
  v25[0] = (char *)this - 144;
  v25[1] = &v34;
  v34 = 0LL;
  v26 = 1;
  if ( !v4 )
  {
LABEL_51:
    lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(v25);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
    return 0;
  }
  if ( *((_DWORD *)this - 20) == 6 )
  {
    v31 = 0LL;
    v29 = 0LL;
    v30 = 0LL;
    v33 = 0LL;
    v32 = 0;
    v7 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v4, 6);
    v8 = *((_QWORD *)v3 - 6);
    v27 = v7;
    v28 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(v8, v24) + 8);
    this = (CSceneMesh *)*((_QWORD *)v3 - 7);
    if ( this )
    {
      if ( *((_DWORD *)v3 - 21) == 57 )
      {
        v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(this, v24) + 8);
        *(_QWORD *)&v33 = v9;
      }
      else
      {
        if ( *((_DWORD *)v3 - 21) != 42 )
        {
          v23 = 109;
          goto LABEL_5;
        }
        v9 = *(_QWORD *)(CSharedSectionWrapper::GetSharedSectionData(this, v24) + 8);
        *((_QWORD *)&v33 + 1) = v9;
      }
      v32 = lambda_05398b4549421d065ab404e0dbeea144_::operator()(v9, *((_QWORD *)v3 - 7), *((_DWORD *)v3 - 21));
    }
    v10 = *((_QWORD *)v3 - 5);
    if ( v10 )
    {
      if ( *((_DWORD *)v3 - 19) != 6 )
      {
        v23 = 118;
        goto LABEL_5;
      }
      v11 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v10, 6);
      if ( v27 > v11 )
      {
        v23 = 121;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 5), v24) + 8);
      *(_QWORD *)&v29 = this;
    }
    v12 = *((_QWORD *)v3 - 1);
    if ( v12 )
    {
      if ( *((_DWORD *)v3 - 15) != 2 )
      {
        v23 = 129;
        goto LABEL_5;
      }
      v13 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v12, 2);
      if ( v27 > v13 )
      {
        v23 = 132;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 1), v24) + 8);
      *((_QWORD *)&v29 + 1) = this;
    }
    v14 = *((_QWORD *)v3 - 2);
    if ( v14 )
    {
      if ( *((_DWORD *)v3 - 16) != 42 )
      {
        v23 = 140;
        goto LABEL_5;
      }
      v15 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v14, 42);
      if ( v27 > v15 )
      {
        v23 = 143;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 2), v24) + 8);
      *(_QWORD *)&v30 = this;
    }
    v16 = *((_QWORD *)v3 - 4);
    if ( v16 )
    {
      if ( *((_DWORD *)v3 - 18) != 16 )
      {
        v23 = 151;
        goto LABEL_5;
      }
      v17 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v16, 16);
      if ( v27 > v17 )
      {
        v23 = 154;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 4), v24) + 8);
      *((_QWORD *)&v30 + 1) = this;
    }
    v18 = *((_QWORD *)v3 - 3);
    if ( v18 )
    {
      if ( *((_DWORD *)v3 - 17) != 16 )
      {
        v23 = 162;
        goto LABEL_5;
      }
      v19 = lambda_05398b4549421d065ab404e0dbeea144_::operator()((__int64)this, v18, 16);
      if ( v27 > v19 )
      {
        v23 = 165;
        goto LABEL_5;
      }
      this = *(CSceneMesh **)(CSharedSectionWrapper::GetSharedSectionData(*((_QWORD *)v3 - 3), v24) + 8);
      v31 = this;
    }
    if ( *((_DWORD *)v3 - 22) != 4 )
    {
      v23 = 172;
      goto LABEL_5;
    }
    v20 = *(__int64 (__fastcall **)(struct ISpectreRenderer *, __int64 *))(*(_QWORD *)a2 + 72LL);
    wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&v34);
    v21 = v20(a2, &v34);
    v6 = v21;
    if ( v21 < 0 )
    {
      v23 = 175;
      goto LABEL_50;
    }
    v21 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v27);
    v6 = v21;
    if ( v21 < 0 )
    {
      v23 = 176;
LABEL_50:
      v5 = v21;
      goto LABEL_6;
    }
    goto LABEL_51;
  }
  v23 = 86;
LABEL_5:
  v5 = -2147024809;
  v6 = -2147024809;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v5, v23, 0LL);
  lambda_a6cadc748e29644dcd3cf84dc08806d7_::operator()(v25);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v34);
  return v6;
}
