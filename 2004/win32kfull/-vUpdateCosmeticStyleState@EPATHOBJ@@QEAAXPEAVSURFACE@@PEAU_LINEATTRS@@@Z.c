/*
 * XREFs of ?vUpdateCosmeticStyleState@EPATHOBJ@@QEAAXPEAVSURFACE@@PEAU_LINEATTRS@@@Z @ 0x1C013E7A8
 * Callers:
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0139974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ?bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z @ 0x1C013E1A0 (-bInit@DDA_CLIPLINE@@QEAAHPEAU_POINTFIX@@0@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

void __fastcall EPATHOBJ::vUpdateCosmeticStyleState(EPATHOBJ *this, struct SURFACE *a2, struct _LINEATTRS *a3)
{
  int v4; // esi
  FLONG fl; // eax
  _DWORD *v7; // rax
  int v8; // esi
  int v9; // r12d
  PFLOAT_LONG pstyle; // rdx
  union _FLOAT_LONG *i; // rcx
  struct _POINTFIX *j; // rbx
  FIX x; // eax
  unsigned __int64 v14; // rdi
  struct _POINTFIX *v15; // rbp
  struct _POINTFIX *v16; // r14
  unsigned __int64 v17; // r13
  FIX y; // edx
  int v19; // r8d
  FIX v20; // eax
  int v21; // ecx
  __int64 v22; // rdx
  bool v23; // al
  __int64 v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  unsigned int v27; // [rsp+20h] [rbp-88h]
  unsigned int v28; // [rsp+24h] [rbp-84h]
  unsigned int v29; // [rsp+28h] [rbp-80h]
  _OWORD v31[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v32; // [rsp+58h] [rbp-50h]

  v4 = 2;
  memset(v31, 0, sizeof(v31));
  fl = a3->fl;
  v32 = 0LL;
  if ( (fl & 2) != 0 )
  {
    v27 = 1;
    v9 = 1;
    v28 = 1;
    v29 = 1;
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a2 + 6);
    v8 = 0;
    v9 = v7[555];
    v28 = v7[554];
    pstyle = a3->pstyle;
    v27 = v7[553];
    v29 = v9;
    for ( i = &pstyle[a3->cstyle]; i > pstyle; v8 += i->l )
      --i;
    v4 = 2 * v9 * v8;
  }
  for ( j = *(struct _POINTFIX **)(*((_QWORD *)this + 1) + 40LL); ; j = (struct _POINTFIX *)j[1] )
  {
    x = j[2].x;
    if ( (x & 1) != 0 )
      break;
  }
  LODWORD(v14) = 0;
  if ( (x & 4) == 0 )
    LODWORD(v14) = LOWORD(a3->elStyleState.e) + v9 * HIWORD(a3->elStyleState.l);
  v15 = j + 3;
  v16 = j + 4;
  while ( 2 )
  {
    v17 = (unsigned __int64)&j[(unsigned int)j[2].y + 3];
    while ( (unsigned __int64)v16 < v17 )
    {
      if ( !(unsigned int)DDA_CLIPLINE::bInit((DDA_CLIPLINE *)v31, v15, v16) )
        goto LABEL_26;
      y = v15->y;
      v19 = v15->x - v16->x;
      v20 = v16->y;
      if ( v16->x - v15->x >= 0 )
        v19 = v16->x - v15->x;
      v21 = v20 - y;
      v22 = (unsigned int)(y - v20);
      if ( v21 >= 0 )
        v22 = (unsigned int)v21;
      if ( v27 == v28 )
      {
        v23 = v19 >= (int)v22;
      }
      else
      {
        if ( v27 * (unsigned __int64)(unsigned int)v19 >= (unsigned __int64)v28 * v22 )
        {
LABEL_21:
          if ( (v31[0] & 5) == 0 )
            goto LABEL_22;
          goto LABEL_35;
        }
        v23 = 0;
      }
      if ( v23 )
        goto LABEL_21;
      if ( (v31[0] & 5) != 0 )
      {
LABEL_22:
        v24 = v27;
        v25 = DWORD2(v32) - v32;
        goto LABEL_23;
      }
LABEL_35:
      v24 = v28;
      v25 = HIDWORD(v32) - DWORD1(v32);
LABEL_23:
      v26 = (unsigned int)(v25 + 1);
      if ( (v26 & 0xFFFF0000) != 0 )
      {
        v14 = ((int)v14 + v24 * v26) % (unsigned __int64)(unsigned int)v4;
      }
      else
      {
        LODWORD(v14) = v24 * v26 + v14;
        if ( (int)v14 >= v4 )
          LODWORD(v14) = (int)v14 % v4;
      }
LABEL_26:
      v15 = v16++;
    }
    j = (struct _POINTFIX *)*j;
    if ( j )
    {
      v16 = j + 3;
      continue;
    }
    break;
  }
  a3->elStyleState.l = (unsigned __int16)((unsigned int)v14 % v29) | ((unsigned __int16)((unsigned int)v14 / v29) << 16);
}
