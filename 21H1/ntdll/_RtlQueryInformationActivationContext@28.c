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

int __userpurge RtlQueryInformationActivationContext@<eax>(
        int a1@<ecx>,
        int a2@<ebp>,
        int a3,
        const void *a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int *a9)
{
  int v9; // ecx
  int v10; // edi
  int LoadedDllByHandle; // esi
  _DWORD *v12; // ecx
  int InformationActivationContextBasicInformation; // eax
  _DWORD v15[6]; // [esp-5Ch] [ebp-68h] BYREF
  int v16; // [esp-44h] [ebp-50h] BYREF
  const void *v17; // [esp-40h] [ebp-4Ch]
  int v18; // [esp-3Ch] [ebp-48h]
  int v19; // [esp-38h] [ebp-44h]
  BOOL v20; // [esp-34h] [ebp-40h]
  int v21; // [esp-30h] [ebp-3Ch] BYREF
  _DWORD *v22; // [esp-2Ch] [ebp-38h] BYREF
  int v23; // [esp-28h] [ebp-34h]
  int v24; // [esp-24h] [ebp-30h]
  int *v25; // [esp-1Ch] [ebp-28h]
  int v26; // [esp-18h] [ebp-24h]
  int v27; // [esp-14h] [ebp-20h]
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // [esp-10h] [ebp-1Ch]
  int (__cdecl *v29)(int, PVOID, int, int); // [esp-Ch] [ebp-18h]
  _EH4_SCOPETABLE *v30; // [esp-8h] [ebp-14h]
  int v31; // [esp-4h] [ebp-10h]
  int v32; // [esp+0h] [ebp-Ch]
  void *v33; // [esp+4h] [ebp-8h]
  int v34; // [esp+8h] [ebp-4h] BYREF
  void *retaddr; // [esp+Ch] [ebp+0h]

  v32 = a2;
  v33 = retaddr;
  v31 = -2;
  v30 = stru_4B38BB30;
  v29 = _except_handler4;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  v27 = a1;
  v26 = a1;
  v25 = &v34;
  v30 = (_EH4_SCOPETABLE *)(__security_cookie ^ (unsigned int)stru_4B38BB30);
  v24 = -1073741595;
  memset(v15, 0, sizeof(v15));
  v22 = 0;
  v23 = 0;
  v15[5] = 4;
  v31 = 0;
  if ( a9 )
    *a9 = 0;
  v9 = a3;
  if ( (a3 & 0x3FFFFFF8) != 0 )
    goto LABEL_45;
  v10 = a6;
  if ( a3 < 0 )
  {
    if ( a6 == 1 )
      goto LABEL_6;
    if ( a6 != 6 && a6 != 5 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - Caller passed meaningless flags/class combination (0x%08lx/0x%08lx)\n",
        "RtlQueryInformationActivationContext",
        a3,
        a6);
      goto LABEL_46;
    }
  }
  if ( a6 != 1 && a6 != 6 && a6 != 2 && a6 != 3 && a6 != 4 && a6 != 5 && a6 != 7 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked for unknown information class %lu\n",
      "RtlQueryInformationActivationContext",
      a6);
    LoadedDllByHandle = -1073741583;
    goto LABEL_17;
  }
LABEL_6:
  if ( a8 )
  {
    if ( !a7 )
    {
      DbgPrintEx(
        51,
        0,
        "SXS: %s() - caller passed nonzero buffer length but NULL buffer pointer\n",
        "RtlQueryInformationActivationContext");
      LoadedDllByHandle = -1073741582;
      goto LABEL_17;
    }
  }
  else if ( !a9 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller supplied no buffer to populate and no place to return required byte count\n",
      "RtlQueryInformationActivationContext");
    LoadedDllByHandle = -1073741580;
    goto LABEL_17;
  }
  if ( (a3 & 7) == 0 )
    goto LABEL_11;
  if ( (a3 & 7) == 1 )
  {
    if ( !a4 )
      goto LABEL_11;
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - caller asked to use active activation context but passed %p\n",
      "RtlQueryInformationActivationContext",
      a4);
LABEL_59:
    LoadedDllByHandle = -1073741584;
    goto LABEL_17;
  }
  if ( (a3 & 7) != 2 )
  {
    if ( (a3 & 7) == 4 )
    {
      if ( !a4 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller asked to use activation context from address in .dll but passed NULL\n",
          "RtlQueryInformationActivationContext");
        goto LABEL_59;
      }
      if ( (unsigned int)a4 < dword_4B3A9374 || (unsigned int)a4 >= dword_4B3A9374 + dword_4B3A9378 )
      {
        RtlpxLookupFunctionTable(a4, &v16);
      }
      else
      {
        v16 = dword_4B3A9370;
        v17 = (const void *)*(&dword_4B3A9370 + 1);
        v18 = *(&dword_4B3A9370 + 2);
        v19 = *(&dword_4B3A9370 + 3);
        v10 = a6;
      }
      if ( !v17 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - Caller passed invalid address, not in any .dll (%p)\n",
          "RtlQueryInformationActivationContext",
          a4);
        LoadedDllByHandle = -1073741515;
        goto LABEL_17;
      }
      a4 = v17;
      goto LABEL_20;
    }
