/*
 * XREFs of NtGetMUIRegistryInfo @ 0x1406ED910
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MUIBugCheck @ 0x1405B45E8 (MUIBugCheck.c)
 *     MigrateOOBELanguageToInstallationLanguage @ 0x1405B4610 (MigrateOOBELanguageToInstallationLanguage.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     MUIInitializeResourceLock @ 0x1407BD01C (MUIInitializeResourceLock.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtGetMUIRegistryInfo(ULONG Flags, PULONG DataSize, PVOID Data)
{
  __int64 v5; // r14
  __int64 v6; // rax
  ULONG v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char v9; // bl
  NTSTATUS v10; // esi
  int v12; // eax
  unsigned int Length; // [rsp+50h] [rbp-A8h]
  HANDLE Handle; // [rsp+58h] [rbp-A0h] BYREF
  struct _KEVENT *p_Event; // [rsp+60h] [rbp-98h] BYREF
  void *v16; // [rsp+68h] [rbp-90h]
  __int64 v17; // [rsp+70h] [rbp-88h]
  int v18; // [rsp+78h] [rbp-80h]
  int v19; // [rsp+7Ch] [rbp-7Ch]
  int v20; // [rsp+80h] [rbp-78h]
  int v21; // [rsp+84h] [rbp-74h]
  int v22; // [rsp+88h] [rbp-70h]
  int v23; // [rsp+8Ch] [rbp-6Ch]
  struct _KEVENT Event; // [rsp+90h] [rbp-68h] BYREF
  __int128 v25; // [rsp+A8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-40h]
  __int128 v27; // [rsp+C8h] [rbp-30h]
  char v28; // [rsp+118h] [rbp+20h]

  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  memset(&Event, 0, sizeof(Event));
  Handle = 0LL;
  v23 = 0;
  v28 = 0;
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
  v28 = 1;
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
      v12 = ++MEMORY[0xFFFFF780000003A4];
      if ( MUIRegistryInfo )
        *((_DWORD *)MUIRegistryInfo + 3) = v12;
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
  v16 = 0LL;
  v17 = 0LL;
  v18 = (unsigned __int16)PsInstallUILanguageId;
  v19 = 0;
  v20 = (unsigned __int16)PsMachineUILanguageId;
  v21 = 0;
  v22 = -1073741823;
  LODWORD(v25) = 48;
  *((_QWORD *)&v25 + 1) = 0LL;
  DWORD2(v26) = 512;
  *(_QWORD *)&v26 = 0LL;
  v27 = 0LL;
  v10 = PsCreateSystemThreadEx(
          (__int64)&Handle,
          0x1FFFFF,
          &v25,
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
      v10 = v22;
      if ( v22 < 0 )
      {
LABEL_54:
        MUIRegistryInfo = (PVOID)-1LL;
        LODWORD(MUIRegistryInfoSize) = 0;
        goto LABEL_27;
      }
      MUIRegistryInfo = v16;
      LODWORD(MUIRegistryInfoSize) = v17;
      if ( !HIDWORD(v17) )
        MUIBugCheck(32770);
      if ( !v19 )
      {
        if ( PsUILanguageComitted )
          MUIBugCheck(32769);
        MigrateOOBELanguageToInstallationLanguage();
      }
      if ( !v21 )
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
  if ( v28 )
  {
    ExReleaseResourceLite(MUIRegistryLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return v10;
}
