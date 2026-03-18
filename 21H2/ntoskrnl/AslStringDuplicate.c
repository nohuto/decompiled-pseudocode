/*
 * XREFs of AslStringDuplicate @ 0x14075B1B8
 * Callers:
 *     AslFileMappingCreate @ 0x14075E160 (AslFileMappingCreate.c)
 *     AslpFileMakeStringVersionAttributes @ 0x140841B4C (AslpFileMakeStringVersionAttributes.c)
 *     AslpFileVerQueryBlock @ 0x14084205C (AslpFileVerQueryBlock.c)
 *     AslFileMappingCreateFromImageView @ 0x140842D98 (AslFileMappingCreateFromImageView.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140A111BC (SdbpCheckMatchingRegistryValue.c)
 *     AslRegWildcardFindFirst @ 0x140A16C68 (AslRegWildcardFindFirst.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1402E0200 (RtlStringCchCopyW.c)
 *     RtlStringCchLengthW @ 0x1402E0AC4 (RtlStringCchLengthW.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B444 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslStringDuplicate(wchar_t **a1, const wchar_t *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  unsigned __int64 v6; // rbx
  wchar_t *v7; // rax
  wchar_t *v8; // rdi
  size_t v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  *a1 = 0LL;
  if ( !a2 )
    return 0;
  v5 = RtlStringCchLengthW(a2, 0x7FFFFFFFuLL, &v10);
  if ( v5 < 0 )
  {
LABEL_15:
    AslLogCallPrintf(1LL);
    return (unsigned int)v5;
  }
  v6 = v10 + 1;
  if ( v10 + 1 < v10 || !is_mul_ok(v6, 2uLL) )
  {
    v5 = -1073741675;
    goto LABEL_15;
  }
  v7 = (wchar_t *)AslAlloc(v4, 2 * v6);
  v8 = v7;
  if ( !v7 )
  {
    v5 = -1073741801;
    AslLogCallPrintf(1LL);
    return (unsigned int)v5;
  }
  v5 = RtlStringCchCopyW(v7, v6, a2);
  if ( v5 < 0 )
  {
    AslLogCallPrintf(1LL);
    ExFreePoolWithTag(v8, 0x74705041u);
    return (unsigned int)v5;
  }
  *a1 = v8;
  return 0;
}
