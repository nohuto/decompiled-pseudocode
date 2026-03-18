/*
 * XREFs of ?LogFontLoadAttempt@@YGXPAXW4_W32KFontSourceType@@PBGH@Z @ 0x1D0476
 * Callers:
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0xB223C (__tlgKeywordOn@12.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByVal@$03@@3@Z @ 0x140661 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@.c)
 *     _GetProcessImageFileName@4 @ 0x1D1030 (_GetProcessImageFileName@4.c)
 */

char __fastcall LogFontLoadAttempt(void *a1, int a2, int a3, int a4)
{
  int ProcessImageFileName; // eax
  int v6; // esi
  char *v7; // eax
  int v8; // edi
  char result; // al
  int v10; // ecx

  ProcessImageFileName = GetProcessImageFileName(a1);
  v6 = ProcessImageFileName;
  if ( ProcessImageFileName )
    v7 = *(char **)(ProcessImageFileName + 4);
  else
    v7 = byte_FC318;
  v8 = a4;
  result = EtwFontLoadAttemptEvent(v7, a2, a3, a4);
  if ( (unsigned int)dword_266280 > 5 )
  {
    result = _tlgKeywordOn(&dword_266280, 0x200000000000LL);
    if ( result )
    {
      a4 = v8;
      a3 = a2;
      result = _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                 (int)&dword_266280,
                 byte_257994,
                 v10,
                 v10,
                 (int)&a3,
                 (int)&a4);
    }
  }
  if ( v6 )
    return FreeTmpBuffer(v6);
  return result;
}
