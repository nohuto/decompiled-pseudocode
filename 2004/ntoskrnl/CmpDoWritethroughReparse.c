/*
 * XREFs of CmpDoWritethroughReparse @ 0x1406932A0
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402029C0 (CmSiFreeMemory.c)
 *     RtlUnicodeStringCat @ 0x140203400 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x140203570 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405E55D0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x1405E8840 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x1405E8C60 (CmpKeyFullNameLength.c)
 *     CmpAttachToRegistryProcess @ 0x1405EA8E0 (CmpAttachToRegistryProcess.c)
 *     CmpRecordParseFailure @ 0x1405ECAE0 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x1405EEF40 (CmpIsKeyStackDeleted.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmpDoWritethroughReparse(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        PCUNICODE_STRING a5,
        __int64 a6,
        UNICODE_STRING *a7)
{
  bool v11; // zf
  unsigned int v12; // ebx
  __int64 v14; // rbx
  unsigned __int16 v15; // ax
  __int64 v16; // rdi
  unsigned __int16 v17; // r14
  int v18; // eax
  UNICODE_STRING *v19; // rbx
  int v20; // r8d
  int v21; // edx
  __int64 v22; // rcx
  __int64 KcbAtLayerHeight; // rax
  __int64 v24; // r8
  struct _LOOKASIDE_LIST_EX *v25; // r9
  int started; // eax
  int v27; // eax
  unsigned __int64 v28; // rcx
  const UNICODE_STRING *v29; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-10h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+20h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v31 = 0LL;
  WORD1(v31) = -1;
  SourceString = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_3;
  }
  if ( !a4 )
    goto LABEL_13;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
  }
  else
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3, *(_WORD *)(a1 + 66) - 1);
    started = CmpStartKcbStackForTopLayerKcb((__int64)&v31, KcbAtLayerHeight, v24, v25);
    v12 = started;
    if ( started < 0 )
    {
      v22 = a6;
      v20 = started;
      v21 = 65792;
      goto LABEL_22;
    }
    if ( !CmpIsKeyStackDeleted((__int64)&v31, 0LL) )
    {
LABEL_13:
      v14 = CmpGetKcbAtLayerHeight(a2, *(_WORD *)(a1 + 66) - 1);
      v15 = CmpKeyFullNameLength(v14);
      v16 = a6;
      v17 = v15;
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a6 + 168);
        *(_DWORD *)(v16 + 160) |= 1u;
      }
      if ( a4 )
      {
        v27 = CmpConstructNameWithStatus(*(_QWORD *)(v14 + 72), &SourceString);
        v12 = v27;
        if ( v27 >= 0 )
          goto LABEL_17;
        v20 = v27;
        v21 = 66048;
      }
      else
      {
        v18 = CmpConstructNameWithStatus(v14, &SourceString);
        v12 = v18;
        if ( v18 >= 0 )
        {
LABEL_17:
          DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x36364D43u);
          if ( !DestinationString.Buffer )
          {
            v12 = -1073741670;
            CmpRecordParseFailure(v16, 66560, -1073741670);
            goto LABEL_5;
          }
          DestinationString.Length = 0;
          DestinationString.MaximumLength = v17;
          RtlUnicodeStringCopy(&DestinationString, SourceString);
          if ( a4 )
          {
            v28 = (unsigned __int64)DestinationString.Length >> 1;
            DestinationString.Length += 2;
            v29 = a5;
            DestinationString.Buffer[v28] = 92;
            RtlUnicodeStringCat(&DestinationString, v29);
          }
          v19 = a7;
          ExFreePoolWithTag(a7->Buffer, 0);
          *v19 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)(v16 + 24) |= 0x10u;
          v12 = 872;
          v20 = 872;
          v21 = 66816;
          goto LABEL_21;
        }
        v20 = v18;
        v21 = 66304;
      }
LABEL_21:
      v22 = v16;
LABEL_22:
      CmpRecordParseFailure(v22, v21, v20);
      goto LABEL_3;
    }
    v12 = -1073741199;
  }
LABEL_3:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_5:
  if ( SourceString )
    CmSiFreeMemory((PPRIVILEGE_SET)SourceString);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return v12;
}
