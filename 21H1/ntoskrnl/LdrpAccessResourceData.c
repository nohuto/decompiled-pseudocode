/*
 * XREFs of LdrpAccessResourceData @ 0x1406FC428
 * Callers:
 *     RtlFindMessage @ 0x1406FC510 (RtlFindMessage.c)
 *     LdrAccessResource @ 0x1407B0350 (LdrAccessResource.c)
 *     RtlLoadString @ 0x14090D030 (RtlLoadString.c)
 * Callees:
 *     LdrpGetImageSize @ 0x14033A7A0 (LdrpGetImageSize.c)
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x14033B550 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1406F9574 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 BaseOfImage, ULONG *a2, unsigned __int64 *a3, _DWORD *a4)
{
  PVOID v7; // rdi
  unsigned __int64 v8; // rsi
  ULONG *v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  ULONG v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v7 = (PVOID)BaseOfImage;
  if ( !BaseOfImage || !a2 )
    return 3221225485LL;
  if ( PnPBootDriversInitialized == 1 )
  {
    v8 = BaseOfImage & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = (ULONG *)RtlImageDirectoryEntryToData((PVOID)BaseOfImage, 1u, 2u, &v15);
    if ( !v9 )
      return 3221225609LL;
    if ( a2 < v9 )
      goto LABEL_10;
    result = LdrpGetImageSize((__int64)v7, &v13);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v13 && ((unsigned __int64)a2 < v8 || (unsigned __int64)a2 >= v8 + v13) )
    {
LABEL_10:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx((__int64)v7, v10, (__int64)a2, v14);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = (PVOID)AlternateResourceModuleHandle;
    }
  }
  return LdrpAccessResourceDataNoMultipleLanguage(v7, a2, a3, a4);
}
