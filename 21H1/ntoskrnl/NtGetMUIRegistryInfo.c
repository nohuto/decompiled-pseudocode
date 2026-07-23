/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1406CC610
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MUIBugCheck @ 0x1405B3EC8 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B3EF0 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ProbeForWrite @ 0x1405E9480 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x1407B9EAC (MUIInitializeResourceLock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bl
  NTSTATUS v10; // esi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v15; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  HANDLE Handle; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp-98h] BYREF
  void *v19; // [rsp+68h] [rbp-90h]
  __int64 v20; // [rsp+70h] [rbp-88h]
  int v21; // [rsp+78h] [rbp-80h]
  int v22; // [rsp+7Ch] [rbp-7Ch]
  int v23; // [rsp+80h] [rbp-78h]
  int v24; // [rsp+84h] [rbp-74h]
  int v25; // [rsp+88h] [rbp-70h]
  int v26; // [rsp+8Ch] [rbp-6Ch]
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v28; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-40h]
  __int128 v30; // [rsp+C8h] [rbp-30h]
  char v31; // [rsp+118h] [rbp+20h]

  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v26 = 0;
  v31 = 0;
  if ( !KeGetCurrentThread()->PreviousMode || InitSafeBootMode )
    goto LABEL_46;
  if ( !DataSize )
  {
    if ( (Flags & 0xA) == 0 )
      goto LABEL_47;
    Length = 0;
    v5 = 0x7FFFFFFF0000LL;
    goto LABEL_11;
  }
  v5 = 0x7FFFFFFF0000LL;
  v6 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v6 = (__int64)DataSize;
  Length = *(_DWORD *)v6;
  if ( !*(_DWORD *)v6 )
  {
LABEL_11:
    if ( Data )
      goto LABEL_47;
    goto LABEL_12;
  }
  if ( !Data )
    goto LABEL_47;
LABEL_12:
  v7 = 1;
  if ( Flags )
    v7 = Flags;
  if ( (v7 & 0xFFFFFFF4) != 0 )
    goto LABEL_47;
  if ( !MUIRegistryLock )
  {
    v10 = MUIInitializeResourceLock(&MUIRegistryLock);
    if ( (v10 & 0xC0000000) == 0xC0000000 )
      goto LABEL_27;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(MUIRegistryLock, 1u);
  v31 = 1;
  if ( MUIRegistryInfo == (PVOID)-1LL )
  {
    if ( (v7 & 2) != 0 )
    {
      MUIRegistryInfo = 0LL;
      LODWORD(MUIRegistryInfoSize) = 0;
LABEL_45:
      v10 = 0;
      goto LABEL_27;
    }
LABEL_46:
    v10 = -1073741823;
    goto LABEL_27;
  }
  if ( (v7 & 1) == 0 )
  {
    if ( (v7 & 2) != 0 )
    {
      if ( MUIRegistryInfo )
      {
        ExFreePoolWithTag(MUIRegistryInfo, 0);
        MUIRegistryInfo = 0LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        if ( (v7 & 8) != 0 )
          ++MEMORY[0xFFFFF780000003A4];
      }
      goto LABEL_45;
    }
    if ( (v7 & 8) != 0 )
    {
      v15 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v15;
      goto LABEL_45;
    }
LABEL_47:
    v10 = -1073741811;
    goto LABEL_27;
  }
  v9 = 0;
  if ( MUIRegistryInfo )
    goto LABEL_19;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  p_Event = &Event;
  v19 = 0LL;
  v20 = 0LL;
  v21 = (unsigned __int16)PsInstallUILanguageId;
  v22 = 0;
  v23 = (unsigned __int16)PsMachineUILanguageId;
  v24 = 0;
  v25 = -1073741823;
  LODWORD(v28) = 48;
  *((_QWORD *)&v28 + 1) = 0LL;
  DWORD2(v29) = 512;
  *(_QWORD *)&v29 = 0LL;
  v30 = 0LL;
  v10 = PsCreateSystemThreadEx(
          (__int64)&Handle,
          0x1FFFFFu,
          &v28,
          0LL,
          0LL,
          (__int64)MUIRegistrySystemRoutine,
          (__int64)&p_Event,
          0LL,
          0LL);
  if ( v10 >= 0 )
  {
    ZwClose(Handle);
    v10 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    if ( v10 >= 0 )
    {
      v10 = v25;
      if ( v25 < 0 )
      {
LABEL_54:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_27;
      }
      MUIRegistryInfo = v19;
      LODWORD(MUIRegistryInfoSize) = v20;
      if ( !HIDWORD(v20) )
        MUIBugCheck(32770);
      if ( !v22 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v24 )
        PsMachineUILanguageId = PsInstallUILanguageId;
    }
  }
  if ( v10 < 0 )
    goto LABEL_54;
LABEL_19:
  if ( Length )
  {
    if ( Length < (unsigned int)MUIRegistryInfoSize )
    {
      v10 = -1073741789;
      goto LABEL_23;
    }
    v9 = 1;
  }
  v10 = 0;
LABEL_23:
  if ( (unsigned __int64)DataSize < 0x7FFFFFFF0000LL )
    v5 = (__int64)DataSize;
  *(_DWORD *)v5 = *(_DWORD *)v5;
  *DataSize = MUIRegistryInfoSize;
  if ( v9 )
  {
    ProbeForWrite(Data, Length, 1u);
    memset(Data, 0, Length);
    memmove(Data, MUIRegistryInfo, (unsigned int)MUIRegistryInfoSize);
  }
LABEL_27:
  if ( v31 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  return v10;
}
