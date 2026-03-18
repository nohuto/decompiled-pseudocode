/*
 * XREFs of ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x18018F0D8
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18009DE78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009E650 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18018E838 (-GetMorePlaceholderClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z @ 0x18018E90C (-GetMoreStandardClipPlanes@ClipPlaneIterator@@AEAAXPEAUD2D_VECTOR_4F@@PEAI@Z.c)
 *     ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18018EA64 (-HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ.c)
 *     ??4?$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z @ 0x1801AA048 (--4-$ComPtr@VCPolygon@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPolygon@@@Z.c)
 */

__int64 __fastcall ClipPlaneIterator::UpdateClippingPlanes(ClipPlaneIterator *this)
{
  unsigned int v1; // esi
  _DWORD *v3; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  unsigned int v6; // ecx
  __int64 v7; // rdx
  float x; // xmm2_4
  bool v9; // cc
  float v10; // xmm0_4
  _OWORD *v11; // rcx
  _DWORD *v12; // r8
  __int64 v13; // rdx
  unsigned int v15[4]; // [rsp+30h] [rbp-68h] BYREF
  struct D2D_VECTOR_4F v16[4]; // [rsp+40h] [rbp-58h] BYREF

  v1 = 0;
  v15[0] = 0;
  if ( *(_BYTE *)this || !ClipPlaneIterator::HasMoreClipPlanes(this) )
  {
    Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, 0LL);
  }
  else
  {
    if ( *((_DWORD *)this + 1) )
      ClipPlaneIterator::GetMorePlaceholderClipPlanes(this, v16, v15);
    else
      ClipPlaneIterator::GetMoreStandardClipPlanes(this, v16, v15);
    v3 = DefaultHeap::Alloc(0x60uLL);
    v5 = v3;
    if ( v3 )
    {
      memset_0(v3, 0, 0x60uLL);
      v5[2] = 0;
      *(_QWORD *)v5 = &ClipPlaneInfoRef::`vftable';
    }
    else
    {
      v5 = 0LL;
    }
    if ( v5 )
    {
      (**(void (__fastcall ***)(_DWORD *))v5)(v5);
      v6 = v15[0];
      v7 = 0LL;
      if ( !v15[0] )
        goto LABEL_19;
      do
      {
        x = v16[(unsigned int)v7].x;
        *(struct D2D_VECTOR_4F *)&v5[4 * (unsigned int)v7 + 4] = v16[(unsigned int)v7];
        if ( x == 0.0 )
          v9 = v16[(unsigned int)v7].y <= 0.0;
        else
          v9 = x <= 0.0;
        if ( v9 )
          v10 = 0.0;
        else
          v10 = FLOAT_0_5;
        *(float *)&v5[v7 + 20] = v10;
        v7 = (unsigned int)(v7 + 1);
      }
      while ( (unsigned int)v7 < v6 );
      if ( (unsigned int)v7 < 4 )
      {
LABEL_19:
        v11 = &v5[4 * v7 + 4];
        v12 = &v5[v7 + 20];
        v13 = (unsigned int)(4 - v7);
        do
        {
          *v11 = 0LL;
          *v12 = 0;
          ++v11;
          ++v12;
          --v13;
        }
        while ( v13 );
      }
      Microsoft::WRL::ComPtr<CPolygon>::operator=(*((_QWORD *)this + 15) + 256LL, v5);
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      v1 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x2A8u, 0LL);
    }
  }
  return v1;
}
