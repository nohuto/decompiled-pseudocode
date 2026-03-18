/*
 * XREFs of ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D8500
 * Callers:
 *     <none>
 * Callees:
 *     ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02D88D4 (-prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z.c)
 *     ?vAdvXDDA@@YAXPEAU_PLGDDA@@@Z @ 0x1C02D8AA8 (-vAdvXDDA@@YAXPEAU_PLGDDA@@@Z.c)
 */

struct _PLGRUN *__fastcall prunPlgRead4(
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
  __int64 v10; // rbp
  struct _PLGDDA *v11; // r11
  unsigned __int8 *v12; // rsi
  int v13; // r8d
  __int64 v14; // rdi
  unsigned int v15; // eax
  char v16; // dl
  __int64 v17; // r9
  unsigned __int8 *v18; // rax
  int v19; // eax
  int v20; // edi
  unsigned __int8 *v21; // r12
  int v22; // edx
  __int64 v23; // r13
  __int64 v24; // r15
  unsigned int v25; // eax
  char v26; // dl
  char v27; // al
  __int64 v28; // r9
  int v29; // ecx
  int v30; // r9d
  unsigned __int8 *v31; // rax
  int v32; // ecx
  unsigned __int8 *v33; // rax
  __int64 v35; // [rsp+20h] [rbp-48h]
  int v37; // [rsp+80h] [rbp+18h]
  int v38; // [rsp+88h] [rbp+20h]
  int v39; // [rsp+98h] [rbp+30h]

  v8 = a6;
  v9 = a2;
  v10 = a6 & 7;
  v11 = a1;
  v12 = &a3[4 * ((__int64)a6 >> 3)];
  v13 = *(_DWORD *)v12;
  v39 = *(_DWORD *)v12;
  if ( a4 )
  {
    v20 = a8 & 0x1F;
    v21 = &a4[4 * ((__int64)a8 >> 5)];
    v22 = *(_DWORD *)v21;
    v37 = *(_DWORD *)v21;
    if ( v8 < a7 )
    {
      v23 = v10;
      v24 = a8 & 0x1F;
      while ( 1 )
      {
        if ( (v22 & dword_1C02FB2B0[v24]) != 0 )
        {
          v25 = (v13 & (unsigned int)dword_1C02FB270[v23]) >> dword_1C02FB290[v23];
          if ( a5 )
            v25 = a5->pulXlate[v25];
          *(_DWORD *)v9 = v25;
          prunPumpDDA(v11, v9);
          v11 = a1;
        }
        vAdvXDDA(v11);
        ++v8;
        v26 = v20 + 1;
        v38 = v20 + 1;
        v27 = v10 + 1;
        v35 = v24 + 1;
        v28 = v23 + 1;
        if ( v8 >= a7 )
          break;
        v29 = v27 & 8;
        if ( (v27 & 8) != 0 )
        {
          v13 = *((_DWORD *)v12 + 1);
          v39 = v13;
        }
        else
        {
          v13 = v39;
        }
        v23 = 0LL;
        if ( (v27 & 8) == 0 )
          v23 = v28;
        v30 = 0;
        if ( (v27 & 8) == 0 )
          v30 = v10 + 1;
        v31 = v12 + 4;
        if ( !v29 )
          v31 = v12;
        v12 = v31;
        v32 = v26 & 0x20;
        if ( (v26 & 0x20) != 0 )
        {
          v22 = *((_DWORD *)v21 + 1);
          v37 = v22;
        }
        else
        {
          v22 = v37;
        }
        v33 = v21 + 4;
        LODWORD(v10) = v30;
        if ( !v32 )
          v33 = v21;
        v20 = 0;
        v21 = v33;
        if ( !v32 )
          v20 = v38;
        v24 = 0LL;
        if ( !v32 )
          v24 = v35;
      }
    }
  }
  else if ( v8 < a7 )
  {
    v14 = (unsigned int)v10;
    while ( 1 )
    {
      v15 = (v13 & (unsigned int)dword_1C02FB270[v14]) >> dword_1C02FB290[v14];
      if ( a5 )
        v15 = a5->pulXlate[v15];
      *(_DWORD *)v9 = v15;
      prunPumpDDA(v11, v9);
      vAdvXDDA(a1);
      ++v8;
      v16 = v10 + 1;
      v17 = v14 + 1;
      if ( v8 >= a7 )
        break;
      if ( (v16 & 8) != 0 )
      {
        v13 = *((_DWORD *)v12 + 1);
        v39 = v13;
      }
      else
      {
        v13 = v39;
      }
      v18 = v12 + 4;
      if ( (v16 & 8) == 0 )
        v18 = v12;
      v12 = v18;
      v19 = 0;
      if ( (v16 & 8) == 0 )
        v19 = v10 + 1;
      v14 = 0LL;
      LODWORD(v10) = v19;
      if ( (v16 & 8) == 0 )
        v14 = v17;
    }
  }
  return v9;
}
