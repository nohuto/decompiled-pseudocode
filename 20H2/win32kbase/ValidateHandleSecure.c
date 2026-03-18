/*
 * XREFs of ValidateHandleSecure @ 0x1C00563A0
 * Callers:
 *     HMValidateHandle @ 0x1C0054DB0 (HMValidateHandle.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0056464 (-IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z.c)
 *     IsHandleEntrySecure @ 0x1C00A0D6C (IsHandleEntrySecure.c)
 */

__int64 __fastcall ValidateHandleSecure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // di
  char *v6; // rbx

  v5 = a2;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    return 0LL;
  v6 = (char *)qword_1C0248D48 + (unsigned int)(unsigned __int16)a1 * dword_1C0248D50;
  GetDomainLockRef(14LL, a2, a3, a4);
  if ( WORD1(a1) != *((_WORD *)v6 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    return 0LL;
  }
  if ( !v6[24] || (v5 & 1) != 0 && !(unsigned int)IsHandleEntrySecure(a1, v6) || (v5 & 2) == 0 )
    return 0LL;
  if ( gbValidateHandleForIL )
    return IsHandleEntryAccessibleForIL((struct _HANDLEENTRY *)v6);
  return 1LL;
}
