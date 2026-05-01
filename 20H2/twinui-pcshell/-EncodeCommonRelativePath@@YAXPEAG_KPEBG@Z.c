/*
 * XREFs of ?EncodeCommonRelativePath@@YAXPEAG_KPEBG@Z @ 0x180238924
 * Callers:
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x18003AAB4 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 * Callees:
 *     _Init_thread_footer @ 0x18008E0E8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18008E150 (_Init_thread_header.c)
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1802389EC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 */

void __fastcall EncodeCommonRelativePath(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, unsigned int a4)
{
  unsigned __int64 v6; // rdx

  v6 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index);
  if ( __TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA > *(_DWORD *)(v6 + 4) )
  {
    Init_thread_header(&__TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA);
    if ( __TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA == -1 )
    {
      `EncodeCommonRelativePath'::`2'::c_rgRelativeFoldersForEncode = FOLDERID_ProgramFilesX86;
      xmmword_1805CDFD0 = (__int128)FOLDERID_ProgramFilesX64;
      xmmword_1805CDFE0 = (__int128)FOLDERID_SystemX86;
      xmmword_1805CDFF0 = (__int128)FOLDERID_System;
      xmmword_1805CE000 = (__int128)FOLDERID_Windows;
      Init_thread_footer(&__TSS0__1__EncodeCommonRelativePath__YAXPEAG_KPEBG_Z_4HA);
    }
  }
  EncodeRelativePath(a1, v6, &`EncodeCommonRelativePath'::`2'::c_rgRelativeFoldersForEncode, a4, a3);
}
