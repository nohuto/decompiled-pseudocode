/*
 * XREFs of CmpDoWritethroughReparse @ 0x1405E9D60
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x14025C320 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x14025C490 (RtlUnicodeStringCopy.c)
 *     CmSiFreeMemory @ 0x1402E2170 (CmSiFreeMemory.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14061ABF0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x14061E280 (CmpKeyFullNameLength.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 *     CmpRecordParseFailure @ 0x140622100 (CmpRecordParseFailure.c)
 *     CmpIsKeyStackDeleted @ 0x140624560 (CmpIsKeyStackDeleted.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  int v25; // eax
  unsigned __int64 v26; // rcx
  const UNICODE_STRING *v27; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-30h] BYREF
  __int128 v29; // [rsp+30h] [rbp-20h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-10h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+20h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v29 = 0LL;
  WORD1(v29) = -1;
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
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3);
    started = CmpStartKcbStackForTopLayerKcb(&v29, KcbAtLayerHeight);
    v12 = started;
    if ( started < 0 )
    {
      v22 = a6;
      v20 = (unsigned int)started;
      v21 = 65792LL;
      goto LABEL_22;
    }
    if ( !(unsigned __int8)CmpIsKeyStackDeleted(&v29, 0LL) )
    {
LABEL_13:
      v14 = CmpGetKcbAtLayerHeight(a2);
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
        v25 = CmpConstructNameWithStatus(*(_QWORD *)(v14 + 72), &SourceString);
        v12 = v25;
        if ( v25 >= 0 )
          goto LABEL_17;
        v20 = (unsigned int)v25;
        v21 = 66048LL;
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
            CmpRecordParseFailure(v16, 66560LL, 3221225626LL);
            goto LABEL_5;
          }
          DestinationString.Length = 0;
          DestinationString.MaximumLength = v17;
          RtlUnicodeStringCopy(&DestinationString, SourceString);
          if ( a4 )
          {
            v26 = (unsigned __int64)DestinationString.Length >> 1;
            DestinationString.Length += 2;
            v27 = a5;
            DestinationString.Buffer[v26] = 92;
            RtlUnicodeStringCat(&DestinationString, v27);
          }
          v19 = a7;
          ExFreePoolWithTag(a7->Buffer, 0);
          *v19 = DestinationString;
          RtlInitUnicodeString(&DestinationString, 0LL);
          *(_DWORD *)(v16 + 24) |= 0x10u;
          v12 = 872;
          v20 = 872LL;
          v21 = 66816LL;
          goto LABEL_21;
        }
        v20 = (unsigned int)v18;
        v21 = 66304LL;
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
