/*
 * XREFs of ?Draw@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180050194
 * Callers:
 *     ?Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180017DC0 (-Draw@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180050948 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EBDD0 (-Draw@CBrush@@$4PPPPPPPM@BA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EC340 (-Draw@CBrush@@$4PPPPPPPM@A@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@II@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EC350 (-Draw@CBrush@@$4PPPPPPPM@II@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDAF0 (-Draw@CBrush@@$4PPPPPPPM@BI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDC20 (-Draw@CBrush@@$4PPPPPPPM@FA@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@HI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDDF0 (-Draw@CBrush@@$4PPPPPPPM@HI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800EDED0 (-Draw@CBrush@@$4PPPPPPPM@EI@EAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BFDE4 (-Draw@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800502F0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrush::Draw(
        CBrush *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  float width; // xmm0_4
  char *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  int v16; // eax
  __int64 v17; // rcx
  char v18; // [rsp+60h] [rbp+18h] BYREF

  if ( dword_18034D2E8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18034D2E8);
    if ( dword_18034D2E8 == -1 )
    {
      dword_180347AA8 = -2147022876;
      Init_thread_footer(&dword_18034D2E8);
    }
  }
  width = a3->width;
  v18 = 0;
  if ( width > 0.0 && a3->height > 0.0 )
  {
    v9 = (char *)this - 104;
    if ( (*(unsigned __int8 (__fastcall **)(char *, struct CDrawingContext *, char *))(*((_QWORD *)this - 13) + 288LL))(
           (char *)this - 104,
           a2,
           &v18) )
    {
      if ( !v18 )
      {
        v10 = (*(__int64 (__fastcall **)(char *, struct CDrawingContext *, const struct D2D_SIZE_F *))(*(_QWORD *)v9 + 312LL))(
                (char *)this - 104,
                a2,
                a3);
        v12 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180347AA0, 3u, v10, 0x6Cu, 0LL);
          return v12;
        }
        if ( *((_BYTE *)this - 32) )
        {
          if ( !*((_QWORD *)this - 5) )
          {
            v16 = (*(__int64 (__fastcall **)(char *, _QWORD))(*(_QWORD *)v9 + 328LL))((char *)this - 104, 0LL);
            v12 = v16;
            if ( v16 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, &dword_180347AA0, 3u, v16, 0x71u, 0LL);
              return v12;
            }
          }
        }
        v13 = CContent::Draw((CBrush *)((char *)this - 16), a2, a3, a4);
        v12 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v14, &dword_180347AA0, 3u, v13, 0x74u, 0LL);
          return v12;
        }
      }
    }
  }
  return 0;
}
