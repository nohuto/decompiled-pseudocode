/*
 * XREFs of IoConfigureCrashDump @ 0x1403C0230
 * Callers:
 *     NtSetSystemInformation @ 0x1406B1660 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     PoBroadcastSystemState @ 0x1409932E0 (PoBroadcastSystemState.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1403C0310 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x1403C03A0 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x1403C0480 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x1403CE4CC (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlGetHostNtSystemRoot @ 0x140622AA0 (RtlGetHostNtSystemRoot.c)
 *     IopInitializeCrashDump @ 0x1407B7D08 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x1408D0B44 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  struct _KTHREAD *CurrentThread; // rdi
  int v6; // ebx
  void *PageFileForCrashDump; // rsi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v11; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[16]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+60h] [rbp-38h]
  __int128 v14; // [rsp+70h] [rbp-28h]

  v4 = a1;
  DestinationString = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  v13 = 0LL;
  v14 = 0LL;
  if ( !(_BYTE)a2 )
    IopReadDumpRegistry(a1, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( v4 )
  {
    if ( v4 != 1 )
    {
      v6 = -1073741808;
      goto LABEL_7;
    }
    if ( ForceDumpDisabled )
    {
      v6 = -1073741637;
      goto LABEL_7;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v6 = -1073741772;
      goto LABEL_7;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v6 = IopDisableCrashDump();
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      HostNtSystemRoot = RtlGetHostNtSystemRoot();
      v11 = DestinationString;
      *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v6 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v6 = -1073741823;
      }
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    v6 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
LABEL_7:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3, a4);
  return (unsigned int)v6;
}
