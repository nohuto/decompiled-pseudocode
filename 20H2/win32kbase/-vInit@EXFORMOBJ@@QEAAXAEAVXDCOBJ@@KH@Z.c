/*
 * XREFs of ?vInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@KH@Z @ 0x1C005B8F0
 * Callers:
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 *     GreDCSelectPen @ 0x1C0081F60 (GreDCSelectPen.c)
 *     GreIntersectClipRect @ 0x1C00C29C0 (GreIntersectClipRect.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C005BAC8 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vUpdateWtoDXform@DC@@QEAAXXZ @ 0x1C005BAF0 (-vUpdateWtoDXform@DC@@QEAAXXZ.c)
 *     ?vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C005C6F0 (-vRealizeLineAttrs@DC@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     ?bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z @ 0x1C00A0280 (-bInverse@EXFORMOBJ@@QEAAHAEAVMATRIX@@@Z.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C013E110 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C013E768 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C013EA60 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 */

void __fastcall EXFORMOBJ::vInit(EXFORMOBJ *this, DC **a2, int a3, int a4)
{
  int v8; // eax
  DC *v9; // rcx
  __int64 v10; // rdx
  int v11; // esi
  int v12; // esi
  __int64 v13; // rax
  DC *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  DC *v18; // r8
  DC *v19; // rcx
  DC *v20; // r8
  DC *v21; // r8
  char *v22; // [rsp+20h] [rbp-18h] BYREF
  int v23; // [rsp+2Ch] [rbp-Ch]

  if ( a4 )
  {
    v8 = *((_DWORD *)*a2 + 130);
    if ( (v8 & 1) != 0 && (v8 & 2) == 0 )
    {
      v19 = *a2;
      *((_DWORD *)*a2 + 130) = v8 | 2;
      DC::vMarkTransformDirty(v19);
      DC::vUpdateCachedDPIScaleValue(v20);
    }
  }
  v9 = *a2;
  v10 = *((_QWORD *)*a2 + 122);
  if ( (*(_DWORD *)(v10 + 340) & 0x1E000) != 0 )
  {
    if ( (*(_DWORD *)(v10 + 152) & 0x100) != 0 )
    {
      v23 = 0;
      v22 = (char *)v9 + 356;
      if ( v9 != (DC *)-356LL )
      {
        EXFORMOBJ::bXform((EXFORMOBJ *)&v22, (struct _POINTFIX *)(v10 + 8), (struct _POINTL *)(v10 + 216), 1uLL);
        v9 = *a2;
      }
      *(_DWORD *)(*((_QWORD *)v9 + 122) + 152LL) &= ~0x100u;
      v9 = *a2;
    }
    DC::vUpdateWtoDXform(v9);
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 152LL) |= 0x200u;
    v18 = *a2;
    if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x80u) != 0 )
    {
      v23 = 0;
      v22 = (char *)v18 + 320;
      if ( v18 != (DC *)-320LL )
      {
        DC::vRealizeLineAttrs(v18, (struct EXFORMOBJ *)&v22);
        v18 = *a2;
      }
      *((_DWORD *)v18 + 63) |= 1u;
      *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x80u;
      v18 = *a2;
    }
    *(_DWORD *)(*((_QWORD *)v18 + 122) + 340LL) |= 0x10u;
  }
  v11 = a3 - 515;
  if ( !v11 )
  {
    v13 = (__int64)*a2 + 392;
    goto LABEL_7;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v13 = (__int64)*a2 + 320;
LABEL_7:
    *(_QWORD *)this = v13;
    goto LABEL_8;
  }
  if ( v12 != 510 )
    goto LABEL_22;
  *(_QWORD *)this = (char *)*a2 + 356;
  if ( (*(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) & 0x10) == 0 )
    goto LABEL_8;
  if ( (unsigned int)EXFORMOBJ::bInverse(this, (DC *)((char *)*a2 + 320)) )
  {
    *(_DWORD *)(*((_QWORD *)*a2 + 122) + 340LL) &= ~0x10u;
    if ( !(unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v16 = *(_QWORD *)this;
      v17 = *(_QWORD *)(v15 + 976);
      *(_OWORD *)(v17 + 68) = *(_OWORD *)*(_QWORD *)this;
      *(_OWORD *)(v17 + 84) = *(_OWORD *)(v16 + 16);
      *(_DWORD *)(v17 + 100) = *(_DWORD *)(v16 + 32);
    }
  }
  else
  {
LABEL_22:
    *(_QWORD *)this = 0LL;
  }
LABEL_8:
  if ( a4 )
  {
    v14 = *a2;
    if ( (*((_BYTE *)*a2 + 520) & 3) == 3 )
    {
      *((_DWORD *)v14 + 130) = *((_DWORD *)*a2 + 130) & 0xFFFFFFFD;
      DC::vMarkTransformDirty(v14);
      DC::vUpdateCachedDPIScaleValue(v21);
    }
  }
}
