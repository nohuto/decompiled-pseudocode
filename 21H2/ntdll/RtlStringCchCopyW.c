/*
 * XREFs of RtlStringCchCopyW @ 0x180047134
 * Callers:
 *     RtlConvertLCIDToString @ 0x1800EEED0 (RtlConvertLCIDToString.c)
 *     RtlpSetInstallLanguage @ 0x1800F0B80 (RtlpSetInstallLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180104E3C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegGetString @ 0x18010518C (RtlpMuiRegGetString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyW(_WORD *a1, __int64 a2, __int64 a3)
{
  signed int v3; // r9d
  __int64 v4; // r10
  __int64 v5; // r8
  __int16 v6; // ax
  _WORD *v7; // rax

  v3 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    if ( a2 )
    {
      v4 = 2147483646 - a2;
      v5 = a3 - (_QWORD)a1;
      do
      {
        if ( !(v4 + a2) )
          break;
        v6 = *(_WORD *)((char *)a1 + v5);
        if ( !v6 )
          break;
        *a1++ = v6;
        --a2;
      }
      while ( a2 );
    }
    v7 = a1 - 1;
    if ( a2 )
      v7 = a1;
    v3 = a2 == 0 ? 0x80000005 : 0;
    *v7 = 0;
  }
  return (unsigned int)v3;
}