LABEL_45:
    DbgPrintEx(51, 0, "SXS: %s() - Caller passed invalid flags (0x%08lx)\n", "RtlQueryInformationActivationContext", a3);
    goto LABEL_46;
  }
LABEL_20:
  if ( !a4 )
  {
    DbgPrintEx(
      51,
      0,
      "SXS: %s() - Caller asked to use activation context from hmodule but passed NULL\n",
      "RtlQueryInformationActivationContext");
    goto LABEL_59;
  }
  LoadedDllByHandle = LdrpFindLoadedDllByHandle(&v21);
  v24 = LoadedDllByHandle;
  if ( LoadedDllByHandle < 0 )
    goto LABEL_69;
  if ( v21 < 5 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      LoadedDllByHandle = v24;
    }
    else
    {
      LdrpDrainWorkQueue(0);
      if ( *(_DWORD *)(*(_DWORD *)(v23 + 80) + 32) == 9 )
      {
        LoadedDllByHandle = v24;
      }
      else
      {
        LoadedDllByHandle = -1073741515;
        v24 = -1073741515;
      }
      LdrpDropLastInProgressCount();
    }
  }
  if ( LoadedDllByHandle < 0 )
  {
LABEL_69:
    DbgPrintEx(51, 0, "SXS: %s() - Caller passed invalid hmodule (%p)\n", "RtlQueryInformationActivationContext", a4);
    goto LABEL_18;
  }
  v9 = a3;
LABEL_11:
  LoadedDllByHandle = RtlpGetActivationContextData((v9 & 0x40000000) != 0 ? v15 : 0, &v22);
  v24 = LoadedDllByHandle;
  if ( LoadedDllByHandle < 0 )
    goto LABEL_18;
  v12 = v22;
  if ( !v22 && (unsigned int)(v10 - 2) <= 5 )
  {
LABEL_46:
    LoadedDllByHandle = -1073741585;
    goto LABEL_17;
  }
  switch ( v10 )
  {
    case 1:
      v20 = a3 < 0;
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextBasicInformation(
                                                       v22,
                                                       v22,
                                                       a7,
                                                       a8,
                                                       a9);
      goto LABEL_15;
    case 2:
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextDetailedInformation(
                                                       v22,
                                                       (char *)a7,
                                                       a8,
                                                       a9);
      goto LABEL_15;
    case 3:
      if ( a5 )
      {
        InformationActivationContextBasicInformation = RtlpQueryAssemblyInformationActivationContextDetailedInformation(
                                                         (int)v22,
                                                         (void *)a7,
                                                         a8,
                                                         (int)a9);
        goto LABEL_15;
      }
LABEL_83:
      LoadedDllByHandle = -1073741811;
      goto LABEL_17;
    case 4:
      if ( a5 )
      {
        InformationActivationContextBasicInformation = RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation(
                                                         (int)v22,
                                                         (void *)a7,
                                                         a8,
                                                         (int)a9);
        goto LABEL_15;
      }
      goto LABEL_83;
  }
  if ( v10 != 5 )
  {
    if ( v10 == 6 )
    {
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextCompatibilityInformation(
                                                       (int)v22,
                                                       a8,
                                                       (int)a9);
    }
    else
    {
      if ( v10 != 7 )
      {
        DbgPrintEx(
          51,
          0,
          "SXS: %s() - internal coding error; missing switch statement branch for InfoClass == %lu\n",
          "RtlQueryInformationActivationContext",
          v10);
        LoadedDllByHandle = -1073741595;
        goto LABEL_17;
      }
      InformationActivationContextBasicInformation = RtlpQueryInformationActivationContextManifestResourceName(
                                                       (int)v22,
                                                       (void *)a7,
                                                       a8,
                                                       (int)a9);
    }
LABEL_15:
    LoadedDllByHandle = InformationActivationContextBasicInformation;
    v24 = InformationActivationContextBasicInformation;
    if ( InformationActivationContextBasicInformation >= 0 )
    {
LABEL_16:
      LoadedDllByHandle = 0;
LABEL_17:
      v24 = LoadedDllByHandle;
      goto LABEL_18;
    }
    goto LABEL_18;
  }
  if ( a8 >= 0xC )
  {
    *(_DWORD *)a7 = 0;
    *(_DWORD *)(a7 + 4) = 0;
    *(_DWORD *)(a7 + 8) = 0;
    LoadedDllByHandle = RtlpQueryRunLevel((int)v12, (int)v12, a7);
    v24 = LoadedDllByHandle;
    if ( LoadedDllByHandle < 0 )
      goto LABEL_18;
    if ( a9 )
      *a9 = 12;
    goto LABEL_16;
  }
  LoadedDllByHandle = -1073741789;
  v24 = -1073741789;
  if ( a9 )
    *a9 = 12;
LABEL_18:
  v31 = -2;
  sub_4B2B4F68();
  return LoadedDllByHandle;
}
