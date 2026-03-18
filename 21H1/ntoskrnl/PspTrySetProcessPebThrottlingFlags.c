/*
 * XREFs of PspTrySetProcessPebThrottlingFlags @ 0x140904070
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall PspTrySetProcessPebThrottlingFlags(_KPROCESS *a1, char a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // r9
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 *v9; // rcx
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  KiStackAttachProcess(a1, 0LL, (__int64)v11, a4);
  v7 = a1[1].AffinityPadding[4];
  if ( v7 )
  {
    v8 = 0LL;
    v9 = (__int64 *)a1[1].AffinityPadding[10];
    if ( v9 )
      v8 = *v9;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v7 + 80), 0x60u);
      if ( v8 )
        _InterlockedOr((volatile signed __int32 *)(v8 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v7 + 80), 0xFFFFFFBF);
      if ( v8 )
        _InterlockedAnd((volatile signed __int32 *)(v8 + 40), 0xFFFFFFBF);
    }
  }
  return KiUnstackDetachProcess((__int64)v11, 0LL, v7, v6);
}
