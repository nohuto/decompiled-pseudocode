/*
 * XREFs of ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@AEAVXDCOBJ@@@Z @ 0x1C02BDED4
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C00066C0 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A7FA8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BE0F8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::bLinkedTextToPath(ESTROBJ *this, struct EPATHOBJ *a2, struct XDCOBJ *a3)
{
  __int64 v3; // rax
  __int64 v4; // r8
  struct RFONTOBJ *v6; // rsi
  _WORD *v8; // rbp
  int v9; // edi
  unsigned __int64 v10; // r13
  int v11; // r15d
  struct RFONTOBJ *v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  struct XDCOBJ *v15; // rax
  _DWORD *v16; // r9
  _WORD *v17; // r14
  _WORD *v18; // r10
  int v19; // edx
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r11
  __int64 result; // rax
  struct _POINTL v23; // [rsp+60h] [rbp+8h] BYREF
  struct XDCOBJ *v24; // [rsp+70h] [rbp+18h] BYREF

  v24 = a3;
  v3 = *((_QWORD *)this + 26);
  v4 = *(unsigned int *)this;
  v6 = (struct RFONTOBJ *)*((_QWORD *)this + 7);
  v8 = (_WORD *)*((_QWORD *)this + 5);
  v9 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)((char *)this + 4) = 0LL;
  v10 = v3 + 4 * v4;
  v11 = *(_DWORD *)(*(_QWORD *)v6 + 840LL) + 4;
  if ( v11 <= 0 )
  {
LABEL_35:
    *((_QWORD *)this + 5) = v8;
    result = 1LL;
    *((_QWORD *)this + 7) = v6;
    return result;
  }
  while ( 1 )
  {
    v24 = 0LL;
    *((_QWORD *)this + 7) = v6;
    if ( !v9 )
    {
      v12 = v6;
      goto LABEL_20;
    }
    if ( v9 != 1 )
      break;
    if ( *((_DWORD *)this + 62) )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 720LL);
      goto LABEL_18;
    }
LABEL_34:
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
    if ( ++v9 >= v11 )
      goto LABEL_35;
  }
  if ( v9 == 2 )
  {
    if ( *((_DWORD *)this + 63) )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 728LL);
      goto LABEL_18;
    }
    goto LABEL_34;
  }
  if ( v9 == 3 )
  {
    if ( *((_DWORD *)this + 64) )
    {
      v15 = *(struct XDCOBJ **)(*(_QWORD *)v6 + 736LL);
      goto LABEL_18;
    }
    goto LABEL_34;
  }
  v13 = *((_QWORD *)this + 33);
  if ( v13 )
    v14 = *(_DWORD *)(v13 + 4LL * (unsigned int)(v9 - 4));
  else
    v14 = 0;
  if ( !v14 )
    goto LABEL_34;
  v15 = *(struct XDCOBJ **)(*(_QWORD *)(*(_QWORD *)v6 + 744LL) + 8LL * (unsigned int)(v9 - 4));
LABEL_18:
  if ( !v15 )
    goto LABEL_32;
  v24 = v15;
  v12 = (struct RFONTOBJ *)&v24;
LABEL_20:
  v16 = (_DWORD *)*((_QWORD *)this + 26);
  v17 = (_WORD *)*((_QWORD *)this + 25);
  v18 = v8;
  v19 = 0;
  v20 = (v10 - (unsigned __int64)v16 + 3) >> 2;
  v21 = 0LL;
  if ( (unsigned __int64)v16 > v10 )
    v20 = 0LL;
  if ( !v20 )
    goto LABEL_33;
  do
  {
    if ( *v16 == v9 )
    {
      *v17++ = *v18;
      ++v19;
    }
    ++v18;
    ++v16;
    ++v21;
  }
  while ( v21 < v20 );
  if ( !v19 )
    goto LABEL_33;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 25);
  *(_DWORD *)this = v19;
  *((_QWORD *)this + 7) = v12;
  *((_DWORD *)this + 59) = v9;
  *((_DWORD *)this + 12) = 0;
  if ( v9 )
  {
    v23 = 0LL;
    if ( (unsigned int)bAdjusBaseLine(v12, (struct RFONTOBJ *)&v24, &v23) )
      ESTROBJ::ptlBaseLineAdjustSet(this, &v23);
  }
  if ( (unsigned int)ESTROBJ::bTextToPathWorkhorse((STROBJ *)this, a2) )
  {
LABEL_33:
    v24 = 0LL;
    goto LABEL_34;
  }
  *((_QWORD *)this + 5) = v8;
  *((_QWORD *)this + 7) = v6;
LABEL_32:
  v24 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
  return 0LL;
}
