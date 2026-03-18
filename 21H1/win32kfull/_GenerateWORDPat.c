/*
 * XREFs of _GenerateWORDPat @ 0x1BC0A9
 * Callers:
 *     _ComputeHTCell @ 0x97406 (_ComputeHTCell.c)
 *     _Generate_HTSC_WORD @ 0x1BC242 (_Generate_HTSC_WORD.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _ExpandHTPatX @ 0x1BC025 (_ExpandHTPatX.c)
 */

int __fastcall GenerateWORDPat(int a1, int a2, int a3, char *a4, unsigned int a5, void *a6, int a7)
{
  int v7; // esi
  char *v8; // edi
  unsigned int v9; // ebx
  int v10; // eax
  char *v11; // edx
  char *v12; // edi
  unsigned int v13; // ecx
  char v14; // al
  int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // esi
  unsigned __int8 *v18; // ecx
  char v19; // bl
  __int16 v20; // di
  int v21; // eax
  unsigned int v23; // [esp+8h] [ebp-38h]
  char *Base; // [esp+14h] [ebp-2Ch]
  int NumOfElements; // [esp+18h] [ebp-28h]
  int v26; // [esp+20h] [ebp-20h]
  unsigned int v27; // [esp+24h] [ebp-1Ch]
  _DWORD v28[3]; // [esp+30h] [ebp-10h]

  v7 = a5;
  if ( !a5 )
    return 0;
  if ( a5 > (unsigned int)a6 )
    return 0;
  if ( !a7 )
    return 0;
  v28[0] = a3;
  v28[1] = a2;
  v28[2] = a1;
  NumOfElements = a7 * a5;
  if ( !is_mul_ok(a7, a5) )
    return 0;
  if ( !is_mul_ok(8u, a7 * a5) )
    return 0;
  v8 = (char *)EngAllocMem(1u, 8 * a7 * a5, 0x32355448u);
  Base = v8;
  if ( !v8 )
    return 0;
  v9 = 0;
  v27 = 0;
  do
  {
    v10 = a7;
    v11 = v8;
    v12 = (char *)v28[v9];
    v13 = v9;
    do
    {
      v26 = v10 - 1;
      do
      {
        v14 = *v12++;
        *((_DWORD *)v11 + 1) = v13;
        v13 += 3;
        *v11 = v14;
        v11 += 8;
        --v7;
      }
      while ( v7 );
      v10 = v26;
      v13 += 3 * ((int)a6 - a5);
      v7 = a5;
    }
    while ( v26 );
    v8 = Base;
    _qsort(Base, NumOfElements, 8u, (int (__cdecl *)(const void *, const void *))SCDataCompare);
    v15 = a7 * a5;
    v16 = v27;
    v23 = (unsigned __int8)Base[8 * NumOfElements - 8];
    if ( NumOfElements )
    {
      v17 = v23 >> 1;
      v18 = (unsigned __int8 *)Base;
      v19 = 0;
      v20 = 0;
      do
      {
        --v15;
        if ( *v18 != v19 )
        {
          v19 = *v18;
          v20 = (v17 + 4095 * *v18) / v23;
        }
        v21 = *((_DWORD *)v18 + 1);
        v18 += 8;
        *(_WORD *)&a4[2 * v21] = v20;
        v17 = v23 >> 1;
      }
      while ( v15 );
      v7 = a5;
      v8 = Base;
      v16 = v27;
    }
    v9 = v16 + 1;
    v27 = v9;
  }
  while ( v9 < 3 );
  ExpandHTPatX(a4, v7, a7, a6);
  EngFreeMem(v8);
  return 1;
}
