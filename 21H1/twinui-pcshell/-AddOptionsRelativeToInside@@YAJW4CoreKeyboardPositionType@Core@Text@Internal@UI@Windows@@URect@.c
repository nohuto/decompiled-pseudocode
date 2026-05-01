/*
 * XREFs of ?AddOptionsRelativeToInside@@YAJW4CoreKeyboardPositionType@Core@Text@Internal@UI@Windows@@URect@Foundation@6@1UKeyboardSize@KeyboardHosting@@_NV?$ComPtr@V?$Vector@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@UCoreKeyboardPositionAndSizeOptionEquality@KeyboardHosting@@UCoreKeyboardPositionAndSizeOptionLifetimeTraits@8@U?$DefaultVectorOptions@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@4Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@@Z @ 0x180036F00
 * Callers:
 *     ?GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800363A0 (-GetPositionAndSizeOptions@PositionAndSizeOptionsProvider@KeyboardHosting@@UEAAJURect@Foundation.c)
 *     ?GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundation@Windows@@00_NPEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@45@@Z @ 0x1800A559C (-GetPositionAndSizeOptionsHub@PositionAndSizeOptionsProvider@KeyboardHosting@@AEAAJURect@Foundat.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AddOptionsRelativeToInside(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 **a6)
{
  int v6; // r11d
  int v7; // r10d
  int v8; // esi
  int v9; // edi
  __int128 v10; // xmm6
  __int128 v11; // xmm8
  __int128 v12; // xmm9
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // r14d
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax
  __int64 *v22; // rcx
  __int64 v23; // rax
  __int64 *v24; // rcx
  __int64 v25; // rax
  __int64 *v26; // rcx
  __int64 v27; // rax
  __int64 *v28; // rcx
  __int64 v29; // rax
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 *v32; // rcx
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 *v36; // rcx
  __int64 v37; // rax
  __int64 *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rax
  __int64 *v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // rcx
  __int64 v45; // rax
  int v46; // eax
  unsigned int v47; // edi
  __int64 *v48; // rcx
  __int64 v50; // rdx
  int v51[4]; // [rsp+28h] [rbp-89h] BYREF
  _OWORD v52[3]; // [rsp+38h] [rbp-79h] BYREF
  __int128 v53; // [rsp+68h] [rbp-49h] BYREF
  __int128 v54; // [rsp+78h] [rbp-39h]
  __int128 v55; // [rsp+88h] [rbp-29h]
  __int64 v56; // [rsp+98h] [rbp-19h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+4Fh]

  v6 = (int)*(float *)(a3 + 8);
  v7 = (int)*(float *)(a3 + 12);
  v8 = (int)*(float *)(a2 + 8);
  v9 = (int)*(float *)(a2 + 12);
  HIWORD(v51[2]) = 0;
  *(_QWORD *)v51 = a1;
  LOBYTE(v51[2]) = a5;
  BYTE1(v51[2]) = a5;
  v51[3] = v7;
  *(_QWORD *)&v52[0] = __PAIR64__(HIDWORD(a4), v6);
  memset((char *)v52 + 12, 0, 28);
  DWORD2(v52[0]) = a4;
  v10 = *(_OWORD *)v51;
  v53 = *(_OWORD *)v51;
  v11 = v52[0];
  v12 = v52[1];
  DWORD1(v53) = 5;
  v13 = *a6;
  v14 = **a6;
  *(_OWORD *)v51 = v53;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v14 + 104))(v13, v51);
  if ( v15 < 0 )
  {
    v50 = 61LL;
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v50,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v15,
      v51[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a6);
    return (unsigned int)v15;
  }
  v53 = v10;
  DWORD1(v53) = 1;
  v16 = *a6;
  v17 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v17 + 104))(v16, v51);
  if ( v15 < 0 )
  {
    v50 = 65LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 9;
  v18 = *a6;
  v19 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v19 + 104))(v18, v51);
  if ( v15 < 0 )
  {
    v50 = 69LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 4;
  v20 = *a6;
  v21 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v21 + 104))(v20, v51);
  if ( v15 < 0 )
  {
    v50 = 73LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 0;
  v22 = *a6;
  v23 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v23 + 104))(v22, v51);
  if ( v15 < 0 )
  {
    v50 = 77LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 8;
  v24 = *a6;
  v25 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v25 + 104))(v24, v51);
  if ( v15 < 0 )
  {
    v50 = 81LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 6;
  v26 = *a6;
  v27 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v27 + 104))(v26, v51);
  if ( v15 < 0 )
  {
    v50 = 85LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 2;
  v28 = *a6;
  v29 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v29 + 104))(v28, v51);
  if ( v15 < 0 )
  {
    v50 = 89LL;
    goto LABEL_22;
  }
  v53 = v10;
  DWORD1(v53) = 10;
  v30 = *a6;
  v31 = **a6;
  *(_OWORD *)v51 = v53;
  v52[0] = v11;
  v52[1] = v12;
  *(_QWORD *)&v52[2] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, int *))(v31 + 104))(v30, v51);
  if ( v15 < 0 )
  {
    v50 = 93LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 7;
  v51[3] = v9;
  HIDWORD(v52[0]) = v9;
  v32 = *a6;
  v33 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v33 + 104))(v32, &v53);
  if ( v15 < 0 )
  {
    v50 = 108LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 3;
  v51[3] = v9;
  HIDWORD(v52[0]) = v9;
  v34 = *a6;
  v35 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v35 + 104))(v34, &v53);
  if ( v15 < 0 )
  {
    v50 = 114LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 11;
  v51[3] = v9;
  HIDWORD(v52[0]) = v9;
  v36 = *a6;
  v37 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v37 + 104))(v36, &v53);
  if ( v15 < 0 )
  {
    v50 = 120LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 13;
  LODWORD(v52[0]) = v8;
  v38 = *a6;
  v39 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v39 + 104))(v38, &v53);
  if ( v15 < 0 )
  {
    v50 = 134LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 3;
  LODWORD(v52[0]) = v8;
  v40 = *a6;
  v41 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v41 + 104))(v40, &v53);
  if ( v15 < 0 )
  {
    v50 = 139LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v51[1] = 14;
  LODWORD(v52[0]) = v8;
  v42 = *a6;
  v43 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v12;
  v56 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v43 + 104))(v42, &v53);
  if ( v15 < 0 )
  {
    v50 = 144LL;
    goto LABEL_22;
  }
  *(_OWORD *)v51 = v10;
  v52[0] = v11;
  v52[1] = v12;
  v51[1] = 15;
  v51[3] = v9;
  LODWORD(v52[0]) = v8;
  HIDWORD(v52[0]) = v9;
  LODWORD(v52[1]) = v8;
  v44 = *a6;
  v45 = **a6;
  v53 = *(_OWORD *)v51;
  v54 = v52[0];
  v55 = v52[1];
  v56 = 0LL;
  v46 = (*(__int64 (__fastcall **)(__int64 *, __int128 *))(v45 + 104))(v44, &v53);
  v47 = v46;
  if ( v46 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA1,
      (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\positionandsizeoptionsprovider.cpp",
      (const char *)(unsigned int)v46,
      v51[0]);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a6);
    return v47;
  }
  else
  {
    v48 = *a6;
    if ( *a6 )
    {
      *a6 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v48 + 16))(v48);
    }
    return 0LL;
  }
}
