/*
 * XREFs of ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180028DF0
 * Callers:
 *     ?LockForRead@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180028B10 (-LockForRead@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@.c)
 *     ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x180028D70 (-SupportsFastLock@CD2DBitmap@@UEBA_NXZ.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802499C0 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 * Callees:
 *     ?Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z @ 0x180028F34 (-Create@CWarpLockSubresource@@SAJPEAVCD3DDevice@@PEAUID3D11Texture2D@@IPEAPEAV1@@Z.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::TryFastWarpLock(
        CD2DBitmap *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int *a4,
        struct IUnknown **a5)
{
  struct IUnknown **v5; // r13
  char *v6; // r10
  __int64 v11; // rax
  char *v12; // r14
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rax
  struct ID3D11Texture2D *v17; // rdi
  unsigned int v18; // ebx
  char *v19; // rcx
  struct CD3DDevice *v20; // rax
  int v21; // eax
  __m128i v22; // xmm0
  unsigned int v23; // ecx
  int v24; // eax
  CRenderTargetBitmap *v25; // rcx

  v5 = a5;
  v6 = (char *)this + 244;
  *a2 = 0LL;
  *a3 = 0;
  *v5 = 0LL;
  *a4 = 0;
  if ( !*((_BYTE *)this + 245) || *v6 )
  {
    v11 = *((_QWORD *)this + 2);
    v12 = (char *)this + 244;
    *((_BYTE *)this + 245) = 1;
    *v6 = 0;
    v13 = (char *)this + *(int *)(v11 + 8) + 16;
    v14 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v13 + 8LL))(v13);
    v6 = v12;
    if ( *(_QWORD *)(v14 + 608) )
    {
      v16 = *((_QWORD *)this + 2);
      v17 = (struct ID3D11Texture2D *)*((_QWORD *)this + 15);
      a5 = 0LL;
      v18 = *((_DWORD *)this + 60);
      v19 = (char *)this + *(int *)(v16 + 8) + 16;
      v20 = (struct CD3DDevice *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v19 + 8LL))(v19);
      if ( CWarpLockSubresource::Create(v20, v17, v18, (struct CWarpLockSubresource **)&a5) < 0 )
      {
        v25 = (CRenderTargetBitmap *)a5;
      }
      else
      {
        v21 = *((_DWORD *)this + 39);
        v22 = *(__m128i *)(a5 + 5);
        *v5 = (struct IUnknown *)a5;
        *v12 = 1;
        *a2 = (unsigned __int8 *)v22.m128i_i64[0];
        v23 = _mm_cvtsi128_si32(_mm_srli_si128(v22, 8));
        v24 = v23 * v21;
        *a3 = v23;
        v25 = 0LL;
        *a4 = v24;
      }
      v6 = v12;
      if ( v25 )
      {
        CRenderTargetBitmap::Release(v25);
        v6 = v12;
      }
    }
  }
  return *v6;
}
