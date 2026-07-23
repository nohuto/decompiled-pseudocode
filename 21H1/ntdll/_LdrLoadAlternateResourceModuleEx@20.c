/*
 * XREFs of _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 *     _LdrpGetDataModulePath@28 @ 0x4B2B8EDE (_LdrpGetDataModulePath@28.c)
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _LdrMapAndVerifyResourceFile@36 @ 0x4B2B91A5 (_LdrMapAndVerifyResourceFile@36.c)
 *     _LdrpSetAlternateResourceModuleHandle@32 @ 0x4B2B9366 (_LdrpSetAlternateResourceModuleHandle@32.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpGetFromMUIMemCache@16 @ 0x4B2BD4F0 (_LdrpGetFromMUIMemCache@16.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrpAppendUnicodeStringToFilenameBuffer@8 @ 0x4B2CC7A7 (_LdrpAppendUnicodeStringToFilenameBuffer@8.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _LdrpGetFileDriverStoreRoot@12 @ 0x4B2E7D5F (_LdrpGetFileDriverStoreRoot@12.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _wcsrchr @ 0x4B2FA900 (_wcsrchr.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _LdrpLogMapAndVerifyResourceFileFailure@20 @ 0x4B330851 (_LdrpLogMapAndVerifyResourceFileFailure@20.c)
 *     _LdrpCnvrtShortToLongFileName@12 @ 0x4B33F31F (_LdrpCnvrtShortToLongFileName@12.c)
 *     _LdrpGetModuleInfoFromVirtualMemory@28 @ 0x4B33F74C (_LdrpGetModuleInfoFromVirtualMemory@28.c)
 *     _LdrpTraceLoadMUIDll@8 @ 0x4B33FAF1 (_LdrpTraceLoadMUIDll@8.c)
 */

