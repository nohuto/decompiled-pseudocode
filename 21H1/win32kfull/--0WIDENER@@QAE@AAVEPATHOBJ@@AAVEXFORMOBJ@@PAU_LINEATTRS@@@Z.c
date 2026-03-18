/*
 * XREFs of ??0WIDENER@@QAE@AAVEPATHOBJ@@AAVEXFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x234B5B
 * Callers:
 *     ?bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z @ 0x235B22 (-bWiden@EPATHOBJ@@QAEHAAV1@PAU_XFORMOBJ@@PAU_LINEATTRS@@@Z.c)
 * Callees:
 *     _ftoef_c@8 @ 0xEEEB1 (_ftoef_c@8.c)
 *     _eftol_c@12 @ 0xEEF16 (_eftol_c@12.c)
 *     _mulff3_c@12 @ 0xEF172 (_mulff3_c@12.c)
 *     ??0STYLER@@QAE@AAVEPATHOBJ@@PAU_LINEATTRS@@@Z @ 0x234AE7 (--0STYLER@@QAE@AAVEPATHOBJ@@PAU_LINEATTRS@@@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z @ 0x2356FB (-bPolygonizePen@WIDEPENOBJ@@QAEHAAVEXFORMOBJ@@J@Z.c)
 *     ?bValid@WIDENER@@QBEHXZ @ 0x235ADE (-bValid@WIDENER@@QBEHXZ.c)
 *     ?bWiden@WIDENER@@IAEHXZ @ 0x235BBB (-bWiden@WIDENER@@IAEHXZ.c)
 */

WIDENER *__thiscall WIDENER::WIDENER(WIDENER *this, struct EPATHOBJ *a2, struct MATRIX **a3, struct _LINEATTRS *a4)
{
  int v5; // edx
  ULONG iEndCap; // ecx
  ULONG iJoin; // eax
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  struct EXFORMOBJ *v12; // esi
  int *v13; // eax
  int v15; // [esp+1Ch] [ebp-30h]
  int v16; // [esp+2Ch] [ebp-20h] BYREF
  int v17; // [esp+30h] [ebp-1Ch]
  int v18; // [esp+34h] [ebp-18h] BYREF
  int v19; // [esp+38h] [ebp-14h]
  int v20[2]; // [esp+3Ch] [ebp-10h] BYREF
  int v21; // [esp+44h] [ebp-8h] BYREF

  STYLER::STYLER(this, a2, a4);
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 824));
  *((_DWORD *)this + 223) = 0;
  *((_DWORD *)this + 227) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 912));
  *((_DWORD *)this + 245) = 0;
  PATHMEMOBJ::PATHMEMOBJ((WIDENER *)((char *)this + 996));
  *((_DWORD *)this + 266) = 0;
  if ( !WIDENER::bValid(this) )
    return this;
  iEndCap = a4->iEndCap;
  *((_DWORD *)this + 271) = iEndCap;
  iJoin = a4->iJoin;
  *((_DWORD *)this + 270) = iJoin;
  v8 = !iJoin && iEndCap <= 1;
  v9 = *((_DWORD *)this + 6);
  if ( v8 )
    v10 = v9 | 0x10;
  else
    v10 = v9 & 0xFFFFFFEF;
  *((_DWORD *)this + 6) = v10;
  ftoef_c(v8, v5, a4->elWidth.l, v20);
  v21 = 0;
  eftol_c(v20, &v21, 1);
  *((_DWORD *)this + 274) = v20[0];
  *((_DWORD *)this + 275) = v20[1];
  --*((_DWORD *)this + 275);
  if ( *((_DWORD *)this + 270) == 2 )
  {
    ftoef_c((unsigned int)this + 1096, v11, a4->eMiterLimit, (int *)this + 272);
    mulff3_c((int *)this + 272, (_DWORD *)this + 272, (_DWORD *)this + 274);
    v18 = *((_DWORD *)this + 272);
    v19 = *((_DWORD *)this + 273);
    mulff3_c((int *)this + 272, (_DWORD *)this + 272, &v18);
  }
  if ( !a4->pstyle && *((_DWORD *)this + 271) != 1 && *((_DWORD *)this + 270) != 2 )
  {
    v12 = (struct EXFORMOBJ *)a3;
    goto LABEL_19;
  }
  v12 = (struct EXFORMOBJ *)a3;
  if ( !EXFORMOBJ::bInverse((WIDENER *)((char *)this + 808), *a3) )
  {
    EngSetLastError(0x216u);
    goto LABEL_16;
  }
  v13 = (int *)(*((_DWORD *)a2 + 2) + 28);
  v16 = *v13;
  v17 = v13[1];
  v18 = v13[2];
  v19 = v13[3];
  v15 = *v13;
  v16 = v18 - *v13;
  v17 = v13[3] - v13[1];
  v19 = v17;
  v18 = v15 - v18;
  v12 = (struct EXFORMOBJ *)a3;
  if ( !EXFORMOBJ::bXform((WIDENER *)((char *)this + 808), (struct _VECTORFX *)&v16, (struct _VECTORL *)&v16, 2u) )
LABEL_16:
    *((_DWORD *)this + 266) = 1;
LABEL_19:
  if ( WIDENER::bValid(this)
    && (!WIDEPENOBJ::bPolygonizePen((WIDENER *)((char *)this + 824), v12, v21) || !WIDENER::bWiden(this)) )
  {
    *((_DWORD *)this + 266) = 1;
  }
  return this;
}
