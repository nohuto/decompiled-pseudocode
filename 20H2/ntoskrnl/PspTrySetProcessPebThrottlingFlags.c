/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x14090AF70
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2)
{
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  __int64 *v6; // rcx
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  KiStackAttachProcess(a1, 0, (__int64)v8);
  v4 = a1[1].AffinityPadding[4];
  if ( v4 )
  {
    v5 = 0LL;
    v6 = (__int64 *)a1[1].AffinityPadding[10];
    if ( v6 )
      v5 = *v6;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v4 + 80), 0x60u);
      if ( v5 )
        _InterlockedOr((volatile signed __int32 *)(v5 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v4 + 80), 0xFFFFFFBF);
      if ( v5 )
        _InterlockedAnd((volatile signed __int32 *)(v5 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v8, 0);
}
