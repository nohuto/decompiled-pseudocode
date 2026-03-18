/*
 * XREFs of ?Lock@CWICBitmapWrapper@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x18004A850
 * Callers:
 *     ?LockForRead@CWICBitmapWrapper@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1802158D0 (-LockForRead@CWICBitmapWrapper@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180048A84 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180048D4C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800688AC (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWICBitmapWrapper::Lock(
        CWICBitmapWrapper *this,
        __m128i *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  void *v8; // r15
  unsigned int v9; // ecx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // r9d
  INT v14; // r8d
  INT v15; // r9d
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // r8d
  signed int v19; // ecx
  unsigned int v20; // eax
  unsigned __int8 PixelFormatSize; // al
  unsigned int v22; // r8d
  unsigned int v23; // edi
  unsigned __int64 v24; // r14
  void *v25; // rax
  int v26; // eax
  int v27; // r9d
  unsigned int v28; // [rsp+20h] [rbp-79h]
  unsigned int v29; // [rsp+20h] [rbp-79h]
  struct IUnknown *v30; // [rsp+60h] [rbp-39h] BYREF
  unsigned int v31; // [rsp+68h] [rbp-31h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v33; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v34; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v35[2]; // [rsp+78h] [rbp-21h] BYREF
  void *v36; // [rsp+80h] [rbp-19h] BYREF
  char *v37; // [rsp+88h] [rbp-11h] BYREF
  unsigned int v38[4]; // [rsp+90h] [rbp-9h] BYREF

  *(_QWORD *)v35 = 0LL;
  v37 = (char *)this + 104;
  v30 = 0LL;
  v8 = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 104));
  *a4 = 0LL;
  (***((void (__fastcall ****)(_QWORD, GUID *, unsigned int *))this + 29))(
    *((_QWORD *)this + 29),
    &GUID_00000121_a8f2_4877_ba0a_fd2b6645fb94,
    v35);
  v9 = v35[0];
  if ( *(_QWORD *)v35 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __m128i *, _QWORD, struct IUnknown **))(**(_QWORD **)v35 + 64LL))(
            *(_QWORD *)v35,
            a2,
            (unsigned int)a3,
            &v30);
    v11 = v10;
    if ( v10 < 0 )
    {
      v28 = 93;
    }
    else
    {
      v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, unsigned int *))v30->lpVtbl[1].QueryInterface)(
              v30,
              &v34,
              &v33);
      v11 = v10;
      if ( v10 < 0 )
      {
        v28 = 95;
      }
      else
      {
        v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *))v30->lpVtbl[1].AddRef)(v30, &v32);
        v11 = v10;
        if ( v10 < 0 )
        {
          v28 = 96;
        }
        else
        {
          v10 = ((__int64 (__fastcall *)(struct IUnknown *, unsigned int *, void **))v30->lpVtbl[1].Release)(
                  v30,
                  &v31,
                  &v36);
          v11 = v10;
          if ( v10 < 0 )
          {
            v28 = 97;
          }
          else
          {
            v10 = CBitmap::HrLock(
                    (CWICBitmapWrapper *)((char *)this - 32),
                    v34,
                    v33,
                    (CWICBitmapWrapper *)((char *)this + 168),
                    v32,
                    v31,
                    v36,
                    a3,
                    a4,
                    0,
                    v30);
            v11 = v10;
            if ( v10 >= 0 )
              goto LABEL_7;
            v28 = 111;
          }
        }
      }
    }
    v13 = v10;
    goto LABEL_16;
  }
  if ( a3 != WICBitmapLockRead )
  {
    v11 = -2003292412;
    v28 = 120;
LABEL_23:
    v13 = v11;
    goto LABEL_16;
  }
  *(_OWORD *)v38 = 0LL;
  if ( a2 )
  {
    if ( a2->m128i_i32[2] <= 0
      || a2->m128i_i32[3] <= 0
      || (v14 = *((_DWORD *)this + 38), a2->m128i_i32[0] >= v14)
      || (v15 = *((_DWORD *)this + 39), a2->m128i_i32[1] >= v15) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0xA8u, 0LL);
    }
    else
    {
      v16 = _mm_cvtsi128_si32(*a2);
      *(__m128i *)v38 = *a2;
      v17 = v38[2];
      v38[0] = v16;
      if ( v16 < 0 )
      {
        v17 = v16 + v38[2];
        v16 = 0;
        v38[0] = 0;
        v38[2] = v17;
      }
      if ( v17 + v16 > v14 )
      {
        v17 = v14 - v16;
        v38[2] = v14 - v16;
      }
      v18 = v38[1];
      v19 = v38[3];
      if ( (v38[1] & 0x80000000) != 0 )
      {
        v19 = v38[1] + v38[3];
        v38[1] = 0;
        v38[3] = v19;
        v18 = 0;
      }
      if ( (int)(v19 + v18) > v15 )
      {
        v19 = v15 - v18;
        v38[3] = v15 - v18;
      }
      if ( v17 <= 0 || v19 <= 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024809, 0xA2u, 0LL);
    }
  }
  else
  {
    v20 = *((_DWORD *)this + 39);
    v38[2] = *((_DWORD *)this + 38);
    v38[3] = v20;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 42));
  if ( PixelFormatSize && v22 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v23 = (((v22 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v24 = v23 * (unsigned __int64)*((unsigned int *)this + 39);
    if ( v24 > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      v11 = -2147024362;
      v28 = 183;
LABEL_16:
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v13, v28, 0LL);
      goto LABEL_7;
    }
    v25 = DefaultHeap::Alloc((unsigned int)v24);
    v8 = v25;
    if ( !v25 )
    {
      v11 = -2147024882;
      v28 = 186;
      goto LABEL_23;
    }
    v26 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, _QWORD, _QWORD, void *))(**((_QWORD **)this + 29) + 56LL))(
            *((_QWORD *)this + 29),
            v38,
            v23,
            (unsigned int)v24,
            v25);
    v11 = v26;
    if ( v26 < 0 )
    {
      v29 = 191;
    }
    else
    {
      v26 = CBitmap::HrLock(
              (CWICBitmapWrapper *)((char *)this - 32),
              v38[2],
              v38[3],
              (CWICBitmapWrapper *)((char *)this + 168),
              v23,
              v24,
              v8,
              WICBitmapLockRead,
              a4,
              1,
              0LL);
      v11 = v26;
      if ( v26 >= 0 )
        goto LABEL_7;
      v29 = 201;
    }
    v27 = v26;
  }
  else
  {
    v27 = -2147024362;
    v11 = -2147024362;
    v29 = 181;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v27, v29, 0LL);
  if ( v8 )
    operator delete(v8);
LABEL_7:
  if ( v30 )
    ((void (__fastcall *)(struct IUnknown *))v30->lpVtbl->Release)(v30);
  if ( *(_QWORD *)v35 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v35 + 16LL))(*(_QWORD *)v35);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v37);
  return v11;
}
