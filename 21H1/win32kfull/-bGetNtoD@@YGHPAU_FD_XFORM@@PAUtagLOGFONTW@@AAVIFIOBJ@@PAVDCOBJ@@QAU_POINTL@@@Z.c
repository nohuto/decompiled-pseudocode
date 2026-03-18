/*
 * XREFs of ?bGetNtoD@@YGHPAU_FD_XFORM@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@QAU_POINTL@@@Z @ 0x247772
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z @ 0xCC820 (-bSetFontXform@PFEOBJ@@QAEHAAVXDCOBJ@@PAUtagLOGFONTW@@PAU_FD_XFORM@@KKQAU_POINTL@@AAVIFIOBJ@@H@Z.c)
 * Callees:
 *     ?bWorldToDeviceIdentity@DC@@QBEHXZ @ 0x88582 (-bWorldToDeviceIdentity@DC@@QBEHXZ.c)
 *     ??0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z @ 0x8A776 (--0EXFORMOBJ@@QAE@PAVMATRIX@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z @ 0x943B6 (-vQuickInit@EXFORMOBJ@@QAEXAAVXDCOBJ@@K@Z.c)
 *     ?lSignum@EFLOAT@@QAEJXZ @ 0xCC96A (-lSignum@EFLOAT@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _eftof_c@4 @ 0xEEF63 (_eftof_c@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z @ 0x247A2E (-vGetNtoW@@YGXPAVMATRIX@@PAUtagLOGFONTW@@AAVIFIOBJ@@PAVDCOBJ@@@Z.c)
 */

int __userpurge bGetNtoD@<eax>(
        int a1@<edx>,
        int *a2@<ecx>,
        struct _FD_XFORM *a3,
        struct tagLOGFONTW *a4,
        struct IFIOBJ *a5,
        struct DCOBJ *a6,
        struct _POINTL *const a7)
{
  int v7; // esi
  int v9; // ecx
  int v10; // eax
  struct XDCOBJ *v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int *v21; // eax
  int v22; // eax
  int v23; // eax
  DC **v25; // edi
  int v26; // edx
  int v27; // [esp-4h] [ebp-B8h]
  struct IFIOBJ *v28; // [esp+0h] [ebp-B4h]
  struct DCOBJ *v29; // [esp+4h] [ebp-B0h]
  _BYTE v30[12]; // [esp+Ch] [ebp-A8h] BYREF
  EFLOAT *v31; // [esp+18h] [ebp-9Ch] BYREF
  int v32; // [esp+24h] [ebp-90h]
  int v33; // [esp+28h] [ebp-8Ch]
  int v34; // [esp+2Ch] [ebp-88h]
  struct tagLOGFONTW *v35; // [esp+30h] [ebp-84h]
  struct MATRIX *v36; // [esp+34h] [ebp-80h]
  _BYTE v37[60]; // [esp+38h] [ebp-7Ch] BYREF
  int v38[15]; // [esp+74h] [ebp-40h] BYREF

  v36 = (struct MATRIX *)a3;
  v7 = 0;
  v35 = a4;
  v34 = a1;
  memset(v37, 0, sizeof(v37));
  memset(v38, 0, sizeof(v38));
  if ( *(_DWORD *)a5 )
  {
    v9 = *(_DWORD *)(*(_DWORD *)v36 + 48);
    if ( (v9 & 0x3000010) == 0 )
    {
      v10 = 0;
      if ( (v9 & 0x200000) != 0 )
      {
        if ( DC::bWorldToDeviceIdentity((DC *)v35->lfHeight) )
        {
          v16 = lNormAngle(*(_DWORD *)(v34 + 12));
        }
        else
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v31, v11, 516);
          v33 = EFLOAT::lSignum(v31);
          v32 = EFLOAT::lSignum((EFLOAT *)(v12 + 8));
          v14 = EFLOAT::lSignum((EFLOAT *)(v13 + 16));
          v36 = (struct MATRIX *)v14;
          v27 = *(_DWORD *)(v34 + 12);
          if ( (*(_BYTE *)(*(_DWORD *)(v35->lfHeight + 1020) + 340) & 0x40) != 0 )
          {
            v36 = (struct MATRIX *)-v14;
            v15 = 3600 - lNormAngle(v27);
          }
          else
          {
            v15 = lNormAngle(v27);
          }
          v16 = lNormAngle(((unsigned __int16)v36 & 0xA8C) + v15 + (v33 & 0x708) + (v32 & 0x384));
        }
        v10 = v16 / 900;
      }
      if ( v10 )
      {
        v17 = v10 - 1;
        if ( !v17 )
        {
          v22 = *(_DWORD *)a5;
          *a2 = 0;
          a2[3] = 0;
          a2[2] = (int)(&galFloatNeg)[v22];
          a2[1] = (int)(&galFloatNeg)[*((_DWORD *)a5 + 1)];
          return 1;
        }
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 == 1 )
          {
            v19 = *((_DWORD *)a5 + 1);
            *a2 = 0;
            a2[3] = 0;
            a2[1] = (int)(&galFloat)[v19];
            a2[2] = (int)(&galFloat)[*(_DWORD *)a5];
          }
          return 1;
        }
        v20 = *(_DWORD *)a5;
        a2[1] = 0;
        a2[2] = 0;
        *a2 = (int)(&galFloatNeg)[v20];
        v21 = (&galFloat)[*((_DWORD *)a5 + 1)];
      }
      else
      {
        v23 = *(_DWORD *)a5;
        a2[1] = 0;
        a2[2] = 0;
        *a2 = (int)(&galFloat)[v23];
        v21 = (&galFloatNeg)[*((_DWORD *)a5 + 1)];
      }
      a2[3] = (int)v21;
      return 1;
    }
  }
  v25 = (DC **)v35;
  vGetNtoW(v36, v35, v28, v29);
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v30, (struct MATRIX *)v38, 0);
  if ( DC::bWorldToDeviceIdentity(*v25) )
  {
    qmemcpy(v38, v37, sizeof(v38));
LABEL_32:
    *a2 = eftof_c(v38);
    a2[1] = eftof_c(&v38[2]);
    a2[2] = eftof_c(&v38[4]);
    a2[3] = eftof_c(&v38[6]);
    return 1;
  }
  if ( EXFORMOBJ::bMultiply((EXFORMOBJ *)v30, (struct MATRIX *)v37, (struct MATRIX *)(v26 + 240), 0) )
  {
    if ( v38[0] )
      v38[1] -= 4;
    if ( v38[2] )
      v38[3] -= 4;
    if ( v38[4] )
      v38[5] -= 4;
    if ( v38[6] )
      v38[7] -= 4;
    goto LABEL_32;
  }
  return v7;
}
