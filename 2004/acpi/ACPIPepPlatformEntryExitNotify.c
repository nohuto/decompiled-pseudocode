/*
 * XREFs of ACPIPepPlatformEntryExitNotify @ 0x1C00B0E68
 * Callers:
 *     ACPIPepWorker @ 0x1C00B1100 (ACPIPepWorker.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C001D6E0 (AMLIFreeDataBuffs.c)
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     ACPIAmliEvaluateDsm @ 0x1C0099BE8 (ACPIAmliEvaluateDsm.c)
 */

__int64 __fastcall ACPIPepPlatformEntryExitNotify(__int64 a1, int a2, char a3)
{
  int v3; // ebx
  int v4; // edx
  unsigned int v5; // r9d
  __int64 *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp-68h] BYREF
  __int128 v9; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v10[3]; // [rsp+50h] [rbp-48h] BYREF

  v3 = -1073741823;
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      if ( v4 != 1 )
        return (unsigned int)v3;
      v5 = 8 - (a3 != 0);
    }
    else
    {
      v5 = 4 - (a3 != 0);
    }
  }
  else
  {
    v5 = 6 - (a3 != 0);
  }
  v6 = *(__int64 **)(a1 + 720);
  v8 = 0LL;
  memset(v10, 0, sizeof(v10));
  v9 = PEP_NOTIFICATIONS_DSM_UUID;
  v3 = ACPIAmliEvaluateDsm(v6, (__int64)&v9, 0, v5, (__int64)v10, &v8);
  if ( v3 >= 0 )
    AMLIFreeDataBuffs(v8);
  return (unsigned int)v3;
}
