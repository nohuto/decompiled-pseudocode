/*
 * XREFs of ?CopyPixels@CFormatConverter@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x180218280
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024B8C (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z @ 0x180091B70 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IPEBUWICRect@@I@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x18009EB7C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18014FC08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z @ 0x180218680 (-CopyPixelsHelper@CFormatConverter@@AEAAJHHIIIIPEAEII0@Z.c)
 *     ?Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z @ 0x180218F6C (-Run@CScanPipeline@@QEAAXPEAXPEBXIHH@Z.c)
 *     ?ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z @ 0x18026A17C (-ReleaseDecoderCopyBuffers@@YA_NPEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CFormatConverter::CopyPixels(
        CFormatConverter *this,
        const struct WICRect *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r13
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rcx
  INT Y; // r15d
  void (__fastcall ***v16)(_QWORD, GUID *, unsigned int *); // rcx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, const struct WICRect *, __int64, _QWORD **); // rbx
  __int64 v19; // rcx
  unsigned __int8 PixelFormatSize; // al
  SIZE_T v21; // rcx
  LPVOID v22; // rax
  INT Height; // eax
  bool v24; // r14
  bool v25; // zf
  INT Width; // r12d
  INT v27; // esi
  __int64 v28; // rdx
  struct IUnknown *v29; // rcx
  unsigned int v31; // [rsp+60h] [rbp-41h] BYREF
  unsigned int v32[2]; // [rsp+68h] [rbp-39h] BYREF
  _QWORD *v33; // [rsp+70h] [rbp-31h] BYREF
  unsigned int v34; // [rsp+78h] [rbp-29h] BYREF
  int X; // [rsp+7Ch] [rbp-25h]
  unsigned int v36; // [rsp+80h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v37; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int8 *v38[2]; // [rsp+90h] [rbp-11h] BYREF
  __int64 v39; // [rsp+A0h] [rbp-1h] BYREF
  int v40; // [rsp+A8h] [rbp+7h]
  int v41; // [rsp+ACh] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v5 = a5;
  v31 = a3;
  v37 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v33 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  if ( a5 )
  {
    if ( !*((_QWORD *)this + 7) )
    {
      v10 = -2003292404;
      v11 = 222LL;
      v12 = 2291674892LL;
      goto LABEL_45;
    }
    if ( !a2 )
    {
      a2 = (const struct WICRect *)&v39;
      v40 = *((_DWORD *)this + 22);
      v41 = *((_DWORD *)this + 23);
      v39 = 0LL;
    }
    v13 = HrCheckBufferSize(*((unsigned int *)this + 19), a3, a2, a4);
    v10 = v13;
    if ( v13 < 0 )
    {
      v11 = 234LL;
LABEL_44:
      v12 = (unsigned int)v13;
      goto LABEL_45;
    }
    v14 = *((_QWORD *)this + 7);
    Y = a2->Y;
    X = a2->X;
    if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v14 + 32LL))(v14) - 2 <= 1 )
    {
      *(_QWORD *)v32 = 0LL;
      v16 = (void (__fastcall ***)(_QWORD, GUID *, unsigned int *))(*((_QWORD *)this + 7)
                                                                  + 8LL
                                                                  + *(int *)(*(_QWORD *)(*((_QWORD *)this + 7) + 8LL)
                                                                           + 4LL));
      (**v16)(v16, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, v32);
      v17 = *(_QWORD *)v32;
      if ( *(_QWORD *)v32 )
      {
        v18 = *(void (__fastcall **)(__int64, const struct WICRect *, __int64, _QWORD **))(**(_QWORD **)v32 + 24LL);
        if ( v33 )
        {
          v19 = (__int64)v33 + *(int *)(v33[1] + 4LL) + 8;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          v17 = *(_QWORD *)v32;
        }
        v18(v17, a2, 1LL, &v33);
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v32 + 16LL))(*(_QWORD *)v32);
      }
    }
    if ( v33 )
    {
      v38[0] = 0LL;
      v34 = 0;
      v13 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned __int8 **))(*v33 + 24LL))(v33, &v34, v38);
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = 269LL;
        goto LABEL_44;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, unsigned int *))(*v33 + 8LL))(v33, &v31, v32);
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = 277LL;
        goto LABEL_44;
      }
      v13 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *))(*v33 + 16LL))(v33, &v36);
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = 283LL;
        goto LABEL_44;
      }
      v13 = CFormatConverter::CopyPixelsHelper(
              (CFormatConverter *)((char *)this - 16),
              X,
              Y,
              v31,
              v32[0],
              v36,
              v34,
              v38[0],
              a3,
              a4,
              a5);
      v10 = v13;
      if ( v13 < 0 )
      {
        v11 = 297LL;
        goto LABEL_44;
      }
    }
    else
    {
      if ( !*((_QWORD *)this + 96) )
      {
        PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 16));
        if ( PixelFormatSize && *((_DWORD *)this + 22) <= 0x7FFFFFF8u / PixelFormatSize )
        {
          v10 = 0;
          v21 = (((*((_DWORD *)this + 22) * (unsigned int)PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
        }
        else
        {
          v10 = -2147024362;
          v21 = 0LL;
        }
        *((_DWORD *)this + 194) = v21;
        if ( v10 < 0 )
        {
          v12 = (unsigned int)v10;
          v11 = 308LL;
          goto LABEL_45;
        }
        v22 = DefaultHeap::Alloc(v21);
        *((_QWORD *)this + 96) = v22;
        if ( !v22 )
        {
          v10 = -2147024882;
          v11 = 311LL;
          v12 = 2147942414LL;
          goto LABEL_45;
        }
      }
      Height = a2->Height;
      v24 = 0;
      v25 = a2->X == 0;
      Width = a2->Width;
      *(struct WICRect *)v38 = *a2;
      HIDWORD(v38[1]) = 1;
      if ( v25 && !a2->Y && Width == *((_DWORD *)this + 22) )
        v24 = Height == *((_DWORD *)this + 23);
      v27 = Height + Y;
      while ( Y < v27 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int8 **, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 7)
                                                                                            + 24LL))(
                *((_QWORD *)this + 7),
                v38,
                *((unsigned int *)this + 194),
                *((unsigned int *)this + 194),
                *((_QWORD *)this + 96));
        v10 = v13;
        if ( v13 < 0 )
        {
          v11 = 362LL;
          goto LABEL_44;
        }
        CScanPipeline::Run((CFormatConverter *)((char *)this + 104), v5, *((const void **)this + 96), Width, X, Y);
        v5 += v31;
        ++HIDWORD(v38[0]);
        ++Y;
      }
      if ( v24 )
      {
        v28 = *((_QWORD *)this + 7);
        if ( v28 )
          v29 = (struct IUnknown *)(v28 + *(int *)(*(_QWORD *)(v28 + 8) + 4LL) + 8LL);
        else
          v29 = 0LL;
        ReleaseDecoderCopyBuffers(v29);
      }
    }
    v10 = 0;
    goto LABEL_49;
  }
  v10 = -2147024809;
  v11 = 220LL;
  v12 = 2147942487LL;
LABEL_45:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
    (const char *)v12);
LABEL_49:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v37);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v33);
  return (unsigned int)v10;
}
