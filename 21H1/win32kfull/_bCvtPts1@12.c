/*
 * XREFs of _bCvtPts1@12 @ 0xEE344
 * Callers:
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     ?NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPADPAU_DRAWSTREAMINFO@@@Z @ 0x5E070 (-NtGdiDrawStreamInternal@@YGHAAVXDCOBJ@@AAVEXFORMOBJ@@PAVSURFACE@@PAU_XLATEOBJ@@PAU_RECTL@@4JPAD.c)
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 * Callees:
 *     <none>
 */

int __stdcall bCvtPts1(int *a1, int *a2, int a3)
{
  int v4; // edi
  __int64 v5; // rax
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned int v8; // ecx
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  int v13; // edi
  __int64 v14; // rax
  unsigned int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  unsigned int v21; // ecx
  int v22; // edi
  __int64 v23; // rax
  bool v24; // cf
  unsigned int v25; // ecx
  int v26; // eax
  bool v27; // of
  __int64 v28; // rax
  bool v29; // cf
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // edx
  int v34; // ecx
  int v35; // edi
  __int64 v36; // rax
  bool v37; // cf
  unsigned int v38; // ecx
  int v39; // eax
  __int64 v40; // rax
  bool v41; // cf
  unsigned int v42; // ecx
  int v43; // eax
  __int64 v44; // rax
  bool v45; // cf
  unsigned int v46; // ecx
  int v47; // eax
  __int64 v48; // rax
  bool v49; // cf
  unsigned int v50; // ecx
  int v51; // eax
  int v52; // [esp+Ch] [ebp-4h]
  int v53; // [esp+Ch] [ebp-4h]
  int v54; // [esp+Ch] [ebp-4h]
  int v55; // [esp+Ch] [ebp-4h]

  switch ( a1[14] & 0xB )
  {
    case 0:
      v35 = a3;
      while ( 1 )
      {
        v36 = 16 * *a2 * (__int64)*a1;
        v37 = __CFADD__(-a1[1], 32);
        v38 = 32 - a1[1];
        if ( !v38 )
          goto LABEL_84;
        if ( (unsigned int)-a1[1] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[1] < 0 )
            return 0;
          if ( v38 >= 0x3F )
          {
            LODWORD(v36) = 0;
            goto LABEL_84;
          }
          v36 >>= 31;
          v37 = v38 < 0x1F;
          LOBYTE(v38) = v38 - 31;
        }
        v39 = (unsigned __int64)v36 >> v38;
        v27 = __OFADD__(v37, v39);
        LODWORD(v36) = v37 + v39;
        if ( v27 || __CFSHR__(HIDWORD(v36), v38) + (SHIDWORD(v36) >> v38) )
          return 0;
LABEL_84:
        v54 = v36;
        v40 = 16 * a2[1] * (__int64)a1[4];
        v41 = __CFADD__(-a1[5], 32);
        v42 = 32 - a1[5];
        if ( !v42 )
          goto LABEL_92;
        if ( (unsigned int)-a1[5] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[5] < 0 )
            return 0;
          if ( v42 >= 0x3F )
          {
            LODWORD(v40) = 0;
            goto LABEL_92;
          }
          v40 >>= 31;
          v41 = v42 < 0x1F;
          LOBYTE(v42) = v42 - 31;
        }
        v43 = (unsigned __int64)v40 >> v42;
        v27 = __OFADD__(v41, v43);
        LODWORD(v40) = v41 + v43;
        if ( v27 || __CFSHR__(HIDWORD(v40), v42) + (SHIDWORD(v40) >> v42) )
          return 0;
LABEL_92:
        HIDWORD(v40) = *a2;
        *a2 = a1[12] + v54 + v40;
        v44 = 16 * HIDWORD(v40) * (__int64)a1[2];
        v45 = __CFADD__(-a1[3], 32);
        v46 = 32 - a1[3];
        if ( !v46 )
          goto LABEL_100;
        if ( (unsigned int)-a1[3] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[3] < 0 )
            return 0;
          if ( v46 >= 0x3F )
          {
            LODWORD(v44) = 0;
            goto LABEL_100;
          }
          v44 >>= 31;
          v45 = v46 < 0x1F;
          LOBYTE(v46) = v46 - 31;
        }
        v47 = (unsigned __int64)v44 >> v46;
        v27 = __OFADD__(v45, v47);
        LODWORD(v44) = v45 + v47;
        if ( v27 || __CFSHR__(HIDWORD(v44), v46) + (SHIDWORD(v44) >> v46) )
          return 0;
