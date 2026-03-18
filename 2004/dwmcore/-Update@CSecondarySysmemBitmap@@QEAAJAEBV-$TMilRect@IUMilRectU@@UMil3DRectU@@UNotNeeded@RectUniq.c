/*
 * XREFs of ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800914B4
 * Callers:
 *     ?UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ @ 0x180091438 (-UpdateSysmemBitmap@CD2DBitmapCache@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F35C (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800927B4 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092DEC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180092E3C (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E3ABC (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::Update(__int64 a1, struct tagRECT *a2, _QWORD *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  enum DXGI_FORMAT v9; // r14d
  __int64 (__fastcall ***v10)(_QWORD, _BYTE *); // rcx
  unsigned int v11; // r12d
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v15; // [rsp+20h] [rbp-68h]
  _BYTE v16[8]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v17[16]; // [rsp+38h] [rbp-50h] BYREF

  v6 = 0;
  if ( !(unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 40)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v7) )
  {
    v6 = -2147024809;
    v15 = 170;
    goto LABEL_13;
  }
  v9 = *(_DWORD *)(a1 + 140);
  v10 = (__int64 (__fastcall ***)(_QWORD, _BYTE *))((char *)a3 + *(int *)(a3[1] + 8LL) + 8);
  if ( *(_DWORD *)(**v10)(v10, v17) != v9 )
  {
    v6 = -2003292288;
    v15 = 175;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v6, v15, 0LL);
    return v6;
  }
  v11 = *(_DWORD *)(a1 + 136) * a2->top + a2->left * (GetPixelFormatSize(v9) >> 3);
  if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD *, _BYTE *))(*a3 + 8LL))(a3, v16) != DisplayId::None
    || (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a3 + 16LL))(a3) )
  {
    memset_0((void *)(v11 + *(_QWORD *)(a1 + 152)), 0, *(unsigned int *)(a1 + 160) - (unsigned __int64)v11);
    *(_BYTE *)(a1 + 164) = 1;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD *, struct tagRECT *, _QWORD, _QWORD, _QWORD))(*a3 + 24LL))(
            a3,
            a2,
            *(unsigned int *)(a1 + 136),
            *(_DWORD *)(a1 + 160) - v11,
            v11 + *(_QWORD *)(a1 + 152));
    v6 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC1u, 0LL);
      return v6;
    }
  }
  CSecondaryBitmap::AddValidRect(a1 + 40, a2);
  return v6;
}
