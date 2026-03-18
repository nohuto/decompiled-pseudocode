/*
 * XREFs of CcForEachNumaNode @ 0x140258140
 * Callers:
 *     CcGetActiveWorkerCountInPartition @ 0x140258114 (CcGetActiveWorkerCountInPartition.c)
 *     CcInitializeAsyncRead @ 0x1403D1458 (CcInitializeAsyncRead.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcForEachNumaNode(
        __int64 (__fastcall *a1)(__int64, __int64, _QWORD *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _QWORD **v5; // rdi
  _QWORD *i; // rbx

  result = a2 + 16;
  v5 = (_QWORD **)(a3 + 48);
  if ( !a3 )
    v5 = (_QWORD **)(a2 + 16);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    result = a1(a2, a3, i - 4, a4);
    if ( !(_BYTE)result )
      break;
  }
  return result;
}
