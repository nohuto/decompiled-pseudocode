/*
 * XREFs of ?bDetermineTriangleFillRoutine@@YGHPAVSURFACE@@PAVXEPALOBJ@@PAP6GX0PAU_TRIANGLEDATA@@@ZPAP6GX0PAU_GRADIENTRECTDATA@@@Z@Z @ 0xBF344
 * Callers:
 *     ?bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PAU_POINTL@@@Z @ 0xBEA98 (-bRectangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_RECT@@KKPAU_RECTL@@PA.c)
 *     ?bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@@4PAU_POINTL@@@Z @ 0x1EA568 (-bTriangleMesh@@YGHPAVSURFACE@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAU_GRADIENT_TRIANGLE@@KKPAU_RECTL@.c)
 * Callees:
 *     <none>
 */

int __userpurge bDetermineTriangleFillRoutine@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct XEPALOBJ *a4,
        void (__stdcall **a5)(struct SURFACE *, struct _TRIANGLEDATA *),
        void (__stdcall **a6)(struct SURFACE *, struct _GRADIENTRECTDATA *))
{
  int v6; // eax
  void (__stdcall *v7)(struct SURFACE *, struct _GRADIENTRECTDATA *); // ecx
  void (__stdcall *v8)(struct SURFACE *, struct _TRIANGLEDATA *); // edx
  int v10; // eax
  int *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax

  switch ( *(_DWORD *)(a2 + 60) )
  {
    case 1:
      v7 = vFillGRectDIB1;
      *(_DWORD *)a3 = vGradientFill1;
      goto LABEL_11;
    case 2:
      v7 = vFillGRectDIB4;
      *(_DWORD *)a3 = vGradientFill4;
      goto LABEL_11;
    case 3:
      v7 = vFillGRectDIB8;
      *(_DWORD *)a3 = vGradientFill8;
      goto LABEL_11;
    case 4:
      v11 = *(int **)(*(_DWORD *)a1 + 76);
      v12 = *v11;
      v13 = v11[1];
      v14 = v11[2];
      if ( v12 == 63488 )
      {
        if ( v13 == 2016 && v14 == 31 )
        {
          v7 = vFillGRectDIB16_565;
          v8 = vGradientFill16_565;
          break;
        }
      }
      else if ( v12 == 31744 && v13 == 992 && v14 == 31 )
      {
        v7 = vFillGRectDIB16_555;
        v8 = vGradientFill16_555;
        break;
      }
      v7 = vFillGRectDIB16Bitfields;
      v8 = vGradientFill16Bitfields;
      break;
    case 5:
      v10 = *(_DWORD *)(*(_DWORD *)a1 + 16);
      if ( (v10 & 4) != 0 )
      {
        v7 = vFillGRectDIB24RGB;
        v8 = vGradientFill24RGB;
      }
      else if ( (v10 & 8) != 0 )
      {
        v7 = vFillGRectDIB24BGR;
        v8 = vGradientFill24BGR;
      }
      else
      {
        v7 = vFillGRectDIB24Bitfields;
        v8 = vGradientFill24Bitfields;
      }
      break;
    case 6:
      v6 = *(_DWORD *)(*(_DWORD *)a1 + 16);
      if ( (v6 & 4) != 0 )
      {
        v7 = vFillGRectDIB32RGB;
        v8 = vGradientFill32RGB;
      }
      else if ( (v6 & 8) != 0 )
      {
        v7 = vFillGRectDIB32BGRA;
        v8 = vGradientFill32BGRA;
      }
      else
      {
        v7 = (void (__stdcall *)(struct SURFACE *, struct _GRADIENTRECTDATA *))vFillGRectDIB32Bitfields;
        v8 = vGradientFill32Bitfields;
      }
      break;
    default:
      v7 = 0;
      *(_DWORD *)a3 = 0;
      goto LABEL_11;
  }
  *(_DWORD *)a3 = v8;
LABEL_11:
  *(_DWORD *)a4 = v7;
  return 1;
}
