/*
 * XREFs of RaUnitBuildSrbForSmartReturnStatus @ 0x1C00462A8
 * Callers:
 *     RaUnitSmartDataIoctl @ 0x1C0047548 (RaUnitSmartDataIoctl.c)
 * Callees:
 *     <none>
 */

char __fastcall RaUnitBuildSrbForSmartReturnStatus(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // r10
  __int64 v7; // rax
  char v8; // al
  char v9; // bl
  unsigned int v10; // r10d
  __int64 v11; // rcx
  unsigned __int64 v12; // r11
  __int64 v13; // rdx
  int v14; // ecx
  int v15; // ecx
  unsigned __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // di
  unsigned int v19; // esi
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned __int64 v22; // r11
  __int64 v23; // r10
  int v24; // ecx
  int v25; // ecx
  __int64 v26; // rcx
  unsigned __int64 v27; // rcx
  char result; // al

  if ( a6 == 1 )
  {
    v6 = *(unsigned int *)(a3 + 52);
    *(_DWORD *)(a3 + 20) = 0;
    *(_BYTE *)(v6 + a3 + 8) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(v6 + a3 + 9) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(v6 + a3 + 10) = *(_BYTE *)(a1 + 98);
    *(_DWORD *)(a3 + 24) = 258;
    *(_QWORD *)(a3 + 64) = 0LL;
    *(_DWORD *)(a3 + 60) = 0;
    *(_QWORD *)(a3 + 80) = a2;
    *(_DWORD *)(a3 + 40) = *(_DWORD *)(a1 + 1264);
    v7 = a3 + *(unsigned int *)(a3 + 120);
    *(_DWORD *)v7 = 64;
    *(_DWORD *)(v7 + 4) = 32;
    *(_BYTE *)(v7 + 9) = -1;
    *(_QWORD *)(v7 + 16) = a4;
    v8 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_BYTE *)(a3 + 2) = 0;
    *(_WORD *)a3 = 88;
    *(_BYTE *)(a3 + 5) = *(_BYTE *)(a1 + 96);
    *(_BYTE *)(a3 + 6) = *(_BYTE *)(a1 + 97);
    *(_BYTE *)(a3 + 7) = *(_BYTE *)(a1 + 98);
    *(_QWORD *)(a3 + 12) = 258LL;
    *(_QWORD *)(a3 + 24) = 0LL;
    *(_QWORD *)(a3 + 48) = a2;
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(a1 + 1264);
    v8 = 0;
    *(_BYTE *)(a3 + 11) = -1;
    *(_QWORD *)(a3 + 32) = a4;
  }
  if ( v8 == 40 )
  {
    *(_WORD *)(a3 + 38) = 32;
    v9 = 0;
    if ( !*(_DWORD *)(a3 + 20) )
    {
      v10 = 0;
      if ( *(_DWORD *)(a3 + 56) )
      {
        while ( 1 )
        {
          v11 = *(unsigned int *)(a3 + 4LL * v10 + 120);
          if ( (unsigned int)v11 >= 0x80 )
          {
            v12 = *(unsigned int *)(a3 + 16);
            if ( (unsigned int)v11 < (unsigned int)v12 )
              break;
          }
LABEL_19:
          if ( ++v10 >= *(_DWORD *)(a3 + 56) )
            goto LABEL_20;
        }
        v13 = (unsigned int)v11;
        v14 = *(_DWORD *)(v11 + a3) - 64;
        if ( v14 )
        {
          v15 = v14 - 1;
          if ( v15 )
          {
            if ( v15 == 1 && v13 + 40 <= v12 )
              goto LABEL_20;
            goto LABEL_18;
          }
          v16 = v13 + 56;
        }
        else
        {
          v16 = v13 + 40;
        }
        if ( v16 <= v12 )
        {
          *(_BYTE *)(v13 + a3 + 10) = 16;
          v9 = 1;
        }
LABEL_18:
        if ( v9 )
          goto LABEL_20;
        goto LABEL_19;
      }
    }
LABEL_20:
    v8 = *(_BYTE *)(a3 + 2);
  }
  else
  {
    *(_WORD *)(a3 + 9) = 4128;
  }
  if ( v8 != 40 )
  {
    v17 = a3 + 72;
    goto LABEL_43;
  }
  v17 = 0LL;
  v18 = 0;
  if ( !*(_DWORD *)(a3 + 20) )
  {
    v19 = *(_DWORD *)(a3 + 56);
    v20 = 0;
    if ( v19 )
    {
      while ( 1 )
      {
        v21 = *(unsigned int *)(a3 + 4LL * v20 + 120);
        if ( (unsigned int)v21 >= 0x80 )
        {
          v22 = *(unsigned int *)(a3 + 16);
          if ( (unsigned int)v21 < (unsigned int)v22 )
            break;
        }
LABEL_40:
        if ( ++v20 >= v19 )
          goto LABEL_43;
      }
      v23 = (unsigned int)v21;
      v24 = *(_DWORD *)(v21 + a3) - 64;
      if ( v24 )
      {
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 == 1 && v23 + 40 <= v22 )
          {
            v26 = v23 + a3 + 32;
            if ( !*(_DWORD *)(v23 + a3 + 12) )
              v26 = v17;
            v17 = v26;
            goto LABEL_43;
          }
          goto LABEL_39;
        }
        v27 = v23 + 56;
      }
      else
      {
        v27 = v23 + 40;
      }
      if ( v27 <= v22 )
      {
        v18 = 1;
        if ( !*(_BYTE *)(v23 + a3 + 10) )
          goto LABEL_43;
        v17 = v23 + a3 + 24;
      }
LABEL_39:
      if ( v18 )
        goto LABEL_43;
      goto LABEL_40;
    }
  }
LABEL_43:
  *(_WORD *)(v17 + 1) = 0;
  result = *(_BYTE *)(v17 + 2) & 0x10 | 0xA4;
  *(_BYTE *)(v17 + 2) = result;
  *(_WORD *)v17 = 1669;
  *(_DWORD *)(v17 + 3) = 55808;
  *(_DWORD *)(v17 + 7) = 1325400064;
  *(_DWORD *)(v17 + 11) = -1342127616;
  *(_BYTE *)(v17 + 15) = 0;
  return result;
}
