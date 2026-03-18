/*
 * XREFs of VidSchCreateSystemDevices @ 0x1C0095C54
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009582C (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiSchedulerNodeToDriverEngine @ 0x1C0001614 (VidSchiSchedulerNodeToDriverEngine.c)
 *     VidSchiCreateContextInternal @ 0x1C000FF50 (VidSchiCreateContextInternal.c)
 *     VidSchiGetSoftwareOnlyNodeForDriverEngine @ 0x1C00144C0 (VidSchiGetSoftwareOnlyNodeForDriverEngine.c)
 *     ?VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEXT_DATA@@PEAVDXGCONTEXT@@@Z @ 0x1C0037018 (-VidSchiCreateHwContextInternal@@YAPEAUVIDSCH_HW_CONTEXT@@PEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_CONTEX.c)
 *     VidSchiCreateDeviceInternal @ 0x1C007FCA0 (VidSchiCreateDeviceInternal.c)
 */

__int64 __fastcall VidSchCreateSystemDevices(__int64 a1)
{
  __int64 *v1; // r12
  __int64 v3; // rdx
  __int64 v4; // rcx
  int DeviceInternal; // edi
  __int64 v6; // r8
  struct _VIDSCH_DEVICE **v7; // r13
  int SoftwareOnlyNodeForDriverEngine; // eax
  __int64 v9; // rcx
  char *ContextInternal; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int i; // edi
  __int64 v15; // rsi
  unsigned int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  char *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rcx
  unsigned int v26; // esi
  __int64 v27; // rax
  __int64 v28; // r14
  int v29; // ecx
  struct _VIDSCH_DEVICE *v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rcx
  struct VIDSCH_HW_CONTEXT *HwContextInternal; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // rcx
  int v42; // eax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rcx
  __int128 v47; // [rsp+20h] [rbp-20h] BYREF
  __int64 v48; // [rsp+30h] [rbp-10h]
  int v49; // [rsp+38h] [rbp-8h]

  v1 = (__int64 *)(a1 + 232);
  v47 = 0LL;
  LODWORD(v47) = 1;
  v48 = 0LL;
  DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v47, 0LL, (char **)(a1 + 232));
  if ( DeviceInternal < 0
    || (v7 = (struct _VIDSCH_DEVICE **)(a1 + 248),
        v47 = 0LL,
        LODWORD(v47) = 17,
        v48 = 0LL,
        DeviceInternal = VidSchiCreateDeviceInternal(a1, (__int64)&v47, 0LL, (char **)(a1 + 248)),
        DeviceInternal < 0) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v4, v3, v6);
    *(_QWORD *)(v35 + 24) = *(_QWORD *)(a1 + 16);
    WdLogEvent5_WdAssertion(v35);
    return (unsigned int)DeviceInternal;
  }
  *((_QWORD *)&v47 + 1) = 0x700000000LL;
  v48 = 0LL;
  LODWORD(v47) = 268;
  v49 = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 144);
  SoftwareOnlyNodeForDriverEngine = VidSchiGetSoftwareOnlyNodeForDriverEngine(a1, 0);
  v9 = *v1;
  DWORD1(v47) = SoftwareOnlyNodeForDriverEngine;
  ContextInternal = VidSchiCreateContextInternal(v9, (int *)&v47, 0LL);
  *(_QWORD *)(a1 + 240) = ContextInternal;
  if ( !ContextInternal )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13);
    v36[3] = *(_QWORD *)(a1 + 16);
    v36[4] = 1063LL;
    goto LABEL_34;
  }
  for ( i = 0; i < *(_DWORD *)(a1 + 76); ++i )
  {
    v15 = *(_QWORD *)(a1 + 624);
    v16 = *(_DWORD *)(a1 + 696);
    v17 = v15 + 8LL * i;
    if ( i >= v16 )
      v17 = *(_QWORD *)(a1 + 624);
    if ( (*(_DWORD *)(*(_QWORD *)v17 + 12LL) & 2) == 0 )
    {
      v18 = v15 + 8LL * i;
      if ( i >= v16 )
        v18 = *(_QWORD *)(a1 + 624);
      if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 0x10) == 0 )
      {
        v48 = 0LL;
        v49 = 0;
        HIDWORD(v47) = 7;
        LODWORD(v47) = 20;
        DWORD1(v47) = i;
        v19 = VidSchiSchedulerNodeToDriverEngine(a1, i);
        v20 = *v1;
        DWORD2(v47) = v19;
        v21 = VidSchiCreateContextInternal(v20, (int *)&v47, 0LL);
        v23 = v15 + 8LL * i;
        if ( i >= v16 )
          v23 = v15;
        *(_QWORD *)(*(_QWORD *)v23 + 32LL) = v21;
        v24 = *(_QWORD *)(a1 + 624);
        v25 = v24 + 8LL * i;
        if ( i >= *(_DWORD *)(a1 + 696) )
          v25 = *(_QWORD *)(a1 + 624);
        if ( !*(_QWORD *)(*(_QWORD *)v25 + 32LL) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v25, v22, v24);
          v36[3] = i;
          v37 = *(_QWORD *)(a1 + 16);
          v36[5] = 1098LL;
          goto LABEL_33;
        }
      }
    }
    RtlSetBitEx(a1 + 480);
  }
  v26 = 0;
  if ( !*(_DWORD *)(a1 + 68) )
    return 0LL;
  while ( 1 )
  {
    v27 = *(_QWORD *)(a1 + 16);
    v48 = 0LL;
    v28 = *(_QWORD *)(v27 + 2560) + 360LL * v26;
    LODWORD(v27) = *(unsigned __int8 *)(a1 + v26 + 80);
    v49 = 0;
    v29 = v27 + *(unsigned __int16 *)(v28 + 2);
    LODWORD(v47) = 29;
    DWORD1(v47) = v29;
    v30 = *v7;
    *((_QWORD *)&v47 + 1) = v26 | 0x700000000LL;
    if ( *(_BYTE *)(a1 + 55) )
    {
      LODWORD(v47) = 2077;
      HwContextInternal = VidSchiCreateHwContextInternal(v30, (struct _VIDSCH_CONTEXT_DATA *)&v47, 0LL);
      v41 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(v41 + 8LL * v26) = HwContextInternal;
      if ( !*(_QWORD *)(*(_QWORD *)(a1 + 264) + 8LL * v26) )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(v41, v39, v40);
        v36[3] = v26;
        v37 = *(_QWORD *)(a1 + 16);
        v36[5] = 1147LL;
        goto LABEL_33;
      }
      goto LABEL_21;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v26) = VidSchiCreateContextInternal((__int64)v30, (int *)&v47, 0LL);
    v33 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * v26);
    if ( !v33 )
      break;
    *(_BYTE *)(v33 + 641) = 1;
    if ( (*(_BYTE *)(v28 + 16) & 0xC) == 0xC )
    {
      v42 = *(_DWORD *)(v28 + 20) + *(unsigned __int8 *)(a1 + v26 + 80);
      v43 = (__int64)*v7;
      LODWORD(v47) = v47 | 0x200;
      DWORD1(v47) = v42;
      *(_QWORD *)(*(_QWORD *)(a1 + 280) + 8LL * v26) = VidSchiCreateContextInternal(v43, (int *)&v47, 0LL);
      v46 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 8LL * v26);
      if ( !v46 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v44, v45);
        v36[3] = v26;
        v37 = *(_QWORD *)(a1 + 16);
        v36[5] = 1182LL;
        goto LABEL_33;
      }
      *(_BYTE *)(v46 + 641) = 1;
    }
LABEL_21:
    if ( ++v26 >= *(_DWORD *)(a1 + 68) )
      return 0LL;
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v31, v32);
  v36[3] = v26;
  v37 = *(_QWORD *)(a1 + 16);
  v36[5] = 1162LL;
LABEL_33:
  v36[4] = v37;
LABEL_34:
  WdLogEvent5_WdAssertion(v36);
  return (unsigned int)-1073741823;
}
