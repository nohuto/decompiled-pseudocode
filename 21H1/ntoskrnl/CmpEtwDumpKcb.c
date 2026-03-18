/*
 * XREFs of CmpEtwDumpKcb @ 0x140865D08
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x14061C14C (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x14061CE30 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14025C5D8 (CmpFreeTransientPoolWithTag.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpConstructNameWithStatus @ 0x14061DE60 (CmpConstructNameWithStatus.c)
 *     CmpAttachToRegistryProcess @ 0x14061FF00 (CmpAttachToRegistryProcess.c)
 */

__int64 __fastcall CmpEtwDumpKcb(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  void (__fastcall *v4)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *); // rsi
  char v5; // bp
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r9
  void *v10; // rbx
  __int64 result; // rax
  void *v12; // [rsp+40h] [rbp-78h] BYREF
  _OWORD v13[3]; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v14[2]; // [rsp+78h] [rbp-40h] BYREF

  v4 = *(void (__fastcall **)(__int64, _OWORD *, _QWORD, _QWORD, __int64, void *))((char *)&NlsMbCodePageTag + 7);
  v5 = a2;
  memset(v14, 0, sizeof(v14));
  memset(v13, 0, sizeof(v13));
  if ( *(BOOLEAN **)((char *)&NlsMbCodePageTag + 7) )
  {
    CmpAttachToRegistryProcess((__int64)v13, a2, a3, a4);
    v12 = 0LL;
    CmpConstructNameWithStatus(a1, &v12);
    v10 = v12;
    if ( v12 )
    {
      LOBYTE(v7) = v5;
      v4(v7, v14, 0LL, 0LL, a1, v12);
      CmpFreeTransientPoolWithTag(v10, 0x624E4D43u);
    }
    return KiUnstackDetachProcess((__int64)v13, 0LL, v8, v9);
  }
  return result;
}
