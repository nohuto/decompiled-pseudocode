/*
 * XREFs of _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC
 * Callers:
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 * Callees:
 *     _LdrpGetProcedureAddress@16 @ 0x4B2A6260 (_LdrpGetProcedureAddress@16.c)
 *     _RtlImageNtHeader@4 @ 0x4B2BB8E0 (_RtlImageNtHeader@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110 (_RtlReplaceSystemDirectoryInPath@16.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryValueKey@24 @ 0x4B2F2AD0 (_ZwQueryValueKey@24.c)
 *     _ZwMapViewOfSection@40 @ 0x4B2F2C00 (_ZwMapViewOfSection@40.c)
 *     _NtUnmapViewOfSection@8 @ 0x4B2F2C20 (_NtUnmapViewOfSection@8.c)
 *     _NtOpenFile@24 @ 0x4B2F2CB0 (_NtOpenFile@24.c)
 *     _NtCreateSection@28 @ 0x4B2F2E20 (_NtCreateSection@28.c)
 *     _NtSystemDebugControl@24 @ 0x4B2F4550 (_NtSystemDebugControl@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpProtectAndRelocateImage@20 @ 0x4B3310B1 (_LdrpProtectAndRelocateImage@20.c)
 */

NTSTATUS __thiscall LdrpLoadDelegatedNtdll(HANDLE KeyHandle)
{
  NTSTATUS result; // eax
  _DWORD *v3; // edi
  int v4; // esi
  void *v5; // ebx
  ULONG v6; // esi
  void *ProcessHeap; // ecx
  PVOID Heap; // eax
  NTSTATUS v9; // eax
  ULONG v10; // eax
  NTSTATUS ProcedureAddress; // ebx
  struct _TEB *v12; // edi
  void *ArbitraryUserPointer; // esi
  NTSTATUS v14; // eax
  unsigned int v15; // esi
  char **v16; // edi
  SIZE_T v17; // [esp-14h] [ebp-5F4h]
  int v18; // [esp-Ch] [ebp-5ECh]
  int v19; // [esp-8h] [ebp-5E8h]
  size_t v20; // [esp-4h] [ebp-5E4h]
  int v21; // [esp-4h] [ebp-5E4h]
  ULONG v22; // [esp+4h] [ebp-5DCh]
  ULONG ResultLength; // [esp+Ch] [ebp-5D4h] BYREF
  _UNICODE_STRING Destination; // [esp+10h] [ebp-5D0h] BYREF
  HANDLE SectionHandle; // [esp+18h] [ebp-5C8h] BYREF
  HANDLE FileHandle; // [esp+1Ch] [ebp-5C4h] BYREF
  HANDLE KeyHandlea; // [esp+20h] [ebp-5C0h]
  int v28; // [esp+24h] [ebp-5BCh] BYREF
  _UNICODE_STRING DestinationString; // [esp+28h] [ebp-5B8h] BYREF
  _UNICODE_STRING InputBuffer; // [esp+30h] [ebp-5B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+38h] [ebp-5A8h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [esp+50h] [ebp-590h] BYREF
  _BYTE KeyValueInformation[1024]; // [esp+58h] [ebp-588h] BYREF
  WCHAR Source[64]; // [esp+458h] [ebp-188h] BYREF
  char v35; // [esp+4D8h] [ebp-108h] BYREF

  KeyHandlea = KeyHandle;
  if ( LdrpChildNtdll )
    return 0;
  result = -1073741772;
  if ( KeyHandle )
  {
    result = RtlInitUnicodeStringEx(&DestinationString, L"DelegatedNtdll");
    if ( result >= 0 )
    {
      v3 = KeyValueInformation;
      result = ZwQueryValueKey(
                 KeyHandle,
                 &DestinationString,
                 KeyValuePartialInformation,
                 KeyValueInformation,
                 0x400u,
                 &ResultLength);
      v4 = result;
      if ( result >= 0 )
      {
        v5 = 0;
LABEL_7:
        if ( v3[1] == 1 )
        {
          v10 = v3[2];
          ResultLength = v10;
          if ( v10 > 0x80 )
          {
            v4 = -2147483643;
          }
          else
          {
            LODWORD(v20) = v10;
            memcpy(Source, v3 + 3, v20);
          }
        }
        else
        {
          v4 = -1073741788;
        }
LABEL_18:
        if ( v5 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
        result = v4;
        goto LABEL_21;
      }
      if ( result != -2147483643 )
      {
LABEL_21:
        if ( v4 >= 0 )
        {
          Destination.Length = 0;
          Destination.MaximumLength = 256;
          Destination.Buffer = (wchar_t *)&v35;
          RtlAppendUnicodeToString(&Destination, L"\\SystemRoot\\system32\\");
          RtlReplaceSystemDirectoryInPath(&Destination, 1u, 0x14Cu, 1u);
          result = RtlAppendUnicodeToString(&Destination, Source);
          if ( result >= 0 )
          {
            ObjectAttributes.RootDirectory = 0;
            ObjectAttributes.SecurityDescriptor = 0;
            ObjectAttributes.SecurityQualityOfService = 0;
            ObjectAttributes.ObjectName = &Destination;
            ObjectAttributes.Length = 24;
            ObjectAttributes.Attributes = 64;
            if ( (NtCurrentPeb()->NtGlobalFlag & 0x40000) != 0 )
            {
              InputBuffer = Destination;
              NtSystemDebugControl(SysDbgKdPullRemoteFile, &InputBuffer, 8u, 0, 0, 0);
            }
            result = NtOpenFile(&FileHandle, 0x100021u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u);
            if ( result >= 0 )
            {
              SectionHandle = 0;
              ProcedureAddress = NtCreateSection(&SectionHandle, 0xDu, 0, 0, 0x10u, 0x1000000u, FileHandle);
              if ( ProcedureAddress >= 0 )
              {
                v12 = NtCurrentTeb();
                ArbitraryUserPointer = v12->NtTib.ArbitraryUserPointer;
                v12->NtTib.ArbitraryUserPointer = Destination.Buffer;
                HIDWORD(v17) = &v28;
                LODWORD(v17) = 0;
                v28 = 0;
                v14 = ZwMapViewOfSection(
                        SectionHandle,
                        (HANDLE)0xFFFFFFFF,
                        &LdrpDelegatedNtdllBase,
                        0LL,
                        v17,
                        (PLARGE_INTEGER)1,
                        0,
                        ViewUnmap,
                        HIDWORD(v20),
                        v22);
                v12->NtTib.ArbitraryUserPointer = ArbitraryUserPointer;
                if ( v14 == 1073741827 )
                  LdrpProtectAndRelocateImage((_IMAGE_NT_HEADERS64 *)LdrpDelegatedNtdllBase, v18, v19, v21);
                if ( RtlImageNtHeader(LdrpDelegatedNtdllBase) )
                {
                  v15 = 0;
                  v16 = &LdrpDelegatedNtdllExports;
                  while ( 1 )
                  {
                    ProcedureAddress = LdrpGetProcedureAddress((char *)LdrpDelegatedNtdllBase, *v16, 0, (char **)v16[1]);
                    if ( ProcedureAddress < 0 )
                      break;
                    ++v15;
                    v16 += 2;
                    if ( v15 >= 0xD )
                    {
                      if ( *(_DWORD *)LdrDelegatedSystemDllInitBlock == LdrSystemDllInitBlock )
                      {
                        qmemcpy((void *)LdrDelegatedSystemDllInitBlock, &LdrSystemDllInitBlock, 0xF0u);
                        *(_BYTE *)LdrpChildNtdllPointer = 1;
                        *(_DWORD *)LdrpParentInterlockedPopEntrySListPointer = RtlInterlockedPopEntrySList;
                        *(_DWORD *)LdrpParentRtlInitializeNtUserPfnPointer = RtlInitializeNtUserPfn;
                        *(_DWORD *)LdrpParentRtlResetNtUserPfnPointer = RtlResetNtUserPfn;
                        *(_DWORD *)LdrpParentRtlRetrieveNtUserPfnPointer = RtlRetrieveNtUserPfn;
                      }
                      else
                      {
                        ProcedureAddress = -1073741735;
                      }
                      goto LABEL_39;
                    }
                  }
                  for ( ; v15; --v15 )
                    *(_DWORD *)v16[1] = 0;
                }
                else
                {
                  ProcedureAddress = -1073741701;
                }
              }
LABEL_39:
              NtClose(FileHandle);
              if ( SectionHandle )
                NtClose(SectionHandle);
              if ( ProcedureAddress < 0 )
              {
                if ( LdrpDelegatedNtdllBase )
                {
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFF, LdrpDelegatedNtdllBase);
                  LdrpDelegatedNtdllBase = 0;
                }
              }
              return ProcedureAddress;
            }
          }
        }
        return result;
      }
      while ( 1 )
      {
        v6 = ResultLength;
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        if ( !ProcessHeap )
          return -1073741801;
        LODWORD(v20) = ResultLength;
        Heap = RtlAllocateHeap(ProcessHeap, NtdllBaseTag + 1572864, v20);
        v5 = Heap;
        if ( !Heap )
          return -1073741801;
        v3 = Heap;
        v9 = ZwQueryValueKey(KeyHandlea, &DestinationString, KeyValuePartialInformation, Heap, v6, &ResultLength);
        v4 = v9;
        if ( v9 >= 0 )
          goto LABEL_7;
        if ( v9 != -2147483643 )
          goto LABEL_18;
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      }
    }
  }
  return result;
}
