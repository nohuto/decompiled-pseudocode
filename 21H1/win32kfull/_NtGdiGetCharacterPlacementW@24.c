/*
 * XREFs of _NtGdiGetCharacterPlacementW@24 @ 0x21278A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _GreGetCharacterPlacementW@24 @ 0x2221E7 (_GreGetCharacterPlacementW@24.c)
 */

int __stdcall NtGdiGetCharacterPlacementW(int a1, char *Src, void *a3, int a4, size_t a5, size_t a6)
{
  unsigned int v6; // edx
  unsigned int v7; // eax
  const void *v8; // ecx
  int v9; // edi
  unsigned int *v10; // esi
  char *v11; // edi
  unsigned int *v13; // eax
  char *v14; // eax
  char *v15; // eax
  char *v16; // eax
  char *v17; // eax
  char *v18; // eax
  int v19; // esi
  size_t v20; // edx
  void *v21; // edx
  unsigned int *v22; // edi
  _DWORD *v23; // ecx
  unsigned int *v24; // edx
  size_t v25; // ecx
  size_t v26; // esi
  void *v27; // ecx
  void *v28[9]; // [esp+10h] [ebp-84h] BYREF
  int v29; // [esp+34h] [ebp-60h]
  int v30; // [esp+38h] [ebp-5Ch]
  int CharacterPlacementW; // [esp+3Ch] [ebp-58h]
  int v32; // [esp+40h] [ebp-54h]
  unsigned int v33; // [esp+44h] [ebp-50h]
  int v34; // [esp+48h] [ebp-4Ch]
  void *v35; // [esp+4Ch] [ebp-48h]
  unsigned int v36; // [esp+50h] [ebp-44h]
  unsigned int v37; // [esp+54h] [ebp-40h]
  unsigned int v38; // [esp+58h] [ebp-3Ch]
  unsigned int v39; // [esp+5Ch] [ebp-38h]
  unsigned int *v40; // [esp+60h] [ebp-34h]
  void *v41; // [esp+64h] [ebp-30h]
  size_t v42; // [esp+68h] [ebp-2Ch]
  size_t MaxCount; // [esp+6Ch] [ebp-28h]
  const void *v44; // [esp+70h] [ebp-24h]
  void *v45; // [esp+74h] [ebp-20h]
  unsigned int *v46; // [esp+78h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+7Ch] [ebp-18h]
  void *Srca; // [esp+A0h] [ebp+Ch]
  void *Srcb; // [esp+A0h] [ebp+Ch]
  void *Srcc; // [esp+A0h] [ebp+Ch]
  void *Srcd; // [esp+A0h] [ebp+Ch]
  void *Srce; // [esp+A0h] [ebp+Ch]
  void *v53; // [esp+A8h] [ebp+14h]
  size_t v54; // [esp+ACh] [ebp+18h]
  int v55; // [esp+B0h] [ebp+1Ch]

  CharacterPlacementW = 0;
  v32 = 1;
  v6 = 0;
  v45 = 0;
  v34 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v33 = 0;
  v46 = 0;
  v40 = 0;
  memset(v28, 0, sizeof(v28));
  v7 = (unsigned int)a3;
  v41 = a3;
  if ( (int)a3 < 0 || a4 < -1 || !Src )
    return 0;
  v8 = (const void *)a5;
  v44 = (const void *)a5;
  if ( a5 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a5 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a5 = *(_BYTE *)a5;
    *(_BYTE *)(a5 + 32) = *(_BYTE *)(a5 + 32);
    qmemcpy(v28, v44, sizeof(v28));
    v7 = (unsigned int)a3;
    v41 = a3;
    if ( (int)a3 > (int)v28[7] )
    {
      v7 = (unsigned int)v28[7];
      v41 = v28[7];
    }
    ms_exc.registration.TryLevel = -2;
    v8 = v44;
  }
  if ( v7 > 0x9C4000 )
    return 0;
  v9 = 2 * v7;
  MaxCount = 2 * v7;
  v30 = 2 * v7;
  v42 = 4 * v7;
  v29 = 4 * v7;
  v10 = 0;
  if ( v8 )
  {
    v6 = 36;
    v45 = (void *)36;
    if ( v28[1] )
    {
      v34 = 36;
      v6 = ((v9 + 3) & 0xFFFFFFFC) + 36;
      v45 = (void *)v6;
      if ( ((v9 + 3) & 0xFFFFFFFC) >= 0xFFFFFFDC )
        return 0;
    }
    if ( v28[2] )
    {
      v39 = v6;
      v6 += 4 * v7;
      v45 = (void *)v6;
      if ( v6 < v39 )
        return 0;
    }
    v11 = (char *)v28[3];
    v35 = v28[3];
    if ( v28[3] )
    {
      v38 = v6;
      v6 += v42;
      v45 = (void *)v6;
      if ( v6 < v38 )
        return 0;
    }
    if ( v28[4] )
    {
      v37 = v6;
      v6 += v42;
      v45 = (void *)v6;
      if ( v6 < v37 )
        return 0;
    }
    if ( v28[5] )
    {
      v36 = v6;
      v6 += (v7 + 3) & 0xFFFFFFFC;
      v45 = (void *)v6;
      if ( v6 < v36 )
        return 0;
    }
    if ( v28[6] )
    {
      v33 = v6;
      v6 += MaxCount;
      v45 = (void *)v6;
      if ( v6 < v33 )
        return 0;
    }
  }
  else
  {
    v11 = (char *)v28[3];
    v35 = v28[3];
  }
  if ( v6 <= 40960000 - MaxCount )
  {
    v10 = (unsigned int *)AllocFreeTmpBuffer(v6 + MaxCount);
    v40 = v10;
    v6 = (unsigned int)v45;
    v8 = v44;
  }
  if ( v10 )
  {
    v45 = (char *)v10 + v6;
    if ( v8 )
    {
      v46 = v10;
      if ( v28[1] )
        v13 = &v10[v34 / 4u];
      else
        v13 = 0;
      v10[1] = (unsigned int)v13;
      if ( v28[2] )
        v14 = (char *)v10 + v39;
      else
        v14 = 0;
      v10[2] = (unsigned int)v14;
      if ( v11 )
        v15 = (char *)v10 + v38;
      else
        v15 = 0;
      v10[3] = (unsigned int)v15;
      if ( v28[4] )
        v16 = (char *)v10 + v37;
      else
        v16 = 0;
      v10[4] = (unsigned int)v16;
      if ( v28[5] )
        v17 = (char *)v10 + v36;
      else
        v17 = 0;
      v10[5] = (unsigned int)v17;
      if ( v28[6] )
        v18 = (char *)v10 + v33;
      else
        v18 = 0;
      v10[6] = (unsigned int)v18;
      *v10 = v6;
      v10[7] = (unsigned int)v41;
    }
    v19 = 1;
    ms_exc.registration.TryLevel = 1;
    v20 = MaxCount;
    if ( &Src[MaxCount] < Src || (unsigned int)&Src[MaxCount] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(v45, Src, v20);
    if ( (a6 & 0x200000) != 0 && v44 && v11 )
    {
      v21 = (void *)v46[3];
      if ( &v11[v42] < v11 || (unsigned int)&v11[v42] > _MmUserProbeAddress )
        *(_BYTE *)_MmUserProbeAddress = 0;
      memcpy(v21, v11, v42);
    }
    ms_exc.registration.TryLevel = -2;
    v22 = v40;
    CharacterPlacementW = GreGetCharacterPlacementW(a1, v45, v41, a4, v46, a6);
    if ( CharacterPlacementW )
    {
      v23 = v44;
      if ( v44 )
      {
        ms_exc.registration.TryLevel = 2;
        v24 = v46;
        *((_DWORD *)v44 + 8) = v46[8];
        v54 = v24[7];
        v23[7] = v54;
        v25 = 2 * v54;
        v55 = 2 * v54;
        v30 = 2 * v54;
        v26 = 4 * v54;
        v29 = 4 * v54;
        if ( v28[1] )
        {
          v53 = (void *)v46[1];
          if ( (char *)v28[1] + v25 > (void *)_MmUserProbeAddress || (char *)v28[1] + v25 <= v28[1] )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v28[1], v53, v25);
        }
        if ( v28[2] )
        {
          Srca = (void *)v46[2];
          if ( (char *)v28[2] + v26 > (void *)_MmUserProbeAddress || (char *)v28[2] + v26 <= v28[2] )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v28[2], Srca, v26);
        }
        v27 = v35;
        if ( v35 )
        {
          Srcb = (void *)v46[3];
          if ( (unsigned int)v35 + v26 > _MmUserProbeAddress || (char *)v35 + v26 <= v35 )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v27, Srcb, v26);
        }
        if ( v28[4] )
        {
          Srcc = (void *)v46[4];
          if ( (char *)v28[4] + v26 > (void *)_MmUserProbeAddress || (char *)v28[4] + v26 <= v28[4] )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v28[4], Srcc, v26);
        }
        if ( v28[5] )
        {
          Srcd = (void *)v46[5];
          if ( (char *)v28[5] + v54 > (void *)_MmUserProbeAddress || (char *)v28[5] + v54 <= v28[5] )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v28[5], Srcd, v54);
        }
        if ( v28[6] )
        {
          Srce = (void *)v46[6];
          if ( (char *)v28[6] + v55 > (void *)_MmUserProbeAddress || (char *)v28[6] + v55 <= v28[6] )
            *(_BYTE *)_MmUserProbeAddress = 0;
          memcpy(v28[6], Srce, v55);
        }
        ms_exc.registration.TryLevel = -2;
        v19 = v32;
      }
    }
    FreeTmpBuffer(v22);
  }
  else
  {
    v19 = 0;
  }
  return v19 != 0 ? CharacterPlacementW : 0;
}
