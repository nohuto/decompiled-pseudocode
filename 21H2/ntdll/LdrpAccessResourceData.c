/*
 * XREFs of LdrpAccessResourceData @ 0x180021500
 * Callers:
 *     LdrAccessResource @ 0x1800207A0 (LdrAccessResource.c)
 *     RtlLoadString @ 0x180053B40 (RtlLoadString.c)
 *     RtlFindMessage @ 0x18006A500 (RtlFindMessage.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E120C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E1754 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, unsigned __int64 a2)
{
  __int64 v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int ImageSize; // ebp
  unsigned __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  char *AlternateResourceModuleHandle; // rax
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v4 = 2147353477LL;
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v5 = 2147353477LL;
  v6 = 2147353476LL;
  if ( (*(_BYTE *)v5 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v13 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v13 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v13);
  }
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == BaseOfImage
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    BaseOfImage = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    v9 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v10 = RtlpImageDirectoryEntryToDataEx((PVOID)BaseOfImage, (__int64)&v16);
    v12 = v16;
    if ( v10 < 0 )
      v12 = 0LL;
    if ( !v12 )
    {
      ImageSize = -1073741687;
      goto LABEL_11;
    }
    if ( a2 < v12 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(BaseOfImage, &v15);
    if ( ImageSize == -1073741701 )
      goto LABEL_11;
    if ( v15 && (a2 < v9 || a2 >= v9 + v15) )
    {
LABEL_30:
      AlternateResourceModuleHandle = (char *)LdrpGetAlternateResourceModuleHandleEx(BaseOfImage, v11, a2, &v17);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        BaseOfImage = (unsigned __int64)AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage((PVOID)BaseOfImage);
LABEL_11:
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v4 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v6);
  }
  return ImageSize;
}
