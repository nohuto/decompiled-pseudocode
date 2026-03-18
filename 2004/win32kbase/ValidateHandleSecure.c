/*
 * XREFs of ValidateHandleSecure @ 0x1C0094C80
 * Callers:
 *     HMValidateHandle @ 0x1C0074300 (HMValidateHandle.c)
 * Callees:
 *     IsHandleEntrySecure @ 0x1C003D94C (IsHandleEntrySecure.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0094D44 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char *v6; // rbx

  v5 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v6 = (char *)qword_1C024AD48 + (unsigned int)(unsigned __int16)a1 * dword_1C024AD50;
  GetDomainLockRef(14LL, a2, a3, a4);
  if ( WORD1(a1) != *((_WORD *)v6 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v6[24] || (v5 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, (__int64)v6) || (v5 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v6);
  return 1LL;
}
