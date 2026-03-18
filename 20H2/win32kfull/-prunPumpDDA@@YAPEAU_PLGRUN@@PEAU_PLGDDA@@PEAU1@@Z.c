/*
 * XREFs of ?prunPumpDDA@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@@Z @ 0x1C02D7434
 * Callers:
 *     ?prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6980 (-prunPlgRead16@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6B00 (-prunPlgRead1@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6D20 (-prunPlgRead24@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D6EE0 (-prunPlgRead32@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D7060 (-prunPlgRead4@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 *     ?prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z @ 0x1C02D72C0 (-prunPlgRead8@@YAPEAU_PLGRUN@@PEAU_PLGDDA@@PEAU1@PEAE2PEAU_XLATEOBJ@@JJJ@Z.c)
 * Callees:
 *     <none>
 */

struct _PLGRUN *__fastcall prunPumpDDA(struct _PLGDDA *a1, struct _PLGRUN *a2)
{
  int v2; // r10d
  _DWORD *v3; // r8
  unsigned int v6; // r11d
  __int64 v7; // rax
  bool v8; // cc
  int v9; // ecx
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ebx
  int v16; // edx
  int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // esi
  int v21; // r11d
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  int v25; // r10d
  int v26; // ecx
  __int64 v28; // [rsp+28h] [rbp+28h]
  __int64 v29; // [rsp+30h] [rbp+30h]
  __int64 v30; // [rsp+38h] [rbp+38h]
  __int64 v31; // [rsp+40h] [rbp+40h]

  v2 = *((_DWORD *)a1 + 17);
  v3 = (_DWORD *)((char *)a2 + 12);
  v30 = *(_QWORD *)((char *)a1 + 100);
  v28 = *(_QWORD *)((char *)a1 + 108);
  v6 = HIDWORD(v28);
  v29 = *(_QWORD *)((char *)a1 + 116);
  v7 = *(_QWORD *)((char *)a1 + 124);
  *((_DWORD *)a2 + 1) = v2;
  v8 = v2 < *((_DWORD *)a1 + 19);
  v9 = v28;
  v31 = v7;
  if ( v8 )
  {
    v10 = HIDWORD(v30);
    v11 = v30;
    do
    {
      if ( v11 >= v9 )
      {
        *v3 = v9;
        v12 = v11 - v9;
      }
      else
      {
        *v3 = v11;
        v12 = v9 - v11;
      }
      v3[1] = v12;
      ++*((_DWORD *)a2 + 2);
      v11 += *((_DWORD *)a1 + 81);
      v10 += *((_DWORD *)a1 + 82);
      v13 = *((_DWORD *)a1 + 83);
      if ( v10 >= v13 )
      {
        ++v11;
        v10 -= v13;
      }
      v9 += *((_DWORD *)a1 + 84);
      v6 += *((_DWORD *)a1 + 85);
      v14 = *((_DWORD *)a1 + 86);
      if ( v6 >= v14 )
      {
        ++v9;
        v6 -= v14;
      }
      v3 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 19) );
  }
  v15 = HIDWORD(v29);
  v16 = v29;
  while ( v2 < *((_DWORD *)a1 + 21) )
  {
    if ( v16 >= v9 )
    {
      *v3 = v9;
      v17 = v16 - v9;
    }
    else
    {
      *v3 = v16;
      v17 = v9 - v16;
    }
    v3[1] = v17;
    ++*((_DWORD *)a2 + 2);
    v16 += *((_DWORD *)a1 + 87);
    v15 += *((_DWORD *)a1 + 88);
    v18 = *((_DWORD *)a1 + 89);
    if ( v15 >= v18 )
    {
      ++v16;
      v15 -= v18;
    }
    v9 += *((_DWORD *)a1 + 84);
    v6 += *((_DWORD *)a1 + 85);
    v19 = *((_DWORD *)a1 + 86);
    if ( v6 >= v19 )
    {
      ++v9;
      v6 -= v19;
    }
    v3 += 2;
    ++v2;
  }
  if ( v2 < *((_DWORD *)a1 + 23) )
  {
    v20 = HIDWORD(v31);
    v21 = v31;
    do
    {
      if ( v16 >= v21 )
      {
        *v3 = v21;
        v22 = v16 - v21;
      }
      else
      {
        *v3 = v16;
        v22 = v21 - v16;
      }
      v3[1] = v22;
      ++*((_DWORD *)a2 + 2);
      v16 += *((_DWORD *)a1 + 87);
      v15 += *((_DWORD *)a1 + 88);
      v23 = *((_DWORD *)a1 + 89);
      if ( v15 >= v23 )
      {
        ++v16;
        v15 -= v23;
      }
      v21 += *((_DWORD *)a1 + 90);
      v20 += *((_DWORD *)a1 + 91);
      v24 = *((_DWORD *)a1 + 92);
      if ( v20 >= v24 )
      {
        ++v21;
        v20 -= v24;
      }
      v3 += 2;
      ++v2;
    }
    while ( v2 < *((_DWORD *)a1 + 23) );
  }
  v25 = v2 - *((_DWORD *)a2 + 1);
  *((_DWORD *)a2 + 2) = v25;
  if ( *(_DWORD *)a1 && !v25 )
  {
    if ( v16 >= v9 )
    {
      *v3 = v9;
      v26 = v16 - v9;
    }
    else
    {
      *v3 = v16;
      v26 = v9 - v16;
    }
    v3[1] = v26;
    v3 += 2;
    *((_DWORD *)a2 + 2) = 1;
  }
  return (struct _PLGRUN *)v3;
}
