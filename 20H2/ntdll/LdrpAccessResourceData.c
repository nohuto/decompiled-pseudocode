/*
 * XREFs of LdrpAccessResourceData @ 0x180021500
 * Callers:
 *     LdrAccessResource @ 0x1800207A0 (LdrAccessResource.c)
 *     RtlLoadString @ 0x180046FA0 (RtlLoadString.c)
 *     RtlFindMessage @ 0x180069010 (RtlFindMessage.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpGetImageSize @ 0x18003376C (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180033848 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E1494 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpTraceLoadMUIDll @ 0x1800E19DC (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpAccessResourceData(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int64 v8; // rdx
  int v9; // r8d
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned int ImageSize; // ebp
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rcx
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-40h] BYREF
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  char v26; // [rsp+80h] [rbp+8h] BYREF

  v25 = 0LL;
  v23 = 0LL;
  v7 = a1;
  v10 = 2147353477LL;
  if ( (unsigned int)RtlGetCurrentServiceSessionId(a1, a2) )
    v11 = (__int64)NtCurrentPeb()->SharedData + 555;
  else
    v11 = 2147353477LL;
  v12 = 2147353476LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v11, v8) )
      v21 = (__int64)NtCurrentPeb()->SharedData + 554;
    else
      v21 = 2147353476LL;
    LdrpTraceLoadMUIDll(L",.", *(unsigned __int8 *)v21);
  }
  if ( !v7 || !a2 )
    return 3221225485LL;
  if ( NtCurrentTeb()->ResourceRetValue
    && *(_QWORD *)NtCurrentTeb()->ResourceRetValue == v7
    && *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 1) == a2 )
  {
    v7 = *((_QWORD *)NtCurrentTeb()->ResourceRetValue + 2);
  }
  else
  {
    LOWORD(v9) = 2;
    LOBYTE(v8) = 1;
    v19 = v7 & 0xFFFFFFFFFFFFFFFCuLL;
    v20 = RtlpImageDirectoryEntryToDataEx(v7, v8, v9, (unsigned int)&v26, (__int64)&v24);
    v14 = v24;
    if ( v20 < 0 )
      v14 = 0LL;
    if ( !v14 )
    {
      ImageSize = -1073741687;
      goto LABEL_11;
    }
    if ( a2 < v14 )
      goto LABEL_30;
    ImageSize = LdrpGetImageSize(v7, &v23);
    if ( ImageSize == -1073741701 )
      goto LABEL_11;
    if ( v23 && (a2 < v19 || a2 >= v19 + v23) )
    {
LABEL_30:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(v7, v13, a2, &v25);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = AlternateResourceModuleHandle;
    }
  }
  ImageSize = LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
LABEL_11:
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v14, v13) )
    v10 = (__int64)NtCurrentPeb()->SharedData + 555;
  if ( (*(_BYTE *)v10 & 1) != 0 )
  {
    if ( (unsigned int)RtlGetCurrentServiceSessionId(v17, v16) )
      v12 = (__int64)NtCurrentPeb()->SharedData + 554;
    LdrpTraceLoadMUIDll(L"*,", *(unsigned __int8 *)v12);
  }
  return ImageSize;
}
