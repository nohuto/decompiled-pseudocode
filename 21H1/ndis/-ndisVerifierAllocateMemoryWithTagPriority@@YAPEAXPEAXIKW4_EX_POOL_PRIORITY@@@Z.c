/*
 * XREFs of ?ndisVerifierAllocateMemoryWithTagPriority@@YAPEAXPEAXIKW4_EX_POOL_PRIORITY@@@Z @ 0x1C00AB640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTagPriority(void *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  bool v5; // zf
  __int64 v6; // r8
  void *retaddr; // [rsp+38h] [rbp+0h]

  v5 = a3 == 0;
  v6 = 1835091022LL;
  if ( !v5 )
    v6 = a3;
  return (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
           512LL,
           a2,
           v6,
           a4,
           retaddr);
}
