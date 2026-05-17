/*
 * XREFs of ImportTablepFreeModuleSorted @ 0x1800E03B4
 * Callers:
 *     RtlComputeImportTableHash @ 0x1800E05A0 (RtlComputeImportTableHash.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 */

__int64 __fastcall ImportTablepFreeModuleSorted(_QWORD **a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  _QWORD *v3; // r8
  _QWORD *i; // rsi
  __int64 result; // rax

  if ( a1 )
  {
    v1 = *a1;
    v2 = (__int64)a1;
    while ( 1 )
    {
      v3 = *(_QWORD **)(v2 + 16);
      if ( v3 )
      {
        for ( i = (_QWORD *)*v3; ; i = (_QWORD *)*i )
        {
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v3);
          v3 = i;
          if ( !i )
            break;
        }
      }
      result = RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
      v2 = (__int64)v1;
      if ( !v1 )
        break;
      v1 = (_QWORD *)*v1;
    }
  }
  return result;
}
