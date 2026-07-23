/*
 * XREFs of CmpDoWritethroughReparse @ 0x140649EA0
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x1402253C0 (CmSiFreeMemory.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlUnicodeStringCat @ 0x1402AB490 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x1402AB600 (RtlUnicodeStringCopy.c)
 *     CmpUnicodeStringAppendCharacter @ 0x1405CD048 (CmpUnicodeStringAppendCharacter.c)
 *     CmpRecordParseFailure @ 0x1405E99A0 (CmpRecordParseFailure.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x14065AB50 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1406DECB0 (CmpGetKcbAtLayerHeight.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpKeyFullNameLength @ 0x1406E2BE0 (CmpKeyFullNameLength.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 *     CmpIsKeyStackDeleted @ 0x140712920 (CmpIsKeyStackDeleted.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  __int64 KcbAtLayerHeight; // rax
  int started; // eax
  __int64 v15; // rcx
  int v16; // r8d
  int v17; // edx
  __int64 v18; // rbx
  unsigned int v19; // eax
  SIZE_T v20; // rbp
  __int64 v21; // rdi
  int v22; // eax
  int v23; // eax
  UNICODE_STRING *v24; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  __int128 v27; // [rsp+30h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+40h] [rbp-28h]
  PCUNICODE_STRING SourceString; // [rsp+70h] [rbp+8h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v11 = *(_DWORD *)(a1 + 40) == -1;
  v27 = 0LL;
  WORD1(v27) = -1;
  SourceString = 0LL;
  *(_OWORD *)Privileges = 0LL;
  if ( !v11 )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 4152LL) & 0x2000) == 0 )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  if ( !a4 )
    goto LABEL_12;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 72) + 65LL) )
  {
    v12 = -1073741199;
    goto LABEL_28;
  }
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a3);
  started = CmpStartKcbStackForTopLayerKcb(&v27, KcbAtLayerHeight);
  v12 = started;
  if ( started >= 0 )
  {
    if ( (unsigned __int8)CmpIsKeyStackDeleted(&v27, 0LL) )
    {
      v12 = -1073741199;
      goto LABEL_28;
    }
LABEL_12:
    v18 = CmpGetKcbAtLayerHeight(a2);
    v19 = CmpKeyFullNameLength(v18);
    v20 = v19;
    if ( v19 <= 0xFFFF )
    {
      v21 = a6;
      if ( (*(_DWORD *)(a6 + 160) & 1) == 0 )
      {
        CmpAttachToRegistryProcess(a6 + 168);
        *(_DWORD *)(v21 + 160) |= 1u;
      }
      if ( a4 )
      {
        v22 = CmpConstructNameWithStatus(*(_QWORD *)(v18 + 72), &SourceString);
        v12 = v22;
        if ( v22 < 0 )
        {
          v16 = v22;
          v17 = 66048;
          v15 = v21;
          goto LABEL_27;
        }
      }
      else
      {
        v23 = CmpConstructNameWithStatus(v18, &SourceString);
        v12 = v23;
        if ( v23 < 0 )
        {
          v16 = v23;
          v17 = 66304;
          v15 = v21;
          goto LABEL_27;
        }
      }
      DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v20, 0x36364D43u);
      if ( !DestinationString.Buffer )
      {
        v12 = -1073741670;
        CmpRecordParseFailure(v21, 66560, -1073741670);
        goto LABEL_30;
      }
      DestinationString.Length = 0;
      DestinationString.MaximumLength = v20;
      RtlUnicodeStringCopy(&DestinationString, SourceString);
      if ( a4 )
      {
        CmpUnicodeStringAppendCharacter(&DestinationString.Length);
        RtlUnicodeStringCat(&DestinationString, a5);
      }
      v24 = a7;
      ExFreePoolWithTag(a7->Buffer, 0);
      *v24 = DestinationString;
      RtlInitUnicodeString(&DestinationString, 0LL);
      *(_DWORD *)(v21 + 24) |= 0x10u;
      v17 = 66816;
      v15 = v21;
      v12 = 872;
    }
    else
    {
      v15 = a6;
      v12 = -1073741811;
      v17 = 65872;
    }
    v16 = v12;
    goto LABEL_27;
  }
  v15 = a6;
  v16 = started;
  v17 = 65792;
LABEL_27:
  CmpRecordParseFailure(v15, v17, v16);
LABEL_28:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_30:
  if ( SourceString )
    CmSiFreeMemory((PPRIVILEGE_SET)SourceString);
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  return v12;
}