NTSTATUS __cdecl LdrLoadAlternateResourceModuleEx(
        PVOID DllHandle,
        LANGID LanguageId,
        PVOID *ResourceDllBase,
        ULONG_PTR *ResourceOffset,
        ULONG Flags)
{
  const wchar_t *v5; // esi
  PVOID *v6; // edi
  void *v7; // eax
  int v8; // ecx
  ULONG v10; // edi
  NTSTATUS DataModulePath; // eax
  NTSTATUS appended; // esi
  const WCHAR *v13; // eax
  int v14; // esi
  ULONG v15; // esi
  WCHAR *v16; // eax
  WCHAR *v17; // eax
  int v18; // eax
  int v19; // eax
  char v20; // al
  int v21; // eax
  struct _TEB *v22; // eax
  int WowTebOffset; // ecx
  void *v24; // esi
  struct _TEB *v25; // eax
  int v26; // ecx
  struct _TEB *v27; // eax
  int v28; // ecx
  PVOID Heap; // eax
  WCHAR *i; // eax
  int v31; // eax
  int v32; // eax
  SIZE_T v33; // [esp-4h] [ebp-B28h]
  _DWORD v34[9]; // [esp+10h] [ebp-B14h] BYREF
  _UNICODE_STRING v35; // [esp+34h] [ebp-AF0h] BYREF
  _UNICODE_STRING v36; // [esp+3Ch] [ebp-AE8h] BYREF
  _DWORD v37[5]; // [esp+44h] [ebp-AE0h] BYREF
  PUNICODE_STRING v38; // [esp+5Ch] [ebp-AC8h] BYREF
  PVOID v39; // [esp+60h] [ebp-AC4h] BYREF
  int v40; // [esp+64h] [ebp-AC0h] BYREF
  int v41; // [esp+68h] [ebp-ABCh] BYREF
  unsigned int Size; // [esp+6Ch] [ebp-AB8h] BYREF
  ULONG_PTR *Size_4; // [esp+70h] [ebp-AB4h]
  PVOID BaseAddress; // [esp+74h] [ebp-AB0h]
  PVOID v45; // [esp+78h] [ebp-AACh] BYREF
  int v46; // [esp+7Ch] [ebp-AA8h]
  _UNICODE_STRING DestinationString; // [esp+80h] [ebp-AA4h] BYREF
  PCWSTR SourceString; // [esp+88h] [ebp-A9Ch]
  PVOID *v49; // [esp+8Ch] [ebp-A98h]
  HANDLE v50; // [esp+90h] [ebp-A94h] BYREF
  wchar_t *Str; // [esp+94h] [ebp-A90h] BYREF
  int v52; // [esp+98h] [ebp-A8Ch] BYREF
  _UNICODE_STRING LocaleName; // [esp+9Ch] [ebp-A88h] BYREF
  int v54; // [esp+A4h] [ebp-A80h] BYREF
  int v55; // [esp+A8h] [ebp-A7Ch]
  int v56; // [esp+B0h] [ebp-A74h] BYREF
  unsigned int v57; // [esp+B4h] [ebp-A70h] BYREF
  PVOID v58; // [esp+B8h] [ebp-A6Ch]
  _UNICODE_STRING Destination; // [esp+BCh] [ebp-A68h] BYREF
  char v60; // [esp+C6h] [ebp-A5Eh]
  char v61; // [esp+C7h] [ebp-A5Dh]
  NTSTATUS OverlayFilePath; // [esp+C8h] [ebp-A5Ch]
  _UNICODE_STRING SystemPath; // [esp+CCh] [ebp-A58h] BYREF
  _WORD v64[128]; // [esp+D4h] [ebp-A50h] BYREF
  wchar_t v65[352]; // [esp+1D4h] [ebp-950h] BYREF
  char v66; // [esp+494h] [ebp-690h] BYREF
  unsigned __int16 v67[354]; // [esp+544h] [ebp-5E0h] BYREF
  _BYTE v68[60]; // [esp+808h] [ebp-31Ch] BYREF
  WCHAR Source[356]; // [esp+844h] [ebp-2E0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B0Ch] [ebp-18h]

  v58 = DllHandle;
  v46 = LanguageId;
  v49 = ResourceDllBase;
  Size_4 = ResourceOffset;
  v50 = 0;
  v40 = 0;
  v5 = 0;
  Str = 0;
  v52 = 0;
  BaseAddress = 0;
  v56 = 0;
  v38 = 0;
  v60 = 0;
  v34[0] = 36;
  v34[1] = 1;
  memset(&v34[2], 0, 0x1Cu);
  LOBYTE(v54) = 0;
  v39 = 0;
  v45 = 0;
  v61 = 1;
  v41 = 0;
  SourceString = (PCWSTR)v65;
  Size = 702;
  v37[4] = 1;
  v55 = 1;
  if ( !DllHandle )
    return -1073741811;
  if ( !(_WORD)v46 )
    return -1073741811;
  v6 = v49;
  if ( !v49 )
    return -1073741811;
  v7 = (void *)LdrpGetFromMUIMemCache(&v56, 4);
  if ( v7 == (void *)-1 )
  {
    v10 = Flags & 0x400000;
    if ( (Flags & 0x400000) == 0 )
    {
      *v49 = 0;
      return -1073020922;
    }
  }
  else
  {
    if ( v7 )
    {
      ms_exc.registration.TryLevel = 0;
      *v6 = v7;
      if ( Size_4 )
        *(_DWORD *)Size_4 = v56;
      OverlayFilePath = 0;
      ms_exc.registration.TryLevel = -2;
      return 0;
    }
    v10 = Flags & 0x400000;
  }
  v37[3] = v10;
  v57 = 0;
  if ( v10 )
  {
    DataModulePath = -1073741767;
  }
  else
  {
    DataModulePath = LdrpGetDataModulePath(v58, Source, v8, (unsigned int *)&v40, &Str, &v52, (wchar_t **)&v41);
    v5 = Str;
  }
  if ( DataModulePath >= 0 )
  {
LABEL_13:
    if ( (v40 & 0xFFFFFFFE) >= 0x2BE )
      __report_rangecheckfailure();
    *(WCHAR *)((char *)Source + (v40 & 0xFFFFFFFE)) = 0;
    if ( wcsrchr(v5, 0x7Eu) && LdrpCnvrtShortToLongFileName(Source, (int)&v39) >= 0 )
    {
      v5 = (const wchar_t *)v39;
      Str = (wchar_t *)v39;
      v52 = 2 * wcslen((const unsigned __int16 *)v39);
    }
    RtlInitUnicodeString(&DestinationString, 0);
    RtlInitUnicodeString(&LocaleName, 0);
    v36.Buffer = v67;
    *(_DWORD *)&v36.Length = 46006272;
    v37[1] = 0;
    v37[0] = 0;
    if ( (unsigned int)(v52 + 12) > 0x3C )
    {
      LODWORD(v33) = 2 * v52 + 10;
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v33);
      BaseAddress = Heap;
      if ( !Heap )
      {
        appended = -1073741801;
        goto LABEL_120;
      }
      DestinationString.Buffer = (wchar_t *)Heap;
      DestinationString.MaximumLength = 2 * v52 + 10;
      v5 = Str;
    }
    else
    {
      DestinationString.Buffer = (wchar_t *)v68;
      DestinationString.MaximumLength = 60;
    }
    DestinationString.Length = 0;
    appended = RtlAppendUnicodeToString(&DestinationString, (PCWSTR)v5);
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_42;
    v13 = L".mun";
    if ( (Flags & 0x1000000) == 0 )
      v13 = L".mui";
    appended = RtlAppendUnicodeToString(&DestinationString, v13);
    OverlayFilePath = appended;
    if ( appended < 0 )
      goto LABEL_42;
    if ( v41 )
      RtlActivateActivationContextUnsafeFast(v34, v41);
    ms_exc.registration.TryLevel = 1;
    OverlayFilePath = appended;
    v14 = LdrpQuerySxSMUIFile(&DestinationString, v46, &v36, (wchar_t *)v37, &v38);
    OverlayFilePath = v14;
    ms_exc.registration.TryLevel = -2;
    if ( v41 )
      RtlDeactivateActivationContextUnsafeFast(v34, 1261158531);
    if ( v14 >= 0 )
    {
      v60 = 1;
      Destination = *v38;
    }
    if ( v60 )
    {
      LocaleName.Buffer = 0;
      v18 = 0;
      v55 = 0;
LABEL_37:
      v19 = LdrMapAndVerifyResourceFile(v58, (int)&Destination, v54, Flags, LocaleName.Buffer, v18, &v50, &v56, &v57);
      appended = v19;
      OverlayFilePath = v19;
      if ( v19 == -1073741772 || v19 == -1073741766 )
      {
        SystemPath.Buffer = v64;
        *(_DWORD *)&SystemPath.Length = 0x1000000;
        v64[0] = 0;
        if ( LdrpAppendUnicodeStringToFilenameBuffer(&SystemPath, &Destination) >= 0 )
        {
          LdrStandardizeSystemPath(&SystemPath);
          v22 = NtCurrentTeb();
          WowTebOffset = v22->WowTebOffset;
          if ( WowTebOffset < 0 )
            v22 = (struct _TEB *)((char *)v22 + WowTebOffset);
          if ( v22 == (struct _TEB *)v22->NtTib.Self )
            v24 = v22->TlsSlots[8];
          else
            v24 = (void *)v22[1].GdiTebBatch.Buffer[185];
          v25 = NtCurrentTeb();
          v26 = v25->WowTebOffset;
          if ( v26 < 0 )
            v25 = (struct _TEB *)((char *)v25 + v26);
          if ( v25 == (struct _TEB *)v25->NtTib.Self )
          {
            v25->TlsSlots[8] = (void *)1;
          }
          else
          {
            v25[1].GdiTebBatch.Buffer[185] = 1;
            v25[1].GdiTebBatch.Buffer[186] = 0;
          }
          OverlayFilePath = LdrMapAndVerifyResourceFile(
                              v58,
                              (int)&SystemPath,
                              v54,
                              Flags,
                              LocaleName.Buffer,
                              v55,
                              &v50,
                              &v56,
                              &v57);
          v27 = NtCurrentTeb();
          v28 = v27->WowTebOffset;
          if ( v28 < 0 )
            v27 = (struct _TEB *)((char *)v27 + v28);
          if ( v27 == (struct _TEB *)v27->NtTib.Self )
          {
            v27->TlsSlots[8] = v24;
          }
          else
          {
            v27[1].GdiTebBatch.Buffer[185] = (unsigned int)v24;
            v27[1].GdiTebBatch.Buffer[186] = 0;
          }
          appended = OverlayFilePath;
        }
        if ( v64 != SystemPath.Buffer )
          RtlDeleteBoundaryDescriptor((POBJECT_BOUNDARY_DESCRIPTOR)SystemPath.Buffer);
      }
      if ( (Flags & 0x1000000) != 0
        || appended != -1073741766 && appended != -1073741772
        || !(unsigned __int8)LdrpGetFileDriverStoreRoot(v67) )
      {
        goto LABEL_42;
      }
      Destination.Buffer = v67;
      Destination.Length = 2 * wcslen(v67);
      Destination.MaximumLength = 702;
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeStringToString(&Destination, &LocaleName);
      RtlAppendUnicodeToString(&Destination, L"\\");
      RtlAppendUnicodeToString(&Destination, (PCWSTR)DestinationString.Buffer);
      appended = LdrMapAndVerifyResourceFile(
                   v58,
                   (int)&Destination,
                   v54,
                   Flags,
                   LocaleName.Buffer,
                   v55,
                   &v50,
                   &v56,
                   &v57);
      goto LABEL_120;
    }
    Destination.Buffer = v67;
    *(_DWORD *)&Destination.Length = 46006272;
    v15 = Flags & 0x1000000;
    if ( (Flags & 0x1000000) != 0 )
    {
      for ( i = (WCHAR *)&v68[2 * wcslen((const unsigned __int16 *)Source) + 56]; i > Source && *i != 92; --i )
        ;
      if ( i <= Source )
      {
        appended = -1073741686;
        goto LABEL_120;
      }
      i[1] = 0;
      RtlAppendUnicodeToString(&Destination, Source);
      v16 = (WCHAR *)L"SystemResources\\";
    }
    else
    {
      v16 = Source;
    }
    RtlAppendUnicodeToString(&Destination, v16);
    if ( v15 )
      goto LABEL_32;
    LocaleName.Buffer = (wchar_t *)&v66;
    LocaleName.MaximumLength = 170;
    if ( RtlLcidToLocaleName((unsigned __int16)v46, &LocaleName, 2u, 0) >= 0 )
    {
      RtlAppendUnicodeStringToString(&Destination, &LocaleName);
      RtlAppendUnicodeToString(&Destination, L"\\");
LABEL_32:
      RtlAppendUnicodeToString(&Destination, (PCWSTR)DestinationString.Buffer);
      if ( v15 )
      {
LABEL_36:
        v18 = v55;
        goto LABEL_37;
      }
      OverlayFilePath = GetOverlayFilePath((int)LocaleName.Buffer, (const WCHAR *)Destination.Buffer, &Size, v65);
      if ( OverlayFilePath == -1073741789 )
      {
        LODWORD(v33) = Size;
        v17 = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v33);
        SourceString = v17;
        if ( !v17 )
          goto LABEL_35;
        OverlayFilePath = GetOverlayFilePath(
                            (int)LocaleName.Buffer,
                            (const WCHAR *)Destination.Buffer,
                            &Size,
                            (wchar_t *)v17);
      }
      v17 = (WCHAR *)SourceString;
LABEL_35:
      if ( OverlayFilePath >= 0 && RtlInitUnicodeStringEx(&v35, v17) >= 0 )
      {
        v31 = LdrMapAndVerifyResourceFile(v58, (int)&v35, v54, Flags, LocaleName.Buffer, 2, &v50, &v56, &v57);
        appended = v31;
        OverlayFilePath = v31;
        if ( v31 >= 0 )
        {
          RtlInitUnicodeStringEx(&Destination, SourceString);
          goto LABEL_42;
        }
        if ( v31 != -1073741772 )
          LdrpLogMapAndVerifyResourceFileFailure(v54, Flags, &LocaleName);
      }
      goto LABEL_36;
    }
    appended = -1073741811;
