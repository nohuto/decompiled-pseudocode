/*
 * XREFs of _RtlpCreateUserProcess@24 @ 0x4B342119
 * Callers:
 *     _RtlCloneUserProcess@20 @ 0x4B335760 (_RtlCloneUserProcess@20.c)
 *     _RtlCreateUserProcessEx@20 @ 0x4B33FC60 (_RtlCreateUserProcessEx@20.c)
 * Callees:
 *     _NtCreateUserProcess@44 @ 0x4B2F3600 (_NtCreateUserProcess@44.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlpCreateUserProcess(unsigned __int16 *a1, int a2, int a3, int a4, int a5, char *a6)
{
  int v8; // ecx
  int v9; // eax
  int v10; // edx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  __int16 v17; // ax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // eax
  __int16 v24; // [esp+10h] [ebp-150h] BYREF
  int v25; // [esp+14h] [ebp-14Ch]
  unsigned int v26; // [esp+18h] [ebp-148h] BYREF
  _DWORD v27[2]; // [esp+20h] [ebp-140h] BYREF
  _DWORD v28[4]; // [esp+28h] [ebp-138h] BYREF
  int v29; // [esp+38h] [ebp-128h]
  int v30; // [esp+3Ch] [ebp-124h]
  _DWORD v31[4]; // [esp+40h] [ebp-120h] BYREF
  int v32; // [esp+50h] [ebp-110h]
  int v33; // [esp+54h] [ebp-10Ch]
  _DWORD v34[18]; // [esp+58h] [ebp-108h] BYREF
  int v35; // [esp+A0h] [ebp-C0h] BYREF
  int v36; // [esp+A4h] [ebp-BCh]
  int v37; // [esp+A8h] [ebp-B8h]
  char *v38; // [esp+ACh] [ebp-B4h]
  _DWORD v39[43]; // [esp+B0h] [ebp-B0h]

  v25 = a2;
  memset(a6, 0, 0x44u);
  *(_DWORD *)a6 = 68;
  if ( a5 && *(_WORD *)a5 != 1 )
    return -1073741811;
  v31[3] = 512;
  v31[1] = 0;
  v31[2] = 0;
  v31[0] = 24;
  if ( a5 )
    v32 = *(_DWORD *)(a5 + 4);
  else
    v32 = 0;
  v33 = 0;
  v28[0] = 24;
  v28[1] = 0;
  v28[3] = 512;
  v28[2] = 0;
  if ( a5 )
    v29 = *(_DWORD *)(a5 + 8);
  else
    v29 = 0;
  v30 = 0;
  v27[0] = 0;
  v27[1] = 0;
  memset(v34, 0, sizeof(v34));
  LOBYTE(v34[2]) |= 4u;
  v39[0] = 0;
  v39[4] = 0;
  v38 = a6 + 12;
  v34[0] = 72;
  v36 = 65539;
  v39[1] = 6;
  v39[2] = 48;
  v39[3] = a6 + 20;
  v37 = 8;
  v8 = 2;
  if ( a1 )
  {
    v9 = *a1;
    v39[8] = 0;
    v39[6] = v9;
    v39[7] = *((_DWORD *)a1 + 1);
    v39[5] = 131077;
    v39[9] = 131082;
    v26 = v26 & 0xFFFFFFE0 | 2;
    v39[10] = 8;
    v39[12] = 0;
    v39[11] = &v26;
    v8 = 4;
  }
  if ( a5 )
  {
    v10 = *(_DWORD *)(a5 + 12);
    if ( v10 )
    {
      v11 = 2 * v8++;
      *(&v36 + 2 * v11) = 393216;
      *(&v37 + 2 * v11) = 4;
      v39[2 * v11] = 0;
      v39[2 * v11 - 1] = v10;
    }
    v12 = *(_DWORD *)(a5 + 16);
    if ( v12 )
    {
      v13 = 2 * v8++;
      *(&v36 + 2 * v13) = 393217;
      *(&v37 + 2 * v13) = 4;
      v39[2 * v13] = 0;
      v39[2 * v13 - 1] = v12;
    }
    v14 = *(_DWORD *)(a5 + 20);
    if ( v14 )
    {
      v15 = 2 * v8++;
      *(&v36 + 2 * v15) = 393218;
      *(&v37 + 2 * v15) = 4;
      v39[2 * v15] = 0;
      v39[2 * v15 - 1] = v14;
    }
    if ( *(_DWORD *)(a5 + 24) )
    {
      v16 = 2 * v8++;
      *(&v36 + 2 * v16) = 131091;
      *(&v37 + 2 * v16) = 4;
      v39[2 * v16] = 0;
      v39[2 * v16 - 1] = a5 + 24;
    }
    v17 = *(_WORD *)(a5 + 2);
    if ( !v17 )
    {
      v19 = a3 | 0x100;
      goto LABEL_24;
    }
    v24 = v17 - 1;
    v18 = 2 * v8++;
    *(&v36 + 2 * v18) = 131085;
    *(&v37 + 2 * v18) = 2;
    v39[2 * v18] = 0;
    v39[2 * v18 - 1] = &v24;
  }
  v19 = a3;
LABEL_24:
  if ( (v19 & 0x40) != 0 )
  {
    v20 = 2 * v8++;
    *(&v36 + 2 * v20) = 393233;
    *(&v37 + 2 * v20) = 1;
    v39[2 * v20] = 0;
    v39[2 * v20 - 1] = 97;
  }
  v21 = v25;
  if ( v25 )
  {
    v22 = *(_DWORD *)(v25 + 8);
    if ( v22 < 0 )
    {
      *(_DWORD *)(v25 + 8) = v22 & 0x7FFFFFFF;
      v23 = 2 * v8++;
      v39[2 * v23] = 0;
      *(&v36 + 2 * v23) = 131090;
      *(&v37 + 2 * v23) = 8;
      v39[2 * v23 - 1] = v27;
    }
  }
  v35 = 16 * v8 + 4;
  return NtCreateUserProcess(
           (int)(a6 + 4),
           (int)(a6 + 8),
           0x2000000,
           0x2000000,
           (int)v31,
           (int)v28,
           v19,
           a4,
           v21,
           (int)v34,
           (int)&v35);
}
