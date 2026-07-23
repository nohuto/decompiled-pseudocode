/*
 * XREFs of AslStringDuplicate @ 0x14075AA64
 * Callers:
 *     AslFileMappingCreate @ 0x140758BB8 (AslFileMappingCreate.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407B2B5C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x1407B3130 (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x1407B3938 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindFirst @ 0x140969BCC (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchLengthW @ 0x140252F04 (RtlStringCchLengthW.c)
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     RtlStringCchCopyW @ 0x1403711F0 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  NTSTATUS v4; // ebx
  size_t v5; // rbp
  __int64 v6; // rcx
  wchar_t *v7; // rax
  wchar_t *v8; // rdi
  size_t v10; // [rsp+50h] [rbp+8h] BYREF
  ULONGLONG pullResult; // [rsp+58h] [rbp+10h] BYREF

  v10 = 0LL;
  pullResult = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v4 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v10);
  if ( v4 < 0 )
  {
LABEL_17:
    AslLogCallPrintf(1LL);
    return (unsigned int)v4;
  }
  v5 = v10 + 1;
  if ( v10 + 1 < v10 )
  {
    v4 = -1073741675;
    goto LABEL_17;
  }
  v4 = RtlULongLongMult(v10 + 1, 2uLL, &pullResult);
  if ( v4 < 0 )
    goto LABEL_17;
  v7 = (wchar_t *)AslAlloc(v6, pullResult);
  v8 = v7;
  if ( v7 )
  {
    v4 = RtlStringCchCopyW(v7, v5, a2);
    if ( v4 < 0 )
    {
      AslLogCallPrintf(1LL);
    }
    else
    {
      *a1 = v8;
      v8 = 0LL;
      v4 = 0;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0x74705041u);
  }
  else
  {
    v4 = -1073741801;
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
