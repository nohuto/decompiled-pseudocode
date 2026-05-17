/*
 * XREFs of RtlpMuiRegGetOrAddString @ 0x18003AB74
 * Callers:
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x180070764 (RtlpMuiRegGetLanguageSpec.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180103D78 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104BCC (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     _RtlMuiRegAddLIPParent @ 0x180106340 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x180106878 (_RtlpMuiRegInitAnyLanguage.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetOrAddStringToPool @ 0x18003B794 (RtlpMuiRegGetOrAddStringToPool.c)
 *     RtlpMuiRegGrowStringPool @ 0x180105268 (RtlpMuiRegGrowStringPool.c)
 */

__int64 __fastcall RtlpMuiRegGetOrAddString(__int64 a1, _WORD *a2, __int64 a3, __int16 *a4)
{
  __int16 v4; // bp
  char v6; // r15
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned int v15; // [rsp+50h] [rbp+8h] BYREF

  v4 = -1;
  v6 = a3;
  if ( !a1 || !a2 || !*a2 )
    goto LABEL_8;
  v9 = *(_DWORD *)a1 & 2;
  if ( !(_BYTE)a3 || (LOBYTE(a3) = 1, !v9) )
    LOBYTE(a3) = 0;
  v4 = RtlpMuiRegGetOrAddStringToPool(*(_QWORD *)(a1 + 32), a2, a3, &v15);
  if ( v4 >= 0 )
    goto LABEL_12;
  if ( !v6 )
  {
LABEL_8:
    result = 3221225485LL;
    goto LABEL_9;
  }
  LOBYTE(v11) = v9 == 0;
  v13 = RtlpMuiRegGrowStringPool(*(_QWORD *)(a1 + 32), v10, v15, v11);
  if ( v13
    && (*(_DWORD *)a1 |= 2u,
        LOBYTE(v14) = 1,
        *(_QWORD *)(a1 + 32) = v13,
        v4 = RtlpMuiRegGetOrAddStringToPool(v13, a2, v14, 0LL),
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
