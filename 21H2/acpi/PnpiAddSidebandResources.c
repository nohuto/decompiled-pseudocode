/*
 * XREFs of PnpiAddSidebandResources @ 0x1C00B30D0
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BEAC (PnpBiosUpdateResourceListWithSidebandResources.c)
 * Callees:
 *     memcmp @ 0x1C00320A0 (memcmp.c)
 *     memmove @ 0x1C00321C0 (memmove.c)
 *     PnpiValidateSidebandResources @ 0x1C00B453C (PnpiValidateSidebandResources.c)
 */

__int64 __fastcall PnpiAddSidebandResources(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int *a6)
{
  unsigned int v6; // r10d
  unsigned int v7; // ebx
  unsigned int *v8; // r15
  unsigned int *v9; // r13
  __int64 v10; // rax
  __int64 v11; // r11
  unsigned int v12; // ebp
  __int64 v13; // rsi
  unsigned int v14; // edi
  unsigned int v15; // r8d
  unsigned int *v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // r14
  unsigned int v20; // r12d
  unsigned int v21; // ecx
  unsigned int v22; // edi
  __int64 v23; // xmm0_8
  unsigned int v24; // eax
  unsigned int v25; // r9d
  unsigned int v26; // edx
  __int64 v27; // rcx
  BOOL v28; // ecx
  _DWORD *v29; // r13
  char v30; // r8
  _WORD *v31; // r9
  unsigned int v32; // ebp
  unsigned int v33; // r15d
  bool v34; // r12
  unsigned int v35; // ecx
  bool v36; // zf
  unsigned int v37; // edi
  __int64 v38; // rsi
  unsigned int v39; // edx
  __int64 v40; // r13
  __int64 v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rcx
  unsigned int v44; // ebp
  unsigned int v45; // r12d
  __int64 v46; // rax
  unsigned int v47; // eax
  __int64 v48; // rax
  char i; // [rsp+20h] [rbp-98h]
  unsigned int v50; // [rsp+24h] [rbp-94h]
  int v51; // [rsp+28h] [rbp-90h]
  unsigned int v52; // [rsp+2Ch] [rbp-8Ch]
  unsigned int v53; // [rsp+30h] [rbp-88h]
  int v54; // [rsp+34h] [rbp-84h]
  int v55; // [rsp+38h] [rbp-80h]
  unsigned int v56; // [rsp+3Ch] [rbp-7Ch]
  unsigned int v57; // [rsp+40h] [rbp-78h]
  unsigned int v58; // [rsp+48h] [rbp-70h]
  __int64 v59; // [rsp+50h] [rbp-68h]
  _DWORD *v60; // [rsp+58h] [rbp-60h]
  char *v61; // [rsp+60h] [rbp-58h]

  v6 = *a4;
  v7 = 0;
  v56 = 0;
  v8 = a3;
  v50 = *a4;
  v9 = a4;
  v54 = 0;
  v10 = a2;
  v52 = 0;
  v11 = a1;
  v12 = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0;
  if ( a1 )
  {
    if ( !(unsigned __int8)PnpiValidateSidebandResources(a1, a2, 0LL) )
      return 3221225524LL;
    v11 = a1;
    v15 = 0;
    v10 = a2;
    v6 = v50;
  }
  v17 = a6;
  if ( a6 )
    v18 = *a6;
  else
    v18 = 0;
  v53 = v18;
  if ( v18 >= 0x28 )
  {
    *(_OWORD *)a5 = 0LL;
    *(_OWORD *)(a5 + 16) = 0LL;
    *(_QWORD *)(a5 + 32) = 0LL;
  }
  v19 = v10 + 32;
  v20 = 8;
  v21 = 0;
  v51 = 8;
  v59 = v10 + 32;
  v57 = 0;
  if ( *(_DWORD *)(v10 + 28) )
  {
    while ( 1 )
    {
      if ( v21 )
      {
        v24 = *(_DWORD *)(v19 + 4);
        v19 += v24 <= 1 ? 40LL : 32LL * (v24 - 1) + 40;
        v59 = v19;
      }
      else
      {
        v22 = v14 + 72;
        if ( v6 >= v22 )
        {
          if ( v11 )
          {
            *(_OWORD *)((char *)v8 + v13) = *(_OWORD *)v11;
            *(_OWORD *)((char *)v8 + v13 + 16) = *(_OWORD *)(v11 + 16);
            *(_OWORD *)((char *)v8 + v13 + 32) = *(_OWORD *)(v11 + 32);
            *(_OWORD *)((char *)v8 + v13 + 48) = *(_OWORD *)(v11 + 48);
            v23 = *(_QWORD *)(v11 + 64);
          }
          else
          {
            *(_OWORD *)((char *)v8 + v13) = *(_OWORD *)v10;
            *(_OWORD *)((char *)v8 + v13 + 16) = *(_OWORD *)(v10 + 16);
            *(_OWORD *)((char *)v8 + v13 + 32) = *(_OWORD *)(v10 + 32);
            *(_OWORD *)((char *)v8 + v13 + 48) = *(_OWORD *)(v10 + 48);
            v23 = *(_QWORD *)(v10 + 64);
          }
          *(_QWORD *)((char *)v8 + v13 + 64) = v23;
          v8[7] = 0;
        }
        v14 = v22 - 40;
        v13 += 32LL;
      }
      v25 = *(_DWORD *)(v19 + 4);
      v26 = 0;
      if ( v25 )
        break;
LABEL_29:
      v52 = ++v15;
      if ( v15 <= 1 )
        goto LABEL_39;
      v6 = v50;
LABEL_31:
      v10 = a2;
      v21 = v57 + 1;
      v11 = a1;
      v57 = v21;
      if ( v21 >= *(_DWORD *)(a2 + 28) )
      {
        v17 = a6;
        v9 = a4;
        goto LABEL_33;
      }
    }
    while ( 1 )
    {
      v27 = 32LL * v26;
      if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
        && *(_BYTE *)(v27 + v19 + 9) != 2 )
      {
        break;
      }
      if ( *(_DWORD *)(v27 + v19 + 16) == *(_DWORD *)(v27 + v19 + 20) )
        break;
      if ( ++v26 >= v25 )
      {
        v15 = v52;
        goto LABEL_29;
      }
    }
LABEL_39:
    v28 = 1;
    if ( v11 )
    {
      v29 = (_DWORD *)(v11 + 32);
      v60 = (_DWORD *)(v11 + 32);
      v28 = *(_DWORD *)(v11 + 28) != 0;
    }
    else
    {
      v29 = 0LL;
      v60 = 0LL;
    }
    v6 = v50;
    v58 = v28 + v12;
    v30 = 1;
    for ( i = 1; v12 < v58; v56 = v12 )
    {
      v31 = (_WORD *)((char *)v8 + v13);
      v32 = 40;
      v61 = (char *)v8 + v13;
      if ( v29 )
      {
        v33 = v29[1];
        v34 = 0;
        if ( v33 <= 1 )
          v34 = v33 == 0;
        else
          v32 = 32 * v33 + 8;
        if ( v6 >= v14 + v32 )
        {
          memmove(v31, v29, v32);
          v31 = v61;
          v30 = i;
          v6 = v50;
          *((_DWORD *)v61 + 1) = 0;
          v33 = v29[1];
        }
        v35 = v32 - 32;
        v29 = (_DWORD *)((char *)v29 + v32);
        v36 = !v34;
        v60 = v29;
        v20 = v51;
        if ( v36 )
          v35 = v32;
      }
      else
      {
        if ( v6 >= v14 + 40 )
        {
          *v31 = *(_WORD *)v19;
          v31[1] = *(_WORD *)(v19 + 2);
          *((_DWORD *)v31 + 1) = 0;
        }
        v33 = 0;
        v35 = 8;
      }
      v37 = v35 + v14;
      v38 = v35 + v13;
      v55 = 0;
      v39 = 0;
      if ( *(_DWORD *)(v19 + 4) )
      {
        do
        {
          v40 = v19 + 32LL * v39;
          if ( ((AcpiGlobalFlags & 2) != 0 || *(_BYTE *)(*((_QWORD *)AcpiInformation + 1) + 8LL) >= 5u)
            && *(_BYTE *)(v40 + 9) != 2
            || *(_DWORD *)(v40 + 16) == *(_DWORD *)(v40 + 20) )
          {
            v37 += 32;
            if ( v6 >= v37 )
            {
              v41 = 16LL * v33;
              *(_OWORD *)&v31[v41 + 4] = *(_OWORD *)(v40 + 8);
              *(_OWORD *)&v31[v41 + 12] = *(_OWORD *)(v40 + 24);
            }
            v38 += 32LL;
            ++v54;
            ++v33;
            if ( v30 )
            {
              v42 = v53;
              if ( v53 < 0x28 )
              {
                v20 += 32;
                v51 = v20;
              }
              else
              {
                v43 = a5;
                v44 = 0;
                v45 = *(_DWORD *)(a5 + 4);
                if ( v45 )
                {
                  do
                  {
                    if ( !memcmp((const void *)(32LL * v44 + a5 + 8), (const void *)(v40 + 8), 0x20uLL) )
                      break;
                    ++v44;
                  }
                  while ( v44 < v45 );
                  v19 = v59;
                  v39 = v55;
                  v43 = a5;
                  v30 = i;
                  v6 = v50;
                  v42 = v53;
                }
                v36 = v44 == v45;
                v20 = v51;
                if ( v36 )
                {
                  v20 = v51 + 32;
                  v51 = v20;
                  if ( v42 >= v20 )
                  {
                    v46 = 32LL * v44;
                    *(_OWORD *)(v46 + v43 + 8) = *(_OWORD *)(v40 + 8);
                    *(_OWORD *)(v46 + v43 + 24) = *(_OWORD *)(v40 + 24);
                    ++*(_DWORD *)(v43 + 4);
                  }
                }
              }
            }
          }
          v31 = v61;
          v55 = ++v39;
        }
        while ( v39 < *(_DWORD *)(v19 + 4) );
        v29 = v60;
      }
      v47 = v37 + 32;
      if ( v33 )
        v47 = v37;
      v14 = v47;
      v48 = v38 + 32;
      if ( v33 )
        v48 = v38;
      v13 = v48;
      if ( v6 >= v14 )
        *((_DWORD *)v61 + 1) = v33;
      v8 = a3;
      v12 = v56 + 1;
      v30 = 0;
      i = 0;
    }
    v15 = v52;
    goto LABEL_31;
  }
LABEL_33:
  if ( v17 )
  {
    if ( v20 < 0x28 )
      v20 = 40;
    *v17 = v20;
  }
  if ( v54 )
  {
    if ( v14 <= v6 )
    {
      *v8 = v14;
      v8[7] = v12;
    }
    else
    {
      *v9 = v14;
      return (unsigned int)-1073741789;
    }
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return v7;
}
