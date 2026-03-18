/*
 * XREFs of FxFreeDriverGlobals @ 0x1C0056EE4
 * Callers:
 *     FxLibraryCommonUnregisterClient @ 0x1C0041E1C (FxLibraryCommonUnregisterClient.c)
 * Callees:
 *     <none>
 */

void __fastcall FxFreeDriverGlobals(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  char *DriverName; // rbx
  KIRQL v3; // al
  __int64 v4; // r8
  char **v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rdi
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx

  DriverName = DriverGlobals[-8].DriverName;
  v3 = KeAcquireSpinLockRaiseToDpc(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock);
  v4 = *(_QWORD *)DriverName;
  if ( *(char **)(*(_QWORD *)DriverName + 8LL) != DriverName
    || (v5 = (char **)*((_QWORD *)DriverName + 1), *v5 != DriverName) )
  {
    __fastfail(3u);
  }
  *v5 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  *((_QWORD *)DriverName + 1) = DriverName;
  *(_QWORD *)DriverName = DriverName;
  KeReleaseSpinLock(&FxLibraryGlobals.FxDriverGlobalsListLock.m_Lock, v3);
  v6 = *((_QWORD *)DriverName + 10);
  if ( v6 )
  {
    v7 = *(_QWORD **)(v6 + 400);
    if ( v7 )
    {
      do
      {
        v8 = v7;
        v7 = (_QWORD *)v7[49];
        ExFreePoolWithTag(v8, 0);
      }
      while ( v7 );
      v6 = *((_QWORD *)DriverName + 10);
    }
    if ( *(_QWORD *)v6 )
    {
      ExFreePoolWithTag(*(PVOID *)v6, 0);
      **((_QWORD **)DriverName + 10) = 0LL;
      v6 = *(_QWORD *)&DriverGlobals[-7].DriverName[24];
    }
    *(_BYTE *)(v6 + 432) = 0;
    ExFreePoolWithTag(*((PVOID *)DriverName + 10), 0);
    *((_QWORD *)DriverName + 10) = 0LL;
  }
  v9 = (void *)*((_QWORD *)DriverName + 41);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  v10 = (void *)*((_QWORD *)DriverName + 52);
  DriverName[48] = 0;
  if ( v10 )
  {
    ExFreePoolWithTag(v10, 0);
    *((_QWORD *)DriverName + 52) = 0LL;
  }
  ExFreePoolWithTag(DriverName, 0);
}
