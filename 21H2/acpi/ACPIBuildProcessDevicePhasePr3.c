/*
 * XREFs of ACPIBuildProcessDevicePhasePr3 @ 0x1C00155F0
 * Callers:
 *     <none>
 * Callees:
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015D80 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDevicePowerNodes @ 0x1C0015E24 (ACPIBuildDevicePowerNodes.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C0030590 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIWriteEventLogEntry @ 0x1C0054C98 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rax
  ULONG_PTR v9; // rdx
  unsigned int v10; // edx
  ULONG_PTR v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  void *v14; // rax
  void *v15; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax

  v4 = *(_QWORD *)(a1 + 40);
  v5 = a1 + 80;
  v6 = 0;
  if ( *(_QWORD *)(v4 + 448) || *(_QWORD *)(v4 + 400) )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_6;
    dword_1C0082908 = 0;
    pszDest = 0;
LABEL_31:
    FreeDataBuffs(v5, 1u);
    goto LABEL_6;
  }
  v8 = AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 861098079LL, a3, a4);
  *(_QWORD *)(v4 + 448) = v8;
  if ( !v8 )
    *(_QWORD *)(v4 + 448) = *(_QWORD *)(v4 + 440);
  v9 = *(_QWORD *)(a1 + 56);
  if ( v9 )
  {
    if ( *(_WORD *)(v5 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_6;
    }
    v18 = ACPIBuildDevicePowerNodes(v4, v9);
    dword_1C0082908 = 0;
    v6 = v18;
    pszDest = 0;
    goto LABEL_31;
  }
LABEL_6:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v4 + 960) & 0x400040) == 0 )
  {
    v10 = 0;
    v11 = v4 + 368;
    while ( !*(_QWORD *)v11 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 96LL) )
    {
      ++v10;
      v11 += 8LL;
      if ( v10 > 4 )
        goto LABEL_11;
    }
    _InterlockedOr64((volatile signed __int64 *)(v4 + 960), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, &AcpiBuildDeviceList);
  }
LABEL_11:
  if ( (*(_BYTE *)(v4 + 8) & 2) != 0 )
  {
    v17 = *(_QWORD *)(a1 + 56);
    if ( v17 )
      AMLIDereferenceHandleEx(v17);
    *(_QWORD *)(a1 + 56) = 0LL;
    v12 = 31;
  }
  else
  {
    v12 = 30;
  }
  *(_DWORD *)(a1 + 32) = v12;
  v13 = *(_QWORD *)(v4 + 8);
  v14 = &unk_1C00701BA;
  v15 = &unk_1C00701BA;
  if ( (v13 & 0x200000000000LL) != 0 )
  {
    v14 = *(void **)(v4 + 568);
    if ( (v13 & 0x400000000000LL) != 0 )
      v15 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      6,
      42,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v6,
      v4,
      (__int64)v14,
      (__int64)v15);
  }
  ACPIBuildCompleteMustSucceed(0LL);
  return v6;
}
