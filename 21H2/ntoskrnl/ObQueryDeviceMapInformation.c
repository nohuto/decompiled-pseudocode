/*
 * XREFs of ObQueryDeviceMapInformation @ 0x14068ED10
 * Callers:
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14027DFF0 (PsGetProcessServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x140285C94 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObfDereferenceDeviceMap @ 0x14068F1A4 (ObfDereferenceDeviceMap.c)
 *     ObpReferenceDeviceMap @ 0x14068F360 (ObpReferenceDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, __int64 a2, int a3)
{
  char v5; // r12
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r14
  __int64 ProcessServerSilo; // rax
  __int64 *ServerSiloGlobals; // rax
  __int64 *v12; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r10d
  int v18; // eax
  unsigned int v19; // r8d
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  __int64 *v36; // rax
  __int128 v37; // [rsp+20h] [rbp-48h]
  __int128 v38; // [rsp+30h] [rbp-38h]
  __int64 v39; // [rsp+40h] [rbp-28h]

  v37 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v5 = 0;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v6 = a3 & 1;
  if ( a1 )
  {
    if ( KeGetCurrentThread()->ApcState.Process != a1 )
      return 3221225485LL;
  }
  v9 = ObpReferenceDeviceMap(0LL);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (__int64 *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (__int64 *)PsGetCurrentServerSiloGlobals(v8, v7);
  }
  v12 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v12 + 15), 0LL);
  if ( v9 )
  {
    v5 = 1;
  }
  else
  {
    v36 = (__int64 *)&a1[1].AffinityPadding[11];
    if ( !a1 )
      v36 = v12;
    v9 = *v36;
  }
  if ( v9 )
  {
    v14 = 0;
    v15 = v9;
    v16 = *(_QWORD *)(v9 + 8);
    if ( v16 && *(_QWORD *)(v16 + 304) )
      v15 = *(_QWORD *)(v16 + 304);
    v17 = *(_DWORD *)(v9 + 28);
    LODWORD(v37) = v17;
    v18 = 1;
    v19 = 2;
    do
    {
      *((_BYTE *)&v37 + v19 + 2) = *(_BYTE *)(v9 + v19 - 2 + 32);
      if ( (v17 & v18) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 2) = *(_BYTE *)(v19 - 2 + v15 + 32);
        LODWORD(v37) = v18 & *(_DWORD *)(v15 + 28) | v37;
      }
      v20 = 2 * v18;
      *((_BYTE *)&v37 + v19 + 3) = *(_BYTE *)(v9 + v19 - 1 + 32);
      if ( (v17 & v20) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 3) = *(_BYTE *)(v19 - 1 + v15 + 32);
        LODWORD(v37) = v20 & *(_DWORD *)(v15 + 28) | v37;
      }
      v21 = 2 * v20;
      *((_BYTE *)&v37 + v19 + 4) = *(_BYTE *)(v9 + v19 + 32);
      if ( (v17 & v21) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 4) = *(_BYTE *)(v19 + v15 + 32);
        LODWORD(v37) = v21 & *(_DWORD *)(v15 + 28) | v37;
      }
      v22 = 2 * v21;
      *((_BYTE *)&v37 + v19 + 5) = *(_BYTE *)(v9 + v19 + 1 + 32);
      if ( (v17 & v22) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 5) = *(_BYTE *)(v19 + 1 + v15 + 32);
        LODWORD(v37) = v22 & *(_DWORD *)(v15 + 28) | v37;
      }
      v23 = 2 * v22;
      *((_BYTE *)&v37 + v19 + 6) = *(_BYTE *)(v9 + v19 + 2 + 32);
      if ( (v17 & v23) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 6) = *(_BYTE *)(v19 + 2 + v15 + 32);
        LODWORD(v37) = v23 & *(_DWORD *)(v15 + 28) | v37;
      }
      v24 = 2 * v23;
      *((_BYTE *)&v37 + v19 + 7) = *(_BYTE *)(v9 + v19 + 3 + 32);
      if ( (v17 & v24) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 7) = *(_BYTE *)(v19 + 3 + v15 + 32);
        LODWORD(v37) = v24 & *(_DWORD *)(v15 + 28) | v37;
      }
      v25 = 2 * v24;
      *((_BYTE *)&v37 + v19 + 8) = *(_BYTE *)(v9 + v19 + 4 + 32);
      if ( (v17 & v25) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 8) = *(_BYTE *)(v19 + 4 + v15 + 32);
        LODWORD(v37) = v25 & *(_DWORD *)(v15 + 28) | v37;
      }
      v26 = 2 * v25;
      *((_BYTE *)&v37 + v19 + 9) = *(_BYTE *)(v9 + v19 + 5 + 32);
      if ( (v17 & v26) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 9) = *(_BYTE *)(v19 + 5 + v15 + 32);
        LODWORD(v37) = v26 & *(_DWORD *)(v15 + 28) | v37;
      }
      v27 = 2 * v26;
      *((_BYTE *)&v37 + v19 + 10) = *(_BYTE *)(v9 + v19 + 6 + 32);
      if ( (v17 & v27) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 10) = *(_BYTE *)(v19 + 6 + v15 + 32);
        LODWORD(v37) = v27 & *(_DWORD *)(v15 + 28) | v37;
      }
      v28 = 2 * v27;
      *((_BYTE *)&v37 + v19 + 11) = *(_BYTE *)(v9 + v19 + 7 + 32);
      if ( (v17 & v28) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 11) = *(_BYTE *)(v19 + 7 + v15 + 32);
        LODWORD(v37) = v28 & *(_DWORD *)(v15 + 28) | v37;
      }
      v29 = 2 * v28;
      *((_BYTE *)&v37 + v19 + 12) = *(_BYTE *)(v9 + v19 + 8 + 32);
      if ( (v17 & v29) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 12) = *(_BYTE *)(v19 + 8 + v15 + 32);
        LODWORD(v37) = v29 & *(_DWORD *)(v15 + 28) | v37;
      }
      v30 = 2 * v29;
      *((_BYTE *)&v37 + v19 + 13) = *(_BYTE *)(v9 + v19 + 9 + 32);
      if ( (v17 & v30) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 13) = *(_BYTE *)(v19 + 9 + v15 + 32);
        LODWORD(v37) = v30 & *(_DWORD *)(v15 + 28) | v37;
      }
      v31 = 2 * v30;
      *((_BYTE *)&v37 + v19 + 14) = *(_BYTE *)(v9 + v19 + 10 + 32);
      if ( (v17 & v31) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 14) = *(_BYTE *)(v19 + 10 + v15 + 32);
        LODWORD(v37) = v31 & *(_DWORD *)(v15 + 28) | v37;
      }
      v32 = 2 * v31;
      *((_BYTE *)&v37 + v19 + 15) = *(_BYTE *)(v9 + v19 + 11 + 32);
      if ( (v17 & v32) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 15) = *(_BYTE *)(v19 + 11 + v15 + 32);
        LODWORD(v37) = v32 & *(_DWORD *)(v15 + 28) | v37;
      }
      v33 = 2 * v32;
      *((_BYTE *)&v37 + v19 + 16) = *(_BYTE *)(v9 + v19 + 12 + 32);
      if ( (v17 & v33) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 16) = *(_BYTE *)(v19 + 12 + v15 + 32);
        LODWORD(v37) = v33 & *(_DWORD *)(v15 + 28) | v37;
      }
      v34 = 2 * v33;
      *((_BYTE *)&v37 + v19 + 17) = *(_BYTE *)(v9 + v19 + 13 + 32);
      if ( (v17 & v34) == 0 && !v6 )
      {
        *((_BYTE *)&v37 + v19 + 17) = *(_BYTE *)(v19 + 13 + v15 + 32);
        LODWORD(v37) = v34 & *(_DWORD *)(v15 + 28) | v37;
      }
      v18 = 2 * v34;
      v19 += 16;
    }
    while ( v19 - 2 < 0x20 );
    ExReleasePushLockEx((ULONG_PTR)(v12 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v5 == 1 )
      ObfDereferenceDeviceMap((PVOID)v9);
    *(_OWORD *)a2 = v37;
    *(_OWORD *)(a2 + 16) = v38;
    *(_DWORD *)(a2 + 32) = v39;
  }
  else
  {
    ExReleasePushLockEx((ULONG_PTR)(v12 + 15), 0LL);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741807;
  }
  return v14;
}
