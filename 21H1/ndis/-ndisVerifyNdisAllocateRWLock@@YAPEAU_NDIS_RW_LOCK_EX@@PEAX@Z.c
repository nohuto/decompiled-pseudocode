/*
 * XREFs of ?ndisVerifyNdisAllocateRWLock@@YAPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00A4600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z @ 0x1C00A44A0 (-ndisInitializeRWLock@@YAEPEAU_NDIS_RW_LOCK_EX@@PEAX@Z.c)
 */

struct _NDIS_RW_LOCK_EX *__fastcall ndisVerifyNdisAllocateRWLock(void *a1)
{
  _OWORD *v2; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (_OWORD *)(*((__int64 (__fastcall **)(__int64, __int64, __int64, __int64, void *))ndisVerifierWdmDispatch + 6))(
                   512LL,
                   112LL,
                   2003977294LL,
                   16LL,
                   retaddr);
  if ( !v2 )
    return 0LL;
  *v2 = 0LL;
  v2[1] = 0LL;
  *((_QWORD *)v2 + 4) = 0LL;
  *((_QWORD *)v2 + 5) = 0LL;
  *((_QWORD *)v2 + 6) = 0LL;
  *((_QWORD *)v2 + 7) = 0LL;
  *((_QWORD *)v2 + 8) = 0LL;
  *((_QWORD *)v2 + 9) = 0LL;
  *((_QWORD *)v2 + 10) = 0LL;
  *((_QWORD *)v2 + 11) = 0LL;
  *((_QWORD *)v2 + 12) = 0LL;
  *((_DWORD *)v2 + 26) = 0;
  *((_DWORD *)v2 + 27) = 0;
  *(_DWORD *)v2 = 1447843666;
  if ( !ndisInitializeRWLock((struct _NDIS_RW_LOCK_EX *)v2, a1) )
  {
    ExFreePoolWithTag(v2, 0x7772444Eu);
    return 0LL;
  }
  return (struct _NDIS_RW_LOCK_EX *)v2;
}
