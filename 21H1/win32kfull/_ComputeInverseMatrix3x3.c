/*
 * XREFs of _ComputeInverseMatrix3x3 @ 0x1BC698
 * Callers:
 *     _HT_CreateDeviceHalftoneInfo@8 @ 0x96E72 (_HT_CreateDeviceHalftoneInfo@8.c)
 *     _ComputeColorSpaceXForm @ 0x1BDAAF (_ComputeColorSpaceXForm.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _MulFD6 @ 0xED8A8 (_MulFD6.c)
 *     _DivFD6 @ 0xED9D4 (_DivFD6.c)
 */

int __fastcall ComputeInverseMatrix3x3(const void *a1, void *a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  int v5; // edx
  int v6; // ebx
  int v7; // esi
  int *v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // esi
  int v12; // edx
  int v13; // ebx
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int v19; // edi
  int v20; // ebx
  int v21; // eax
  int v22; // edi
  int v23; // ebx
  int v24; // esi
  int *v25; // eax
  int v26; // edi
  int v27; // esi
  int v28; // ebx
  int v29; // edx
  int v31; // [esp-10h] [ebp-9Ch]
  int v33; // [esp+10h] [ebp-7Ch]
  int v34; // [esp+1Ch] [ebp-70h]
  int v35; // [esp+20h] [ebp-6Ch]
  int v36; // [esp+24h] [ebp-68h]
  int *v37; // [esp+28h] [ebp-64h]
  int *v38; // [esp+2Ch] [ebp-60h]
  int v39; // [esp+30h] [ebp-5Ch]
  int *v40; // [esp+34h] [ebp-58h]
  int v41; // [esp+34h] [ebp-58h]
  int v42; // [esp+38h] [ebp-54h]
  int v43; // [esp+38h] [ebp-54h]
  int v44; // [esp+3Ch] [ebp-50h]
  _DWORD v45[9]; // [esp+40h] [ebp-4Ch] BYREF
  _DWORD v46[9]; // [esp+64h] [ebp-28h] BYREF

  v46[8] = 1000000;
  v46[4] = 1000000;
  v46[0] = 1000000;
  qmemcpy(v45, a1, sizeof(v45));
  v2 = 0;
  v38 = v45;
  v3 = 3;
  v35 = 1;
  v4 = 0;
  memset(&v46[1], 0, 12);
  memset(&v46[5], 0, 12);
  v39 = 0;
  v44 = 0;
  v34 = 3;
  do
  {
    v5 = v4;
    v33 = v4 + 1;
    v6 = v4 + 1;
    if ( v4 + 1 < 3 )
    {
      v42 = v2;
      v7 = v2 + 12;
      v8 = &v45[v4 + v3];
      v40 = v8;
      do
      {
        v9 = *v8;
        if ( *v8 < 0 )
          v9 = -v9;
        v10 = *(_DWORD *)((char *)&v45[v4] + v42);
        if ( v10 < 0 )
          v10 = -v10;
        if ( v9 > v10 )
        {
          v5 = v6;
          v42 = v7;
        }
        v7 += 12;
        v8 = v40 + 3;
        ++v6;
        v40 += 3;
      }
      while ( v7 < 36 );
      v2 = v44;
    }
    if ( v45[3 * v5 + v4] )
    {
      if ( v5 != v4 )
      {
        v11 = v2;
        v12 = 3 * v5;
        v13 = 3;
        do
        {
          v14 = *(_DWORD *)((char *)v45 + v11);
          v11 += 4;
          v15 = v45[v12++];
          *(_DWORD *)((char *)&v45[-1] + v11) = v15;
          v16 = v45[v12 + 8];
          v45[v12 - 1] = v14;
          v17 = *(_DWORD *)((char *)&v45[8] + v11);
          *(_DWORD *)((char *)&v45[8] + v11) = v16;
          v45[v12 + 8] = v17;
          --v13;
        }
        while ( v13 );
      }
      v18 = v44;
      v19 = 3;
      v20 = *v38;
      do
      {
        v21 = DivFD6(*(_DWORD *)((char *)v45 + v18), v20);
        v31 = *(_DWORD *)((char *)v46 + v18);
        *(_DWORD *)((char *)v45 + v18) = v21;
        *(_DWORD *)((char *)v46 + v18) = DivFD6(v31, v20);
        v18 += 4;
        --v19;
      }
      while ( v19 );
      v22 = v39;
      v23 = 0;
      v24 = 0;
      v43 = 0;
      v36 = 0;
      v25 = &v45[v39];
      v37 = v25;
      do
      {
        if ( v23 != v22 && *v25 )
        {
          v26 = v24;
          v41 = 3;
          v27 = v44;
          v28 = *v25;
          do
          {
            *(_DWORD *)((char *)v45 + v26) -= MulFD6(*(_DWORD *)((char *)v45 + v27), v28);
            *(_DWORD *)((char *)v46 + v26) -= MulFD6(*(_DWORD *)((char *)v46 + v27), v28);
            v27 += 4;
            v26 += 4;
            --v41;
          }
          while ( v41 );
          v22 = v39;
          v24 = v36;
          v23 = v43;
          v25 = v37;
        }
        v24 += 12;
        ++v23;
        v25 += 3;
        v43 = v23;
        v37 = v25;
        v36 = v24;
      }
      while ( v24 < 36 );
      v2 = v44;
      v29 = v35;
    }
    else
    {
      v29 = 0;
      v35 = 0;
    }
    v2 += 12;
    v38 += 4;
    v3 = v34 + 3;
    v4 = v33;
    v39 = v33;
    v34 = v3;
    v44 = v2;
  }
  while ( v3 < 12 );
  qmemcpy(a2, v46, 0x24u);
  return v29;
}
