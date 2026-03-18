/*
 * XREFs of _bCvtVts@16 @ 0xEEAF4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall bCvtVts(int *a1, int *a2, _DWORD *a3, int a4)
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
  int v21; // eax
  int *v22; // esi
  _DWORD *v23; // edi
  int v24; // eax
  __int64 v25; // rax
  bool v26; // cf
  unsigned int v27; // ecx
  int v28; // eax
  __int64 v29; // rax
  bool v30; // cf
  unsigned int v31; // ecx
  int v32; // eax
  __int64 v33; // rax
  bool v34; // cf
  unsigned int v35; // ecx
  int v36; // eax
  __int64 v37; // rax
  bool v38; // cf
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // [esp+Ch] [ebp-4h]
  int v42; // [esp+Ch] [ebp-4h]

  switch ( a1[14] & 7 )
  {
    case 0:
      do
      {
        v25 = *a2 * (__int64)*a1;
        v26 = __CFADD__(-a1[1], 32);
        v27 = 32 - a1[1];
        if ( !v27 )
          goto LABEL_33;
        if ( (unsigned int)-a1[1] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[1] < 0 )
            return 0;
          if ( v27 >= 0x3F )
          {
            LODWORD(v25) = 0;
            goto LABEL_33;
          }
          v25 >>= 31;
          v26 = v27 < 0x1F;
          LOBYTE(v27) = v27 - 31;
        }
        v28 = (unsigned __int64)v25 >> v27;
        v12 = __OFADD__(v26, v28);
        LODWORD(v25) = v26 + v28;
        if ( v12 || __CFSHR__(HIDWORD(v25), v27) + (SHIDWORD(v25) >> v27) )
          return 0;
LABEL_33:
        v41 = v25;
        v29 = a2[1] * (__int64)a1[4];
        v30 = __CFADD__(-a1[5], 32);
        v31 = 32 - a1[5];
        if ( !v31 )
          goto LABEL_41;
        if ( (unsigned int)-a1[5] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[5] < 0 )
            return 0;
          if ( v31 >= 0x3F )
          {
            LODWORD(v29) = 0;
            goto LABEL_41;
          }
          v29 >>= 31;
          v30 = v31 < 0x1F;
          LOBYTE(v31) = v31 - 31;
        }
        v32 = (unsigned __int64)v29 >> v31;
        v12 = __OFADD__(v30, v32);
        LODWORD(v29) = v30 + v32;
        if ( v12 || __CFSHR__(HIDWORD(v29), v31) + (SHIDWORD(v29) >> v31) )
          return 0;
LABEL_41:
        HIDWORD(v29) = *a2;
        *a3 = v41 + v29;
        v33 = SHIDWORD(v29) * (__int64)a1[2];
        v34 = __CFADD__(-a1[3], 32);
        v35 = 32 - a1[3];
        if ( !v35 )
          goto LABEL_49;
        if ( (unsigned int)-a1[3] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[3] < 0 )
            return 0;
          if ( v35 >= 0x3F )
          {
            LODWORD(v33) = 0;
            goto LABEL_49;
          }
          v33 >>= 31;
          v34 = v35 < 0x1F;
          LOBYTE(v35) = v35 - 31;
        }
        v36 = (unsigned __int64)v33 >> v35;
        v12 = __OFADD__(v34, v36);
        LODWORD(v33) = v34 + v36;
        if ( v12 || __CFSHR__(HIDWORD(v33), v35) + (SHIDWORD(v33) >> v35) )
          return 0;
LABEL_49:
        v42 = v33;
        v37 = a2[1] * (__int64)a1[6];
        v38 = __CFADD__(-a1[7], 32);
        v39 = 32 - a1[7];
        if ( !v39 )
          goto LABEL_57;
        if ( (unsigned int)-a1[7] < 0xFFFFFFE0 )
        {
          if ( 32 - a1[7] < 0 )
            return 0;
          if ( v39 >= 0x3F )
          {
            LODWORD(v37) = 0;
            goto LABEL_57;
          }
          v37 >>= 31;
          v38 = v39 < 0x1F;
          LOBYTE(v39) = v39 - 31;
        }
        v40 = (unsigned __int64)v37 >> v39;
        v12 = __OFADD__(v38, v40);
        LODWORD(v37) = v38 + v40;
        if ( v12 || __CFSHR__(HIDWORD(v37), v39) + (SHIDWORD(v37) >> v39) )
          return 0;
LABEL_57:
        a3[1] = v42 + v37;
        a2 += 2;
        a3 += 2;
        --a4;
      }
      while ( a4 );
      return 1;
    case 1:
      goto LABEL_2;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return 0;
    case 7:
      v20 = a4;
      do
      {
        v21 = *a2;
        v22 = a2 + 1;
        *a3 = 16 * v21;
        v23 = a3 + 1;
        v24 = *v22;
        a2 = v22 + 1;
        *v23 = -16 * v24;
        a3 = v23 + 1;
        --v20;
      }
      while ( v20 );
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
    *a3 = v8;
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
    *v13 = v15;
    a3 = v13 + 1;
    if ( !--a4 )
      return 1;
  }
}
