/*
 * XREFs of RaUnitBuildSrbForSmartReadData @ 0x1C0046E70
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0048358 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReadData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        int a7,
        char a8)
{
  __int64 v8; // r10
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  char v12; // al
  char v13; // bl
  unsigned int v14; // r10d
  __int64 v15; // rcx
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  char v22; // di
  unsigned int v23; // esi
  unsigned int v24; // ebx
  __int64 v25; // rcx
  unsigned __int64 v26; // r11
  __int64 v27; // r10
  int v28; // ecx
  int v29; // ecx
  __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  char result; // al

  if ( a8 == 1 )
  {
    v8 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v8 + a3 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v8 + a3 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v8 + a3 + 10) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 24) = 322;
    *(_QWORD *)(a3 + 64) = a4;
    *(_DWORD *)(a3 + 60) = 512;
    *(_QWORD *)(a3 + 80) = a2;
    v9 = *(_DWORD *)(a1 + 1264);
    v10 = *(unsigned int *)(a3 + 120);
    *(_DWORD *)(a3 + 40) = v9;
    v11 = a3 + v10;
    *(_DWORD *)v11 = 64;
    *(_DWORD *)(v11 + 4) = 32;
    *(_BYTE *)(v11 + 9) = -1;
    *(_QWORD *)(v11 + 16) = a6;
    v12 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 12) = 322;
    *(_QWORD *)(a3 + 24) = a4;
    *(_DWORD *)(a3 + 16) = 512;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1264);
    *(_QWORD *)(a3 + 32) = a6;
    v12 = 0;
    *(_BYTE *)(a3 + 11) = -1;
  }
  if ( v12 == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v13 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v14 = 0;
      if ( *(_DWORD *)(a3 + 56) )
      {
        while ( 1 )
        {
          v15 = *(unsigned int *)(a3 + 4LL * v14 + 120);
          if ( (unsigned int)v15 >= 0x80 )
          {
            v16 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v15 < (unsigned int)v16 )
              break;
          }
LABEL_19:
          if ( ++v14 >= *(_DWORD *)(a3 + 56) )
            goto LABEL_20;
        }
        v17 = (unsigned int)v15;
        v18 = *(_DWORD *)(v15 + a3) - 64;
        if ( v18 )
        {
          v19 = v18 - 1;
          if ( v19 )
          {
            if ( v19 == 1 && v17 + 40 <= v16 )
              goto LABEL_20;
            goto LABEL_18;
          }
          v20 = v17 + 56;
        }
        else
        {
          v20 = v17 + 40;
        }
        if ( v20 <= v16 )
        {
          *(_BYTE *)(v17 + a3 + 10) = 16;
          v13 = 1;
        }
LABEL_18:
        if ( v13 )
          goto LABEL_20;
        goto LABEL_19;
      }
    }
LABEL_20:
    v12 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_WORD *)(a3 + 9) = 4128;
  }
  if ( v12 != 40 )
  {
    v21 = a3 + 72;
    goto LABEL_43;
  }
  v21 = 0LL;
  v22 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v23 = *(_DWORD *)(a3 + 56);
    v24 = 0;
    if ( v23 )
    {
      while ( 1 )
      {
        v25 = *(unsigned int *)(a3 + 4LL * v24 + 120);
        if ( (unsigned int)v25 >= 0x80 )
        {
          v26 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v25 < (unsigned int)v26 )
            break;
        }
LABEL_40:
        if ( ++v24 >= v23 )
          goto LABEL_43;
      }
      v27 = (unsigned int)v25;
      v28 = *(_DWORD *)(v25 + a3) - 64;
      if ( v28 )
      {
        v29 = v28 - 1;
        if ( v29 )
        {
          if ( v29 == 1 && v27 + 40 <= v26 )
          {
            v30 = v27 + a3 + 32;
            if ( !*(_DWORD *)(v27 + a3 + 12) )
              v30 = v21;
            v21 = v30;
            goto LABEL_43;
          }
          goto LABEL_39;
        }
        v31 = v27 + 56;
      }
      else
      {
        v31 = v27 + 40;
      }
      if ( v31 <= v26 )
      {
        v22 = 1;
        if ( !*(_BYTE *)(v27 + a3 + 10) )
          goto LABEL_43;
        v21 = v27 + a3 + 24;
      }
LABEL_39:
      if ( v22 )
        goto LABEL_43;
      goto LABEL_40;
    }
  }
LABEL_43:
  *(_WORD *)(v21 + 1) = 0;
  result = *(_BYTE *)(v21 + 2) & 0x10 | 0xAF;
  *(_BYTE *)(v21 + 2) = result;
  *(_WORD *)v21 = 2181;
  *(_DWORD *)(v21 + 3) = 53248;
  *(_DWORD *)(v21 + 7) = 1325400064;
  *(_DWORD *)(v21 + 11) = -1342127616;
  *(_BYTE *)(v21 + 15) = 0;
  return result;
}
