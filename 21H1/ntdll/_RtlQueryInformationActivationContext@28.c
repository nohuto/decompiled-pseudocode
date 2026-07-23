/*
 * XREFs of _RtlQueryInformationActivationContext@28 @ 0x4B2B4CC0
 * Callers:
 *     _SbpRetrieveCompatibilityManifest@12 @ 0x4B2B3DD4 (_SbpRetrieveCompatibilityManifest@12.c)
 *     _RtlQueryInformationActiveActivationContext@16 @ 0x4B2B3E80 (_RtlQueryInformationActiveActivationContext@16.c)
 *     _TppCleanupGroupMemberInitialize@20 @ 0x4B2B4A71 (_TppCleanupGroupMemberInitialize@20.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _RtlpQueryInformationActivationContextDetailedInformation@20 @ 0x4B2A9A59 (_RtlpQueryInformationActivationContextDetailedInformation@20.c)
 *     sub_4B2B4F68 @ 0x4B2B4F68 (sub_4B2B4F68.c)
 *     _RtlpGetActivationContextData@16 @ 0x4B2B4F76 (_RtlpGetActivationContextData@16.c)
 *     _RtlpQueryInformationActivationContextBasicInformation@28 @ 0x4B2B5020 (_RtlpQueryInformationActivationContextBasicInformation@28.c)
 *     _RtlpQueryInformationActivationContextCompatibilityInformation@16 @ 0x4B2B7E6D (_RtlpQueryInformationActivationContextCompatibilityInformation@16.c)
 *     _RtlpxLookupFunctionTable@8 @ 0x4B2BD6C0 (_RtlpxLookupFunctionTable@8.c)
 *     _LdrpFindLoadedDllByHandle@12 @ 0x4B2CC936 (_LdrpFindLoadedDllByHandle@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _RtlpQueryAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DB86 (_RtlpQueryAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20 @ 0x4B33DD92 (_RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation@20.c)
 *     _RtlpQueryInformationActivationContextManifestResourceName@16 @ 0x4B33DFBA (_RtlpQueryInformationActivationContextManifestResourceName@16.c)
 *     _RtlpQueryRunLevel@12 @ 0x4B33E03F (_RtlpQueryRunLevel@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __cdecl RtlQueryInformationActivationContext(
        ULONG Flags,
        PACTIVATION_CONTEXT ActivationContext,
        PACTIVATION_CONTEXT_QUERY_INDEX SubInstanceIndex,
        ACTIVATION_CONTEXT_INFO_CLASS ActivationContextInformationClass,
        PVOID ActivationContextInformation,
        SIZE_T ActivationContextInformationLength,
        PSIZE_T ReturnLength)
{
  int v7; // ecx
  int v8; // ebp
  ULONG v9; // ecx
  ACTIVATION_CONTEXT_INFO_CLASS v10; // edi
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax
  NTSTATUS LoadedDllByHandle; // esi
  _DWORD *v13; // ecx
  int v14; // esi
  int InformationActivationContextBasicInformation; // eax
  _ACTIVATION_CONTEXT *v17; // eax
  _DWORD v18[7]; // [esp-5Ch] [ebp-68h] BYREF
  _ACTIVATION_CONTEXT *v19; // [esp-40h] [ebp-4Ch]
  int v20; // [esp-3Ch] [ebp-48h]
  int v21; // [esp-38h] [ebp-44h]
  int v22; // [esp-34h] [ebp-40h]
  int v23; // [esp-30h] [ebp-3Ch] BYREF
  _DWORD *v24; // [esp-2Ch] [ebp-38h] BYREF
  int v25; // [esp-28h] [ebp-34h]
  int v26; // [esp-24h] [ebp-30h]
  int *v27; // [esp-1Ch] [ebp-28h]
  int v28; // [esp-18h] [ebp-24h]
  int v29; // [esp-14h] [ebp-20h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-10h] [ebp-1Ch]
  int (__cdecl *v31)(int, PVOID, int, int); // [esp-Ch] [ebp-18h]
  _EH4_SCOPETABLE *v32; // [esp-8h] [ebp-14h]
  int v33; // [esp-4h] [ebp-10h]
  int v34; // [esp+0h] [ebp-Ch]
  void *v35; // [esp+4h] [ebp-8h]
  int v36; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v34 = v8;
  v35 = retaddr;
  v33 = -2;
  v32 = stru_4B38BB30;
  v31 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v29 = v7;
  v28 = v7;
  v27 = &v36;
  v32 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38BB30);
  v26 = -1073741595;
  memset(v18, 0, 0x18u);
  v24 = 0;
  v25 = 0;
  v18[5] = 4;
  v33 = 0;
  if ( HIDWORD(ActivationContextInformationLength) )
    *(_DWORD *)HIDWORD(ActivationContextInformationLength) = 0;
  v9 = Flags;
  if ( (Flags & 0x3FFFFFF8) != 0 )
    goto LABEL_50;
  v10 = ActivationContextInformationClass;
  if ( (Flags & 0x80000000) != 0 )
  {
    if ( ActivationContextInformationClass == ActivationContextBasicInformation )
      goto LABEL_6;
    if ( ActivationContextInformationClass != CompatibilityInformationInActivationContext
      && ActivationContextInformationClass != RunlevelInformationInActivationContext )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
        (int)"RtlQueryInformationActivationContext");
      goto LABEL_51;
    }
  }
  if ( ActivationContextInformationClass != ActivationContextBasicInformation
    && ActivationContextInformationClass != CompatibilityInformationInActivationContext
    && ActivationContextInformationClass != ActivationContextDetailedInformation
    && ActivationContextInformationClass != AssemblyDetailedInformationInActivationContext
    && ActivationContextInformationClass != FileInformationInAssemblyOfAssemblyInActivationContext
    && ActivationContextInformationClass != RunlevelInformationInActivationContext
    && ActivationContextInformationClass != ActivationContextManifestResourceName )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - caller asked for unknown information class %lu\n",
      (int)"RtlQueryInformationActivationContext");
    LoadedDllByHandle = -1073741583;
    goto LABEL_20;
  }
LABEL_6:
  if ( (_DWORD)ActivationContextInformationLength )
  {
    if ( !ActivationContextInformation )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        (int)"RtlQueryInformationActivationContext");
      LoadedDllByHandle = -1073741582;
      goto LABEL_20;
    }
  }
  else if ( !HIDWORD(ActivationContextInformationLength) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      (int)"RtlQueryInformationActivationContext");
    LoadedDllByHandle = -1073741580;
    goto LABEL_20;
  }
  if ( (Flags & 7) != 0 )
  {
    switch ( Flags & 7 )
    {
      case 1u:
        if ( !ActivationContext )
        {
          ActiveFrame = NtCurrentTeb()->ActivationContextStackPointer->ActiveFrame;
          if ( !ActiveFrame )
            goto LABEL_12;
          v17 = ActiveFrame->ActivationContext;
          goto LABEL_28;
        }
        DbgPrintEx(
          51,
          0,
          (int)"SXS: %s() - caller asked to use active activation context but passed %p\n",
          (int)"RtlQueryInformationActivationContext");
        goto LABEL_64;
      case 2u:
LABEL_23:
        if ( ActivationContext )
        {
          LoadedDllByHandle = LdrpFindLoadedDllByHandle(&v23);
          v26 = LoadedDllByHandle;
          if ( LoadedDllByHandle < 0 )
            goto LABEL_74;
          if ( v23 < 5 )
          {
            if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
            {
              LoadedDllByHandle = v26;
            }
            else
            {
              LdrpDrainWorkQueue(0);
              if ( *(_DWORD *)(*(_DWORD *)(v25 + 80) + 32) == 9 )
              {
                LoadedDllByHandle = v26;
              }
              else
              {
                LoadedDllByHandle = -1073741515;
                v26 = -1073741515;
              }
              LdrpDropLastInProgressCount();
            }
          }
          if ( LoadedDllByHandle < 0 )
          {
LABEL_74:
            DbgPrintEx(
              51,
              0,
              (int)"SXS: %s() - Caller passed invalid hmodule (%p)\n",
              (int)"RtlQueryInformationActivationContext");
            goto LABEL_21;
          }
          v17 = *(_ACTIVATION_CONTEXT **)(v25 + 72);
          v9 = Flags;
LABEL_28:
          ActivationContext = v17;
          goto LABEL_12;
        }
        DbgPrintEx(
          51,
          0,
          (int)"SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
          (int)"RtlQueryInformationActivationContext");
LABEL_64:
        LoadedDllByHandle = -1073741584;
        goto LABEL_20;
      case 4u:
        if ( !ActivationContext )
        {
          DbgPrintEx(
            51,
            0,
            (int)"SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
            (int)"RtlQueryInformationActivationContext");
          goto LABEL_64;
        }
        if ( (unsigned int)ActivationContext < dword_4B3A9374
          || (unsigned int)ActivationContext >= dword_4B3A9374 + dword_4B3A9378 )
        {
          RtlpxLookupFunctionTable(ActivationContext);
        }
        else
        {
          v18[6] = dword_4B3A9370;
          v19 = (_ACTIVATION_CONTEXT *)*(&dword_4B3A9370 + 1);
          v20 = *(&dword_4B3A9370 + 2);
          v21 = *(&dword_4B3A9370 + 3);
          v10 = ActivationContextInformationClass;
        }
        if ( !v19 )
        {
          DbgPrintEx(
            51,
            0,
            (int)"SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
            (int)"RtlQueryInformationActivationContext");
          LoadedDllByHandle = -1073741515;
          goto LABEL_20;
        }
        ActivationContext = v19;
        goto LABEL_23;
    }
LABEL_50:
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() - Caller passed invalid flags (0x%08lx)\n",
      (int)"RtlQueryInformationActivationContext");
    goto LABEL_51;
  }
LABEL_12:
  LoadedDllByHandle = RtlpGetActivationContextData((v9 & 0x40000000) != 0 ? v18 : 0, &v24);
  v26 = LoadedDllByHandle;
  if ( LoadedDllByHandle < 0 )
    goto LABEL_21;
  v13 = v24;
  if ( !v24 && (unsigned int)(v10 - 2) <= 5 )
  {
LABEL_51:
    LoadedDllByHandle = -1073741585;
    goto LABEL_20;
  }
  switch ( v10 )
  {
    case ActivationContextBasicInformation:
      v14 = 0;
      v22 = 0;
      if ( (Flags & 0x80000000) != 0 )
      {
        v14 = 1;
        v22 = 1;
      }
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v14,
                                                       ActivationContext,
                                                       v24,
                                                       v24,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       HIDWORD(ActivationContextInformationLength));
      goto LABEL_18;
    case ActivationContextDetailedInformation:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v24,
                                                       (char *)ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       (unsigned int *)HIDWORD(ActivationContextInformationLength));
      goto LABEL_18;
    case AssemblyDetailedInformationInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         SHIDWORD(ActivationContextInformationLength));
        goto LABEL_18;
      }
LABEL_88:
      LoadedDllByHandle = -1073741811;
      goto LABEL_20;
    case FileInformationInAssemblyOfAssemblyInActivationContext:
      if ( SubInstanceIndex )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         (int)v24,
                                                         ActivationContextInformation,
                                                         ActivationContextInformationLength,
                                                         SHIDWORD(ActivationContextInformationLength));
        goto LABEL_18;
      }
      goto LABEL_88;
  }
  if ( v10 != RunlevelInformationInActivationContext )
  {
    if ( v10 == CompatibilityInformationInActivationContext )
    {
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       (int)v24,
                                                       ActivationContextInformationLength,
                                                       SHIDWORD(ActivationContextInformationLength));
    }
    else
    {
      if ( v10 != ActivationContextManifestResourceName )
      {
        DbgPrintEx(
          51,
          0,
          (int)"SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
          (int)"RtlQueryInformationActivationContext");
        LoadedDllByHandle = -1073741595;
        goto LABEL_20;
      }
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       (int)v24,
                                                       ActivationContextInformation,
                                                       ActivationContextInformationLength,
                                                       SHIDWORD(ActivationContextInformationLength));
    }
LABEL_18:
    LoadedDllByHandle = InformationActivationContextBasicInformation;
    v26 = InformationActivationContextBasicInformation;
    if ( InformationActivationContextBasicInformation >= 0 )
    {
LABEL_19:
      LoadedDllByHandle = 0;
LABEL_20:
      v26 = LoadedDllByHandle;
      goto LABEL_21;
    }
    goto LABEL_21;
  }
  if ( (unsigned int)ActivationContextInformationLength >= 0xC )
  {
    *(_DWORD *)ActivationContextInformation = 0;
    *((_DWORD *)ActivationContextInformation + 1) = 0;
    *((_DWORD *)ActivationContextInformation + 2) = 0;
    LoadedDllByHandle = RtlpQueryRunLevel((int)v13, (int)ActivationContextInformation);
    v26 = LoadedDllByHandle;
    if ( LoadedDllByHandle < 0 )
      goto LABEL_21;
    if ( HIDWORD(ActivationContextInformationLength) )
      *(_DWORD *)HIDWORD(ActivationContextInformationLength) = 12;
    goto LABEL_19;
  }
  LoadedDllByHandle = -1073741789;
  v26 = -1073741789;
  if ( HIDWORD(ActivationContextInformationLength) )
    *(_DWORD *)HIDWORD(ActivationContextInformationLength) = 12;
LABEL_21:
  v33 = -2;
  sub_4B2B4F68();
  return LoadedDllByHandle;
}
