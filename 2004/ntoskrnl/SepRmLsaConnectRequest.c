/*
 * XREFs of SepRmLsaConnectRequest @ 0x1407952D0
 * Callers:
 *     SepRmCommandServerThread @ 0x140795150 (SepRmCommandServerThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     PsGetServerSiloGlobals @ 0x14026D714 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140272080 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1402720A0 (PsAttachSiloToCurrentThread.c)
 *     PsGetProcessServerSilo @ 0x14027D870 (PsGetProcessServerSilo.c)
 *     PsIsHostSilo @ 0x140291F70 (PsIsHostSilo.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwAcceptConnectPort @ 0x1403F3600 (ZwAcceptConnectPort.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwOpenProcess @ 0x1403F3A80 (ZwOpenProcess.c)
 *     ZwCreateSection @ 0x1403F3F00 (ZwCreateSection.c)
 *     ZwCompleteConnectPort @ 0x1403F4980 (ZwCompleteConnectPort.c)
 *     ZwConnectPort @ 0x1403F49C0 (ZwConnectPort.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     SepRmVerifyLsaProtectionLevel @ 0x140795578 (SepRmVerifyLsaProtectionLevel.c)
 *     SepRmCleanupRmLsaState @ 0x140918C74 (SepRmCleanupRmLsaState.c)
 */

__int64 __fastcall SepRmLsaConnectRequest(__int64 a1)
{
  struct _DMA_ADAPTER *v1; // r14
  NTSTATUS v2; // eax
  struct _LIST_ENTRY *ProcessServerSilo; // rbx
  char *v4; // rdi
  bool IsHostSilo; // r15
  __int64 v6; // rdx
  int Section; // esi
  struct _LIST_ENTRY *v8; // rbx
  void *v9; // rcx
  unsigned int v11; // ebx
  HANDLE ProcessHandle; // [rsp+50h] [rbp-81h] BYREF
  PVOID Object; // [rsp+58h] [rbp-79h] BYREF
  __int128 v14; // [rsp+60h] [rbp-71h]
  __int128 v15; // [rsp+70h] [rbp-61h]
  __int128 v16; // [rsp+80h] [rbp-51h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-41h] BYREF
  __int128 v18; // [rsp+A0h] [rbp-31h]
  __int64 v19; // [rsp+B0h] [rbp-21h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v21; // [rsp+E8h] [rbp+17h]
  int v22; // [rsp+F0h] [rbp+1Fh]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v21 = 0LL;
  v22 = 0;
  v19 = 0LL;
  v14 = 0LL;
  v1 = 0LL;
  ProcessHandle = 0LL;
  v15 = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  v16 = 0LL;
  v18 = 0LL;
  DestinationString = 0LL;
  if ( ZwOpenProcess(&ProcessHandle, 0x28u, &ObjectAttributes, (PCLIENT_ID)(a1 + 8)) >= 0 )
  {
    Object = 0LL;
    v2 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    v1 = (struct _DMA_ADAPTER *)Object;
    if ( v2 >= 0 )
    {
      ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)Object);
      v4 = (char *)PsGetServerSiloGlobals((__int64)ProcessServerSilo) + 784;
      if ( !*(_QWORD *)v4 )
      {
        *(_QWORD *)v4 = ProcessHandle;
        SepRmVerifyLsaProtectionLevel(v4);
        LODWORD(v18) = 24;
        IsHostSilo = PsIsHostSilo((__int64)ProcessServerSilo);
        if ( !IsHostSilo )
          ObfReferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        Section = ZwAcceptConnectPort();
        if ( Section < 0 )
        {
          if ( !IsHostSilo )
            ObfDereferenceObjectWithTag(ProcessServerSilo, 0x74536553u);
        }
        else
        {
          Section = ZwCompleteConnectPort(*((_QWORD *)v4 + 3), v6);
          if ( Section >= 0 )
          {
            HIDWORD(v21) = 2;
            LOWORD(v22) = 257;
            *((_DWORD *)v4 + 12) = 4096;
            *((_DWORD *)v4 + 13) = 0;
            Section = ZwCreateSection((PHANDLE)v4 + 5, 0xF001Fu, 0LL, (PLARGE_INTEGER)v4 + 6, 4u, 0x8000000u, 0LL);
            if ( Section >= 0 )
            {
              LODWORD(v14) = 48;
              *((_QWORD *)&v14 + 1) = *((_QWORD *)v4 + 5);
              LODWORD(v15) = 0;
              *((_QWORD *)&v15 + 1) = *((unsigned int *)v4 + 12);
              v16 = 0LL;
              v8 = PsAttachSiloToCurrentThread(ProcessServerSilo);
              RtlInitUnicodeString(&DestinationString, L"\\SeLsaCommandPort");
              Section = ZwConnectPort((__int64)(v4 + 8), (__int64)&DestinationString);
              PsDetachSiloFromCurrentThread(v8);
              if ( Section >= 0 )
                Section = -1073741823;
            }
          }
        }
        SepRmCleanupRmLsaState(v4);
        v9 = (void *)*((_QWORD *)v4 + 5);
        if ( v9 )
        {
          ZwClose(v9);
          *((_QWORD *)v4 + 5) = 0LL;
        }
        if ( v1 )
          HalPutDmaAdapter(v1);
        return (unsigned int)Section;
      }
    }
    ZwClose(ProcessHandle);
  }
  Object = 0LL;
  v11 = ZwAcceptConnectPort();
  if ( v1 )
    HalPutDmaAdapter(v1);
  return v11;
}
