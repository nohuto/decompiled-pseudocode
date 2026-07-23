/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x18003AB74
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180070764 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180103D38 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104B8C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x180106300 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180106838 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107418 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18003B794 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x180105228 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_8;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, (*(_DWORD *)a1 & 2) == 0) )
    LOBYTE(a3) = 0;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v12);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  v10 = RtlpMuiRegGrowStringPool(*(PVOID *)(a1 + 32));
  if ( v10
    && (*(_DWORD *)a1 |= 2u,
        LOBYTE(v11) = 1,
        *(_QWORD *)(a1 + 32) = v10,
        v4 = RtlpMuiRegGetOrAddStringToPool(v10, a2, v11, 0LL),
        v4 >= 0) )
  {
LABEL_12:
    result = 0LL;
  }
  else
  {
    result = 3221225495LL;
  }
LABEL_9:
  if ( a4 )
    *a4 = v4;
  return result;
}
