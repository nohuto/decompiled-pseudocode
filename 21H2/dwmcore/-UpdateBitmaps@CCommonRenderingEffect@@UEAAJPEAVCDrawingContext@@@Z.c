/*
 * XREFs of ?UpdateBitmaps@CCommonRenderingEffect@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C5E70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001C320 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCommonRenderingEffect::UpdateBitmaps(CCommonRenderingEffect *this, struct CDrawingContext *a2)
{
  __int64 result; // rax
  int v3; // ebp
  __int64 **i; // rdi
  __int64 *v6; // rsi
  __int64 v7; // rbx
  bool v8; // si
  void (__fastcall *v9)(__int64, bool, void *, __int64); // r15
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  __int64 v11; // r9
  int v12; // eax
  void *v13; // r8
  __int64 *v14; // rbx
  __int64 *v15; // r8
  __int64 v16; // rax
  __int64 (__fastcall *v17)(__int64 *, __int64 **); // rsi
  __int64 v18; // rcx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // ebx
  __int64 *v22; // rcx
  int v23; // ecx
  __int64 *v24; // rsi
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64 *, __int64, __int64 *); // rbx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // [rsp+30h] [rbp-78h] BYREF
  __int64 v34; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v35[8]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v36[16]; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v37[16]; // [rsp+58h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]

  result = 0LL;
  v3 = 0;
  for ( i = (__int64 **)((char *)this + 24); ; i += 3 )
  {
    v6 = *i;
    if ( *i )
      break;
LABEL_21:
    if ( (unsigned int)++v3 >= 2 )
      return result;
  }
  v7 = (__int64)*(i - 1);
  if ( v7 )
  {
    v8 = *((_QWORD *)a2 + 6) && !*((_BYTE *)g_pComposition + 1274);
    (*(void (__fastcall **)(_QWORD, bool, _QWORD))(*(_QWORD *)v7 + 40LL))(*(i - 1), v8, 0LL);
    v9 = *(void (__fastcall **)(__int64, bool, void *, __int64))(*(_QWORD *)v7 + 48LL);
    v10 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))(*((_QWORD *)a2 + 4)
                                                    + 8LL
                                                    + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 12LL));
    v11 = *(unsigned int *)((**v10)(v10, v36) + 8);
    v12 = *((_DWORD *)a2 + 92);
    if ( v12 )
      v13 = (void *)(*((_QWORD *)a2 + 48) + 68LL * (unsigned int)(v12 - 1));
    else
      v13 = &CMILMatrix::Identity;
    v9(v7, v8, v13, v11);
    v14 = *(i - 1);
    v15 = *i;
    v16 = *v14;
    *i = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64 *, __int64 **))(v16 + 56);
    if ( v15 )
    {
      v18 = (__int64)v15 + *(int *)(v15[1] + 4) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    }
    v19 = v17(v14, i);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
        (const char *)(unsigned int)v19);
      goto LABEL_38;
    }
    v6 = *i;
  }
  (*(void (__fastcall **)(__int64 *, int *))(*v6 + 16))(v6, &v33);
  v21 = v33;
  if ( v33 != DisplayId::None && v33 != DisplayId::All )
  {
    v30 = *((_QWORD *)a2 + 4) + 8LL + *(int *)(*(_QWORD *)(*((_QWORD *)a2 + 4) + 8LL) + 16LL);
    v31 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v30 + 8LL))(v30, v35);
    if ( v21 == DisplayId::None || v21 == v31 || v31 == DisplayId::All )
      *((_BYTE *)a2 + 7965) = 1;
    else
      *((_BYTE *)a2 + 7967) = 1;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *))(*v6 + 24))(v6) )
  {
    if ( *((_BYTE *)g_pComposition + 1274) )
      *((_BYTE *)a2 + 7967) = 1;
    else
      *((_BYTE *)a2 + 7964) = 1;
  }
  v22 = (__int64 *)((char *)v6 + *(int *)(v6[1] + 8) + 8);
  v23 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64 *, _BYTE *))*v22)(v22, v37) + 8);
  if ( v23 == 1 )
  {
LABEL_35:
    *((_BYTE *)a2 + 7966) = 1;
  }
  else if ( v23 >= 3 )
  {
    switch ( v23 )
    {
      case 3:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
      case 15:
      case 16:
      case 17:
      case 21:
      case 23:
      case 24:
        goto LABEL_35;
      default:
        break;
    }
  }
  v24 = *i;
  v25 = **i;
  v34 = 0LL;
  v26 = *(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v25 + 48);
  v27 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 40LL))((char *)a2 + 24);
  v28 = v26(v24, v27, &v34);
  v20 = v28;
  if ( v28 >= 0 )
  {
    if ( v34 )
    {
      v29 = *(int *)(*(_QWORD *)(v34 + 8) + 4LL) + v34 + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    result = 0LL;
    goto LABEL_21;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA6,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\drawlistbitmap.cpp",
    (const char *)(unsigned int)v28);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v34);
LABEL_38:
  MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0LL, v20, 0x53u);
  return v20;
}
