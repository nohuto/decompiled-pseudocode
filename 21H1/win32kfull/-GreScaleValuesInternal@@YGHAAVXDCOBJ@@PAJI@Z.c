/*
 * XREFs of ?GreScaleValuesInternal@@YGHAAVXDCOBJ@@PAJI@Z @ 0x1FCFB0
 * Callers:
 *     _GreScaleValues@12 @ 0x1FD676 (_GreScaleValues@12.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QBEHXZ @ 0x4F3AC (-bDpiScaleTransform@DC@@QBEHXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

int __userpurge GreScaleValuesInternal@<eax>(int *a1@<edx>, DC **a2@<ecx>, struct XDCOBJ *a3, int *a4, unsigned int a5)
{
  DC **v5; // edi
  int *v6; // esi
  __int64 v7; // rax
  unsigned int v8; // ebx
  _DWORD *v9; // esi
  int *v11; // [esp+Ch] [ebp-24h]
  int v12[2]; // [esp+10h] [ebp-20h] BYREF
  DC **v13; // [esp+18h] [ebp-18h]
  _DWORD v14[4]; // [esp+1Ch] [ebp-14h] BYREF

  v5 = a2;
  v6 = a1;
  v11 = a1;
  v13 = a2;
  if ( !DC::bDpiScaleTransform(*a2) )
    return 1;
  v8 = 0;
  v12[0] = 0;
  v12[1] = 0;
  if ( !a3 )
    return 1;
  while ( 1 )
  {
    LODWORD(v7) = v12;
    ltoef_c(v7, *v6, v12);
    v9 = (_DWORD *)((char *)*v5 + 524);
    v14[0] = *v9++;
    v14[1] = *v9++;
    v14[2] = *v9;
    v14[3] = v9[1];
    mulff3_c(v12, v12, v14);
    if ( !eftol_c(v12, v11, 1) )
      break;
    v5 = v13;
    ++v8;
    v6 = ++v11;
    if ( v8 >= (unsigned int)a3 )
      return 1;
  }
  return 0;
}
