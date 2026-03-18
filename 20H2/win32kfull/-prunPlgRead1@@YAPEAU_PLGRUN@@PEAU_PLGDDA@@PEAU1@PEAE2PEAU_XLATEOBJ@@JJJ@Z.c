/*
 * XREFs of ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6B00
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02D7434 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D7608 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead1(
        struct _PLGDDA *a1,
        struct _PLGRUN *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4,
        struct _XLATEOBJ *a5,
        int a6,
        int a7,
        int a8)
{
  int v8; // ebx
  struct _PLGRUN *v9; // r10
  unsigned int v10; // edi
  unsigned __int8 *v12; // r14
  int v13; // r8d
  ULONG v14; // edx
  int v15; // r11d
  ULONG *pulXlate; // rax
  __int64 v17; // rbp
  int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // r9
  int v21; // ecx
  unsigned __int8 *v22; // rax
  int v23; // esi
  unsigned __int8 *v24; // r13
  int v25; // ecx
  __int64 v26; // r15
  int v27; // eax
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // r9d
  __int64 v31; // r11
  int v32; // ecx
  unsigned __int8 *v33; // rax
  unsigned __int8 *v34; // rax
  int v37; // [rsp+70h] [rbp+18h]
  int v38; // [rsp+78h] [rbp+20h]
  ULONG v39; // [rsp+80h] [rbp+28h]
  int v40; // [rsp+88h] [rbp+30h]

  v8 = a6;
  v9 = a2;
  v10 = a6 & 0x1F;
  v12 = &a3[4 * ((__int64)a6 >> 5)];
  v13 = *(_DWORD *)v12;
  v40 = *(_DWORD *)v12;
  if ( a5 )
  {
    pulXlate = a5->pulXlate;
    v14 = *pulXlate;
    v15 = pulXlate[1];
  }
  else
  {
    v14 = 0;
    v15 = 1;
  }
  v37 = v15;
  v39 = v14;
  v17 = v10;
  if ( a4 )
  {
    v23 = a8 & 0x1F;
    v24 = &a4[4 * ((__int64)a8 >> 5)];
    v25 = *(_DWORD *)v24;
    v38 = *(_DWORD *)v24;
    if ( v8 < a7 )
    {
      v26 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v25 & dword_1C02FA2E0[v26]) != 0 )
        {
          v27 = v15;
          if ( (v13 & dword_1C02FA2E0[v17]) == 0 )
            v27 = v14;
          *(_DWORD *)v9 = v27;
          prunPumpDDA(a1, v9);
        }
        vAdvXDDA(a1);
        ++v8;
        v28 = v10 + 1;
        v29 = v17 + 1;
        v30 = v23 + 1;
        v31 = v26 + 1;
        if ( v8 >= a7 )
          break;
        v32 = v28 & 0x20;
        if ( (v28 & 0x20) != 0 )
        {
          v13 = *((_DWORD *)v12 + 1);
          v40 = v13;
        }
        else
        {
          v13 = v40;
        }
        v17 = 0LL;
        if ( (v28 & 0x20) == 0 )
          v17 = v29;
        v10 = 0;
        if ( (v28 & 0x20) == 0 )
          v10 = v28;
        v33 = v12 + 4;
        if ( !v32 )
          v33 = v12;
        v12 = v33;
        if ( (v30 & 0x20) != 0 )
        {
          v25 = *((_DWORD *)v24 + 1);
          v38 = v25;
        }
        else
        {
          v25 = v38;
        }
        v34 = v24 + 4;
        if ( (v30 & 0x20) == 0 )
          v34 = v24;
        v23 = 0;
        v24 = v34;
        if ( (v30 & 0x20) == 0 )
          v23 = v30;
        v26 = 0LL;
        v14 = v39;
        if ( (v30 & 0x20) == 0 )
          v26 = v31;
        v15 = v37;
      }
    }
  }
  else if ( v8 < a7 )
  {
    while ( 1 )
    {
      v18 = v15;
      if ( (v13 & dword_1C02FA2E0[v17]) == 0 )
        v18 = v14;
      *(_DWORD *)v9 = v18;
      prunPumpDDA(a1, v9);
      vAdvXDDA(a1);
      ++v8;
      v19 = v10 + 1;
      v20 = v17 + 1;
      if ( v8 >= a7 )
        break;
      v21 = v19 & 0x20;
      if ( (v19 & 0x20) != 0 )
      {
        v13 = *((_DWORD *)v12 + 1);
        v40 = v13;
      }
      else
      {
        v13 = v40;
      }
      v15 = v37;
      v22 = v12 + 4;
      if ( (v19 & 0x20) == 0 )
        v22 = v12;
      v10 = 0;
      v12 = v22;
      if ( (v19 & 0x20) == 0 )
        v10 = v19;
      v14 = v39;
      v17 = 0LL;
      if ( !v21 )
        v17 = v20;
    }
  }
  return v9;
}
