/*
 * XREFs of ExpSystemErrorHandler2 @ 0x1409B3F30
 * Callers:
 *     ExpSystemErrorHandler @ 0x1404098F0 (ExpSystemErrorHandler.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 *     PsGetCurrentServerSilo @ 0x14027DF30 (PsGetCurrentServerSilo.c)
 *     RtlStringCbPrintfA @ 0x1403AD714 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strcat_s @ 0x1403D7E40 (strcat_s.c)
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     RtlFindMessage @ 0x1405ED770 (RtlFindMessage.c)
 *     RtlUnicodeStringToOemString @ 0x1405F3BC0 (RtlUnicodeStringToOemString.c)
 *     RtlxUnicodeStringToOemSize @ 0x1405F41D0 (RtlxUnicodeStringToOemSize.c)
 *     PsQuerySystemDllInfo @ 0x1406436FC (PsQuerySystemDllInfo.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 *     RtlUnicodeStringToAnsiString @ 0x1406DD260 (RtlUnicodeStringToAnsiString.c)
 *     MmLockPagableSectionByHandle @ 0x1407064A0 (MmLockPagableSectionByHandle.c)
 *     RtlxUnicodeStringToAnsiSize @ 0x14075DD50 (RtlxUnicodeStringToAnsiSize.c)
 *     PoShutdownBugCheck @ 0x1408E7720 (PoShutdownBugCheck.c)
 *     PsTerminateServerSilo @ 0x140905E60 (PsTerminateServerSilo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall ExpSystemErrorHandler2(ULONG MessageId, unsigned int a2, int a3, const void *a4, char a5)
{
  unsigned int v8; // eax
  unsigned int v9; // edi
  __int64 i; // rbx
  char *Buffer; // rax
  char *v12; // r14
  char *v13; // rsi
  char *v14; // rbx
  __int64 SystemDllInfo; // rax
  void *v16; // r10
  unsigned __int16 v17; // di
  char *PoolWithTag; // rax
  char *v19; // rax
  __int64 v20; // rdi
  BYTE *Text; // r13
  __int64 v22; // rax
  unsigned int v23; // r14d
  char *v24; // rax
  char *v25; // rax
  int j; // edi
  char *v27; // rbx
  __int64 CurrentServerSilo; // rax
  int v29; // [rsp+40h] [rbp-218h]
  NTSTATUS v30; // [rsp+50h] [rbp-208h]
  PMESSAGE_RESOURCE_ENTRY MessageEntry; // [rsp+68h] [rbp-1F0h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-1E8h] BYREF
  _STRING SourceString; // [rsp+80h] [rbp-1D8h] BYREF
  _STRING v34; // [rsp+90h] [rbp-1C8h] BYREF
  unsigned int v35; // [rsp+A0h] [rbp-1B8h]
  _DWORD BugCheckParameter1[3]; // [rsp+A4h] [rbp-1B4h]
  _STRING DestinationString; // [rsp+B0h] [rbp-1A8h] BYREF
  ULONG_PTR BugCheckParameter2[2]; // [rsp+C0h] [rbp-198h] BYREF
  __int128 v39; // [rsp+D0h] [rbp-188h]
  __int64 v40; // [rsp+E0h] [rbp-178h]
  char pszFormat[40]; // [rsp+E8h] [rbp-170h] BYREF
  char pszDest[256]; // [rsp+110h] [rbp-148h] BYREF

  BugCheckParameter1[0] = MessageId;
  *(_QWORD *)&BugCheckParameter1[1] = a4;
  *(_QWORD *)&DestinationString.Length = 0LL;
  MessageEntry = 0LL;
  SourceString = 0LL;
  UnicodeString = 0LL;
  v34 = 0LL;
  v8 = 5;
  if ( a2 <= 5 )
    v8 = a2;
  v9 = v8;
  v35 = v8;
  pszFormat[0] = 0;
  *(_OWORD *)BugCheckParameter2 = 0LL;
  v39 = 0LL;
  v40 = 0LL;
  memmove(BugCheckParameter2, a4, 8LL * v8);
  DestinationString.Buffer = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v29 = i;
    if ( (unsigned int)i >= v9 )
      break;
    if ( _bittest(&a3, i) )
    {
      strcat_s(pszFormat, 0x20uLL, " %s");
      v30 = RtlUnicodeStringToAnsiString(&DestinationString, *((PCUNICODE_STRING *)a4 + i), 1u);
      Buffer = (char *)L"???";
      if ( v30 >= 0 )
        Buffer = DestinationString.Buffer;
      BugCheckParameter2[(unsigned int)i] = (ULONG_PTR)Buffer;
    }
    else
    {
      strcat_s(pszFormat, 0x20uLL, " %x");
    }
  }
  strcat_s(pszFormat, 0x20uLL, "\n");
  v12 = pszFormat;
  v13 = "Unknown Hard Error";
  v14 = "Unknown Hard Error";
  SystemDllInfo = PsQuerySystemDllInfo(0);
  if ( SystemDllInfo )
  {
    v16 = *(void **)(SystemDllInfo + 24);
    if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
      v16 = *(void **)(SystemDllInfo + 32);
    if ( RtlFindMessage(v16, 0xBu, (_BYTE)NlsMbCodePageTag != 0 ? 0x409 : 0, MessageId, &MessageEntry) < 0 )
    {
      v14 = "Unknown Hard Error";
      v12 = "Unknown Hard Error";
      goto LABEL_42;
    }
    if ( (MessageEntry->Flags & 1) != 0 )
    {
      RtlInitUnicodeString(&UnicodeString, (PCWSTR)MessageEntry->Text);
      v17 = RtlxUnicodeStringToAnsiSize(&UnicodeString);
      SourceString.Length = v17;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v17 + 16LL, 0x20727245u);
      v14 = PoolWithTag;
      if ( !PoolWithTag )
      {
LABEL_20:
        v14 = "Unknown Hard Error";
        v19 = "Unknown Hard Error";
        v20 = -1LL;
        goto LABEL_28;
      }
      SourceString.MaximumLength = v17 + 16;
      SourceString.Buffer = PoolWithTag;
      if ( RtlUnicodeStringToAnsiString(&SourceString, &UnicodeString, 0) < 0 )
      {
        ExFreePoolWithTag(v14, 0);
        goto LABEL_20;
      }
      v20 = -1LL;
    }
    else
    {
      Text = MessageEntry->Text;
      v20 = -1LL;
      v22 = -1LL;
      do
        ++v22;
      while ( Text[v22] );
      v23 = v22 + 16;
      v24 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(v22 + 16), 0x20727245u);
      v14 = v24;
      if ( !v24 )
      {
        v19 = "Unknown Hard Error";
        v14 = "Unknown Hard Error";
LABEL_28:
        if ( v14 == "Unknown Hard Error" )
        {
          j = v29;
        }
        else
        {
          v25 = v14;
          do
            ++v20;
          while ( v14[v20] );
          while ( (_DWORD)v20 && *v25 >= 32 )
          {
            ++v25;
            LODWORD(v20) = v20 - 1;
          }
          *v25 = 0;
          v19 = v25 + 1;
          for ( j = v20 - 1; j && *v19 && *v19 <= 32; --j )
            ++v19;
        }
        v12 = (char *)qword_1409A29A0;
        if ( j )
          v12 = v19;
        goto LABEL_42;
      }
      strcpy_s(v24, v23, (const char *)Text);
    }
    v19 = pszFormat;
    goto LABEL_28;
  }
LABEL_42:
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, "\nSTOP: %lx %s\n", MessageId, v14) < 0 )
    RtlStringCbPrintfA(pszDest, 0x100uLL, "\nHardError %lx\n", MessageId);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  MessageEntry = (PMESSAGE_RESOURCE_ENTRY)"Unknown Hard Error";
  v27 = "Unknown Hard Error";
  *(_QWORD *)&BugCheckParameter1[1] = "Unknown Hard Error";
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v34.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v34.MaximumLength = v34.Length;
    v13 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v34.Length, 0x20727245u);
    v34.Buffer = v13;
    MessageEntry = (PMESSAGE_RESOURCE_ENTRY)v13;
    if ( v13 )
      RtlUnicodeStringToOemString(&v34, &UnicodeString, 0);
  }
  if ( RtlStringCbPrintfA(pszDest, 0x100uLL, v12, BugCheckParameter2[0], BugCheckParameter2[1], v39) < 0 )
    RtlStringCbPrintfA(
      pszDest,
      0x100uLL,
      "Exception Processing Message %lx Parameters %Ix %Ix %Ix %Ix",
      MessageId,
      LODWORD(BugCheckParameter2[0]),
      LODWORD(BugCheckParameter2[1]),
      (_DWORD)v39,
      DWORD2(v39));
  RtlInitAnsiString(&SourceString, pszDest);
  if ( RtlAnsiStringToUnicodeString(&UnicodeString, &SourceString, 1u) >= 0 )
  {
    v34.Length = RtlxUnicodeStringToOemSize(&UnicodeString);
    v34.MaximumLength = v34.Length;
    v27 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v34.Length, 0x20727245u);
    v34.Buffer = v27;
    if ( v27 )
      RtlUnicodeStringToOemString(&v34, &UnicodeString, 0);
  }
  CurrentServerSilo = PsGetCurrentServerSilo();
  if ( !CurrentServerSilo )
  {
    if ( a5 )
      PoShutdownBugCheck(1, 0x4Cu, BugCheckParameter1[0], (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)v27);
    KeBugCheckEx(0x4Cu, BugCheckParameter1[0], (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)v13, (ULONG_PTR)v27);
  }
  PsTerminateServerSilo(CurrentServerSilo);
}
