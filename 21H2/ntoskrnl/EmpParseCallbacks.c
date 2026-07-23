/*
 * XREFs of EmpParseCallbacks @ 0x140A46CF4
 * Callers:
 *     EmpParseInfDatabase @ 0x140A465E8 (EmpParseInfDatabase.c)
 * Callees:
 *     EmpSearchCallbackDatabase @ 0x1403B4654 (EmpSearchCallbackDatabase.c)
 *     EmpSearchEntryDatabase @ 0x1403B468C (EmpSearchEntryDatabase.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strtoul @ 0x1403D1670 (strtoul.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     CmpGetSectionLineIndexValueCount @ 0x140A47534 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetGuidFromName @ 0x140A479DC (EmpInfParseGetGuidFromName.c)
 *     EmpInfParseGetSectionLineCount @ 0x140A47A88 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x140A47FF4 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x140A48114 (CmpGetKeyName.c)
 */

__int64 __fastcall EmpParseCallbacks(__int64 a1)
{
  unsigned int v2; // esi
  int GuidFromName; // ebx
  unsigned int SectionLineCount; // r12d
  __int64 KeyName; // rbx
  unsigned int SectionLineIndexValueCount; // eax
  unsigned int v7; // r15d
  _QWORD *PoolWithTag; // rax
  _QWORD *v9; // rdi
  void *v10; // rcx
  const char *SectionLineIndex; // rax
  const char *v12; // rax
  unsigned int v13; // r14d
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF

  v18 = 0LL;
  v2 = 0;
  GuidFromName = 0;
  SectionLineCount = EmpInfParseGetSectionLineCount(a1, "CallbackDef");
  if ( SectionLineCount )
  {
    while ( 1 )
    {
      KeyName = CmpGetKeyName(a1, "CallbackDef", v2);
      if ( !KeyName )
        return 0;
      SectionLineIndexValueCount = CmpGetSectionLineIndexValueCount(a1, "CallbackDef", v2);
      v7 = SectionLineIndexValueCount;
      if ( SectionLineIndexValueCount < 2 )
        goto LABEL_20;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (int)(8 * SectionLineIndexValueCount + 56), 0x74694D45u);
      v9 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      GuidFromName = EmpInfParseGetGuidFromName(a1, "CallbackGuidDef", KeyName, PoolWithTag, v18, *((_QWORD *)&v18 + 1));
      v10 = v9;
      if ( GuidFromName < 0 || EmpSearchCallbackDatabase(v9) )
        goto LABEL_19;
      *((_DWORD *)v9 + 16) = v7 - 2;
      SectionLineIndex = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 0LL);
      if ( !SectionLineIndex )
        goto LABEL_18;
      *((_DWORD *)v9 + 14) = strtoul(SectionLineIndex, 0LL, 10);
      v12 = (const char *)CmpGetSectionLineIndex(a1, "CallbackDef", v2, 1LL);
      if ( !v12 )
        goto LABEL_18;
      v13 = 2;
      *((_DWORD *)v9 + 15) = strtoul(v12, 0LL, 10);
      if ( v7 > 2 )
        break;
LABEL_10:
      if ( GuidFromName < 0 )
        goto LABEL_18;
      v9[6] = 0LL;
      v9[2] = 0LL;
      *((_DWORD *)v9 + 6) = 0;
      v9[4] = 0LL;
      ++EmpNumberOfCallbacks;
      v9[5] = EmpCallbackListHead;
      EmpCallbackListHead = (__int64)(v9 + 5);
LABEL_12:
      if ( ++v2 >= SectionLineCount )
        return (unsigned int)GuidFromName;
    }
    while ( 1 )
    {
      v15 = CmpGetSectionLineIndex(a1, "CallbackDef", v2, v13);
      GuidFromName = ((__int64 (__fastcall *)(__int64, const char *, __int64, __int128 *))EmpInfParseGetGuidFromName)(
                       a1,
                       "EntryTypeGuidDef",
                       v15,
                       &v18);
      if ( GuidFromName < 0 )
        break;
      v16 = EmpSearchEntryDatabase(&v18);
      if ( !v16 )
      {
        GuidFromName = -1073741275;
        goto LABEL_10;
      }
      v17 = v13 - 2;
      ++v13;
      v9[v17 + 9] = v16;
      if ( v13 >= v7 )
        goto LABEL_10;
    }
LABEL_18:
    v10 = v9;
LABEL_19:
    ExFreePoolWithTag(v10, 0x74694D45u);
LABEL_20:
    GuidFromName = 0;
    goto LABEL_12;
  }
  return (unsigned int)GuidFromName;
}
