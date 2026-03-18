/*
 * XREFs of ?vScale@ERECTL@@QAEXABVPOINTFL@@@Z @ 0x1CDA4B
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z @ 0x4E1BE (-bClipSrcDstRectsAndValidate@@YG_NPAU_SURFOBJ@@0PAVDCOBJ@@1PAU_CLIPOBJ@@PAU_RECTL@@3@Z.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_RECTL@@PAVPALETTE@@PAK4PAPAV3@@Z @ 0xC62AC (-bSpDwmUpdateSpriteShape@@YGHPAUHDEV__@@PAVDWMSPRITE@@PAVSFMLOGICALSURFACE@@PAU_SURFOBJ@@PAU_REC.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 */

void __userpurge ERECTL::vScale(ERECTL *this@<ecx>, __int64 a2@<edx:eax>, const struct POINTFL *a3)
{
  __int64 v5; // rax
  int *v6; // edi
  int *v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  int *v10; // esi
  int *v11; // eax
  int v12; // [esp+Ch] [ebp-2Ch] BYREF
  int v13; // [esp+10h] [ebp-28h]
  int v14[2]; // [esp+14h] [ebp-24h] BYREF
  int v15[2]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v16[2]; // [esp+24h] [ebp-14h] BYREF
  int v17[2]; // [esp+2Ch] [ebp-Ch] BYREF
  int *v18; // [esp+34h] [ebp-4h]
  int *v19; // [esp+40h] [ebp+8h]

  LODWORD(a2) = v17;
  v18 = (int *)this;
  ltoef_c(a2, *(_DWORD *)this, v17);
  v12 = *(_DWORD *)a3;
  v13 = *((_DWORD *)a3 + 1);
  mulff3_c(v17, v17, &v12);
  LODWORD(v5) = v16;
  v6 = (int *)((char *)this + 4);
  ltoef_c(v5, *((_DWORD *)this + 1), v16);
  v12 = *((_DWORD *)a3 + 2);
  v13 = *((_DWORD *)a3 + 3);
  mulff3_c(v16, v16, &v12);
  v7 = (int *)((char *)this + 8);
  LODWORD(v8) = v15;
  ltoef_c(v8, *v7, v15);
  v12 = *(_DWORD *)a3;
  v13 = *((_DWORD *)a3 + 1);
  mulff3_c(v15, v15, &v12);
  LODWORD(v9) = v18 + 3;
  v19 = v18 + 3;
  ltoef_c(v9, v18[3], v14);
  v12 = *((_DWORD *)a3 + 2);
  v13 = *((_DWORD *)a3 + 3);
  mulff3_c(v14, v14, &v12);
  if ( eftol_c(v17, v18, 1) && eftol_c(v16, v6, 1) && eftol_c(v15, v7, 1) )
  {
    v10 = v19;
    if ( eftol_c(v14, v19, 1) )
      return;
  }
  else
  {
    v10 = v19;
  }
  v11 = v18;
  *v10 = 0;
  *v7 = 0;
  *v6 = 0;
  *v11 = 0;
}
