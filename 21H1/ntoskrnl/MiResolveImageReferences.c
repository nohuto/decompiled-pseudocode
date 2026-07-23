/*
 * XREFs of MiResolveImageReferences @ 0x140745BF8
 * Callers:
 *     MiResolveImageImports @ 0x1407459B0 (MiResolveImageImports.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140203280 (RtlInitAnsiString.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     RtlAppendUnicodeStringToString @ 0x1402E1FA0 (RtlAppendUnicodeStringToString.c)
 *     MiSessionLookupImage @ 0x14031F488 (MiSessionLookupImage.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     ApiSetResolveToHost @ 0x14036E864 (ApiSetResolveToHost.c)
 *     MiSessionReferenceImage @ 0x1403A4534 (MiSessionReferenceImage.c)
 *     _strnicmp @ 0x1403CDA40 (_strnicmp.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlEqualUnicodeString @ 0x140609D30 (RtlEqualUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     RtlDuplicateUnicodeString @ 0x1406B0430 (RtlDuplicateUnicodeString.c)
 *     MiSnapThunk @ 0x14074604C (MiSnapThunk.c)
 *     PsQueryCurrentApiSetSchema @ 0x140746300 (PsQueryCurrentApiSetSchema.c)
 *     MiCompressImportList @ 0x14074633C (MiCompressImportList.c)
 *     MiPrepareImportList @ 0x1407463FC (MiPrepareImportList.c)
 *     MiDereferenceImports @ 0x14075D240 (MiDereferenceImports.c)
 *     MiLoadImportDll @ 0x140793230 (MiLoadImportDll.c)
 *     MiFormFullImageName @ 0x1407B55C8 (MiFormFullImageName.c)
 *     MiLogFailedDriverLoad @ 0x1408C3450 (MiLogFailedDriverLoad.c)
 *     MiSnapUnresolvedImport @ 0x1408CC8AC (MiSnapUnresolvedImport.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiResolveImageReferences(__int64 a1, __int64 a2, _QWORD *a3, const UNICODE_STRING *a4)
{
  const UNICODE_STRING *v4; // rsi
  char *v5; // r13
  unsigned int *v6; // rax
  unsigned int *v7; // r12
  char v8; // r14
  PVOID v9; // rdi
  int v10; // eax
  _QWORD *v11; // r15
  int ImportDll; // ebx
  __int64 v13; // rax
  const CHAR *v14; // rdi
  unsigned int v15; // r14d
  __int64 CurrentApiSetSchema; // rax
  PVOID *v17; // rbx
  _QWORD *v18; // rdi
  unsigned __int64 v19; // rsi
  ULONG v20; // ecx
  __int64 v21; // rax
  char *v22; // rdi
  unsigned int v23; // r14d
  __int64 v24; // rbx
  _QWORD *v26; // rcx
  char v27; // [rsp+38h] [rbp-79h]
  char v28[7]; // [rsp+39h] [rbp-78h] BYREF
  PVOID p_String1; // [rsp+40h] [rbp-71h] BYREF
  __int64 v30; // [rsp+48h] [rbp-69h]
  ULONG Size; // [rsp+50h] [rbp-61h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-59h] BYREF
  PVOID P[2]; // [rsp+68h] [rbp-49h] BYREF
  _QWORD v34[2]; // [rsp+78h] [rbp-39h] BYREF
  UNICODE_STRING String1; // [rsp+88h] [rbp-29h] BYREF
  __int64 v36; // [rsp+98h] [rbp-19h] BYREF
  _QWORD v37[2]; // [rsp+A0h] [rbp-11h] BYREF
  _QWORD *v38; // [rsp+B0h] [rbp-1h]
  STRING DestinationString; // [rsp+B8h] [rbp+7h] BYREF

  v37[0] = 3932218LL;
  v37[1] = L"\\SystemRoot\\System32\\drivers\\";
  v4 = a4;
  *(_QWORD *)&String1.Length = 0LL;
  v5 = *(char **)(a1 + 48);
  *(_QWORD *)(a1 + 136) = -2LL;
  v34[0] = 0LL;
  v36 = 0LL;
  v28[0] = 0;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  *(_OWORD *)P = 0LL;
  v6 = (unsigned int *)RtlImageDirectoryEntryToData(v5, 1u, 1u, &Size);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  v27 = 0;
  p_String1 = 0LL;
  v8 = 0;
  v30 = 0LL;
  v9 = 0LL;
  Size = 0;
  String1.Buffer = 0LL;
  v10 = MiPrepareImportList(v6, &p_String1);
  v11 = p_String1;
  ImportDll = v10;
  v13 = 0LL;
  if ( ImportDll >= 0 )
  {
    while ( 1 )
    {
      if ( !v7[3] || !*v7 )
      {
        v24 = MiCompressImportList(v11);
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
          MiSessionLookupImage((unsigned __int64)v5)[11] = v24;
        else
          *(_QWORD *)(a1 + 136) = v24;
        return 0LL;
      }
      v14 = &v5[v7[3]];
      p_String1 = 0LL;
      RtlInitAnsiString(&DestinationString, v14);
      v15 = 0;
      ImportDll = RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u);
      if ( ImportDll < 0 )
        goto LABEL_67;
      if ( !UnicodeString.Buffer )
      {
LABEL_66:
        ImportDll = -1073741670;
        goto LABEL_67;
      }
      CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
      ImportDll = ApiSetResolveToHost(CurrentApiSetSchema, &UnicodeString.Length, a2, v28, (__int64)P);
      if ( ImportDll < 0 )
        goto LABEL_67;
      if ( v28[0] )
      {
        RtlFreeAnsiString(&UnicodeString);
        if ( !LOWORD(P[0]) )
          goto LABEL_7;
        v38 = v37;
        v15 = 0x80000000;
        ImportDll = RtlDuplicateUnicodeString(0, (PCUNICODE_STRING)P, &UnicodeString);
        v13 = 0LL;
        if ( ImportDll < 0 )
          goto LABEL_68;
      }
      else
      {
        v38 = a3;
      }
      if ( !v4 || !strnicmp(v14, "ntoskrnl", 8uLL) || !strnicmp(v14, "hal", 3uLL) )
      {
        String1 = UnicodeString;
      }
      else
      {
        String1.MaximumLength = UnicodeString.Length + v4->Length;
        String1.Buffer = (wchar_t *)MiAllocatePool(256, String1.MaximumLength, 0x54446D4Du);
        if ( !String1.Buffer )
          goto LABEL_66;
        String1.Length = 0;
        RtlAppendUnicodeStringToString(&String1, v4);
        RtlAppendUnicodeStringToString(&String1, &UnicodeString);
        v27 = 1;
      }
      v17 = (PVOID *)PsLoadedModuleList;
      p_String1 = &String1;
      if ( PsLoadedModuleList == &PsLoadedModuleList )
        goto LABEL_20;
      while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)(v17 + 11), 1u) )
      {
        v17 = (PVOID *)*v17;
        if ( v17 == &PsLoadedModuleList )
          goto LABEL_20;
      }
      v19 = (unsigned __int64)v17[6];
      if ( !v19 )
        break;
      if ( ((_DWORD)v17[13] & 0x1000) == 0 )
      {
        if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v17[6]) == 1 )
        {
          if ( !(unsigned int)MiSessionReferenceImage(v19) )
            v19 = 0LL;
        }
        else if ( v17[17] != (PVOID)1 )
        {
          ++*((_WORD *)v17 + 54);
        }
      }
      if ( !v19 )
        break;
LABEL_31:
      if ( ((_DWORD)v17[13] & 0x1000) == 0 && v17[17] != (PVOID)1 )
      {
        v20 = Size;
        v11[Size + 1] = v17;
        Size = v20 + 1;
      }
      v21 = *v7;
      if ( (_DWORD)v21 )
      {
        v22 = &v5[v21];
        v23 = (_DWORD)v5 + v7[4];
        while ( *(_QWORD *)v22 )
        {
          ImportDll = MiSnapThunk(v19, (_DWORD)v5, (_DWORD)v22, v23, 0LL);
          if ( ImportDll < 0 )
          {
            v13 = MiSnapUnresolvedImport(v5, v22, v19);
            goto LABEL_68;
          }
          v22 += 8;
          v23 += 8;
        }
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( v27 )
      {
        ExFreePoolWithTag(String1.Buffer, 0);
        v27 = 0;
      }
      v4 = a4;
LABEL_7:
      v7 += 5;
    }
    LODWORD(v4) = (_DWORD)a4;
LABEL_20:
    v18 = v38;
    if ( !(unsigned int)MiFormFullImageName(v38, &UnicodeString, P) )
      goto LABEL_66;
    ImportDll = MiLoadImportDll((unsigned int)P, (_DWORD)v4, v15, (unsigned int)v34, (__int64)&v36);
    if ( ImportDll == -1073741800 )
    {
      if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) != 1 )
      {
LABEL_23:
        ExFreePoolWithTag(P[1], 0);
        v13 = 0LL;
        if ( ImportDll < 0 )
          goto LABEL_68;
        v17 = (PVOID *)v34[0];
        v19 = *(_QWORD *)(v34[0] + 48LL);
        goto LABEL_31;
      }
      ImportDll = MiLoadImportDll((unsigned int)P, (_DWORD)v4, v15 | 1, (unsigned int)v34, (__int64)&v36);
    }
    if ( ImportDll == -1073741772 )
    {
      ExFreePoolWithTag(P[1], 0);
      if ( v18 == v37 )
      {
        if ( !v28[0] )
        {
          ImportDll = -1073741772;
LABEL_67:
          v13 = v30;
LABEL_68:
          v9 = p_String1;
          v8 = v27;
          goto LABEL_69;
        }
        v26 = a3;
      }
      else
      {
        v26 = v37;
      }
      if ( !(unsigned int)MiFormFullImageName(v26, &UnicodeString, P) )
        goto LABEL_66;
      ImportDll = MiLoadImportDll((unsigned int)P, (_DWORD)v4, v15, (unsigned int)v34, (__int64)&v36);
      if ( v28[0] && ImportDll == -1073741800 && (unsigned int)MiGetSystemRegionType((unsigned __int64)v5) == 1 )
        ImportDll = MiLoadImportDll((unsigned int)P, (_DWORD)v4, v15 | 1, (unsigned int)v34, (__int64)&v36);
    }
    goto LABEL_23;
  }
LABEL_69:
  MiLogFailedDriverLoad(a2, v9, v13, (unsigned int)ImportDll);
  if ( v8 )
    ExFreePoolWithTag(String1.Buffer, 0);
  RtlFreeAnsiString(&UnicodeString);
  if ( v11 )
  {
    if ( Size != *v11 )
      *v11 = Size;
    MiDereferenceImports(v11);
    ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)ImportDll;
}
