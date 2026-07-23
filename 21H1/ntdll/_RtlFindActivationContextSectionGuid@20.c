/*
 * XREFs of _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0 (_RtlpLocateActivationContextSection@20.c)
 *     _RtlpFindNextActivationContextSection@16 @ 0x4B2CD550 (_RtlpFindNextActivationContextSection@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _RtlCompareMemory@12 @ 0x4B307F30 (_RtlCompareMemory@12.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __cdecl RtlFindActivationContextSectionGuid(
        ULONG Flags,
        PGUID ExtensionGuid,
        ULONG SectionId,
        PGUID GuidToFind,
        PACTCTX_SECTION_KEYED_DATA ReturnedData)
{
  struct _TEB *v5; // ecx
  _PEB *ProcessEnvironmentBlock; // eax
  bool v7; // zf
  NTSTATUS result; // eax
  PACTIVATION_CONTEXT v9; // edi
  _DWORD *v10; // esi
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // ebx
  struct _TEB *v15; // ecx
  unsigned int v16; // esi
  char *SystemDefaultActivationContextData; // ebx
  _PEB *v18; // edx
  int v19; // ecx
  struct _TEB *v20; // eax
  const void *v21; // eax
  _DWORD *p_cbSize; // edx
  ULONG cbSize; // ecx
  void (__thiscall *v24)(_DWORD, int, PACTIVATION_CONTEXT, PVOID, ULONG, _DWORD, char *); // ebx
  _ACTIVATION_CONTEXT_STACK *ActivationContextStackPointer; // eax
  _RTL_ACTIVATION_CONTEXT_STACK_FRAME *ActiveFrame; // eax
  unsigned int v27; // eax
  size_t v28; // [esp+6h] [ebp-6Ch]
  int (__cdecl *v29)(const void *, const void *); // [esp+Eh] [ebp-64h]
  char v30; // [esp+19h] [ebp-59h] BYREF
  unsigned int v31; // [esp+1Ah] [ebp-58h]
  int v32; // [esp+1Eh] [ebp-54h] BYREF
  void *Source2; // [esp+22h] [ebp-50h]
  PACTCTX_SECTION_KEYED_DATA v34; // [esp+26h] [ebp-4Ch]
  int v35; // [esp+2Ah] [ebp-48h] BYREF
  unsigned int *i; // [esp+2Eh] [ebp-44h]
  struct _TEB *p_StackBase; // [esp+32h] [ebp-40h]
  PACTIVATION_CONTEXT ActivationContext; // [esp+36h] [ebp-3Ch] BYREF
  int v39[2]; // [esp+3Ah] [ebp-38h] BYREF
  PGUID v40; // [esp+42h] [ebp-30h]
  int v41; // [esp+46h] [ebp-2Ch]
  int v42; // [esp+4Ah] [ebp-28h]
  int v43; // [esp+4Eh] [ebp-24h]
  _DWORD Key[7]; // [esp+52h] [ebp-20h] BYREF

  v5 = NtCurrentTeb();
  ProcessEnvironmentBlock = v5->ProcessEnvironmentBlock;
  v7 = ProcessEnvironmentBlock->ActivationContextData == 0;
  Source2 = GuidToFind;
  v34 = ReturnedData;
  if ( v7
    && !ProcessEnvironmentBlock->SystemDefaultActivationContextData
    && !v5->ActivationContextStackPointer->ActiveFrame )
  {
    return -1072365567;
  }
  v32 = 0;
  if ( !GuidToFind || (Flags & 0xFFFFFFF8) != 0 )
    return -1073741811;
  if ( (Flags & 7) != 0 )
  {
    if ( !ReturnedData )
      return -1073741811;
  }
  else if ( !ReturnedData )
  {
    goto LABEL_7;
  }
  if ( ReturnedData->cbSize < 0x24 )
    return -1073741811;
LABEL_7:
  if ( (Flags & 2) != 0
    && &ReturnedData->AssemblyMetadata > (ACTCTX_SECTION_KEYED_DATA_ASSEMBLY_METADATA *)((char *)ReturnedData
                                                                                       + ReturnedData->cbSize) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() flags contains return_flags but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      (int)"RtlpFindActivationContextSection_CheckParameters");
    return -1073741811;
  }
  if ( (Flags & 4) != 0 && &ReturnedData[1] > (PACTCTX_SECTION_KEYED_DATA)((char *)ReturnedData + ReturnedData->cbSize) )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS: %s() flags contains return_assembly_metadata but they don't fit in size, return invalid_parameter 0x%08lx.\n",
      (int)"RtlpFindActivationContextSection_CheckParameters");
    return -1073741811;
  }
  v41 = SectionId;
  v39[0] = 24;
  v39[1] = 0;
  v40 = ExtensionGuid;
  v43 = 0;
  ActivationContext = 0;
  v42 = 0;
  result = RtlpFindNextActivationContextSection((int)v39, &v35, &v32, &ActivationContext);
  if ( result < 0 )
    return result;
  if ( (unsigned int)v32 < 0x28 )
    goto LABEL_32;
  v9 = ActivationContext;
  while ( 2 )
  {
    v10 = (_DWORD *)v35;
    if ( *(_DWORD *)v35 != 1682469703 )
    {
LABEL_85:
      DbgPrintEx(
        51,
        0,
        (int)"RtlFindActivationContextSectionGuid() found section at %p (length %lu) which is not a GUID section\n",
        (int)v10);
      return -1072365565;
    }
    v11 = *(_DWORD *)(v35 + 20);
    if ( !v11 )
      goto LABEL_18;
    v12 = *(_DWORD *)(v35 + 28);
    if ( !v12 || *(_DWORD *)(v35 + 8) != 1 )
    {
      v13 = *(_DWORD *)(v35 + 24);
      if ( (*(_BYTE *)(v35 + 16) & 1) != 0 )
      {
        LODWORD(v28) = RtlpSearchProtectedPolicyEntry;
        Key[0] = *(_DWORD *)Source2;
        Key[1] = *((_DWORD *)Source2 + 1);
        Key[2] = *((_DWORD *)Source2 + 2);
        Key[3] = *((_DWORD *)Source2 + 3);
        v14 = bsearch(Key, (const void *)(v13 + v35), v11 | 0x1C00000000LL, v28, v29);
      }
      else
      {
        v21 = (const void *)(v13 + v35);
        v31 = v13 + v35;
        while ( 1 )
        {
          LODWORD(v28) = 16;
          if ( (unsigned int)RtlCompareMemory(v21, Source2, v28) == 16 )
            break;
          v21 = (const void *)(v31 + 28);
          v31 += 28;
          if ( !--v11 )
            goto LABEL_18;
        }
        v14 = (_DWORD *)v31;
      }
      goto LABEL_17;
    }
    v31 = 0;
    v19 = *(_DWORD *)(v12 + v35 + 4) + 8 * (*(_DWORD *)Source2 % *(_DWORD *)(v12 + v35));
    v20 = (struct _TEB *)(v35 + *(_DWORD *)(v19 + v35 + 4));
    i = (unsigned int *)(v35 + v19);
    if ( *(_DWORD *)(v35 + v19) )
    {
      while ( 1 )
      {
        LODWORD(v28) = 16;
        v14 = (_DWORD *)((char *)v10 + (unsigned int)v20->NtTib.ExceptionList);
        p_StackBase = (struct _TEB *)&v20->NtTib.StackBase;
        if ( (unsigned int)RtlCompareMemory(v14, Source2, v28) == 16 )
          break;
        ++v31;
        v20 = p_StackBase;
        if ( v31 >= *i )
          goto LABEL_18;
      }
LABEL_17:
      if ( v14 && v14[4] )
      {
        p_cbSize = &v34->cbSize;
        if ( v34 )
        {
          cbSize = v34->cbSize;
          v34->ulDataFormatVersion = v10[3];
          p_cbSize[2] = (char *)v10 + v14[4];
          p_cbSize[3] = v14[5];
          if ( p_cbSize + 10 <= (_DWORD *)((char *)p_cbSize + cbSize) )
            p_cbSize[9] = v14[6];
        }
        if ( (((unsigned int)&v9[-1].InlineStorageMapEntries[31] + 3) | 7) != 0xFFFFFFFF )
        {
          v24 = (void (__thiscall *)(_DWORD, int, PACTIVATION_CONTEXT, PVOID, ULONG, _DWORD, char *))v9->SentNotifications[0];
          if ( v24 )
          {
            if ( (v9->SentNotifications[2] & 8) == 0 || (v9->DisabledNotifications[2] & 8) == 0 )
            {
              v30 = 0;
              v24(v24, 3, v9, v9->NotificationContext, v9->SentNotifications[1], 0, &v30);
              v9->SentNotifications[2] |= 8u;
              p_cbSize = &v34->cbSize;
              if ( v30 )
                v9->DisabledNotifications[2] |= 8u;
            }
          }
        }
        if ( !p_cbSize )
          return 0;
        result = RtlpFindActivationContextSection_FillOutReturnedData(
                   Flags,
                   p_cbSize,
                   v9,
                   (int)v39,
                   (int)v10,
                   v10[8],
                   v10[9],
                   v32);
        if ( result >= 0 )
          return 0;
        return result;
      }
    }
LABEL_18:
    v15 = NtCurrentTeb();
    v16 = v42;
    SystemDefaultActivationContextData = 0;
    v31 = 0;
    v9 = 0;
    p_StackBase = v15;
    v18 = v15->ProcessEnvironmentBlock;
    for ( i = (unsigned int *)&v18->InheritedAddressSpace; ; v18 = (_PEB *)i )
    {
      if ( v16 <= 2 )
      {
        if ( v16 )
        {
          if ( v16 != 1 )
          {
LABEL_26:
            SystemDefaultActivationContextData = (char *)v18->SystemDefaultActivationContextData;
            v31 = -4;
            if ( SystemDefaultActivationContextData )
            {
              v16 = 3;
              v42 = 3;
              goto LABEL_21;
            }
            goto LABEL_20;
          }
        }
        else
        {
          ActivationContextStackPointer = v15->ActivationContextStackPointer;
          if ( ActivationContextStackPointer )
          {
            ActiveFrame = ActivationContextStackPointer->ActiveFrame;
            if ( ActiveFrame )
            {
              v27 = (unsigned int)ActiveFrame->ActivationContext;
              v31 = v27;
              if ( v27 )
              {
                if ( v27 == -4 )
                {
                  SystemDefaultActivationContextData = (char *)v18->SystemDefaultActivationContextData;
                }
                else
                {
                  if ( v27 == -3 )
                  {
                    SystemDefaultActivationContextData = "Actx ";
LABEL_78:
                    v16 = 1;
                    v42 = 1;
                    goto LABEL_21;
                  }
                  SystemDefaultActivationContextData = *(char **)(v27 + 16);
                }
              }
              if ( SystemDefaultActivationContextData )
                goto LABEL_78;
            }
          }
        }
        SystemDefaultActivationContextData = (char *)v18->ActivationContextData;
        v31 = 0;
        if ( SystemDefaultActivationContextData )
        {
          v16 = 2;
          v42 = 2;
          goto LABEL_21;
        }
        goto LABEL_26;
      }
LABEL_20:
      if ( v16 > 3 )
        return -1073741595;
LABEL_21:
      if ( !SystemDefaultActivationContextData )
        return -1072365560;
      result = RtlpLocateActivationContextSection(SystemDefaultActivationContextData, v40, v41, &v35, &v32);
      if ( result >= 0 )
        break;
      if ( result != -1072365567 || v16 == 3 )
        goto LABEL_30;
      v15 = p_StackBase;
    }
    v43 = (v31 == 0) | (v31 != -4 ? 0 : 2);
    v9 = v31 != -4 ? (PACTIVATION_CONTEXT)v31 : 0;
    result = 0;
LABEL_30:
    if ( result >= 0 )
    {
      if ( (unsigned int)v32 >= 0x28 )
        continue;
LABEL_32:
      v10 = (_DWORD *)v35;
      goto LABEL_85;
    }
    break;
  }
  if ( result == -1072365567 )
    return -1072365560;
  return result;
}
