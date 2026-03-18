/*
 * XREFs of _PointerInfoCopyOutHelperInternal@28 @ 0x15BB5F
 * Callers:
 *     <none>
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _GetDPITransformationMonitor@12 @ 0x1510B9 (_GetDPITransformationMonitor@12.c)
 *     _RemapHimetricPointsForMultiMonDigitizers@28 @ 0x151698 (_RemapHimetricPointsForMultiMonDigitizers@28.c)
 */

int __stdcall PointerInfoCopyOutHelperInternal(_DWORD *a1, int a2, int a3, _DWORD *a4, int a5, int a6, ULONG a7)
{
  int v7; // ebx
  _DWORD *v8; // edi
  int AdjustedPointerLocations; // esi
  PKTHREAD CurrentThread; // eax
  _DWORD *v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  _DWORD *v16; // edx
  void *v17; // ebx
  int v19; // [esp-4h] [ebp-90h]
  int v20; // [esp+1Ch] [ebp-70h] BYREF
  int v21; // [esp+20h] [ebp-6Ch]
  int v22; // [esp+24h] [ebp-68h] BYREF
  int v23; // [esp+28h] [ebp-64h]
  int v24; // [esp+2Ch] [ebp-60h] BYREF
  int v25; // [esp+30h] [ebp-5Ch]
  _DWORD *v26; // [esp+34h] [ebp-58h]
  int v27; // [esp+38h] [ebp-54h] BYREF
  int v28; // [esp+3Ch] [ebp-50h]
  int v29; // [esp+40h] [ebp-4Ch]
  INT DPITransformationMonitor; // [esp+44h] [ebp-48h] BYREF
  ULONG v31; // [esp+48h] [ebp-44h]
  int v32; // [esp+4Ch] [ebp-40h]
  int v33; // [esp+50h] [ebp-3Ch] BYREF
  int v34; // [esp+54h] [ebp-38h]
  int v35; // [esp+58h] [ebp-34h]
  int v36; // [esp+5Ch] [ebp-30h]
  int v37; // [esp+60h] [ebp-2Ch] BYREF
  int v38; // [esp+64h] [ebp-28h]
  int v39; // [esp+68h] [ebp-24h]
  int v40; // [esp+6Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v26 = a1;
  v31 = a7;
  v7 = 0;
  v29 = 0;
  v27 = 0;
  v28 = 0;
  v24 = 0;
  v25 = 0;
  v22 = 0;
  v23 = 0;
  v20 = 0;
  v21 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v8 = a1;
  AdjustedPointerLocations = GetAdjustedPointerLocations(
                               a1[8],
                               a1[9],
                               a1[10],
                               a1[11],
                               a1[12],
                               a1[13],
                               a1[14],
                               a1[15],
                               a2,
                               a3,
                               &v27,
                               &v22,
                               &v24,
                               &v20,
                               a4);
  CurrentThread = KeGetCurrentThread();
  v32 = (*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 688) & 0x2000) == 0 ? AdjustedPointerLocations : 0;
  if ( a5 == 2 || a5 == 5 )
  {
    v37 = a1[26];
    v38 = a1[27];
    v39 = a1[28];
    v40 = a1[29];
    v33 = v26[30];
    v34 = v26[31];
    v35 = v26[32];
    v36 = v26[33];
    v8 = v26;
  }
  v11 = (_DWORD *)HMValidateHandleNoSecure(v8[7], 1);
  if ( v11 && (*(_DWORD *)(v11[5] + 184) & 0xF) != 2 )
  {
    if ( !v32 )
    {
      v27 = v8[8];
      v28 = v8[9];
      v22 = v8[10];
      v23 = v8[11];
      v24 = v8[12];
      v25 = v8[13];
      v20 = v8[14];
      v21 = v8[15];
    }
    DPITransformationMonitor = GetDPITransformationMonitor(v11, v27, v28);
    v12 = PhysicalToLogicalDPIPoint(&v27, &v27, 0, &DPITransformationMonitor);
    v32 |= v12;
    v13 = PhysicalToLogicalDPIPoint(&v24, &v24, 0, &DPITransformationMonitor);
    v32 |= v13;
    if ( a5 == 2 || a5 == 5 )
    {
      v14 = PhysicalToLogicalDPIRect(&v37, &v37, 0, &DPITransformationMonitor);
      v32 |= v14;
      v15 = PhysicalToLogicalDPIRect(&v33, &v33, 0, &DPITransformationMonitor);
      v32 |= v15;
    }
    if ( *(_DWORD *)*_gpDispInfo > 1u && a4 && !*(_DWORD *)(a4[2] + 1136) && a4[3] != 7 )
    {
      RemapHimetricPointsForMultiMonDigitizers(
        (_DWORD *)DPITransformationMonitor,
        &v22,
        &v20,
        a4[41],
        a4[42],
        a4[43],
        a4[44]);
      v32 = 1;
      v8 = v26;
    }
  }
  ms_exc.registration.TryLevel = 0;
  switch ( a5 )
  {
    case 1:
      if ( a6 != 88 )
        goto LABEL_21;
      v16 = (_DWORD *)v31;
      v17 = (void *)v31;
      if ( v31 >= _MmUserProbeAddress )
        v17 = (void *)_MmUserProbeAddress;
      v19 = 22;
LABEL_35:
      qmemcpy(v17, v8 + 2, 4 * v19);
      v7 = 1;
      v29 = 1;
      goto LABEL_22;
    case 2:
LABEL_31:
      v16 = (_DWORD *)v31;
      if ( a6 != 136 )
        goto LABEL_22;
      v17 = (void *)v31;
      if ( v31 >= _MmUserProbeAddress )
        v17 = (void *)_MmUserProbeAddress;
      v19 = 34;
      goto LABEL_35;
    case 3:
      v16 = (_DWORD *)v31;
      if ( a6 != 112 )
        goto LABEL_22;
      v17 = (void *)v31;
      if ( v31 >= _MmUserProbeAddress )
        v17 = (void *)_MmUserProbeAddress;
      v19 = 28;
      goto LABEL_35;
    case 5:
      goto LABEL_31;
  }
  v29 = 0;
LABEL_21:
  v16 = (_DWORD *)v31;
LABEL_22:
  if ( v7 )
  {
    if ( v32 )
    {
      v16[6] = v27;
      v16[7] = v28;
      v16[8] = v22;
      v16[9] = v23;
      v16[10] = v24;
      v16[11] = v25;
      v16[12] = v20;
      v16[13] = v21;
      if ( a5 == 2 || a5 == 5 )
      {
        v16[24] = v37;
        v16[25] = v38;
        v16[26] = v39;
        v16[27] = v40;
        v16[28] = v33;
        v16[29] = v34;
        v16[30] = v35;
        v16[31] = v36;
      }
    }
  }
  return v7;
}
