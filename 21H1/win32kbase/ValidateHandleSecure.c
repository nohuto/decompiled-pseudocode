/*
 * XREFs of ValidateHandleSecure @ 0x1C0070550
 * Callers:
 *     HMValidateHandle @ 0x1C0070320 (HMValidateHandle.c)
 * Callees:
 *     IsHandleEntrySecure @ 0x1C002F12C (IsHandleEntrySecure.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0070614 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, char a2)
{
  char *v4; // rbx

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v4 = (char *)qword_1C0250D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0250D50;
  GetDomainLockRef(14LL);
  if ( WORD1(a1) != *((_WORD *)v4 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v4[24] || (a2 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, (__int64)v4) || (a2 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v4);
  return 1LL;
}
