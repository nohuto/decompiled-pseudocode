/*
 * XREFs of ?vDIBSolidBlt@@YGXPAVSURFACE@@PAU_RECTL@@PAU_CLIPOBJ@@KH@Z @ 0x55928
 * Callers:
 *     _EngBitBlt@44 @ 0x53EF2 (_EngBitBlt@44.c)
 *     ??1FRINGERECT@@QAE@XZ @ 0x55340 (--1FRINGERECT@@QAE@XZ.c)
 *     _EngEraseSurface@12 @ 0x93A4A (_EngEraseSurface@12.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

void __userpurge vDIBSolidBlt(
        struct _RECTL *a1@<edx>,
        _DWORD *a2@<ecx>,
        struct SURFACE *a3,
        int a4,
        struct _CLIPOBJ *a5,
        unsigned int a6,
        int a7)
{
  unsigned int v8; // esi
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  XCLIPOBJ *v12; // ecx
  int v13; // esi
  struct _RECTL *v14; // eax
  LONG v15; // ecx
  LONG right; // edx
  LONG v17; // ecx
  LONG top; // esi
  LONG v19; // ecx
  LONG bottom; // ecx
  unsigned __int8 v21; // cl
  unsigned __int16 v22; // cx
  LONG v23; // [esp+14h] [ebp-18Ch]
  unsigned int *v24; // [esp+1Ch] [ebp-184h]
  unsigned int i; // [esp+20h] [ebp-180h]
  unsigned __int8 *v26; // [esp+24h] [ebp-17Ch]
  int v27; // [esp+28h] [ebp-178h]
  LONG left; // [esp+2Ch] [ebp-174h]
  int v30; // [esp+30h] [ebp-170h]
  void (__stdcall *v32)(struct _RECTL *, unsigned int, unsigned __int8 *, int, unsigned int, unsigned int); // [esp+3Ch] [ebp-164h]
  _DWORD v33[82]; // [esp+40h] [ebp-160h] BYREF
  CPPEH_RECORD ms_exc; // [esp+188h] [ebp-18h]

  v30 = 0;
  memset(v33, 0, 0x144u);
  v8 = a2[15];
  if ( (!v8 || v8 > 6) && bUMPDSecurityGateEx() )
  {
    if ( gfUMPDDebug )
      _DbgPrint(
        "clientcore\\windows\\core\\ntgdi\\gre\\windows\\patblt.cxx:%d:vDIBSolidBlt:Invalid surface format.\n",
        88);
    return;
  }
  v24 = (&aulShiftFormat)[v8];
  if ( a5 )
  {
    if ( v8 == 5 )
      v32 = vSolidXorRect24;
    else
      v32 = vSolidXorRect1;
  }
  else
  {
    v32 = vSolidFillRect24;
    if ( v8 != 5 )
      v32 = vSolidFillRect1;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 != 1 )
          goto LABEL_10;
        v22 = a4;
        goto LABEL_44;
      }
      v21 = a4;
    }
    else
    {
      v21 = (16 * (a4 & 0xF)) | a4 & 0xF;
    }
    v22 = (v21 << 8) | v21;
LABEL_44:
    a4 = (v22 << 16) | v22;
    goto LABEL_10;
  }
  a4 &= 1u;
  if ( a4 )
    a4 = -1;
LABEL_10:
  v12 = a3;
  if ( !a3 )
  {
LABEL_13:
    v13 = 0;
    goto LABEL_14;
  }
  if ( *((_BYTE *)a3 + 20) == 1 )
  {
    v33[0] = 1;
    v33[1] = *((_DWORD *)a3 + 1);
    v33[2] = *((_DWORD *)a3 + 2);
    v33[3] = *((_DWORD *)a3 + 3);
    v33[4] = *((_DWORD *)a3 + 4);
    v13 = 1;
  }
  else
  {
    if ( *((_BYTE *)a3 + 20) != 3 )
      goto LABEL_13;
    v13 = 1;
    v30 = 1;
    XCLIPOBJ::cEnumStart(a3, 0, 0, 4u, 0x14u);
  }
LABEL_14:
  v26 = (unsigned __int8 *)a2[12];
  v27 = a2[13];
  if ( a2[111] )
  {
    v32 = vSolidFillRectWithCallback;
    v26 = (unsigned __int8 *)a2[111];
  }
  if ( v13 )
  {
    if ( v30 )
      goto LABEL_35;
    while ( 1 )
    {
      for ( i = 0; i < v33[0]; ++i )
      {
        v14 = (struct _RECTL *)&v33[4 * i + 1];
        left = v14->left;
        v15 = a1->left;
        if ( v14->left < a1->left )
        {
          v14->left = v15;
          left = v15;
        }
        right = v14->right;
        v17 = a1->right;
        if ( right > v17 )
        {
          v14->right = v17;
          right = v17;
        }
        top = v14->top;
        v19 = a1->top;
        if ( top < v19 )
        {
          v14->top = v19;
          top = v19;
        }
        bottom = v14->bottom;
        v23 = a1->bottom;
        if ( bottom > v23 )
        {
          bottom = a1->bottom;
          v14->bottom = v23;
        }
        if ( left < right && top < bottom )
        {
          ms_exc.registration.TryLevel = 1;
          v32(v14, 1u, v26, v27, a4, (unsigned int)v24);
          ms_exc.registration.TryLevel = -2;
        }
        v12 = a3;
      }
      if ( !v30 )
        break;
LABEL_35:
      v30 = XCLIPOBJ::bEnum(v12, 0x144u, v33, 0);
    }
  }
  else
  {
    ms_exc.registration.TryLevel = 0;
    v32(a1, 1u, v26, v27, a4, (unsigned int)v24);
    ms_exc.registration.TryLevel = -2;
  }
}
