/*
 * XREFs of CempHostInfoInitialize @ 0x18000EA2C
 * Callers:
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180030DD8 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x1800359C8 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 * Callees:
 *     StringCopyWorkerW @ 0x180011250 (StringCopyWorkerW.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(
        STRSAFE_PCNZWCH pszSrc,
        PSID SourceSid,
        int a3,
        int a4,
        __int64 a5,
        STRSAFE_LPWSTR pszDest)
{
  size_t *v10; // r8
  __int64 result; // rax
  size_t v12; // [rsp+20h] [rbp-18h]

  memset_0(pszDest, 0, 0x228uLL);
  StringCopyWorkerW(pszDest, 0xE8uLL, v10, pszSrc, v12);
  RtlCopySid(0x44u, pszDest + 232, SourceSid);
  result = a5;
  *((_DWORD *)pszDest + 133) = a3;
  *((_QWORD *)pszDest + 68) = a5;
  *((_DWORD *)pszDest + 134) = a4;
  return result;
}
