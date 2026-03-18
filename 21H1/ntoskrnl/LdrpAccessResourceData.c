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

__int64 __fastcall LdrpAccessResourceData(unsigned __int64 a1, unsigned int *a2, unsigned __int64 *a3, _DWORD *a4)
{
  unsigned int *v6; // rbx
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  __int64 AlternateResourceModuleHandle; // rax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v14[0] = 0LL;
  v13 = 0LL;
  v6 = a2;
  v7 = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  LOBYTE(a2) = 1;
  if ( PnPBootDriversInitialized == 1 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v9 = RtlImageDirectoryEntryToData(a1, (int)a2, 2, (int)&v15);
    if ( !v9 )
      return 3221225609LL;
    if ( (unsigned __int64)v6 < v9 )
      goto LABEL_10;
    result = LdrpGetImageSize(v7, &v13);
    if ( (_DWORD)result == -1073741701 )
      return result;
    if ( v13 && ((unsigned __int64)v6 < v8 || (unsigned __int64)v6 >= v8 + v13) )
    {
LABEL_10:
      AlternateResourceModuleHandle = LdrpGetAlternateResourceModuleHandleEx(v7, v10, (__int64)v6, v14);
      if ( (unsigned __int64)(AlternateResourceModuleHandle - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        v7 = AlternateResourceModuleHandle;
    }
  }
  return LdrpAccessResourceDataNoMultipleLanguage(v7, v6, a3, a4);
}
