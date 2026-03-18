/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x1800E7EB0
 * Callers:
 *     ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180271940 (-LockForRead@CWICBitmapWrapper@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18006EC34 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800739B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v12; // r9d
  INT v13; // r8d
  INT v14; // r9d
  int v15; // ecx
  int v16; // edx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v21; // r8d
  unsigned int v22; // edi
  unsigned __int64 v23; // r14
  void *v24; // r15
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-79h]
  void *v30; // [rsp+28h] [rbp-71h]
  struct IUnknown *v31; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v32; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v34; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v36[2]; // [rsp+78h] [rbp-21h] BYREF
  void *v37; // [rsp+80h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v39[4]; // [rsp+90h] [rbp-9h] BYREF

  *(_QWORD *)v36 = 0LL;
  v38 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 32);
  v31 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 32));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 17))(
    *((_QWORD *)this + 17),
    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
    v36);
  v8 = *(_QWORD *)v36;
  if ( *(_QWORD *)v36 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, struct IUnknown **))(**(_QWORD **)v36 + 64LL))(
           *(_QWORD *)v36,
           a2,
           (unsigned int)a3,
           &v31);
    v10 = v9;
    if ( v9 < 0 )
    {
      v29 = 93;
    }
    else
    {
      v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v31->lpVtbl[1].QueryInterface)(
             v31,
             &v35,
             &v34);
      v10 = v9;
      if ( v9 < 0 )
      {
        v29 = 95;
      }
      else
      {
        v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v31->lpVtbl[1].AddRef)(v31, &v33);
        v10 = v9;
        if ( v9 < 0 )
        {
          v29 = 96;
        }
        else
        {
          v9 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v31->lpVtbl[1].Release)(
                 v31,
                 &v32,
                 &v37);
          v10 = v9;
          if ( v9 < 0 )
          {
            v29 = 97;
          }
          else
          {
            v9 = CBitmap::HrLock(
                   (CWICBitmapWrapper *)((char *)this - 24),
                   v35,
                   v34,
                   (CWICBitmapWrapper *)((char *)this + 96),
                   v33,
                   v32,
                   v37,
                   a3,
                   a4,
                   0,
                   v31);
            v10 = v9;
            if ( v9 >= 0 )
              goto LABEL_7;
            v29 = 111;
          }
        }
      }
    }
    v12 = v9;
    goto LABEL_53;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v10 = -2003292412;
    v29 = 120;
LABEL_21:
    v12 = v10;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, v12, v29);
    goto LABEL_7;
  }
  *(_OWORD *)v39 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v13 = *((_DWORD *)this + 20), a2->m128i_i32[0] >= v13)
      || (v14 = *((_DWORD *)this + 21), a2->m128i_i32[1] >= v14) )
    {
      v30 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0LL, -2147024809, 0xA8u);
    }
    else
    {
      v15 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v39 = *a2;
      v16 = v39[2];
      v39[0] = v15;
      if ( v15 < 0 )
      {
        v16 = v15 + v39[2];
        v15 = 0;
        v39[0] = 0;
        v39[2] = v16;
      }
      if ( v16 + v15 > v13 )
      {
        v16 = v13 - v15;
        v39[2] = v13 - v15;
      }
      v17 = v39[1];
      v18 = v39[3];
      if ( (v39[1] & 0x80000000) != 0 )
      {
        v18 = v39[1] + v39[3];
        v39[1] = 0;
        v39[3] = v18;
        v17 = 0;
      }
      if ( (int)(v18 + v17) > v14 )
      {
        v18 = v14 - v17;
        v39[3] = v14 - v17;
      }
      if ( v16 <= 0 || (int)v18 <= 0 )
      {
        v30 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0LL, -2147024809, 0xA2u);
      }
    }
  }
  else
  {
    v19 = *((_DWORD *)this + 21);
    v39[2] = *((_DWORD *)this + 20);
    v39[3] = v19;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 24));
  if ( !PixelFormatSize || v21 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v29 = 181;
    goto LABEL_52;
  }
  v22 = (((v21 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  v23 = v22 * (unsigned __int64)*((unsigned int *)this + 21);
  if ( v23 > 0xFFFFFFFF )
  {
    v29 = 183;
LABEL_52:
    v12 = -2147024362;
    v10 = -2147024362;
    goto LABEL_53;
  }
  v24 = DefaultHeap::Alloc((unsigned int)v23);
  if ( !v24 )
  {
    v10 = -2147024882;
    v29 = 186;
    goto LABEL_21;
  }
  v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *, void *))(**((_QWORD **)this + 17)
                                                                                          + 56LL))(
          *((_QWORD *)this + 17),
          v39,
          v22,
          (unsigned int)v23,
          v24,
          v30);
  v10 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0LL, v25, 0xBFu);
  }
  else
  {
    v27 = CBitmap::HrLock(
            (CWICBitmapWrapper *)((char *)this - 24),
            v39[2],
            v39[3],
            (CWICBitmapWrapper *)((char *)this + 96),
            v22,
            v23,
            v24,
            WICBitmapLockRead,
            a4,
            1,
            0LL);
    v10 = v27;
    if ( v27 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0LL, v27, 0xC9u);
  }
  DefaultHeap::Free(v24);
LABEL_7:
  if ( v31 )
    ((void (__fastcall *)(struct IUnknown *))v31->lpVtbl->Release)(v31);
  if ( *(_QWORD *)v36 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v36 + 16LL))(*(_QWORD *)v36);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v38);
  return v10;
}
