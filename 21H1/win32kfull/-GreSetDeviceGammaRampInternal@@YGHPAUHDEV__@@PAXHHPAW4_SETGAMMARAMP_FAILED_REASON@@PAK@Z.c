/*
 * XREFs of ?GreSetDeviceGammaRampInternal@@YGHPAUHDEV__@@PAXHHPAW4_SETGAMMARAMP_FAILED_REASON@@PAK@Z @ 0xCEC02
 * Callers:
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _UpdateGammaRampOnDevice@8 @ 0xB00CE (_UpdateGammaRampOnDevice@8.c)
 *     ?ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QAEXXZ @ 0x21B5E0 (-ComposeDeviceGammaRampsUnsafe@PDEVOBJ@@QAEXXZ.c)
 */

int __userpurge GreSetDeviceGammaRampInternal@<eax>(
        unsigned __int16 *a1@<edx>,
        int a2@<ecx>,
        HDEV a3,
        void *a4,
        _DWORD *a5,
        _DWORD *a6,
        enum _SETGAMMARAMP_FAILED_REASON *a7,
        unsigned int *a8)
{
  int updated; // esi
  _DWORD *v9; // edi
  int v10; // eax
  const void *v11; // eax
  char *v12; // edx
  BOOL v13; // ebx
  signed int v14; // ecx
  unsigned int v15; // eax
  _DWORD *v16; // ebx
  char *v17; // eax
  int v19; // ecx
  int v20; // eax
  void *v21; // eax
  int v22; // [esp+Ch] [ebp-28h] BYREF
  _DWORD *v23; // [esp+10h] [ebp-24h]
  unsigned int v24; // [esp+14h] [ebp-20h]
  int v25; // [esp+18h] [ebp-1Ch]
  signed int v26; // [esp+1Ch] [ebp-18h]
  signed int v27; // [esp+20h] [ebp-14h]
  unsigned __int16 *v28; // [esp+24h] [ebp-10h]
  signed int v29; // [esp+28h] [ebp-Ch]
  int v30; // [esp+2Ch] [ebp-8h]
  BOOL v31; // [esp+30h] [ebp-4h]
  int v32; // [esp+48h] [ebp+14h]

  v28 = a1;
  updated = 0;
  v23 = (_DWORD *)a2;
  v30 = 0;
  v22 = a2;
  v9 = a5;
  *a5 = 2;
  *a6 = a2;
  if ( !a2 || (*(_BYTE *)(a2 + 24) & 1) == 0 )
    return updated;
  v10 = *(_DWORD *)(a2 + 1404);
  if ( v10 == 6 || v10 == 4 || v10 == 5 )
  {
    if ( *(_DWORD *)(a2 + 2168) && (*(_BYTE *)(a2 + 1416) & 0x10) != 0 )
    {
      updated = 1;
      v30 = 1;
      goto LABEL_7;
    }
    *a5 = 4;
  }
  else
  {
    *a5 = 3;
    *a6 = *(_DWORD *)(a2 + 1404);
  }
  if ( !a4 )
    return updated;
LABEL_7:
  v31 = a3 == 0;
  v11 = *(const void **)(a2 + 1048);
  if ( v11 )
  {
    if ( RtlCompareMemory(v11, a1, 0x600u) == 1536 )
      return updated;
    a1 = v28;
  }
  v12 = (char *)(a1 + 256);
  v13 = v31;
  v24 = giIcmGammaRange;
  v14 = -giIcmGammaRange;
  v32 = giIcmGammaRange;
  v25 = (char *)v28 - v12;
  while ( updated && a3 || v13 )
  {
    v15 = v14 + v24;
    if ( v14 + v24 >= 0x100 )
      break;
    v29 = (unsigned __int8)v12[v25 + 1];
    v27 = (unsigned __int8)v12[1];
    v26 = (unsigned __int8)v12[513];
    v9 = a5;
    if ( updated )
    {
      if ( a3 )
      {
        if ( v29 < v14
          || (v13 = v31, v29 > v32)
          || v27 < v14
          || (updated = v30, v27 > v32)
          || v26 < v14
          || (v9 = a5, v26 > v32) )
        {
          updated = 0;
          *v9 = 5;
          v30 = 0;
        }
      }
    }
    if ( v13 )
    {
      v29 = v15 << 8;
      if ( *(unsigned __int16 *)&v12[v25] != v15 << 8
        || *(unsigned __int16 *)v12 != v29
        || *((unsigned __int16 *)v12 + 256) != v29 )
      {
        v13 = 0;
        v31 = 0;
      }
    }
    ++v32;
    ++v14;
    v12 += 2;
  }
  v16 = v23;
  if ( updated || a4 )
  {
    v17 = (char *)v23[262];
    if ( !v17 )
    {
      v17 = (char *)PALLOCMEM2(0x600u, 1835231559, 0);
      if ( !v17 )
      {
        *v9 = 6;
        return 0;
      }
      v23[262] = v17;
    }
    qmemcpy(v17, v28, 0x600u);
    updated = v30;
    if ( !v30 )
      goto LABEL_27;
    if ( v16[263] )
    {
      if ( !v16[264] )
      {
        v21 = PALLOCMEM2(0x600u, 1735354695, 0);
        if ( v21 )
          v16[264] = v21;
        else
          updated = 0;
      }
      if ( !updated )
        goto LABEL_27;
      PDEVOBJ::ComposeDeviceGammaRampsUnsafe((PDEVOBJ *)&v22);
    }
    updated = UpdateGammaRampOnDevice((volatile unsigned int *)updated, (int)v16, 1);
    *a5 = 7;
LABEL_27:
    if ( v31 )
    {
      v19 = v16[262];
      v16[262] = 0;
      Win32FreePool(v19);
      v20 = v16[264];
      if ( v20 )
      {
        v16[264] = 0;
        Win32FreePool(v20);
      }
    }
  }
  return updated;
}
