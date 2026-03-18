/*
 * XREFs of ?vWidenSetupForFrameRgn@EPATHOBJ@@QAEXAAVXDCOBJ@@JJPAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x23786C
 * Callers:
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     _divff3_c@12 @ 0xEF19C (_divff3_c@12.c)
 */

void __userpurge EPATHOBJ::vWidenSetupForFrameRgn(
        __int64 a1@<edx:eax>,
        struct XDCOBJ *a2,
        int a3,
        int a4,
        void **a5,
        struct _LINEATTRS *a6)
{
  int v7; // ecx
  int v8; // edi
  __int64 v9; // rax
  int *v10; // eax
  int *v11; // eax
  int v12[2]; // [esp+Ch] [ebp-10h] BYREF
  int v13[2]; // [esp+14h] [ebp-8h] BYREF

  a6->iEndCap = 0;
  a6->fl = 65537;
  a6->iJoin = 2;
  a6->eMiterLimit = *(_DWORD *)(*(_DWORD *)a2 + 156);
  a6->pstyle = 0;
  a6->cstyle = 0;
  v7 = 2 * a3;
  v8 = 2 * a4;
  if ( 2 * a3 < 2 * a4 )
  {
    v7 = 2 * a4;
    v8 = 2 * a3;
  }
  LODWORD(a1) = v12;
  ltoef_c(a1, v7, v12);
  a6->elWidth.e = eftof_c(v12);
  LODWORD(v9) = v13;
  ltoef_c(v9, v8, v13);
  if ( v12[0] || v12[1] )
    divff3_c(v13, v13, v12);
  qmemcpy(*a5, (const void *)(*(_DWORD *)a2 + 240), 0x3Cu);
  v10 = (int *)*a5;
  if ( 2 * a3 >= 2 * a4 )
  {
    mulff3_c(v10 + 4, v10 + 4, v13);
    v11 = (int *)((char *)*a5 + 24);
  }
  else
  {
    mulff3_c(v10, v10, v13);
    v11 = (int *)((char *)*a5 + 8);
  }
  mulff3_c(v11, v11, v13);
  EXFORMOBJ::vComputeAccelFlags((EXFORMOBJ *)a5, 8u);
}
