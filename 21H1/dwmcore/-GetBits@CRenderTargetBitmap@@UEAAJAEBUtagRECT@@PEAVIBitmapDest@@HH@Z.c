/*
 * XREFs of ?GetBits@CRenderTargetBitmap@@UEAAJAEBUtagRECT@@PEAVIBitmapDest@@HH@Z @ 0x180026780
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVIBitmapDest@@HH@Z @ 0x1800269E8 (-CopyTexture2D@CD3DDevice@@QEAAJPEAUID3D11Texture2D@@IAEBUPixelFormatInfo@@AEBV-$TMilRect@IUMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetBits(
        CRenderTargetBitmap *this,
        const struct tagRECT *a2,
        struct IBitmapDest *a3,
        int a4,
        int a5)
{
  __int64 v5; // rax
  char *v10; // rcx
  unsigned int right; // ecx
  LONG left; // r8d
  unsigned int bottom; // edx
  __int64 v14; // rax
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  int v16; // eax
  unsigned int v17; // ebx
  char *v18; // rcx
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(char *, __int64, __int64 (__fastcall ****)(_QWORD)); // rdi
  __int64 v21; // rax
  char *v22; // rcx
  struct CD3DDevice *v23; // rdi
  char *v24; // rcx
  struct PixelFormatInfo *v25; // rbx
  struct ID3D11Texture2D *v26; // rax
  int v28; // r9d
  unsigned int v29; // [rsp+20h] [rbp-41h]
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+40h] [rbp-21h] BYREF
  _DWORD v31[2]; // [rsp+48h] [rbp-19h] BYREF
  _DWORD v32[4]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v33[24]; // [rsp+60h] [rbp-1h] BYREF

  v5 = *((_QWORD *)this - 13);
  v30 = 0LL;
  v10 = (char *)this + *(int *)(v5 + 20) - 104;
  (**(void (__fastcall ***)(char *, _DWORD *))v10)(v10, v31);
  left = a2->left;
  if ( a2->left < 0 || a2->top < 0 || (right = a2->right, right > v31[0]) || (bottom = a2->bottom, bottom > v31[1]) )
  {
    v17 = -2147024809;
    v29 = 287;
    goto LABEL_16;
  }
  v32[1] = a2->top;
  v14 = *((_QWORD *)this - 13);
  v32[2] = right;
  v32[0] = left;
  v32[3] = bottom;
  v15 = (__int64 (__fastcall ***)(_QWORD))((char *)this + *(int *)(v14 + 12) - 104);
  v16 = (**v15)(v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    v29 = 268;
    goto LABEL_13;
  }
  v18 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 12LL) - 104;
  if ( (*(unsigned __int8 (__fastcall **)(char *))(*(_QWORD *)v18 + 24LL))(v18) )
  {
    v17 = -2147024891;
    v29 = 272;
LABEL_16:
    v28 = v17;
    goto LABEL_17;
  }
  v19 = *(int *)(*((_QWORD *)this - 13) + 20LL);
  v20 = *(__int64 (__fastcall **)(char *, __int64, __int64 (__fastcall ****)(_QWORD)))(*(_QWORD *)((char *)this
                                                                                                 + v19
                                                                                                 - 104)
                                                                                     + 48LL);
  v21 = (**(__int64 (__fastcall ***)(CRenderTargetBitmap *, _BYTE *))this)(this, v33);
  v16 = v20((char *)this + v19 - 104, v21, &v30);
  v17 = v16;
  if ( v16 < 0 )
  {
    v29 = 275;
    goto LABEL_13;
  }
  v22 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 12LL) - 104;
  v23 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v22 + 8LL))(v22);
  v24 = (char *)this + *(int *)(*((_QWORD *)this - 13) + 16LL) - 104;
  v25 = (struct PixelFormatInfo *)(**(__int64 (__fastcall ***)(char *, _BYTE *))v24)(v24, v33);
  v26 = (struct ID3D11Texture2D *)(**v30)(v30);
  v16 = CD3DDevice::CopyTexture2D(v23, v26, 0, v25, (__int64)v32, (__int64)a3, a4, a5);
  v17 = v16;
  if ( v16 < 0 )
  {
    v29 = 283;
LABEL_13:
    v28 = v16;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(right, 0LL, 0, v28, v29, 0LL);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(&v30);
  return v17;
}
