/*
 * XREFs of PspWriteTebImpersonationInfo @ 0x140609460
 * Callers:
 *     PsRestoreImpersonation @ 0x1405E0BE0 (PsRestoreImpersonation.c)
 *     PsImpersonateClient @ 0x140609080 (PsImpersonateClient.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall PspWriteTebImpersonationInfo(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _DWORD *v6; // rsi
  _KPROCESS *v7; // r14
  __int64 v8; // r9
  int v9; // eax
  bool v10; // dl
  BOOL v11; // ecx
  unsigned __int64 v12; // rax
  signed __int32 v14[8]; // [rsp+0h] [rbp-98h] BYREF
  char v15; // [rsp+20h] [rbp-78h]
  bool v16; // [rsp+21h] [rbp-77h]
  _DWORD *v17; // [rsp+28h] [rbp-70h]
  _KPROCESS *v18; // [rsp+30h] [rbp-68h]
  __int64 v19; // [rsp+38h] [rbp-60h]
  _OWORD v20[3]; // [rsp+48h] [rbp-50h] BYREF

  v19 = a1;
  memset(v20, 0, sizeof(v20));
  v6 = *(_DWORD **)(a1 + 240);
  v17 = v6;
  if ( v6 && (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
  {
    v7 = *(_KPROCESS **)(a1 + 544);
    v18 = v7;
    if ( *(_KPROCESS **)(a2 + 184) == v7 )
    {
      v15 = 0;
    }
    else
    {
      KiStackAttachProcess(v7, 0LL, (__int64)v20, a4);
      v15 = 1;
    }
    if ( a1 == a2 || ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1272)) )
    {
      v8 = 452LL;
      do
      {
        v9 = *(_DWORD *)(a1 + 1296) & 8;
        v10 = v9 != 0;
        v16 = v9 != 0;
        v11 = v9 != 0;
        v6[1511] = v11;
        v6[1530] = 0;
        v12 = v7[1].AffinityPadding[10];
        if ( v12 )
        {
          a3 = *(unsigned __int16 *)(v12 + 8);
          if ( (_WORD)a3 == 332 || (_WORD)a3 == 452 )
          {
            v6[3047] = v11;
            v6[3057] = 0;
          }
        }
        _InterlockedOr(v14, 0);
      }
      while ( v10 != ((*(_DWORD *)(a1 + 1296) & 8) != 0) );
      if ( a1 != a2 )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1272));
    }
    if ( v15 )
      KiUnstackDetachProcess((__int64)v20, 0LL, a3, (_DWORD *)v8);
  }
  return 0LL;
}
