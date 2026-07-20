/*
 * XREFs of SmpInitializeKnownDllsInternal @ 0x140007C70
 * Callers:
 *     SmpInitializeKnownDlls @ 0x140007950 (SmpInitializeKnownDlls.c)
 * Callees:
 *     SmpRandomizeDllList @ 0x1400083E0 (SmpRandomizeDllList.c)
 *     __security_check_cookie @ 0x14000E4B0 (__security_check_cookie.c)
 *     SmpTerminate @ 0x1400155F8 (SmpTerminate.c)
 */

__int64 __fastcall SmpInitializeKnownDllsInternal(__int64 a1, void *a2, int a3, int a4)
{
  int v4; // r15d
  __int16 v7; // r12
  int v9; // r9d
  unsigned int v10; // r14d
  const UNICODE_STRING *v11; // rbx
  const UNICODE_STRING *v12; // rsi
  const UNICODE_STRING *v13; // rbx
  struct _UNICODE_STRING *Heap; // rbx
  NTSTATUS appended; // eax
  int v16; // ebx
  PVOID *v17; // r15
  unsigned int v18; // r14d
  PVOID *v19; // rbx
  struct _UNICODE_STRING *v20; // rdi
  int v21; // eax
  _QWORD *v22; // rcx
  PVOID *v23; // rdx
  __int64 v24; // r8
  _QWORD *v25; // rcx
  void **Buffer; // rax
  void *v27; // r8
  char v29[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v30; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ObjectInformationLength; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v32; // [rsp+40h] [rbp-C0h] BYREF
  PVOID *v33; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h] BYREF
  int v35; // [rsp+58h] [rbp-A8h]
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String1; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+78h] [rbp-88h] BYREF
  int ObjectInformation; // [rsp+88h] [rbp-78h] BYREF
  __int64 v40; // [rsp+90h] [rbp-70h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  int v42; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D0h] [rbp-30h]
  const UNICODE_STRING *v44; // [rsp+D8h] [rbp-28h]
  int v45; // [rsp+E0h] [rbp-20h]
  _WORD *v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  _QWORD v48[2]; // [rsp+F8h] [rbp-8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+108h] [rbp+8h] BYREF
  _DWORD v50[2]; // [rsp+120h] [rbp+20h] BYREF
  void *v51; // [rsp+128h] [rbp+28h]
  _QWORD *v52; // [rsp+130h] [rbp+30h]
  HANDLE Handle; // [rsp+138h] [rbp+38h]
  int v54; // [rsp+140h] [rbp+40h]
  int *v55; // [rsp+148h] [rbp+48h]
  int v56; // [rsp+150h] [rbp+50h]
  int v57; // [rsp+154h] [rbp+54h]
  __int16 v58; // [rsp+158h] [rbp+58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+160h] [rbp+60h] BYREF
  unsigned __int64 Parameters[3]; // [rsp+170h] [rbp+70h] BYREF

  v35 = a3;
  v4 = a3;
  BaseAddress = 0LL;
  v30 = 0;
  v7 = 0;
  v9 = SmpRandomizeDllList(&SmpKnownDllsList, &BaseAddress, &v30);
  if ( v9 >= 0 )
  {
    ObjectAttributes.Length = 48;
    v48[1] = &v32;
    ObjectAttributes.RootDirectory = a2;
    v52 = v48;
    v51 = &SmpProcessModuleImports;
    v46 = SmpKnownDllSecurityDescriptor;
    v55 = &v42;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v50[0] = 64;
    v50[1] = 7;
    v42 = 48;
    v43 = a1;
    v45 = 80;
    v44 = 0LL;
    v47 = 0LL;
    v54 = 983071;
    v56 = 16;
    while ( 1 )
    {
      v33 = &v32;
      v10 = 0;
      v32 = &v32;
      if ( v30 )
        break;
LABEL_48:
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
      v17 = (PVOID *)v32;
      BaseAddress = 0LL;
      v18 = 0;
      v30 = 0;
      if ( v32 == &v32 )
        return 0;
      do
      {
        v19 = (PVOID *)SmpKnownDllsList;
        v20 = (struct _UNICODE_STRING *)v17;
        v17 = (PVOID *)*v17;
        if ( SmpKnownDllsList == &SmpKnownDllsList )
        {
LABEL_55:
          v30 = ++v18;
        }
        else
        {
          while ( 1 )
          {
            String1 = (UNICODE_STRING)*((_OWORD *)v19 + 1);
            if ( *((_WORD *)v19 + 8) && *(_WORD *)v19[3] == 95 )
            {
              ++String1.Buffer;
              String1.Length -= 2;
              String1.MaximumLength -= 2;
            }
            if ( !RtlCompareUnicodeString(&String1, v20 + 1, 1u) )
              break;
            v19 = (PVOID *)*v19;
            if ( v19 == &SmpKnownDllsList )
              goto LABEL_55;
          }
          v25 = *(_QWORD **)&v20->Length;
          if ( *(struct _UNICODE_STRING **)(*(_QWORD *)&v20->Length + 8LL) != v20 )
            goto LABEL_71;
          Buffer = (void **)v20->Buffer;
          if ( *Buffer != v20 )
            goto LABEL_71;
          *Buffer = v25;
          v25[1] = Buffer;
          RtlFreeUnicodeString(v20 + 2);
          v27 = *(void **)&v20[3].Length;
          if ( v27 )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v27);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v20);
          v18 = v30;
        }
      }
      while ( v17 != &v32 );
      if ( !v18 )
        return 0;
      v21 = SmpRandomizeDllList(&v32, &BaseAddress, &v30);
      v22 = v32;
      v9 = v21;
      v23 = v33;
      if ( *((PVOID **)v32 + 1) != &v32
        || *v33 != &v32
        || (*v33 = v32, v22[1] = v23, v24 = qword_140024288, *((PVOID **)SmpKnownDllsList + 1) != &SmpKnownDllsList)
        || *(PVOID **)qword_140024288 != &SmpKnownDllsList
        || *(_QWORD **)(*v22 + 8LL) != v22
        || *v23 != v22 )
      {
LABEL_71:
        __fastfail(3u);
      }
      *(_QWORD *)qword_140024288 = v22;
      qword_140024288 = v22[1];
      *(_QWORD *)v22[1] = &SmpKnownDllsList;
      v22[1] = v24;
      if ( v21 < 0 )
        return (unsigned int)v9;
      v4 = v35;
    }
    while ( 1 )
    {
      v11 = (const UNICODE_STRING *)SmpExcludeKnownDllsList;
      v12 = (const UNICODE_STRING *)*((_QWORD *)BaseAddress + 2 * v10 + 1);
      if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString(v11 + 1, v12 + 1, 1u) )
        {
          v11 = *(const UNICODE_STRING **)&v11->Length;
          if ( v11 == (const UNICODE_STRING *)&SmpExcludeKnownDllsList )
            goto LABEL_9;
        }
        if ( v11 )
          goto LABEL_47;
      }
