/*
 * XREFs of _ImportTablepFreeModuleSorted@4 @ 0x4B33E3E2
 * Callers:
 *     _RtlComputeImportTableHash@12 @ 0x4B33E550 (_RtlComputeImportTableHash@12.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 */

void __thiscall ImportTablepFreeModuleSorted(_DWORD *BaseAddress)
{
  _DWORD *v1; // esi
  _DWORD *i; // edi
  _DWORD *v3; // eax
  _DWORD *j; // ebx

  v1 = BaseAddress;
  if ( BaseAddress )
  {
    for ( i = (_DWORD *)*BaseAddress; ; i = (_DWORD *)*i )
    {
      v3 = (_DWORD *)v1[2];
      if ( v3 )
      {
        for ( j = (_DWORD *)*v3; ; j = (_DWORD *)*j )
        {
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
          v3 = j;
          if ( !j )
            break;
        }
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
      v1 = i;
      if ( !i )
        break;
    }
  }
}
