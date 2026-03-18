/*
 * XREFs of _MicrosoftTelemetryAssertTriggeredWorker@24 @ 0x24B8ED
 * Callers:
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     _TakeTelemetryAssertsLock@4 @ 0xD40BE (_TakeTelemetryAssertsLock@4.c)
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     _AreAssertsInitialized@0 @ 0xEAA46 (_AreAssertsInitialized@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     GetImageTuple @ 0x24B88D (GetImageTuple.c)
 *     __tlgCreate1Sz_char@8 @ 0x24BE8B (__tlgCreate1Sz_char@8.c)
 */

void __fastcall MicrosoftTelemetryAssertTriggeredWorker(unsigned int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v7; // ecx
  int *PoolWithTag; // edi
  unsigned int *LowPart; // eax
  unsigned int v10; // ebx
  __int64 v11; // rax
  bool v12; // cf
  _DWORD *v13; // eax
  int v14; // ecx
  unsigned int *v15; // eax
  unsigned int v16; // ebx
  __int64 v17; // rax
  unsigned int v18; // ecx
  int v19; // ett
  int ImageTuple; // ebx
  struct _FAST_MUTEX *v21; // ecx
  unsigned int v22; // edi
  int v23; // eax
  int *v24; // ecx
  unsigned int v25; // [esp+10h] [ebp-1B8h]
  unsigned int v26; // [esp+10h] [ebp-1B8h]
  unsigned int v27; // [esp+10h] [ebp-1B8h]
  int v28; // [esp+10h] [ebp-1B8h]
  int v29; // [esp+14h] [ebp-1B4h] BYREF
  int v30; // [esp+18h] [ebp-1B0h] BYREF
  int v31; // [esp+1Ch] [ebp-1ACh]
  int v32; // [esp+20h] [ebp-1A8h]
  unsigned int v33; // [esp+24h] [ebp-1A4h]
  int v34; // [esp+28h] [ebp-1A0h]
  int v35; // [esp+2Ch] [ebp-19Ch]
  int v36; // [esp+34h] [ebp-194h] BYREF
  unsigned int v37; // [esp+38h] [ebp-190h] BYREF
  int v38; // [esp+3Ch] [ebp-18Ch] BYREF
  int v39; // [esp+40h] [ebp-188h] BYREF
  int v40; // [esp+44h] [ebp-184h] BYREF
  int v41; // [esp+48h] [ebp-180h] BYREF
  int CurrentIrql; // [esp+4Ch] [ebp-17Ch] BYREF
  int v43; // [esp+50h] [ebp-178h] BYREF
  unsigned int v44; // [esp+54h] [ebp-174h] BYREF
  int v45; // [esp+58h] [ebp-170h] BYREF
  int v46; // [esp+5Ch] [ebp-16Ch] BYREF
  int v47; // [esp+60h] [ebp-168h] BYREF
  int v48; // [esp+64h] [ebp-164h] BYREF
  _DWORD v49[2]; // [esp+68h] [ebp-160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v50; // [esp+70h] [ebp-158h] BYREF
  int *v51; // [esp+90h] [ebp-138h]
  int v52; // [esp+94h] [ebp-134h]
  int v53; // [esp+98h] [ebp-130h]
  int v54; // [esp+9Ch] [ebp-12Ch]
  unsigned int *v55; // [esp+A0h] [ebp-128h]
  int v56; // [esp+A4h] [ebp-124h]
  int v57; // [esp+A8h] [ebp-120h]
  int v58; // [esp+ACh] [ebp-11Ch]
  int *v59; // [esp+B0h] [ebp-118h]
  int v60; // [esp+B4h] [ebp-114h]
  int v61; // [esp+B8h] [ebp-110h]
  int v62; // [esp+BCh] [ebp-10Ch]
  int *v63; // [esp+C0h] [ebp-108h]
  int v64; // [esp+C4h] [ebp-104h]
  int v65; // [esp+C8h] [ebp-100h]
  int v66; // [esp+CCh] [ebp-FCh]
  char v67[16]; // [esp+D0h] [ebp-F8h] BYREF
  int *v68; // [esp+E0h] [ebp-E8h]
  int v69; // [esp+E4h] [ebp-E4h]
  int v70; // [esp+E8h] [ebp-E0h]
  int v71; // [esp+ECh] [ebp-DCh]
  int *v72; // [esp+F0h] [ebp-D8h]
  int v73; // [esp+F4h] [ebp-D4h]
  int v74; // [esp+F8h] [ebp-D0h]
  int v75; // [esp+FCh] [ebp-CCh]
  _DWORD *v76; // [esp+100h] [ebp-C8h]
  int v77; // [esp+104h] [ebp-C4h]
  int v78; // [esp+108h] [ebp-C0h]
  int v79; // [esp+10Ch] [ebp-BCh]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+110h] [ebp-B8h] BYREF
  int *v81; // [esp+130h] [ebp-98h]
  int v82; // [esp+134h] [ebp-94h]
  int v83; // [esp+138h] [ebp-90h]
  int v84; // [esp+13Ch] [ebp-8Ch]
  unsigned int *v85; // [esp+140h] [ebp-88h]
  int v86; // [esp+144h] [ebp-84h]
  int v87; // [esp+148h] [ebp-80h]
  int v88; // [esp+14Ch] [ebp-7Ch]
  int *v89; // [esp+150h] [ebp-78h]
  int v90; // [esp+154h] [ebp-74h]
  int v91; // [esp+158h] [ebp-70h]
  int v92; // [esp+15Ch] [ebp-6Ch]
  int *v93; // [esp+160h] [ebp-68h]
  int v94; // [esp+164h] [ebp-64h]
  int v95; // [esp+168h] [ebp-60h]
  int v96; // [esp+16Ch] [ebp-5Ch]
  char v97[16]; // [esp+170h] [ebp-58h] BYREF
  int *v98; // [esp+180h] [ebp-48h]
  int v99; // [esp+184h] [ebp-44h]
  int v100; // [esp+188h] [ebp-40h]
  int v101; // [esp+18Ch] [ebp-3Ch]
  int *v102; // [esp+190h] [ebp-38h]
  int v103; // [esp+194h] [ebp-34h]
  int v104; // [esp+198h] [ebp-30h]
  int v105; // [esp+19Ch] [ebp-2Ch]
  int *p_CurrentIrql; // [esp+1A0h] [ebp-28h]
  int v107; // [esp+1A4h] [ebp-24h]
  int v108; // [esp+1A8h] [ebp-20h]
  int v109; // [esp+1ACh] [ebp-1Ch]
  char v110[20]; // [esp+1B0h] [ebp-18h] BYREF

  v33 = a1;
  if ( AreAssertsInitialized() || TakeTelemetryAssertsLock() )
    return;
  v7 = (int *)g_MicrosoftTelemetryAssertsTriggeredList;
  if ( (int *)g_MicrosoftTelemetryAssertsTriggeredList == &g_MicrosoftTelemetryAssertsTriggeredList )
  {
LABEL_6:
    PoolWithTag = (int *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x28u, 0x74727341u);
    if ( !PoolWithTag )
    {
LABEL_42:
      ExReleaseFastMutex(g_AssertFastMutex);
      return;
    }
    LowPart = (unsigned int *)_KeTickCount.LowPart;
    v49[0] = 0;
    v49[1] = 0;
    while ( 1 )
    {
      v10 = LowPart[1];
      v25 = *LowPart;
      if ( v10 == LowPart[2] )
        break;
      _mm_pause();
    }
    *PoolWithTag = v33;
    v11 = (__int64)(KeQueryTimeIncrement() * __PAIR64__(v10, v25)) / 10000;
    v12 = __CFADD__((_DWORD)v11, -60001);
    PoolWithTag[4] = 0;
    PoolWithTag[2] = v11 - 60001;
    v13 = PoolWithTag + 7;
    PoolWithTag[5] = 0;
    PoolWithTag[3] = v12 + HIDWORD(v11) - 1;
    PoolWithTag[6] = 0;
    v14 = g_MicrosoftTelemetryAssertsTriggeredList;
    if ( *(int **)(g_MicrosoftTelemetryAssertsTriggeredList + 4) != &g_MicrosoftTelemetryAssertsTriggeredList )
      __fastfail(3u);
    *v13 = g_MicrosoftTelemetryAssertsTriggeredList;
    PoolWithTag[8] = (int)&g_MicrosoftTelemetryAssertsTriggeredList;
    *(_DWORD *)(v14 + 4) = v13;
    g_MicrosoftTelemetryAssertsTriggeredList = (int)(PoolWithTag + 7);
  }
  else
  {
    while ( 1 )
    {
      PoolWithTag = v7 - 7;
      if ( *(v7 - 7) == a1 )
        break;
      v7 = (int *)*v7;
      if ( v7 == &g_MicrosoftTelemetryAssertsTriggeredList )
        goto LABEL_6;
    }
  }
  ++PoolWithTag[4];
  ++PoolWithTag[5];
  v15 = (unsigned int *)_KeTickCount.LowPart;
  v34 = 0;
  while ( 1 )
  {
    v16 = v15[1];
    if ( v16 == v15[2] )
      break;
    _mm_pause();
  }
  v26 = *v15;
  v17 = (__int64)(KeQueryTimeIncrement() * __PAIR64__(v16, v26)) / 10000;
  v32 = v17;
  v12 = (unsigned int)v17 < PoolWithTag[2];
  v18 = v17 - PoolWithTag[2];
  v31 = HIDWORD(v17);
  v19 = v12 + PoolWithTag[3];
  v30 = 0;
  v29 = 0;
  v35 = HIDWORD(v17) - v19;
  if ( HIDWORD(v17) == v19 && v18 <= 0xEA60 )
    goto LABEL_42;
  ImageTuple = GetImageTuple(v18, &v30, &v29);
  if ( ImageTuple && v33 >= 0x10000 && (unsigned int)(v29 + 0x10000) > 0x10000 && v33 <= v29 + 0x10000 )
    v27 = v33 - 0x10000;
  else
    v27 = 0;
  v21 = g_AssertFastMutex;
  PoolWithTag[2] = v32;
  PoolWithTag[3] = v31;
  v31 = PoolWithTag[4];
  v32 = PoolWithTag[5];
  v34 = PoolWithTag[6];
  ExReleaseFastMutex(v21);
  if ( (unsigned int)dword_279028 > 5 && _tlgKeywordOn(&dword_279028, 0x400000000000LL) )
  {
    v81 = &v36;
    v85 = &v37;
    v22 = v27;
    v36 = 10;
    v38 = ImageTuple != 0 ? v30 : 0;
    v89 = &v38;
    v82 = 0;
    v83 = 4;
    v39 = ImageTuple != 0 ? v29 : 0;
    v84 = 0;
    v37 = v27;
    v86 = 0;
    v87 = 4;
    v88 = 0;
    v90 = 0;
    v91 = 4;
    v92 = 0;
    v93 = &v39;
    v94 = 0;
    v95 = 4;
    v96 = 0;
    _tlgCreate1Sz_char(v97);
    v40 = v31;
    v98 = &v40;
    v41 = v32;
    v99 = 0;
    v100 = 4;
    v101 = 0;
    v102 = &v41;
    v103 = 0;
    v104 = 4;
    v105 = 0;
    CurrentIrql = KeGetCurrentIrql();
    v107 = 0;
    p_CurrentIrql = &CurrentIrql;
    v108 = 4;
    v109 = 0;
    _tlgCreate1Sz_char(v110);
    _tlgWriteTransfer_EtwWriteTransfer((int)&dword_279028, byte_257BF7, 0, 0, 0xBu, &UserData);
  }
  else
  {
    v22 = v27;
  }
  if ( dword_279000 && !v34 && !KeGetCurrentIrql() )
  {
    v23 = DbgkWerCaptureLiveKernelDump(L"TELASSERT", 465, v22, g_ModuleName, v30, v29, 0, 0, 0);
    v28 = v23;
    if ( (unsigned int)dword_279028 > 5 )
    {
      if ( _tlgKeywordOn(&dword_279028, 0x400000000000LL) )
      {
        v51 = &v43;
        v55 = &v44;
        v44 = v22;
        v43 = 10;
        v45 = ImageTuple != 0 ? v30 : 0;
        v59 = &v45;
        v52 = 0;
        v53 = 4;
        v54 = 0;
        v56 = 0;
        v58 = 0;
        v60 = 0;
        v62 = 0;
        v46 = ImageTuple != 0 ? v29 : 0;
        v63 = &v46;
        v64 = 0;
        v66 = 0;
        v57 = 4;
        v61 = 4;
        v65 = 4;
        _tlgCreate1Sz_char(v67);
        v47 = v31;
        v68 = &v47;
        v48 = v32;
        v72 = &v48;
        v49[0] = v28;
        v76 = v49;
        v69 = 0;
        v70 = 4;
        v71 = 0;
        v73 = 0;
        v74 = 4;
        v75 = 0;
        v77 = 0;
        v78 = 4;
        v79 = 0;
        _tlgWriteTransfer_EtwWriteTransfer((int)&dword_279028, byte_257B8E, 0, 0, 0xAu, &v50);
      }
      v23 = v28;
    }
    if ( !v23 && !TakeTelemetryAssertsLock() )
    {
      v24 = (int *)g_MicrosoftTelemetryAssertsTriggeredList;
      if ( (int *)g_MicrosoftTelemetryAssertsTriggeredList != &g_MicrosoftTelemetryAssertsTriggeredList )
      {
        while ( *(v24 - 7) != v33 )
        {
          v24 = (int *)*v24;
          if ( v24 == &g_MicrosoftTelemetryAssertsTriggeredList )
            goto LABEL_42;
        }
        ++*(v24 - 1);
      }
      goto LABEL_42;
    }
  }
}
