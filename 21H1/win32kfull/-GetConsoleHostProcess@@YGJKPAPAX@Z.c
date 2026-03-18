/*
 * XREFs of ?GetConsoleHostProcess@@YGJKPAPAX@Z @ 0x154885
 * Callers:
 *     _GetConsoleDesktop@16 @ 0x154940 (_GetConsoleDesktop@16.c)
 * Callees:
 *     _LockThreadByClientId@8 @ 0x1A8D2 (_LockThreadByClientId@8.c)
 */

NTSTATUS __fastcall GetConsoleHostProcess(void *a1, unsigned int *a2)
{
  NTSTATUS result; // eax
  HANDLE ThreadProcessId; // esi
  NTSTATUS v5; // esi
  unsigned int v6; // ecx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-2Ch] BYREF
  _CLIENT_ID ClientId; // [esp+20h] [ebp-14h] BYREF
  int ProcessInformation; // [esp+28h] [ebp-Ch] BYREF
  void *ProcessHandle; // [esp+2Ch] [ebp-8h] BYREF
  PETHREAD Thread; // [esp+30h] [ebp-4h] BYREF

  Thread = 0;
  ProcessHandle = 0;
  ProcessInformation = 0;
  result = LockThreadByClientId(a1, &Thread);
  if ( result >= 0 )
  {
    ThreadProcessId = PsGetThreadProcessId(Thread);
    ObfDereferenceObject(Thread);
    ObjectAttributes.Length = 24;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    ClientId.UniqueProcess = ThreadProcessId;
    ClientId.UniqueThread = 0;
    result = ZwOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId);
    if ( result >= 0 )
    {
      v5 = ZwQueryInformationProcess(ProcessHandle, ProcessIoPriority|ProcessUserModeIOPL, &ProcessInformation, 4u, 0);
      ZwClose(ProcessHandle);
      if ( v5 >= 0 )
      {
        if ( (ProcessInformation & 1) != 0 )
          v6 = ProcessInformation & 0xFFFFFFFE;
        else
          v6 = 0;
        *a2 = v6;
      }
      return v5;
    }
  }
  return result;
}