LABEL_120:
    OverlayFilePath = appended;
    goto LABEL_42;
  }
  appended = LdrpGetModuleInfoFromVirtualMemory(v58, 702, (int)&v40, (int)&v45, (int)&v52, (int)&v54);
  OverlayFilePath = appended;
  if ( appended >= 0 )
  {
    v5 = (const wchar_t *)v45;
    Str = (wchar_t *)v45;
    goto LABEL_13;
  }
LABEL_42:
  if ( !v57 )
    v57 = -1;
  if ( appended < 0 && (appended == -1073741523 || appended == -1073741659 || appended == -1073741801) )
    v20 = 0;
  else
    v20 = v61;
  if ( v20 )
    LdrpSetAlternateResourceModuleHandle((int)v58, &v57, &v50, 0, v46, v10 != 0 ? 33 : 1, appended, v56);
  if ( v57 == -1 )
  {
    *v49 = 0;
  }
  else
  {
    if ( RtlGetCurrentServiceSessionId() )
      v21 = (int)NtCurrentPeb()->SharedData + 555;
    else
      v21 = 2147353477;
    if ( (*(_BYTE *)v21 & 1) != 0 )
    {
      if ( RtlGetCurrentServiceSessionId() )
        v32 = (int)NtCurrentPeb()->SharedData + 554;
      else
        v32 = 2147353476;
      LdrpTraceLoadMUIDll(&Destination, *(unsigned __int8 *)v32);
    }
    ms_exc.registration.TryLevel = 2;
    *v49 = (PVOID)v57;
    if ( Size_4 )
      *(_DWORD *)Size_4 = v56;
    appended = 0;
    OverlayFilePath = 0;
    ms_exc.registration.TryLevel = -2;
  }
  if ( v45 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v45);
    appended = OverlayFilePath;
  }
  if ( v39 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v39);
    appended = OverlayFilePath;
  }
  if ( BaseAddress )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    appended = OverlayFilePath;
  }
  if ( SourceString && v65 != (wchar_t *)SourceString )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
    return OverlayFilePath;
  }
  return appended;
}
