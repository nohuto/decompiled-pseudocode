/*
 * XREFs of RtlpMuiRegGetString @ 0x18010518C
 * Callers:
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F0720 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180104E3C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpMuiRegGetString(__int64 a1, __int16 a2, _WORD *a3, unsigned int a4)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !a1 || !a3 || !a4 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v6
    && (v7 = *(_QWORD *)(v6 + 16)) != 0
    && (v8 = *(_QWORD *)(v6 + 24)) != 0
    && a2 >= 0
    && a2 < (int)*(unsigned __int16 *)(v6 + 6) )
  {
    return RtlStringCchCopyW(a3, a4, v8 + 2LL * *(__int16 *)(v7 + 2LL * a2));
  }
  else
  {
    return 3221226021LL;
  }
}
