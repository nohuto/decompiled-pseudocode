/*
 * XREFs of WmipFindSMBiosStructure @ 0x14092E1F8
 * Callers:
 *     WmipGetSMBiosEventlog @ 0x14092E434 (WmipGetSMBiosEventlog.c)
 *     WmipGetSysIds @ 0x14092E628 (WmipGetSysIds.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MmMapIoSpaceEx @ 0x140335F40 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x1403373E0 (MmUnmapIoSpace.c)
 */

__int64 __fastcall WmipFindSMBiosStructure(char a1, _QWORD *a2, PVOID *a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v9; // edi
  __int64 v10; // rax
  _BYTE *v11; // rcx
  _BYTE *v12; // rdx
  _WORD *i; // rcx
  int v15; // [rsp+20h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&WmipSMBiosLock, 1u);
  v9 = 0;
  v15 = 0;
  if ( WmipSMBiosTablePhysicalAddress )
  {
    v10 = MmMapIoSpaceEx(WmipSMBiosTablePhysicalAddress, (unsigned int)WmipSMBiosTableLength, 4u);
    *a3 = (PVOID)v10;
    if ( v10 )
    {
      *a4 = WmipSMBiosTableLength;
      v11 = *a3;
      goto LABEL_7;
    }
    v9 = -1073741670;
  }
  else
  {
    v9 = -1073741823;
  }
  v11 = 0LL;
  v15 = v9;
LABEL_7:
  if ( v9 < 0 )
  {
LABEL_20:
    ExReleaseResourceLite(&WmipSMBiosLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)v15;
  }
  *a2 = 0LL;
  v12 = &v11[(unsigned int)WmipSMBiosTableLength];
  v15 = -1073741823;
  while ( v11 < v12 )
  {
    if ( *v11 == a1 )
    {
      *a2 = v11;
      v15 = 0;
      break;
    }
    for ( i = &v11[(unsigned __int8)v11[1]]; *i && i < (_WORD *)v12; i = (_WORD *)((char *)i + 1) )
      ;
    v11 = i + 1;
  }
  if ( v15 < 0 )
  {
    if ( *a3 )
      MmUnmapIoSpace(*a3, (unsigned int)*a4);
    goto LABEL_20;
  }
  return (unsigned int)v15;
}