LABEL_9:
      v13 = (const UNICODE_STRING *)SmpExcludeKnownDllsList;
      if ( SmpExcludeKnownDllsList != &SmpExcludeKnownDllsList )
      {
        while ( RtlCompareUnicodeString(v13 + 1, v12 + 2, 1u) )
        {
          v13 = *(const UNICODE_STRING **)&v13->Length;
          if ( v13 == (const UNICODE_STRING *)&SmpExcludeKnownDllsList )
            goto LABEL_14;
        }
        if ( v13 )
          goto LABEL_47;
      }
LABEL_14:
      v57 = 0x1000000;
      if ( v12[1].Length >= 2u && *v12[1].Buffer == 95 )
      {
        if ( v4 || !a4 )
          goto LABEL_47;
        v57 = 17825792;
      }
      ObjectAttributes.ObjectName = (PUNICODE_STRING)&v12[2];
      if ( (*(_DWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 188LL) & 0x40000) != 0 )
        break;
LABEL_31:
      if ( NtOpenFile(&FileHandle, 0x120020u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u) >= 0 )
      {
        v44 = v12 + 2;
        v48[0] = v12 + 2;
        if ( v46 )
        {
          v7 = v46[1] & 8;
          v46[1] |= 8u;
        }
        v16 = LdrVerifyImageMatchesChecksumEx((unsigned __int64)FileHandle | 1, v50);
        if ( v46 )
          v46[1] ^= (v46[1] ^ v7) & 8;
        if ( v16 >= 0 )
        {
          if ( (v58 & 0x2000) == 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"Non-DLL file included in KnownDLL list.");
            v16 = -1073740945;
LABEL_75:
            Parameters[0] = (unsigned __int64)&DestinationString;
            Parameters[1] = v16;
            Parameters[2] = (unsigned __int64)&v12[2];
            SmpTerminate(Parameters, 5u, 3u);
            JUMPOUT(0x1400083CALL);
          }
          NtClose(Handle);
        }
        else
        {
          v29[0] = 1;
          if ( v16 == -1073740760 )
          {
            if ( (int)RtlAppxIsFileOwnedByTrustedInstaller(FileHandle, v29) >= 0 && !v29[0] )
              goto LABEL_46;
          }
          else if ( v16 == -1073741771 )
          {
LABEL_46:
            NtClose(FileHandle);
            goto LABEL_47;
          }
          RtlInitUnicodeString(&DestinationString, L"Verification of a KnownDLL failed.");
        }
        if ( v16 < 0 )
          goto LABEL_75;
        goto LABEL_46;
      }
LABEL_47:
      if ( ++v10 >= v30 )
        goto LABEL_48;
    }
    Heap = 0LL;
    ObjectInformation = 0;
    v40 = 0LL;
    ObjectInformationLength = 0;
    if ( NtQueryObject(
           ObjectAttributes.RootDirectory,
           ObjectNameInformation,
           &ObjectInformation,
           0,
           &ObjectInformationLength) == -1073741820 )
    {
      ObjectInformationLength += 2;
      ObjectInformationLength += ObjectAttributes.ObjectName->Length;
      Heap = (struct _UNICODE_STRING *)RtlAllocateHeap(
                                         *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                                         0,
                                         ObjectInformationLength);
      if ( Heap )
      {
        if ( NtQueryObject(
               ObjectAttributes.RootDirectory,
               ObjectNameInformation,
               Heap,
               ObjectInformationLength,
               &ObjectInformationLength) < 0
          || (Destination = *Heap,
              Destination.MaximumLength = _mm_cvtsi128_si32((__m128i)Destination)
                                        + ObjectAttributes.ObjectName->Length
                                        + 2,
              RtlAppendUnicodeToString(&Destination, L"\\") < 0) )
        {
LABEL_29:
          if ( Heap )
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
          goto LABEL_31;
        }
        appended = RtlAppendUnicodeStringToString(&Destination, ObjectAttributes.ObjectName);
      }
      else
      {
        appended = -1073741801;
      }
    }
    else
    {
      appended = -1073741823;
    }
    if ( appended >= 0 )
      NtSystemDebugControl(SysDbgClearUmAttachPid|SysDbgSetTracepoint, &Destination, 0x10u, 0LL, 0, 0LL);
    goto LABEL_29;
  }
  return (unsigned int)v9;
}
