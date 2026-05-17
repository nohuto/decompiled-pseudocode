/*
 * XREFs of _RtlGenerate8dot3Name@16 @ 0x4B362910
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _GetNextWchar@16 @ 0x4B36280C (_GetNextWchar@16.c)
 *     _RtlComputeLfnChecksum@4 @ 0x4B3628B7 (_RtlComputeLfnChecksum@4.c)
 */

int __stdcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, int a3, int a4)
{
  unsigned __int16 *v4; // edx
  int v5; // esi
  unsigned int v6; // esi
  _WORD *v7; // eax
  unsigned __int16 NextWchar; // ax
  bool v9; // zf
  unsigned int v10; // edi
  unsigned int v11; // ebx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // cx
  int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // eax
  unsigned __int16 v17; // di
  __int16 v18; // cx
  unsigned int v19; // eax
  unsigned int v20; // edi
  unsigned __int16 v21; // ax
  unsigned __int16 v22; // cx
  int v23; // eax
  unsigned int v24; // ecx
  int v25; // eax
  BOOL v26; // ecx
  int v27; // eax
  BOOL v28; // eax
  unsigned __int16 v29; // ax
  unsigned int v30; // ecx
  unsigned int v31; // edi
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // edi
  _WORD *v35; // ecx
  unsigned __int16 v36; // bx
  char v37; // al
  char *v38; // ebx
  unsigned int v39; // edi
  unsigned int v40; // edx
  unsigned __int8 v41; // al
  unsigned int v42; // ebx
  unsigned __int16 v43; // cx
  unsigned __int16 v44; // ax
  unsigned int v45; // ecx
  int v46; // eax
  unsigned __int8 v47; // cl
  unsigned int v48; // edi
  unsigned __int16 *v49; // edx
  int v50; // eax
  int v51; // eax
  unsigned int v53; // [esp+Ch] [ebp-40h]
  unsigned __int16 Src; // [esp+1Ch] [ebp-30h]
  _WORD *Srca; // [esp+1Ch] [ebp-30h]
  unsigned int v56; // [esp+20h] [ebp-2Ch] BYREF
  int v57; // [esp+24h] [ebp-28h] BYREF
  unsigned __int16 *v58; // [esp+28h] [ebp-24h]
  char v59; // [esp+2Fh] [ebp-1Dh]
  unsigned int v60; // [esp+30h] [ebp-1Ch]
  unsigned __int8 v61; // [esp+36h] [ebp-16h]
  char v62; // [esp+37h] [ebp-15h]
  char v63; // [esp+46h] [ebp-6h] BYREF
  int v64; // [esp+48h] [ebp-4h] BYREF

  v4 = a1;
  v5 = a3;
  v58 = a1;
  v59 = 1;
  v53 = 0;
  if ( !a2 || (v62 = 1, !NlsMbOemCodePageTag) )
    v62 = 0;
  if ( !*(_BYTE *)(a3 + 3) )
  {
    v6 = -1;
    Src = *a1;
    v57 = -1;
    v56 = 0;
    if ( !Src || (v7 = (_WORD *)*((_DWORD *)a1 + 1), LOBYTE(v60) = 1, *v7 != 46) )
      LOBYTE(v60) = 0;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v56, v60, a2);
      if ( !NextWchar )
        break;
      LOBYTE(v60) = 0;
      if ( NextWchar == 46 )
      {
        v6 = v56;
        v57 = v56;
      }
    }
    v9 = v6 == Src >> 1;
    v5 = a3;
    if ( v9 )
      v57 = -1;
    v56 = 0;
    v10 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    v61 = 0;
    v11 = v57;
    while ( 1 )
    {
      v12 = GetNextWchar(v58, &v56, 1, a2);
      v13 = v12;
      if ( !v12 || v56 >= v11 || v61 >= 6u )
        break;
      if ( v62 )
      {
        if ( v12 > 0x7Fu && (v5 = a3, *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v12 + 1)) )
          v14 = 2;
        else
          v14 = 1;
        v10 += v14;
        if ( v10 > 6 )
          break;
      }
      *(_WORD *)(v5 + 2 * v61 + 4) = v13;
      v61 = ++*(_BYTE *)(v5 + 3);
    }
    if ( !v62 )
      v10 = v61;
    if ( v10 <= 2 )
    {
      LOWORD(v16) = RtlComputeLfnChecksum(v58);
      *(_WORD *)v5 = v16;
      v15 = 0;
      v16 = (unsigned __int16)v16;
      v60 = v16;
      v17 = v16;
      while ( 1 )
      {
        v17 >>= 4;
        LOWORD(v60) = v17;
        v18 = (v16 & 0xF) + ((v16 & 0xF) > 9 ? 55 : 48);
        v19 = v15 + *(unsigned __int8 *)(v5 + 3);
        ++v15;
        *(_WORD *)(v5 + 2 * v19 + 4) = v18;
        if ( v15 >= 4 )
          break;
        LOBYTE(v16) = v60;
      }
      *(_BYTE *)(v5 + 3) += 4;
      *(_BYTE *)(v5 + 2) = 1;
    }
    if ( v57 == -1 )
    {
      *(_DWORD *)(v5 + 20) = 0;
    }
    else
    {
      *(_WORD *)(v5 + 24) = 46;
      v60 = 1;
      v20 = 1;
      for ( *(_DWORD *)(v5 + 20) = 1; ; v20 = *(_DWORD *)(v5 + 20) )
      {
        v21 = GetNextWchar(v58, (unsigned int *)&v57, 1, a2);
        v22 = v21;
        if ( !v21 )
          break;
        if ( v20 >= 4
          || v62
          && (v21 <= 0x7Fu || !*(_BYTE *)(NlsUnicodeToMbOemData + 2 * v21 + 1) ? (v23 = 1) : (v23 = 2),
              v60 += v23,
              v60 > 4) )
        {
          *(_WORD *)(v5 + 2 * v20 + 22) = 126;
          break;
        }
        *(_WORD *)(v5 + 2 * v20 + 24) = v22;
        ++*(_DWORD *)(v5 + 20);
      }
    }
    v4 = v58;
  }
  v24 = *(_DWORD *)(v5 + 32) + 1;
  *(_DWORD *)(v5 + 32) = v24;
  if ( v24 > 4 && !*(_BYTE *)(v5 + 2) )
  {
    if ( v62 )
    {
      v25 = *(unsigned __int16 *)(v5 + 4);
      v26 = (unsigned __int16)v25 > 0x7Fu && *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v25 + 1);
      v27 = *(unsigned __int16 *)(v5 + 6);
      v28 = 0;
      if ( (unsigned __int16)v27 > 0x7Fu )
      {
        v4 = v58;
        if ( *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v27 + 1) )
          v28 = 1;
      }
      v57 = v26 || v28;
    }
    else
    {
      v57 = 0;
    }
    v29 = RtlComputeLfnChecksum(v4);
    v30 = v57;
    v31 = 6 - v57;
    v32 = v29;
    *(_WORD *)v5 = v29;
    v33 = 2 - v30;
    v60 = v32;
    if ( 2 - v30 < v31 )
    {
      v34 = v31 - v33;
      v35 = (_WORD *)(v5 + 4 + 2 * v33);
      v36 = v32;
      while ( 1 )
      {
        v36 >>= 4;
        LOWORD(v60) = v36;
        *v35++ = (v32 & 0xF) + ((v32 & 0xF) > 9 ? 55 : 48);
        if ( !--v34 )
          break;
        LOBYTE(v32) = v60;
      }
      v5 = a3;
      LOBYTE(v30) = v57;
    }
    v37 = 6 - v30;
    v24 = 1;
    *(_BYTE *)(v5 + 3) = v37;
    *(_DWORD *)(v5 + 32) = 1;
    *(_BYTE *)(v5 + 2) = 1;
  }
  v38 = &v63;
  v39 = 1;
  do
  {
    if ( !v24 )
      break;
    v40 = v24 % 0xA + 48;
    v24 /= 0xAu;
    ++v39;
    *(_WORD *)v38 = v40;
    v38 -= 2;
    v59 = (_WORD)v40 != 57 ? 0 : v59;
  }
  while ( v39 <= 7 );
  v60 = v39;
  Srca = (_WORD *)&v64 - v39;
  *Srca = 126;
  v41 = *(_BYTE *)(v5 + 3);
  v42 = 0;
  if ( v41 && v41 <= 0xCu )
  {
    memcpy(*(void **)(a4 + 4), (const void *)(v5 + 4), 2 * v41);
    v43 = 2 * *(unsigned __int8 *)(v5 + 3);
  }
  else
  {
    v43 = 0;
  }
  *(_WORD *)a4 = v43;
  memcpy((void *)(*(_DWORD *)(a4 + 4) + 2 * (v43 >> 1)), Srca, 2 * v39);
  v44 = *(_WORD *)a4 + 2 * v39;
  v45 = v44;
  *(_WORD *)a4 = v44;
  v46 = *(_DWORD *)(v5 + 20);
  if ( v46 )
  {
    memcpy((void *)(*(_DWORD *)(a4 + 4) + 2 * (v45 >> 1)), (const void *)(v5 + 24), 2 * v46);
    *(_WORD *)a4 += 2 * *(_WORD *)(v5 + 20);
  }
  if ( !v59 )
    return 0;
  v47 = *(_BYTE *)(v5 + 3);
  if ( v62 )
  {
    v48 = 0;
    if ( v47 )
    {
      v49 = (unsigned __int16 *)(v5 + 4);
      do
      {
        v50 = *v49;
        if ( (unsigned __int16)v50 > 0x7Fu && (v42 = v53, *(_BYTE *)(NlsUnicodeToMbOemData + 2 * v50 + 1)) )
          v51 = 2;
        else
          v51 = 1;
        v48 += v51;
        if ( v48 > 7 - v60 )
          break;
        ++v42;
        ++v49;
        v53 = v42;
      }
      while ( v42 < v47 );
      v5 = a3;
    }
  }
  else
  {
    LOBYTE(v42) = v47 - 1;
  }
  *(_BYTE *)(v5 + 3) = v42;
  if ( (_BYTE)v42 )
    return 0;
  else
    return -1073740761;
}
