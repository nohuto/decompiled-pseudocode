/*
 * XREFs of _wil_details_StagingConfig_Load@20 @ 0xF2EEA
 * Callers:
 *     _wil_StagingConfig_QueryFeatureState@20 @ 0x27A36C (_wil_StagingConfig_QueryFeatureState@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall wil_details_StagingConfig_Load(_BYTE *this, int a2, int a3, int a4)
{
  char *v4; // esi
  _BYTE *v5; // edi
  SIZE_T v6; // ebx
  int v7; // eax
  char *PoolWithTag; // eax
  unsigned int v9; // edx
  char *v11; // ecx
  char *v12; // ecx
  int v13; // [esp+Ch] [ebp-30h]
  int v14; // [esp+10h] [ebp-2Ch] BYREF
  int v15; // [esp+14h] [ebp-28h]
  PVOID P; // [esp+18h] [ebp-24h]
  int v17; // [esp+1Ch] [ebp-20h] BYREF
  unsigned int v18; // [esp+20h] [ebp-1Ch] BYREF
  _DWORD v19[2]; // [esp+24h] [ebp-18h] BYREF
  int v20; // [esp+2Ch] [ebp-10h] BYREF
  int v21; // [esp+30h] [ebp-Ch]

  v4 = 0;
  v17 = a3;
  v5 = this;
  v13 = 0;
  v21 = (int)this;
  memset(this, 0, 0x34u);
  v19[0] = -1547928459;
  v19[1] = 1099564858;
  P = 0;
  v6 = a3 != 0 ? 0xC8 : 0;
  v18 = v6;
  v7 = ZwQueryWnfStateData(v19, 0, 0, v5 + 8, a3, &v18);
  v15 = v7;
  if ( !v7 )
  {
    if ( !v17 )
      goto LABEL_4;
    v4 = (char *)v17;
  }
  while ( v7 == -1073741789 )
  {
LABEL_4:
    if ( v6 < 0xC8 )
      v6 = 200;
    if ( v6 < v18 )
      v6 = v18;
    if ( v6 < 0x10 )
      v6 = 16;
    if ( P )
      ExFreePoolWithTag(P, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v6, 0x4C4957u);
    v4 = PoolWithTag;
    P = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    v18 = v6;
    v7 = ZwQueryWnfStateData(v19, 0, 0, v5 + 8, PoolWithTag, &v18);
    v15 = v7;
  }
  if ( v7 || !v4 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0x4C4957u);
    return v15;
  }
  else
  {
    v9 = v18;
    if ( v18 > 4 )
      v5[12] = *v4;
    if ( v9 >= 0x10
      && v5[12] == 2
      && (v15 = *((unsigned __int16 *)v4 + 1), (unsigned __int16)v15 >= 0x10u)
      && (v14 = *((unsigned __int16 *)v4 + 2),
          v9 >= (unsigned __int16)v15 + 16 * *((unsigned __int16 *)v4 + 3) + 12 * (unsigned int)(unsigned __int16)v14) )
    {
      v17 = 0;
      if ( (_WORD)v14 )
      {
        v20 = -1547927435;
        v21 = 1099564858;
        v14 = 0;
        ZwQueryWnfStateData(&v20, 0, 0, &v17, 0, &v14);
        v9 = v18;
        v13 = v17;
      }
      *((_DWORD *)v5 + 5) = v4;
      *((_DWORD *)v5 + 6) = v4 + 16;
      *((_DWORD *)v5 + 7) = &v4[12 * *((unsigned __int16 *)v4 + 2) + 16];
      *((_DWORD *)v5 + 8) = v13 != 0;
      if ( *v4 == 2 && (unsigned __int8)v4[1] < 2u )
      {
        v9 = *((unsigned __int16 *)v4 + 1) + 16 * *((unsigned __int16 *)v4 + 3) + 12 * *((unsigned __int16 *)v4 + 2);
        *((_DWORD *)v5 + 4) = 1;
      }
    }
    else
    {
      v18 = 16;
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *((_DWORD *)v4 + 2) = 0;
      *((_DWORD *)v4 + 3) = 0;
      v5 = (_BYTE *)v21;
      *((_WORD *)v4 + 1) = 16;
      *(_WORD *)v4 = 514;
      v9 = v18;
      *((_DWORD *)v5 + 5) = v4;
      v11 = &v4[*((unsigned __int16 *)v4 + 1)];
      *((_DWORD *)v5 + 6) = v11;
      *((_DWORD *)v5 + 7) = &v11[12 * *((unsigned __int16 *)v4 + 2)];
    }
    v12 = (char *)P;
    *((_DWORD *)v5 + 9) = v4;
    *((_DWORD *)v5 + 10) = v9;
    if ( !v12 )
      v6 = 200;
    *((_DWORD *)v5 + 11) = v6;
    *((_DWORD *)v5 + 12) = v4 == v12;
    return 0;
  }
}
