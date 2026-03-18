/*
 * XREFs of _bCvtPts@16 @ 0xEE810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bCvtPts(int *a1, int *a2, _DWORD *a3, int a4)
{
  int v6; // edx
  int *v7; // esi
  __int64 v8; // rax
  bool v9; // cf
  unsigned int v10; // ecx
  int v11; // eax
  bool v12; // of
  _DWORD *v13; // edi
  int v14; // edx
  __int64 v15; // rax
  bool v16; // cf
  unsigned int v17; // ecx
  int v18; // eax
  int v20; // ecx
  int v21; // edx
  int v22; // ebx
  int v23; // eax
  int *v24; // esi
  _DWORD *v25; // edi
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  int v29; // ebx
  int v30; // eax
  int *v31; // esi
  _DWORD *v32; // edi
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  int v36; // ebx
  int v37; // eax
  int *v38; // esi
  _DWORD *v39; // edi
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // ebx
  int v44; // eax
  int *v45; // esi
  _DWORD *v46; // edi
  int v47; // eax
  __int64 v48; // rax
  bool v49; // cf
  unsigned int v50; // ecx
  int v51; // eax
  __int64 v52; // rax
  bool v53; // cf
  unsigned int v54; // ecx
  int v55; // eax
  __int64 v56; // rax
  bool v57; // cf
  unsigned int v58; // ecx
  int v59; // eax
  __int64 v60; // rax
  bool v61; // cf
  unsigned int v62; // ecx
  int v63; // eax
  int v64; // [esp+Ch] [ebp-4h]
  int v65; // [esp+Ch] [ebp-4h]

  switch ( a1[14] & 0xF )
  {
    case 0:
    case 8:
      do
      {
        v48 = *a2 * (__int64)*a1;
        v49 = __CFADD__(-a1[1], 32);
        v50 = 32 - a1[1];
        if ( !v50 )
          goto LABEL_42;
        if ( (unsigned int)-a1[1] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[1] < 0 )
            return 0;
          if ( v50 >= 0x3F )
          {
            LODWORD(v48) = 0;
            goto LABEL_42;
          }
          v48 >>= 31;
          v49 = v50 < 0x1F;
          LOBYTE(v50) = v50 - 31;
        }
        v51 = (unsigned __int64)v48 >> v50;
        v12 = __OFADD__(v49, v51);
        LODWORD(v48) = v49 + v51;
        if ( v12 || __CFSHR__(HIDWORD(v48), v50) + (SHIDWORD(v48) >> v50) )
          return 0;
LABEL_42:
        v64 = v48;
        v52 = a2[1] * (__int64)a1[4];
        v53 = __CFADD__(-a1[5], 32);
        v54 = 32 - a1[5];
        if ( !v54 )
          goto LABEL_50;
        if ( (unsigned int)-a1[5] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[5] < 0 )
            return 0;
          if ( v54 >= 0x3F )
          {
            LODWORD(v52) = 0;
            goto LABEL_50;
          }
          v52 >>= 31;
          v53 = v54 < 0x1F;
          LOBYTE(v54) = v54 - 31;
        }
        v55 = (unsigned __int64)v52 >> v54;
        v12 = __OFADD__(v53, v55);
        LODWORD(v52) = v53 + v55;
        if ( v12 || __CFSHR__(HIDWORD(v52), v54) + (SHIDWORD(v52) >> v54) )
          return 0;
LABEL_50:
        HIDWORD(v52) = *a2;
        *a3 = a1[12] + v64 + v52;
        v56 = SHIDWORD(v52) * (__int64)a1[2];
        v57 = __CFADD__(-a1[3], 32);
        v58 = 32 - a1[3];
        if ( !v58 )
          goto LABEL_58;
        if ( (unsigned int)-a1[3] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[3] < 0 )
            return 0;
          if ( v58 >= 0x3F )
          {
            LODWORD(v56) = 0;
            goto LABEL_58;
          }
          v56 >>= 31;
          v57 = v58 < 0x1F;
          LOBYTE(v58) = v58 - 31;
        }
        v59 = (unsigned __int64)v56 >> v58;
        v12 = __OFADD__(v57, v59);
        LODWORD(v56) = v57 + v59;
        if ( v12 || __CFSHR__(HIDWORD(v56), v58) + (SHIDWORD(v56) >> v58) )
          return 0;
LABEL_58:
        v65 = v56;
        v60 = a2[1] * (__int64)a1[6];
        v61 = __CFADD__(-a1[7], 32);
        v62 = 32 - a1[7];
        if ( !v62 )
          goto LABEL_66;
        if ( (unsigned int)-a1[7] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v62 >= 0x3F )
          {
            LODWORD(v60) = 0;
            goto LABEL_66;
          }
          v60 >>= 31;
          v61 = v62 < 0x1F;
          LOBYTE(v62) = v62 - 31;
        }
        v63 = (unsigned __int64)v60 >> v62;
        v12 = __OFADD__(v61, v63);
        LODWORD(v60) = v61 + v63;
        if ( v12 || __CFSHR__(HIDWORD(v60), v62) + (SHIDWORD(v60) >> v62) )
          return 0;
LABEL_66:
        a3[1] = a1[13] + v65 + v60;
        a2 += 2;
        a3 += 2;
        --a4;
      }
      while ( a4 );
      return 1;
    case 1:
    case 9:
      goto LABEL_2;
    case 2:
    case 4:
    case 5:
    case 6:
    case 0xA:
    case 0xC:
    case 0xD:
    case 0xE:
      return 0;
    case 3:
      v34 = a4;
      v35 = a1[13];
      v36 = a1[12];
      do
      {
        v37 = *a2;
        v38 = a2 + 1;
        *a3 = v36 + ((v37 + 8) >> 4);
        v39 = a3 + 1;
        v40 = *v38;
        a2 = v38 + 1;
        *v39 = v35 + ((v40 + 8) >> 4);
        a3 = v39 + 1;
        --v34;
      }
      while ( v34 );
      return 1;
    case 7:
      v41 = a4;
      v42 = a1[13];
      v43 = a1[12];
      do
      {
        v44 = *a2;
        v45 = a2 + 1;
        *a3 = v43 + ((v44 + 8) >> 4);
        v46 = a3 + 1;
        v47 = *v45;
        a2 = v45 + 1;
        *v46 = v42 + ((8 - v47) >> 4);
        a3 = v46 + 1;
        --v41;
      }
      while ( v41 );
      return 1;
    case 0xB:
      v20 = a4;
      v21 = a1[13];
      v22 = a1[12];
      do
      {
        v23 = *a2;
        v24 = a2 + 1;
        *a3 = v22 + 16 * v23;
        v25 = a3 + 1;
        v26 = *v24;
        a2 = v24 + 1;
        *v25 = v21 + 16 * v26;
        a3 = v25 + 1;
        --v20;
      }
      while ( v20 );
      return 1;
    case 0xF:
      v27 = a4;
      v28 = a1[13];
      v29 = a1[12];
      do
      {
        v30 = *a2;
        v31 = a2 + 1;
        *a3 = v29 + 16 * v30;
        v32 = a3 + 1;
        v33 = *v31;
        a2 = v31 + 1;
        *v32 = v28 - 16 * v33;
        a3 = v32 + 1;
        --v27;
      }
      while ( v27 );
      return 1;
  }
  while ( 1 )
  {
LABEL_2:
    v6 = *a2;
    v7 = a2 + 1;
    v8 = v6 * (__int64)*a1;
    v9 = __CFADD__(-a1[1], 32);
    v10 = 32 - a1[1];
    if ( !v10 )
      goto LABEL_10;
    if ( (unsigned int)-a1[1] < 0xFFFFFFE0 )
    {
      if ( 32 - a1[1] < 0 )
        return 0;
      if ( v10 >= 0x3F )
      {
        LODWORD(v8) = 0;
        goto LABEL_10;
      }
      v8 >>= 31;
      v9 = v10 < 0x1F;
      LOBYTE(v10) = v10 - 31;
    }
    v11 = (unsigned __int64)v8 >> v10;
    v12 = __OFADD__(v9, v11);
    LODWORD(v8) = v9 + v11;
    if ( v12 || __CFSHR__(HIDWORD(v8), v10) + (SHIDWORD(v8) >> v10) )
      return 0;
LABEL_10:
    *a3 = a1[12] + v8;
    v13 = a3 + 1;
    v14 = *v7;
    a2 = v7 + 1;
    v15 = v14 * (__int64)a1[6];
    v16 = __CFADD__(-a1[7], 32);
    v17 = 32 - a1[7];
    if ( v17 )
    {
      if ( (unsigned int)-a1[7] >= 0xFFFFFFE0 )
        goto LABEL_16;
      if ( 32 - a1[7] < 0 )
        return 0;
      if ( v17 < 0x3F )
      {
        v15 >>= 31;
        v16 = v17 < 0x1F;
        LOBYTE(v17) = v17 - 31;
LABEL_16:
        v18 = (unsigned __int64)v15 >> v17;
        v12 = __OFADD__(v16, v18);
        LODWORD(v15) = v16 + v18;
        if ( v12 || __CFSHR__(HIDWORD(v15), v17) + (SHIDWORD(v15) >> v17) )
          return 0;
        goto LABEL_18;
      }
      LODWORD(v15) = 0;
    }
LABEL_18:
    *v13 = a1[13] + v15;
    a3 = v13 + 1;
    if ( !--a4 )
      return 1;
  }
}
