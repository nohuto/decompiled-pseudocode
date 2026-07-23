/*
 * XREFs of PnpCopyDevPropertyArray @ 0x14074E15C
 * Callers:
 *     PiSwInterfaceCreate @ 0x14074D6C4 (PiSwInterfaceCreate.c)
 *     PiSwCompleteCreate @ 0x14074D850 (PiSwCompleteCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x14074DD78 (PiSwIrpStartCreateWorker.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1408AEC94 (PiSwQueuedCreateInfoCreate.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpCopyDevProperty @ 0x14074E234 (PnpCopyDevProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpCopyDevPropertyArray(ULONGLONG ullMultiplicand, __int64 a2, __int64 a3, _DWORD *a4, void **a5)
{
  void **v5; // rbx
  NTSTATUS v6; // esi
  unsigned int v9; // ebp
  PVOID PoolWithTag; // rax
  __int64 v11; // rdx
  __int64 v12; // r14
  void *v14; // rcx
  __int64 v15; // rbp
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  v5 = a5;
  v6 = 0;
  *a4 = 0;
  NumberOfBytes = 0LL;
  v9 = ullMultiplicand;
  *v5 = 0LL;
  if ( a2 && (_DWORD)ullMultiplicand )
  {
    v6 = RtlULongLongMult((unsigned int)ullMultiplicand, 0x30uLL, &NumberOfBytes);
    if ( v6 >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x57706E50u);
      *v5 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, NumberOfBytes);
        v12 = 0LL;
        if ( !v9 )
          return (unsigned int)v6;
        while ( 1 )
        {
          v6 = PnpCopyDevProperty(a2 + 48 * v12, v11, (char *)*v5 + 48 * v12);
          if ( v6 < 0 )
            break;
          ++*a4;
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= v9 )
            return (unsigned int)v6;
        }
      }
      else
      {
        v6 = -1073741670;
      }
    }
    v14 = *v5;
    if ( *v5 )
    {
      v15 = 0LL;
      if ( *a4 )
      {
        do
        {
          ExFreePoolWithTag(*((PVOID *)*v5 + 6 * v15 + 5), 0x57706E50u);
          v15 = (unsigned int)(v15 + 1);
        }
        while ( (unsigned int)v15 < *a4 );
        v14 = *v5;
      }
      ExFreePoolWithTag(v14, 0x57706E50u);
      *a4 = 0;
      *v5 = 0LL;
    }
  }
  return (unsigned int)v6;
}
