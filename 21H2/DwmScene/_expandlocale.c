/*
 * XREFs of _expandlocale @ 0x1800418BC
 * Callers:
 *     sub_1800426C4 @ 0x1800426C4 (sub_1800426C4.c)
 * Callees:
 *     sub_180017DD4 @ 0x180017DD4 (sub_180017DD4.c)
 *     sub_180041148 @ 0x180041148 (sub_180041148.c)
 *     sub_18004120C @ 0x18004120C (sub_18004120C.c)
 *     sub_1800412CC @ 0x1800412CC (sub_1800412CC.c)
 *     sub_18004134C @ 0x18004134C (sub_18004134C.c)
 *     sub_180041454 @ 0x180041454 (sub_180041454.c)
 *     sub_180041750 @ 0x180041750 (sub_180041750.c)
 *     sub_1800424A0 @ 0x1800424A0 (sub_1800424A0.c)
 *     CreateDXGIFactory1 @ 0x180113DE4 (CreateDXGIFactory1.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180124038 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall expandlocale(
        ID3D11DeviceContext *a1,
        IDXGIAdapter **a2,
        __int64 *a3,
        ID3D11Device **a4,
        int a5,
        char a6,
        int a7,
        D3D_FEATURE_LEVEL a8,
        D3D_FEATURE_LEVEL a9,
        char a10)
{
  ID3D11Device **v10; // rbx
  _QWORD *v13; // rax
  IDXGIAdapter *v14; // rcx
  __int64 v15; // rcx
  ID3D11Device *v16; // rcx
  D3D_FEATURE_LEVEL *v17; // rcx
  int v18; // edx
  HRESULT DXGIFactory1; // edi
  D3D_FEATURE_LEVEL *v20; // rsi
  __int64 v21; // r15
  D3D_FEATURE_LEVEL *v22; // r12
  D3D_FEATURE_LEVEL v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // edx
  ID3D11DeviceContext *v27; // rsi
  __int64 *v28; // rax
  D3D_FEATURE_LEVEL *v30; // r15
  struct ID3D11DeviceContextVtbl *lpVtbl; // rbx
  IDXGIAdapter *v32; // rcx
  int v33; // eax
  IDXGIAdapter *v34; // rcx
  bool v35; // zf
  float v36; // xmm0_4
  float *v37; // rax
  _QWORD *v38; // rbx
  bool v39; // zf
  IDXGIAdapter *v40; // rcx
  IDXGIAdapter *v41; // rdi
  IDXGIAdapter *v42; // rdx
  __int64 v43; // rcx
  ID3D11Device *v44; // rcx
  __int64 v45; // rcx
  ID3D11Device *v46; // rcx
  ID3D11DeviceContext *v47; // rcx
  ID3D11Device *v48; // rcx
  IDXGIAdapter *v49; // rcx
  __int64 v50; // rcx
  ID3D11Device *v51; // rcx
  ID3D11DeviceContext *v52; // rcx
  ID3D11Device *v53; // rcx
  __int64 **v54; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  IDXGIAdapter *v57; // rcx
  __int64 v58; // rcx
  ID3D11Device *v59; // rcx
  ID3D11Device *v60; // rcx
  ID3D11DeviceContext *v61; // rcx
  ID3D11DeviceContext *v62; // rcx
  __int64 v63; // rcx
  ID3D11DeviceContext *v64; // rcx
  IDXGIAdapter *v65; // rcx
  __int64 v66; // rcx
  ID3D11Device *v67; // rcx
  ID3D11DeviceContext *v68; // rcx
  __int64 v69; // rcx
  ID3D11DeviceContext *v70; // rcx
  __int64 v71; // rcx
  ID3D11DeviceContext *v72; // rcx
  __int64 v73; // rcx
  IDXGIAdapter *v74; // rcx
  __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  D3D_FEATURE_LEVEL *v77; // rax
  unsigned __int64 v78; // rdx
  float v81; // [rsp+5Ch] [rbp-A4h] BYREF
  D3D_FEATURE_LEVEL *v82; // [rsp+60h] [rbp-A0h]
  char v83[16]; // [rsp+68h] [rbp-98h] BYREF
  ID3D11DeviceContext *v84; // [rsp+78h] [rbp-88h] BYREF
  ID3D11DeviceContext *v85; // [rsp+80h] [rbp-80h] BYREF
  D3D_FEATURE_LEVEL v86[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  ID3D11Device *v88; // [rsp+98h] [rbp-68h] BYREF
  D3D_FEATURE_LEVEL *v89[2]; // [rsp+A0h] [rbp-60h] BYREF
  D3D_FEATURE_LEVEL *v90; // [rsp+B0h] [rbp-50h]
  D3D_FEATURE_LEVEL v91; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v92; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v93[256]; // [rsp+D0h] [rbp-30h] BYREF
  int v94; // [rsp+1D0h] [rbp+D0h]
  int v95; // [rsp+1D4h] [rbp+D4h]
  __int64 v96; // [rsp+1E0h] [rbp+E0h]
  int v97; // [rsp+200h] [rbp+100h]
  _OWORD v98[2]; // [rsp+210h] [rbp+110h] BYREF
  int v99; // [rsp+230h] [rbp+130h]
  char v100; // [rsp+234h] [rbp+134h] BYREF
  bool v101; // [rsp+2B8h] [rbp+1B8h]

  v10 = a4;
  v84 = a1;
  v92 = 0LL;
  v13 = operator new(0x30uLL);
  *v13 = v13;
  v13[1] = v13;
  v13[2] = v13;
  *((_WORD *)v13 + 12) = 257;
  *(_QWORD *)&v92 = v13;
  v14 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v14->lpVtbl->Release)(v14);
  }
  v15 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v16->lpVtbl->Release)(v16);
  }
  *(_OWORD *)v89 = 0LL;
  v17 = 0LL;
  v82 = 0LL;
  v90 = 0LL;
  if ( (a10 & 1) != 0 || (a10 & 2) != 0 )
  {
    v18 = a8;
    if ( a8 < D3D_FEATURE_LEVEL_10_0 )
    {
      DXGIFactory1 = -2147024809;
LABEL_178:
      v30 = v89[0];
      goto LABEL_179;
    }
  }
  else
  {
    v18 = a8;
  }
  if ( (a6 & 4) != 0 && v18 < 45312 )
  {
    DXGIFactory1 = -2147024809;
LABEL_177:
    v10 = a4;
    goto LABEL_178;
  }
  v98[0] = _mm_load_si128((const __m128i *)&xmmword_180142460);
  v98[1] = _mm_load_si128((const __m128i *)&xmmword_180142450);
  v99 = 37120;
  v20 = (D3D_FEATURE_LEVEL *)v98;
  v21 = 0LL;
  v22 = v89[1];
  do
  {
    v23 = *v20;
    LODWORD(v87) = v23;
    if ( v23 >= v18 && v23 <= a9 )
    {
      if ( v17 == v22 )
      {
        sub_18004134C((const void **)v89, v22, &v87);
        v17 = v90;
        v22 = v89[1];
        v18 = a8;
      }
      else
      {
        *v22++ = v23;
        v89[1] = v22;
      }
    }
    ++v20;
    ++v21;
  }
  while ( v21 != (&v100 >= (char *)v98 ? 9 : 0) );
  v82 = v17;
  v24 = (2 * (a6 & 1) + 32) | 0x40;
  if ( (a6 & 2) == 0 )
    v24 = 2 * (a6 & 1) + 32;
  v25 = v24 | 0x100;
  if ( (a6 & 4) == 0 )
    v25 = v24;
  v91 = a6 & 8;
  v26 = v25 | 0x800;
  if ( (a6 & 0x10) == 0 )
    v26 = v25;
  LODWORD(v87) = v26;
  v101 = (a6 & 0x20) != 0;
  v27 = v84;
  v28 = sub_180017DD4((__int64 *)&v84[1]);
  DXGIFactory1 = CreateDXGIFactory1(&stru_1801417F0, (void **)v28);
  if ( DXGIFactory1 < 0 )
    goto LABEL_177;
  v30 = v89[0];
LABEL_30:
  if ( !a5 )
  {
    for ( LODWORD(v85) = 0; ; LODWORD(v85) = (_DWORD)v85 + 1 )
    {
      lpVtbl = v27[1].lpVtbl;
      v32 = *a2;
      if ( *a2 )
      {
        *a2 = 0LL;
        ((void (__fastcall *)(IDXGIAdapter *))v32->lpVtbl->Release)(v32);
      }
      v33 = (*((__int64 (__fastcall **)(struct ID3D11DeviceContextVtbl *, _QWORD, IDXGIAdapter **))lpVtbl->QueryInterface
             + 12))(
              lpVtbl,
              (unsigned int)v85,
              a2);
      v34 = *a2;
      if ( v33 == -2005270526 )
      {
        if ( v34 )
        {
          *a2 = 0LL;
          ((void (__fastcall *)(IDXGIAdapter *))v34->lpVtbl->Release)(v34);
        }
        v38 = *(_QWORD **)v92;
        v39 = *(_QWORD *)v92 == (_QWORD)v92;
        while ( 2 )
        {
          if ( v39 )
          {
            v10 = a4;
            goto LABEL_105;
          }
          v40 = *a2;
          v41 = (IDXGIAdapter *)v38[5];
          if ( *a2 != v41 )
          {
            v42 = *a2;
            if ( v41 )
            {
              ((void (__fastcall *)(_QWORD, IDXGIAdapter *))v41->lpVtbl->AddRef)(v38[5], v42);
              v42 = *a2;
            }
            *a2 = v41;
            v40 = v41;
            if ( v42 )
            {
              ((void (__fastcall *)(IDXGIAdapter *))v42->lpVtbl->Release)(v42);
              v40 = *a2;
            }
          }
          DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v40->lpVtbl[1].QueryInterface)(v40, v93);
          if ( DXGIFactory1 < 0 )
            goto LABEL_133;
          v43 = *a3;
          if ( *a3 )
          {
            *a3 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
          }
          v44 = *a4;
          if ( *a4 )
          {
            *a4 = 0LL;
            ((void (__fastcall *)(ID3D11Device *))v44->lpVtbl->Release)(v44);
          }
          v88 = 0LL;
          v84 = 0LL;
          DXGIFactory1 = sub_1800424A0(*a2, v30, v22 - v30, 7u, &v88, v86, &v84);
          if ( DXGIFactory1 < 0 )
          {
            v49 = *a2;
            if ( *a2 )
            {
              *a2 = 0LL;
              ((void (__fastcall *)(IDXGIAdapter *))v49->lpVtbl->Release)(v49);
            }
            v50 = *a3;
            if ( *a3 )
            {
              *a3 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
            }
            v51 = *a4;
            if ( *a4 )
            {
              *a4 = 0LL;
              ((void (__fastcall *)(ID3D11Device *))v51->lpVtbl->Release)(v51);
            }
LABEL_91:
            v52 = v84;
            if ( v84 )
            {
              v84 = 0LL;
              ((void (__fastcall *)(ID3D11DeviceContext *))v52->lpVtbl->Release)(v52);
            }
            v53 = v88;
            if ( v88 )
            {
              v88 = 0LL;
              ((void (__fastcall *)(ID3D11Device *))v53->lpVtbl->Release)(v53);
            }
            v54 = (__int64 **)v38[2];
            if ( *((_BYTE *)v54 + 25) )
            {
              for ( i = v38[1]; !*(_BYTE *)(i + 25) && v38 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
                v38 = (_QWORD *)i;
              v38 = (_QWORD *)i;
            }
            else
            {
              v38 = (_QWORD *)v38[2];
              for ( j = *v54; !*((_BYTE *)j + 25); j = (__int64 *)*j )
                v38 = j;
            }
            v39 = v38 == (_QWORD *)v92;
            continue;
          }
          break;
        }
        if ( v86[0] < a8 )
          goto LABEL_91;
        if ( (a10 & 1) != 0 && v86[0] < D3D_FEATURE_LEVEL_11_0 )
        {
          LODWORD(v85) = 0;
          if ( ((int (__fastcall *)(ID3D11Device *, __int64, ID3D11DeviceContext **))v88->lpVtbl->CheckFeatureSupport)(
                 v88,
                 4LL,
                 &v85) < 0
            || !(_DWORD)v85 )
          {
            goto LABEL_91;
          }
        }
        v45 = *a3;
        if ( *a3 )
        {
          *a3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        }
        DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11Device *, void *, __int64 *))v88->lpVtbl->QueryInterface)(
                         v88,
                         &unk_180141170,
                         a3);
        if ( DXGIFactory1 < 0 )
        {
          v61 = v84;
          if ( v84 )
          {
            v84 = 0LL;
            ((void (__fastcall *)(ID3D11DeviceContext *))v61->lpVtbl->Release)(v61);
          }
          v60 = v88;
          if ( v88 )
          {
            v88 = 0LL;
            goto LABEL_127;
          }
          goto LABEL_128;
        }
        v10 = a4;
        v46 = *a4;
        if ( *a4 )
        {
          *a4 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v46->lpVtbl->Release)(v46);
        }
        DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, ID3D11Device **))v84->lpVtbl->QueryInterface)(
                         v84,
                         &unk_180143E30,
                         a4);
        v47 = v84;
        if ( DXGIFactory1 < 0 )
        {
          if ( v84 )
          {
            v84 = 0LL;
            ((void (__fastcall *)(ID3D11DeviceContext *))v47->lpVtbl->Release)(v47);
          }
          v60 = v88;
          if ( v88 )
          {
            v88 = 0LL;
            goto LABEL_122;
          }
          goto LABEL_129;
        }
        if ( v84 )
        {
          v84 = 0LL;
          ((void (__fastcall *)(ID3D11DeviceContext *))v47->lpVtbl->Release)(v47);
        }
        v48 = v88;
        if ( v88 )
        {
          v88 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v48->lpVtbl->Release)(v48);
        }
LABEL_105:
        if ( v101 || *a2 && *a3 && *v10 )
          goto LABEL_172;
        a5 = 1;
        v89[1] = v30;
        LODWORD(v85) = 40960;
        if ( v82 == v30 )
        {
          sub_18004134C((const void **)v89, v30, &v85);
          v82 = v90;
          v22 = v89[1];
          v30 = v89[0];
        }
        else
        {
          *v30 = D3D_FEATURE_LEVEL_10_0;
          v22 = v30 + 1;
          v89[1] = v30 + 1;
        }
        v57 = *a2;
        if ( *a2 )
        {
          *a2 = 0LL;
          ((void (__fastcall *)(IDXGIAdapter *))v57->lpVtbl->Release)(v57);
        }
        v58 = *a3;
        if ( *a3 )
        {
          *a3 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
        }
        v59 = *a4;
        if ( *a4 )
        {
          *a4 = 0LL;
          ((void (__fastcall *)(ID3D11Device *))v59->lpVtbl->Release)(v59);
        }
        goto LABEL_30;
      }
      DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))v34->lpVtbl[1].QueryInterface)(v34, v93);
      if ( DXGIFactory1 < 0 )
        goto LABEL_133;
      if ( !v101 || (v97 & 2) == 0 )
        break;
LABEL_54:
      ;
    }
    if ( v94 == 4318 )
    {
      if ( v95 == 1028 || v95 == 1058 || v95 == 1060 )
        goto LABEL_54;
      v35 = v95 == 1764;
    }
    else
    {
      if ( v94 != 32902 )
      {
LABEL_46:
        if ( v96 < 0 )
          v36 = (float)(v96 & 1 | (unsigned int)((unsigned __int64)v96 >> 1))
              + (float)(v96 & 1 | (unsigned int)((unsigned __int64)v96 >> 1));
        else
          v36 = (float)(int)v96;
        v81 = v36;
        if ( v91 )
          v81 = v36 * -1.0;
        if ( (v97 & 2) != 0 )
          v81 = -3.4028235e38;
        v37 = (float *)sub_1800412CC((__int64)&v92, v92, &v81, (__int64 *)a2);
        sub_180041750(&v92, (__int64)v83, 0, v37 + 8, v37);
        goto LABEL_54;
      }
      v35 = ((v95 - 66) & 0xFFFFFFFB) == 0;
    }
    if ( v35 )
      goto LABEL_54;
    goto LABEL_46;
  }
  if ( a5 == 1 )
  {
    *(_QWORD *)v86 = 0LL;
    v85 = 0LL;
    DXGIFactory1 = sub_1800424A0(0LL, v30, v22 - v30, 7u, (ID3D11Device **)v86, &v91, &v85);
    if ( DXGIFactory1 >= 0 )
    {
      v87 = 0LL;
      DXGIFactory1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v86)(
                       *(_QWORD *)v86,
                       &unk_180141160,
                       &v87);
      if ( DXGIFactory1 >= 0 )
      {
        v84 = 0LL;
        DXGIFactory1 = (*(__int64 (__fastcall **)(__int64, ID3D11DeviceContext **))(*(_QWORD *)v87 + 56LL))(v87, &v84);
        if ( DXGIFactory1 >= 0 )
        {
          v65 = *a2;
          if ( *a2 )
          {
            *a2 = 0LL;
            ((void (__fastcall *)(IDXGIAdapter *))v65->lpVtbl->Release)(v65);
          }
          DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, IDXGIAdapter **))v84->lpVtbl->QueryInterface)(
                           v84,
                           &unk_180141C88,
                           a2);
          if ( DXGIFactory1 >= 0 )
          {
            v66 = *a3;
            if ( *a3 )
            {
              *a3 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
            }
            DXGIFactory1 = (***(__int64 (__fastcall ****)(_QWORD, void *, __int64 *))v86)(
                             *(_QWORD *)v86,
                             &unk_180141170,
                             a3);
            if ( DXGIFactory1 >= 0 )
            {
              v10 = a4;
              v67 = *a4;
              if ( *a4 )
              {
                *a4 = 0LL;
                ((void (__fastcall *)(ID3D11Device *))v67->lpVtbl->Release)(v67);
              }
              DXGIFactory1 = ((__int64 (__fastcall *)(ID3D11DeviceContext *, void *, ID3D11Device **))v85->lpVtbl->QueryInterface)(
                               v85,
                               &unk_180143E30,
                               a4);
              if ( DXGIFactory1 >= 0 )
              {
                DXGIFactory1 = ((__int64 (__fastcall *)(IDXGIAdapter *, _BYTE *))(*a2)->lpVtbl[1].QueryInterface)(
                                 *a2,
                                 v93);
                v68 = v84;
                if ( DXGIFactory1 >= 0 )
                {
                  if ( v84 )
                  {
                    v84 = 0LL;
                    ((void (__fastcall *)(ID3D11DeviceContext *))v68->lpVtbl->Release)(v68);
                  }
                  v71 = v87;
                  if ( v87 )
                  {
                    v87 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
                  }
                  v72 = v85;
                  if ( v85 )
                  {
                    v85 = 0LL;
                    ((void (__fastcall *)(ID3D11DeviceContext *))v72->lpVtbl->Release)(v72);
                  }
                  v73 = *(_QWORD *)v86;
                  if ( *(_QWORD *)v86 )
                  {
                    *(_QWORD *)v86 = 0LL;
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
                  }
LABEL_172:
                  if ( !*a2 || !*a3 || !*v10 )
                  {
                    DXGIFactory1 = -2147467259;
                    goto LABEL_179;
                  }
                  sub_18004120C((__int64)*a2, L"CoreEngine");
                  sub_180041148(*a3, L"CoreEngine");
                  goto LABEL_129;
                }
              }
              else
              {
                v68 = v84;
              }
              if ( v68 )
              {
                v84 = 0LL;
                ((void (__fastcall *)(ID3D11DeviceContext *))v68->lpVtbl->Release)(v68);
              }
              v69 = v87;
              if ( v87 )
              {
                v87 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
              }
              v70 = v85;
              if ( v85 )
              {
                v85 = 0LL;
                ((void (__fastcall *)(ID3D11DeviceContext *))v70->lpVtbl->Release)(v70);
              }
              v60 = *(ID3D11Device **)v86;
              if ( *(_QWORD *)v86 )
              {
                *(_QWORD *)v86 = 0LL;
LABEL_122:
                ((void (__fastcall *)(ID3D11Device *))v60->lpVtbl->Release)(v60);
              }
LABEL_129:
              if ( DXGIFactory1 < 0 )
                goto LABEL_179;
              goto LABEL_185;
            }
          }
        }
        v64 = v84;
        if ( v84 )
        {
          v84 = 0LL;
          ((void (__fastcall *)(ID3D11DeviceContext *))v64->lpVtbl->Release)(v64);
        }
      }
      v63 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
    }
    v62 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      ((void (__fastcall *)(ID3D11DeviceContext *))v62->lpVtbl->Release)(v62);
    }
    v60 = *(ID3D11Device **)v86;
    if ( *(_QWORD *)v86 )
    {
      *(_QWORD *)v86 = 0LL;
LABEL_127:
      ((void (__fastcall *)(ID3D11Device *))v60->lpVtbl->Release)(v60);
    }
LABEL_128:
    v10 = a4;
    goto LABEL_129;
  }
  DXGIFactory1 = -2147467259;
LABEL_133:
  v10 = a4;
LABEL_179:
  v74 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    ((void (__fastcall *)(IDXGIAdapter *))v74->lpVtbl->Release)(v74);
  }
  v75 = *a3;
  if ( *a3 )
  {
    *a3 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
  }
  v60 = *v10;
  if ( *v10 )
  {
    *v10 = 0LL;
    ((void (__fastcall *)(ID3D11Device *))v60->lpVtbl->Release)(v60);
  }
LABEL_185:
  if ( v30 )
  {
    v76 = ((char *)v82 - (char *)v30) & 0xFFFFFFFFFFFFFFFCuLL;
    v77 = v30;
    if ( v76 >= 0x1000 )
    {
      v78 = v76 + 39;
      v30 = (D3D_FEATURE_LEVEL *)*((_QWORD *)v30 - 1);
      if ( (unsigned __int64)((char *)v77 - (char *)v30 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v60, v78);
        __debugbreak();
      }
    }
    j_j__o_free(v30);
  }
  sub_180041454((__int64)&v92, (__int64)&v92, *(__int64 **)(v92 + 8));
  j_j__o_free(v92);
  return (unsigned int)DXGIFactory1;
}
