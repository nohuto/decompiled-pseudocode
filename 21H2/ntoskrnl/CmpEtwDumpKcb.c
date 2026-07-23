/*
 * XREFs of CmpEtwDumpKcb @ 0x14086A7D8
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1406DDFD4 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1406DEDB0 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1406F8338 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402483A4 (CmpFreeTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x1406E2750 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x1406E5AF0 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *); // rsi
  __int64 v5; // rcx
  void *v6; // rbx
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v9[3]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v10[2]; // [rsp+78h] [rbp-40h] BYREF

  v2 = *(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *))((char *)&NlsMbCodePageTag + 7);
  memset(v10, 0, sizeof(v10));
  memset(v9, 0, sizeof(v9));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    CmpAttachToRegistryProcess((__int64)v9);
    v8 = 0LL;
    CmpConstructNameWithStatus(a1, &v8);
    v6 = v8;
    if ( v8 )
    {
      LOBYTE(v5) = a2;
      v2(v5, v10, 0LL, 0LL, a1, v8);
      CmpFreeTransientPoolWithTag(v6, 0x624E4D43u);
    }
    return KiUnstackDetachProcess((__int64)v9, 0LL);
  }
  return result;
}
