/*
 * XREFs of ACPIProcessorContainerStartDeviceWorker @ 0x1C005D6D0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x1C0002C90 (WPP_RECORDER_SF_qsLqss.c)
 */

_UNKNOWN **__fastcall ACPIProcessorContainerStartDeviceWorker(__int64 a1)
{
  __int64 DeviceExtension; // rax
  IRP *v3; // rsi
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  unsigned int MinorFunction; // ebp
  KIRQL v7; // r8
  __int64 i; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  char v12; // r8
  const char *v13; // rcx
  const char *v14; // rdx
  __int64 v15; // rax
  _UNKNOWN **result; // rax
  __int64 v17; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(*(_QWORD *)(a1 + 32));
  v3 = *(IRP **)(a1 + 40);
  v4 = (_QWORD *)DeviceExtension;
  v5 = 0LL;
  MinorFunction = v3->Tail.Overlay.CurrentStackLocation->MinorFunction;
  v7 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( !AcpiProcessorContainerHierarchyLocked )
  {
    for ( i = v4[94]; i; i = *(_QWORD *)(i + 752) )
    {
      if ( (*(_QWORD *)(i + 960) & 0x8000000000LL) != 0 )
      {
        v5 = i;
        break;
      }
    }
    v9 = v4 + 23;
    if ( v5 )
    {
      v10 = *(_QWORD **)(v5 + 208);
      if ( *v10 == v5 + 200 )
      {
        *v9 = v5 + 200;
        v4[24] = v10;
        *v10 = v9;
        *(_QWORD *)(v5 + 208) = v9;
LABEL_14:
        ++AcpiProcessorContainerCount;
        goto LABEL_15;
      }
    }
    else
    {
      v11 = (_QWORD *)qword_1C0081B08;
      if ( *(__int64 **)qword_1C0081B08 == &AcpiProcessorContainerRootList )
      {
        *v9 = &AcpiProcessorContainerRootList;
        v4[24] = v11;
        *v11 = v9;
        qword_1C0081B08 = (__int64)(v4 + 23);
        goto LABEL_14;
      }
    }
    __fastfail(3u);
  }
LABEL_15:
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v7);
  v3->IoStatus.Status = 0;
  v3->IoStatus.Information = 0LL;
  IofCompleteRequest(v3, 0);
  v12 = 0;
  v13 = (const char *)&unk_1C00701BA;
  v14 = (const char *)&unk_1C00701BA;
  if ( v4 )
  {
    v15 = v4[1];
    v12 = (char)v4;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)v4[71];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)v4[72];
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v17 = MinorFunction;
    if ( MinorFunction >= 0x1A )
      v17 = 26LL;
    return (_UNKNOWN **)WPP_RECORDER_SF_qsLqss(
                          (__int64)WPP_GLOBAL_Control->DeviceExtension,
                          4u,
                          5u,
                          0xBu,
                          (__int64)&WPP_66d879e7691833cab0aaa4978b270939_Traceguids,
                          (char)v3,
                          ACPIDispatchPnpTableNames[v17],
                          0,
                          v12,
                          v13,
                          v14);
  }
  return result;
}
