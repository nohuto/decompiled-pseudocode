/*
 * XREFs of ACPIGpeBuildEventMasks @ 0x1C001B8FC
 * Callers:
 *     ACPITableLoad @ 0x1C001F8F0 (ACPITableLoad.c)
 *     ACPITableUnload @ 0x1C0060860 (ACPITableUnload.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     AMLIIterateSiblingsNext @ 0x1C001BA54 (AMLIIterateSiblingsNext.c)
 *     ACPIGpeInstallRemoveIndex @ 0x1C001D2F0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00200A4 (ACPIGpeEnableDisableEvents.c)
 *     AMLIGetFirstChild @ 0x1C002BFAC (AMLIGetFirstChild.c)
 *     WPP_RECORDER_SF_d @ 0x1C005E894 (WPP_RECORDER_SF_d.c)
 */

void ACPIGpeBuildEventMasks()
{
  KIRQL v0; // di
  int v1; // eax
  __int64 v2; // rcx
  _QWORD *i; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rax
  int v6; // r8d
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // al
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int j; // ebx
  unsigned int *v14; // r10
  int v15; // edx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  v1 = AMLIGetNameSpaceObject("\\_GPE", 0LL, &v16, 0);
  if ( v1 >= 0 )
  {
    for ( i = (_QWORD *)AMLIGetFirstChild(v16); ; i = (_QWORD *)AMLIIterateSiblingsNext(v4) )
    {
      v4 = i;
      if ( !i )
        goto LABEL_14;
      v5 = *i;
      if ( *(_WORD *)(v5 + 66) == 8 && *(_BYTE *)(v5 + 40) == 95 )
      {
        v6 = *(_DWORD *)(v5 + 40) >> 8;
        v7 = (HIWORD(*(_DWORD *)(v5 + 40)) | *(_DWORD *)(v5 + 40) & 0xFF0000u) >> 8;
        v8 = (HIWORD(*(_DWORD *)(v5 + 40)) | *(_DWORD *)(v5 + 40) & 0xFF0000u) >> 16;
        if ( (unsigned __int8)(v8 - 48) > 9u )
        {
          if ( (unsigned __int8)(v8 - 65) > 5u )
            continue;
          LOBYTE(v8) = v8 - 55;
        }
        v9 = 16 * v8;
        v10 = HIBYTE(*(_DWORD *)(v5 + 40)) - 48;
        if ( (unsigned __int8)(v7 - 48) > 9u )
        {
          if ( (unsigned __int8)(v7 - 65) > 5u )
            continue;
          v10 = v7 - 55;
        }
        v11 = v10 | (unsigned int)v9;
        LOBYTE(v16) = 1;
        if ( (_BYTE)v6 == 76 )
        {
          v12 = 1LL;
LABEL_11:
          ACPIGpeInstallRemoveIndex(v11, v12, 1LL, &v16);
          continue;
        }
        if ( (_BYTE)v6 == 69 )
        {
          v12 = 0LL;
          goto LABEL_11;
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      0x15u,
      0xAu,
      (__int64)&WPP_3d35ab1e3a8c30c2a397092d9bf7b300_Traceguids,
      v1);
LABEL_14:
  for ( j = 0; j < GpeVectorTableSize; ++j )
  {
    v2 = 2LL * j;
    v14 = (unsigned int *)*((_QWORD *)GpeVectorTable + 2 * j + 1);
    if ( v14
      && !(unsigned __int8)ACPIGpeInstallRemoveIndex(*v14, v14[7] == 0, 0LL, (char *)v14 + 25)
      && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        14,
        10,
        (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids,
        j);
    }
  }
  LOBYTE(v2) = 1;
  ACPIGpeEnableDisableEvents(v2);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  KeReleaseSpinLock(&GpeTableLock, v0);
}
