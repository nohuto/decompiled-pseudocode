/*
 * XREFs of LdrLoadAlternateResourceModuleEx @ 0x180034EA0
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrResSearchResource @ 0x180048B30 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048EFC (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DA10 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18000F4AC (LdrpSetAlternateResourceModuleHandle.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x1800197B0 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x180019900 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpGetFromMUIMemCache @ 0x1800335B8 (LdrpGetFromMUIMemCache.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     LdrMapAndVerifyResourceFile @ 0x18004B8F4 (LdrMapAndVerifyResourceFile.c)
 *     GetOverlayFilePath @ 0x18004CF6C (GetOverlayFilePath.c)
 *     LdrpGetDataModulePath @ 0x18006A008 (LdrpGetDataModulePath.c)
 *     LdrpQuerySxSMUIFile @ 0x18007647C (LdrpQuerySxSMUIFile.c)
 *     LdrpGetFileDriverStoreRoot @ 0x180079020 (LdrpGetFileDriverStoreRoot.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180084144 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C3E0 (__report_rangecheckfailure.c)
 *     wcsrchr @ 0x180091FA0 (wcsrchr.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1800CF934 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0EBC (LdrpCnvrtShortToLongFileName.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E163C (LdrpTraceLoadMUIDll.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  PVOID *v6; // r15
  const wchar_t *v7; // rdi
  __int64 v8; // r14
  WCHAR *v9; // rsi
  _DWORD *v10; // rax
  __int64 v11; // r8
  ULONG v13; // r13d
  ULONG v14; // r12d
  int DataModulePath; // eax
  unsigned __int64 v16; // rax
  NTSTATUS ModuleInfoFromVirtualMemory; // edi
  const WCHAR *v18; // rdx
  int v19; // r15d
  int v20; // edi
  int v21; // r8d
  WCHAR *v22; // rdx
  PVOID v23; // r14
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rax
  char v27; // al
  __int64 v28; // rcx
  PVOID Heap; // rax
  __int64 v30; // rax
  WCHAR *i; // rcx
  __int64 v32; // rax
  WCHAR *v33; // rax
  __int64 v34; // rax
  int v35; // r8d
  __int64 v36; // rcx
  char v37; // [rsp+50h] [rbp-AB8h] BYREF
  NTSTATUS OverlayFilePath; // [rsp+54h] [rbp-AB4h]
  char v39; // [rsp+58h] [rbp-AB0h]
  char v40; // [rsp+59h] [rbp-AAFh]
  LANGID v41; // [rsp+5Ah] [rbp-AAEh]
  _DWORD v42[5]; // [rsp+5Ch] [rbp-AACh] BYREF
  PVOID v43; // [rsp+70h] [rbp-A98h]
  void *v44; // [rsp+78h] [rbp-A90h] BYREF
  int v45; // [rsp+80h] [rbp-A88h] BYREF
  SIZE_T Size; // [rsp+84h] [rbp-A84h] BYREF
  PVOID *v47; // [rsp+90h] [rbp-A78h]
  ULONG_PTR v48; // [rsp+98h] [rbp-A70h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+A0h] [rbp-A68h] BYREF
  wchar_t *Str; // [rsp+B0h] [rbp-A58h] BYREF
  _UNICODE_STRING Destination; // [rsp+B8h] [rbp-A50h] BYREF
  PVOID v52; // [rsp+C8h] [rbp-A40h]
  __int64 v53; // [rsp+D0h] [rbp-A38h] BYREF
  HANDLE v54; // [rsp+D8h] [rbp-A30h] BYREF
  PVOID v55; // [rsp+E0h] [rbp-A28h] BYREF
  PUNICODE_STRING v56; // [rsp+E8h] [rbp-A20h] BYREF
  WCHAR *v57; // [rsp+F0h] [rbp-A18h]
  PVOID BaseAddress; // [rsp+F8h] [rbp-A10h]
  ULONG_PTR *v59; // [rsp+100h] [rbp-A08h]
  int v60; // [rsp+108h] [rbp-A00h]
  __int64 v61; // [rsp+110h] [rbp-9F8h]
  int v62; // [rsp+118h] [rbp-9F0h]
  _WORD *v63; // [rsp+120h] [rbp-9E8h]
  _UNICODE_STRING DestinationString; // [rsp+128h] [rbp-9E0h] BYREF
  __int64 v65; // [rsp+140h] [rbp-9C8h] BYREF
  int v66; // [rsp+148h] [rbp-9C0h]
  __int128 v67; // [rsp+150h] [rbp-9B8h]
  __int128 v68; // [rsp+160h] [rbp-9A8h]
  __int128 v69; // [rsp+170h] [rbp-998h]
  __int64 v70; // [rsp+180h] [rbp-988h]
  WCHAR v71[2]; // [rsp+18Ch] [rbp-97Ch] BYREF
  WCHAR Source[352]; // [rsp+190h] [rbp-978h] BYREF
  char v73; // [rsp+450h] [rbp-6B8h] BYREF
  _WORD v74[352]; // [rsp+490h] [rbp-678h] BYREF
  char v75; // [rsp+750h] [rbp-3B8h] BYREF
  _BYTE v76[704]; // [rsp+800h] [rbp-308h] BYREF

  v59 = ResourceOffset;
  v6 = ResourceDllBase;
  v47 = ResourceDllBase;
  v41 = LanguageId;
  v43 = DllHandle;
  v54 = 0LL;
  v45 = 0;
  v7 = 0LL;
  Str = 0LL;
  v42[0] = 0;
  BaseAddress = 0LL;
  v48 = 0LL;
  v56 = 0LL;
  v39 = 0;
  v65 = 72LL;
  v66 = 1;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v37 = 0;
  v52 = 0LL;
  v55 = 0LL;
  v40 = 1;
  v8 = 0LL;
  v53 = 0LL;
  v9 = (WCHAR *)v76;
  v57 = (WCHAR *)v76;
  Size = 0x1000002BELL;
  if ( !DllHandle || !LanguageId || !ResourceDllBase )
    return -1073741811;
  v10 = LdrpGetFromMUIMemCache((unsigned __int64)DllHandle, LanguageId, &v48, 4);
  if ( v10 == (_DWORD *)-1LL )
  {
    v13 = Flags;
    v14 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v6 = 0LL;
      return -1073020922;
    }
  }
  else
  {
    if ( v10 )
    {
      *v6 = v10;
      if ( ResourceOffset )
        *ResourceOffset = v48;
      OverlayFilePath = 0;
      return 0;
    }
    v13 = Flags;
    v14 = Flags & 0x400000;
  }
  v44 = 0LL;
  if ( v14 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v43, Source, v11, &v45, &Str, v42, &v53);
    v7 = Str;
    v8 = v53;
  }
  if ( DataModulePath < 0 )
  {
    ModuleInfoFromVirtualMemory = LdrpGetModuleInfoFromVirtualMemory(
                                    v43,
                                    Source,
                                    (__int64)&v55,
                                    (__int64)v42,
                                    (__int64)&v37);
    OverlayFilePath = ModuleInfoFromVirtualMemory;
    if ( ModuleInfoFromVirtualMemory < 0 )
    {
LABEL_84:
      v23 = v43;
      goto LABEL_41;
    }
    v7 = (const wchar_t *)v55;
    Str = (wchar_t *)v55;
  }
  v16 = v45 & 0xFFFFFFFE;
  if ( v16 >= 0x2BE )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v16) = 0;
  if ( wcsrchr(v7, 0x7Eu) && (int)LdrpCnvrtShortToLongFileName(Source, v7) >= 0 )
  {
    v7 = (const wchar_t *)v52;
    Str = (wchar_t *)v52;
    v32 = -1LL;
    do
      ++v32;
    while ( *((_WORD *)v52 + v32) );
    v42[0] = 2 * v32;
  }
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  v63 = v74;
  v62 = 46006272;
  v61 = 0LL;
  v60 = 0;
  if ( (unsigned __int64)v42[0] + 12 > 0x3C )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2LL * v42[0] + 10);
    BaseAddress = Heap;
    if ( !Heap )
    {
      ModuleInfoFromVirtualMemory = -1073741801;
LABEL_93:
      OverlayFilePath = ModuleInfoFromVirtualMemory;
LABEL_94:
      v6 = v47;
      goto LABEL_84;
    }
    Destination.Buffer = (wchar_t *)Heap;
    Destination.MaximumLength = 2 * (LOWORD(v42[0]) + 5);
    v7 = Str;
    v8 = v53;
  }
  else
  {
    Destination.Buffer = (wchar_t *)&v73;
    Destination.MaximumLength = 60;
  }
  Destination.Length = 0;
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v7);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_94;
  v18 = L".mun";
  v19 = v13 & 0x1000000;
  if ( (v13 & 0x1000000) == 0 )
    v18 = L".mui";
  ModuleInfoFromVirtualMemory = RtlAppendUnicodeToString(&Destination, v18);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
    goto LABEL_94;
  if ( v8 )
    RtlActivateActivationContextUnsafeFast((__int64)&v65, v8);
  v20 = LdrpQuerySxSMUIFile(&Destination, &v56);
  if ( v8 )
    RtlDeactivateActivationContextUnsafeFast((__int64)&v65);
  if ( v20 >= 0 )
  {
    v39 = 1;
    *(_QWORD *)&v42[3] = v56->Buffer;
    v42[1] = *(_DWORD *)&v56->Length;
  }
  if ( v39 )
  {
    HIDWORD(Size) = 0;
LABEL_36:
    v23 = v43;
LABEL_37:
    LOBYTE(v21) = v37;
    v24 = LdrMapAndVerifyResourceFile(
            (_DWORD)v23,
            (unsigned int)&v42[1],
            v21,
            v13,
            (__int64)LocaleName.Buffer,
            HIDWORD(Size),
            (__int64)&v54,
            (__int64)&v48,
            (__int64)&v44);
    ModuleInfoFromVirtualMemory = v24;
    OverlayFilePath = v24;
    if ( !v19
      && (v24 == -1073741766 || v24 == -1073741772)
      && (unsigned __int8)LdrpGetFileDriverStoreRoot(Source, v25, v74) )
    {
      *(_QWORD *)&v42[3] = v74;
      v34 = -1LL;
      do
        ++v34;
      while ( v74[v34] );
      LOWORD(v42[1]) = 2 * v34;
      HIWORD(v42[1]) = 702;
      RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], L"\\");
      RtlAppendUnicodeStringToString((PUNICODE_STRING)&v42[1], &LocaleName);
      RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], L"\\");
      RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], Destination.Buffer);
      LOBYTE(v35) = v37;
      ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                      (_DWORD)v23,
                                      (unsigned int)&v42[1],
                                      v35,
                                      v13,
                                      (__int64)LocaleName.Buffer,
                                      HIDWORD(Size),
                                      (__int64)&v54,
                                      (__int64)&v48,
                                      (__int64)&v44);
      OverlayFilePath = ModuleInfoFromVirtualMemory;
    }
    goto LABEL_40;
  }
  *(_QWORD *)&v42[3] = v74;
  v42[1] = 46006272;
  if ( !v19 )
  {
    v22 = Source;
    goto LABEL_30;
  }
  v30 = -1LL;
  do
    ++v30;
  while ( Source[v30] );
  for ( i = &v71[(unsigned int)v30]; i > Source && *i != 92; --i )
    ;
  if ( i <= Source )
  {
    ModuleInfoFromVirtualMemory = -1073741686;
    goto LABEL_93;
  }
  i[1] = 0;
  RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], Source);
  v22 = L"SystemResources\\";
LABEL_30:
  RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], v22);
  if ( !v19 )
  {
    LocaleName.Buffer = (wchar_t *)&v75;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName(v41, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString((PUNICODE_STRING)&v42[1], &LocaleName);
      RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], L"\\");
      goto LABEL_33;
    }
    ModuleInfoFromVirtualMemory = -1073741811;
    goto LABEL_93;
  }
LABEL_33:
  RtlAppendUnicodeToString((PUNICODE_STRING)&v42[1], Destination.Buffer);
  if ( v19 )
    goto LABEL_36;
  OverlayFilePath = GetOverlayFilePath(LocaleName.Buffer, *(_QWORD *)&v42[3], &Size, v76);
  if ( OverlayFilePath == -1073741789 )
  {
    v33 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
    v9 = v33;
    v57 = v33;
    if ( v33 )
      OverlayFilePath = GetOverlayFilePath(LocaleName.Buffer, *(_QWORD *)&v42[3], &Size, v33);
  }
  if ( OverlayFilePath < 0 || RtlInitUnicodeStringEx(&DestinationString, v9) < 0 )
    goto LABEL_36;
  LOBYTE(v21) = v37;
  v23 = v43;
  ModuleInfoFromVirtualMemory = LdrMapAndVerifyResourceFile(
                                  (_DWORD)v43,
                                  (unsigned int)&DestinationString,
                                  v21,
                                  v13,
                                  (__int64)LocaleName.Buffer,
                                  2,
                                  (__int64)&v54,
                                  (__int64)&v48,
                                  (__int64)&v44);
  OverlayFilePath = ModuleInfoFromVirtualMemory;
  if ( ModuleInfoFromVirtualMemory < 0 )
  {
    if ( ModuleInfoFromVirtualMemory != -1073741772 )
    {
      LOBYTE(v21) = v37;
      LdrpLogMapAndVerifyResourceFileFailure(
        ModuleInfoFromVirtualMemory,
        (unsigned int)&DestinationString,
        v21,
        v13,
        (__int64)&LocaleName);
    }
    goto LABEL_37;
  }
  RtlInitUnicodeStringEx((PUNICODE_STRING)&v42[1], v9);
LABEL_40:
  v6 = v47;
LABEL_41:
  v26 = (__int64)v44;
  if ( !v44 )
    v26 = -1LL;
  v44 = (void *)v26;
  if ( ModuleInfoFromVirtualMemory == -1073741659
    || ModuleInfoFromVirtualMemory == -1073741801
    || ModuleInfoFromVirtualMemory == -1073741523 )
  {
    v27 = 0;
  }
  else
  {
    v27 = v40;
  }
  if ( v27 )
    LdrpSetAlternateResourceModuleHandle(
      (__int64)v23,
      &v44,
      &v54,
      0LL,
      v41,
      v14 != 0 ? 33 : 1,
      ModuleInfoFromVirtualMemory,
      v48);
  if ( v44 == (void *)-1LL )
  {
    *v6 = 0LL;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v28 = (__int64)NtCurrentPeb()->SharedData + 555;
    else
      v28 = 2147353477LL;
    if ( (*(_BYTE *)v28 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v36 = (__int64)NtCurrentPeb()->SharedData + 554;
      else
        v36 = 2147353476LL;
      LdrpTraceLoadMUIDll(&v42[1], *(unsigned __int8 *)v36);
    }
    *v6 = v44;
    if ( v59 )
      *v59 = v48;
    ModuleInfoFromVirtualMemory = 0;
    OverlayFilePath = 0;
  }
  if ( v55 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v55);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( v52 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v52);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    ModuleInfoFromVirtualMemory = OverlayFilePath;
  }
  if ( v9 && v76 != (_BYTE *)v9 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
    return OverlayFilePath;
  }
  return ModuleInfoFromVirtualMemory;
}
