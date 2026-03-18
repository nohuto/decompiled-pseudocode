/*
 * XREFs of ACPIVectorConnect @ 0x1C00618E0
 * Callers:
 *     ACPIVectorConnect2 @ 0x1C0061A80 (ACPIVectorConnect2.c)
 *     ACPIEcConnectGpeVector @ 0x1C00AD498 (ACPIEcConnectGpeVector.c)
 * Callees:
 *     ACPIGpeInstallRemoveIndex @ 0x1C001D2F0 (ACPIGpeInstallRemoveIndex.c)
 *     ACPIGpeValidIndex @ 0x1C001D604 (ACPIGpeValidIndex.c)
 *     ACPIGpeEnableDisableEvents @ 0x1C00200A4 (ACPIGpeEnableDisableEvents.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIVectorInstall @ 0x1C0061EF8 (ACPIVectorInstall.c)
 */

__int64 __fastcall ACPIVectorConnect(__int64 a1, unsigned int a2, int a3, char a4, __int64 a5, __int64 a6, char **a7)
{
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  char *v13; // rdi
  KIRQL v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xEu,
      0xBu,
      (__int64)&WPP_7b0d4207db2a3169cd3bb4e871adee9d_Traceguids);
  v10 = 0;
  *a7 = 0LL;
  if ( !*((_WORD *)AcpiInformation + 51) )
    return 3221225473LL;
  if ( !ACPIGpeValidIndex(a2) )
    return 3221225712LL;
  Pool2 = ExAllocatePool2(64LL, 32LL, 1735418689LL);
  v13 = (char *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)Pool2 = a2;
  *(_QWORD *)(Pool2 + 8) = a5;
  *(_QWORD *)(Pool2 + 16) = a6;
  *(_DWORD *)(Pool2 + 28) = a3;
  *(_BYTE *)(Pool2 + 24) = a4;
  v14 = KeAcquireSpinLockRaiseToDpc(&GpeTableLock);
  ACPIGpeEnableDisableEvents(0, v15);
  if ( ACPIGpeInstallRemoveIndex(a2, a3 == 0, 0, v13 + 25) )
  {
    if ( (unsigned __int8)ACPIVectorInstall(a2, v13) )
    {
      *a7 = v13;
      goto LABEL_13;
    }
    ACPIGpeInstallRemoveIndex(a2, 2, 0, v13 + 25);
  }
  ExFreePoolWithTag(v13, 0);
  v10 = -1073741823;
LABEL_13:
  ACPIGpeEnableDisableEvents(1, v16);
  KeReleaseSpinLock(&GpeTableLock, v14);
  return v10;
}
