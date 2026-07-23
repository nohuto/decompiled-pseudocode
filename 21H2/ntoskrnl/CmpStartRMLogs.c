/*
 * XREFs of CmpStartRMLogs @ 0x140767524
 * Callers:
 *     CmpTransInitializeTransaction @ 0x14076727C (CmpTransInitializeTransaction.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     CmpLockRegistryFreezeAware @ 0x140667920 (CmpLockRegistryFreezeAware.c)
 *     CmpUuidCreate @ 0x1406C4E04 (CmpUuidCreate.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpStartRMLog @ 0x14077D6A4 (CmpStartRMLog.c)
 */

__int64 __fastcall CmpStartRMLogs(__int64 a1)
{
  int v1; // eax
  unsigned int v3; // ebx
  bool v5; // bp
  __int64 v6; // rsi
  int started; // eax
  UUID Uuid; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_DWORD *)(a1 + 104);
  v3 = 0;
  Uuid = 0LL;
  if ( (v1 & 8) != 0 )
  {
    return (unsigned int)-1073741431;
  }
  else if ( (v1 & 1) == 0 )
  {
    v5 = CmpUuidCreate(&Uuid) >= 0;
    v6 = (*(_DWORD *)(a1 + 104) & 2) != 0 ? 4 : 0;
    CmpLockRegistryFreezeAware(0);
    started = CmpStartRMLog(a1, 0LL);
    v3 = started;
    if ( started < 0 && started != -1073741697 && started != -1073741757 && started != -1073741670 && v5 )
    {
      *(_DWORD *)(a1 + 104) &= ~2u;
      v3 = CmpStartRMLog(a1, &Uuid);
    }
    CmpUnlockRegistry();
    *(_DWORD *)(v6 + a1 + 108) = v3;
  }
  return v3;
}
