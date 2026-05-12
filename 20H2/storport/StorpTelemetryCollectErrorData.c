/*
 * XREFs of StorpTelemetryCollectErrorData @ 0x1C0006C5C
 * Callers:
 *     RaidUnitCompleteRequest @ 0x1C00079D0 (RaidUnitCompleteRequest.c)
 * Callees:
 *     StorpAreTelemetryErrorsEqual @ 0x1C0006EB0 (StorpAreTelemetryErrorsEqual.c)
 *     StorpTelemetryConstructErrorEntry @ 0x1C0006EE4 (StorpTelemetryConstructErrorEntry.c)
 *     StorpTelemetrySendUnitUniqueErrorData @ 0x1C000CB7C (StorpTelemetrySendUnitUniqueErrorData.c)
 *     __security_check_cookie @ 0x1C001CB10 (__security_check_cookie.c)
 */

__int64 __fastcall StorpTelemetryCollectErrorData(__int64 a1, int a2, int a3, __int64 a4)
{
  int v6; // eax
  __int64 v7; // xmm4_8
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int128 v10; // xmm0
  __int64 v11; // xmm1_8
  int v12; // eax
  unsigned __int8 v13; // di
  char v14; // dl
  unsigned __int8 v15; // cl
  int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  int v27; // eax
  int v28; // eax
  bool v29; // cc
  bool v30; // zf
  int v31; // eax
  __int64 v32; // [rsp+30h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-31h] BYREF
  __int128 v34; // [rsp+50h] [rbp-19h]
  __int128 v35; // [rsp+60h] [rbp-9h]
  __int128 v36; // [rsp+70h] [rbp+7h] BYREF
  __int128 v37; // [rsp+80h] [rbp+17h]
  __int64 v38; // [rsp+90h] [rbp+27h]

  v38 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v36 = 0LL;
  v37 = 0LL;
  StorpTelemetryConstructErrorEntry(a1, a2, a3, a4, (__int64)&v36);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 2320), &LockHandle);
  v6 = *(_DWORD *)(a1 + 2328);
  v32 = *(_QWORD *)(a1 + 2376);
  v7 = v32;
  v8 = *(_OWORD *)(a1 + 2344);
  v9 = *(_OWORD *)(a1 + 2360);
  v10 = v37;
  *(_OWORD *)(a1 + 2344) = v36;
  v11 = v38;
  *(_OWORD *)(a1 + 2360) = v10;
  *(_QWORD *)(a1 + 2376) = v11;
  v34 = v8;
  v35 = v9;
  if ( v6 != -1 )
    *(_DWORD *)(a1 + 2328) = v6 + 1;
  v12 = *(unsigned __int8 *)(a4 + 2);
  if ( (_BYTE)v12 == 40 )
    v12 = *(_DWORD *)(a4 + 20);
  v13 = 0;
  if ( !v12 && ((BYTE5(v36) - 8) & 0x5D) == 0 )
  {
    v27 = *(_DWORD *)(a1 + 2332);
    if ( v27 != -1 )
      *(_DWORD *)(a1 + 2332) = v27 + 1;
  }
  v15 = BYTE4(v36);
  v14 = BYTE3(v36);
  if ( BYTE3(v36) == 93
    && BYTE4(v36) >= 0x10u
    && (BYTE4(v36) <= 0x1Cu || BYTE4(v36) == 50 || (unsigned __int8)(BYTE4(v36) - 66) <= 1u) )
  {
    v28 = *(_DWORD *)(a1 + 2336);
    if ( v28 != -1 )
      *(_DWORD *)(a1 + 2336) = v28 + 1;
  }
  if ( BYTE2(v36) == 3 )
  {
    if ( v14 != 50 )
      goto LABEL_10;
    goto LABEL_33;
  }
  if ( BYTE2(v36) == 4 )
  {
    if ( v14 == 3 )
    {
LABEL_48:
      v30 = v15 == 0;
LABEL_49:
      if ( !v30 )
        goto LABEL_10;
      goto LABEL_50;
    }
    if ( v14 != 9 )
    {
      if ( v14 == 21 )
      {
        v30 = v15 == 1;
        goto LABEL_49;
      }
      if ( v14 == 25 )
      {
        v29 = v15 <= 3u;
LABEL_35:
        if ( !v29 )
          goto LABEL_10;
LABEL_50:
        v31 = *(_DWORD *)(a1 + 2340);
        if ( v31 != -1 )
          *(_DWORD *)(a1 + 2340) = v31 + 1;
        goto LABEL_10;
      }
      if ( v14 != 50 )
      {
        if ( v14 != 62 )
        {
          if ( (unsigned __int8)(v14 - 65) <= 1u )
            goto LABEL_50;
          if ( v14 != 68 )
          {
            if ( v14 == 76 )
              goto LABEL_50;
            if ( v14 != 85 )
              goto LABEL_10;
          }
          goto LABEL_48;
        }
        v15 -= 3;
      }
    }
LABEL_33:
    v29 = v15 <= 1u;
    goto LABEL_35;
  }
LABEL_10:
  v16 = *(_DWORD *)(a1 + 2328);
  if ( ((v16 + 1) & 0xFFFFFFFD) != 0 )
  {
    v17 = v16 - 1;
    if ( v17 <= 0xA )
    {
      v19 = v17 - 1;
    }
    else
    {
      v18 = rand();
      v8 = v34;
      v9 = v35;
      v7 = v32;
      v19 = v18 % v17;
    }
    if ( (unsigned int)v19 < 0xA )
    {
      v24 = 5 * v19;
      *(_OWORD *)(a1 + 8 * v24 + 2384) = v8;
      *(_OWORD *)(a1 + 8 * v24 + 2400) = v9;
      *(_QWORD *)(a1 + 8 * v24 + 2416) = v7;
    }
  }
  while ( 1 )
  {
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(a1 + 2344, a1 + 40LL * v13 + 2784, v13, 5LL * v13) == 1 )
    {
      *(_DWORD *)(a1 + 40 * v20 + 2816) = *(_DWORD *)(a1 + 8 * v21 + 2816) + 1;
      goto LABEL_17;
    }
    v36 = 0LL;
    v38 = 0LL;
    v37 = 0LL;
    if ( (unsigned __int8)StorpAreTelemetryErrorsEqual(v22 + 2784, &v36, v20, v21) == 1 )
      break;
    if ( ++v13 >= 0xAu )
      goto LABEL_17;
  }
  v26 = a1 + 2784 + 40 * v25;
  *(_OWORD *)v26 = *(_OWORD *)(a1 + 2344);
  *(_OWORD *)(v26 + 16) = *(_OWORD *)(a1 + 2360);
  *(_QWORD *)(v26 + 32) = *(_QWORD *)(a1 + 2376);
  *(_DWORD *)(a1 + 40 * v25 + 2816) = 1;
  if ( *(_DWORD *)(a1 + 3280) != 15 || ((*(_BYTE *)v26 - 6) & 0xFD) != 0 )
    StorpTelemetrySendUnitUniqueErrorData(a1);
LABEL_17:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return 0LL;
}