LABEL_100:
        v55 = v44;
        v48 = 16 * a2[1] * (__int64)a1[6];
        v49 = __CFADD__(-a1[7], 32);
        v50 = 32 - a1[7];
        if ( v50 )
        {
          if ( (unsigned int)-a1[7] >= 0xFFFFFFE0 )
            goto LABEL_106;
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v50 < 0x3F )
          {
            v48 >>= 31;
            v49 = v50 < 0x1F;
            LOBYTE(v50) = v50 - 31;
LABEL_106:
            v51 = (unsigned __int64)v48 >> v50;
            v27 = __OFADD__(v49, v51);
            LODWORD(v48) = v49 + v51;
            if ( v27 || __CFSHR__(HIDWORD(v48), v50) + (SHIDWORD(v48) >> v50) )
              return 0;
            goto LABEL_108;
          }
          LODWORD(v48) = 0;
        }
LABEL_108:
        a2[1] = a1[13] + v55 + v48;
        a2 += 2;
        if ( !--v35 )
          return 1;
      }
    case 1:
      v22 = a3;
      while ( 2 )
      {
        v23 = 16 * *a2 * (__int64)*a1;
        v24 = __CFADD__(-a1[1], 32);
        v25 = 32 - a1[1];
        if ( !v25 )
          goto LABEL_62;
        if ( (unsigned int)-a1[1] >= 0xFFFFFFE0 )
          goto LABEL_60;
        if ( 32 - a1[1] < 0 )
          return 0;
        if ( v25 < 0x3F )
        {
          v23 >>= 31;
          v24 = v25 < 0x1F;
          LOBYTE(v25) = v25 - 31;
LABEL_60:
          v26 = (unsigned __int64)v23 >> v25;
          v27 = __OFADD__(v24, v26);
          LODWORD(v23) = v24 + v26;
          if ( v27 || __CFSHR__(HIDWORD(v23), v25) + (SHIDWORD(v23) >> v25) )
            return 0;
        }
        else
        {
          LODWORD(v23) = 0;
        }
LABEL_62:
        HIDWORD(v23) = a2[1];
        *a2 = a1[12] + v23;
        v28 = 16 * HIDWORD(v23) * (__int64)a1[6];
        v29 = __CFADD__(-a1[7], 32);
        v30 = 32 - a1[7];
        if ( !v30 )
          goto LABEL_70;
        if ( (unsigned int)-a1[7] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v30 >= 0x3F )
          {
            LODWORD(v28) = 0;
            goto LABEL_70;
          }
          v28 >>= 31;
          v29 = v30 < 0x1F;
          LOBYTE(v30) = v30 - 31;
        }
        v31 = (unsigned __int64)v28 >> v30;
        v27 = __OFADD__(v29, v31);
        LODWORD(v28) = v29 + v31;
        if ( !v27 && !(__CFSHR__(HIDWORD(v28), v30) + (SHIDWORD(v28) >> v30)) )
        {
LABEL_70:
          a2[1] = a1[13] + v28;
          a2 += 2;
          if ( !--v22 )
            return 1;
          continue;
        }
        return 0;
      }
    case 2:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
      JUMPOUT(0xEE8CC);
    case 3:
      v32 = a1[12];
      v33 = a1[13];
      v34 = a3;
      do
      {
        *a2 += v32;
        a2[1] += v33;
        a2 += 2;
        --v34;
      }
      while ( v34 );
      return 1;
    case 8:
      v13 = a3;
      while ( 2 )
      {
        v14 = *a2 * (__int64)*a1;
        v15 = 32 - a1[1];
        if ( !v15 )
          goto LABEL_30;
        if ( (unsigned int)-a1[1] >= 0xFFFFFFE0 )
          goto LABEL_29;
        if ( 32 - a1[1] < 0 )
          return 0;
        if ( v15 < 0x3F )
        {
          v14 >>= 31;
          LOBYTE(v15) = v15 - 31;
LABEL_29:
          v24 = __CFSHR__(HIDWORD(v14), v15);
          v14 >>= v15 & 0x1F;
          if ( v24 + HIDWORD(v14) )
            return 0;
        }
        else
        {
          LODWORD(v14) = 0;
        }
LABEL_30:
        v52 = v14;
        v16 = a2[1] * (__int64)a1[4];
        v17 = 32 - a1[5];
        if ( !v17 )
          goto LABEL_37;
        if ( (unsigned int)-a1[5] >= 0xFFFFFFE0 )
          goto LABEL_36;
        if ( 32 - a1[5] < 0 )
          return 0;
        if ( v17 < 0x3F )
        {
          v16 >>= 31;
          LOBYTE(v17) = v17 - 31;
LABEL_36:
          v24 = __CFSHR__(HIDWORD(v16), v17);
          v16 >>= v17 & 0x1F;
          if ( v24 + HIDWORD(v16) )
            return 0;
        }
        else
        {
          LODWORD(v16) = 0;
        }
LABEL_37:
        HIDWORD(v16) = *a2;
        *a2 = (a1[12] + v52 + (int)v16 + 8) >> 4;
        v18 = SHIDWORD(v16) * (__int64)a1[2];
        v19 = 32 - a1[3];
        if ( !v19 )
          goto LABEL_44;
        if ( (unsigned int)-a1[3] >= 0xFFFFFFE0 )
          goto LABEL_43;
        if ( 32 - a1[3] < 0 )
          return 0;
        if ( v19 < 0x3F )
        {
          v18 >>= 31;
          LOBYTE(v19) = v19 - 31;
LABEL_43:
          v24 = __CFSHR__(HIDWORD(v18), v19);
          v18 >>= v19 & 0x1F;
          if ( v24 + HIDWORD(v18) )
            return 0;
        }
        else
        {
          LODWORD(v18) = 0;
        }
LABEL_44:
        v53 = v18;
        v20 = a2[1] * (__int64)a1[6];
        v21 = 32 - a1[7];
        if ( !v21 )
          goto LABEL_51;
        if ( (unsigned int)-a1[7] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v21 >= 0x3F )
          {
            LODWORD(v20) = 0;
            goto LABEL_51;
          }
          v20 >>= 31;
          LOBYTE(v21) = v21 - 31;
        }
        v24 = __CFSHR__(HIDWORD(v20), v21);
        v20 >>= v21 & 0x1F;
        if ( !(v24 + HIDWORD(v20)) )
        {
LABEL_51:
          a2[1] = (a1[13] + v53 + (int)v20 + 8) >> 4;
          a2 += 2;
          if ( !--v13 )
            return 1;
          continue;
        }
        return 0;
      }
    case 9:
      v4 = a3;
      while ( 2 )
      {
        v5 = *a2 * (__int64)*a1;
        v6 = 32 - a1[1];
        if ( !v6 )
          goto LABEL_10;
        if ( (unsigned int)-a1[1] >= 0xFFFFFFE0 )
          goto LABEL_9;
        if ( 32 - a1[1] < 0 )
          return 0;
        if ( v6 < 0x3F )
        {
          v5 >>= 31;
          LOBYTE(v6) = v6 - 31;
LABEL_9:
          v24 = __CFSHR__(HIDWORD(v5), v6);
          v5 >>= v6 & 0x1F;
          if ( v24 + HIDWORD(v5) )
            return 0;
        }
        else
        {
          LODWORD(v5) = 0;
        }
LABEL_10:
        HIDWORD(v5) = a2[1];
        *a2 = (a1[12] + (int)v5 + 8) >> 4;
        v7 = SHIDWORD(v5) * (__int64)a1[6];
        v8 = 32 - a1[7];
        if ( !v8 )
          goto LABEL_17;
        if ( (unsigned int)-a1[7] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v8 >= 0x3F )
          {
            LODWORD(v7) = 0;
            goto LABEL_17;
          }
          v7 >>= 31;
          LOBYTE(v8) = v8 - 31;
        }
        v24 = __CFSHR__(HIDWORD(v7), v8);
        v7 >>= v8 & 0x1F;
        if ( !(v24 + HIDWORD(v7)) )
        {
LABEL_17:
          a2[1] = (a1[13] + (int)v7 + 8) >> 4;
          a2 += 2;
          if ( !--v4 )
            return 1;
          continue;
        }
        return 0;
      }
    case 0xB:
      v10 = (a1[12] + 8) >> 4;
      v11 = (a1[13] + 8) >> 4;
      v12 = a3;
      do
      {
        *a2 += v10;
        a2[1] += v11;
        a2 += 2;
        --v12;
      }
      while ( v12 );
      return 1;
  }
}
