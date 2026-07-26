/*
 * XREFs of PplHotAddProcCompleteNotify @ 0x1C00C4EE8
 * Callers:
 *     ?ndisDmaAddCpuNotify@@YAJEKJ@Z @ 0x1C00626C8 (-ndisDmaAddCpuNotify@@YAJEKJ@Z.c)
 * Callees:
 *     PplpFreeOneLookasideList @ 0x1C00C50A8 (PplpFreeOneLookasideList.c)
 */

ULONG __fastcall PplHotAddProcCompleteNotify(unsigned int *a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // rsi
  ULONG result; // eax
  ULONG v7; // r9d
  PVOID *v8; // rdi
  ULONG v9; // edx
  unsigned int v10; // ecx
  __int64 v11; // rsi

  v2 = *((_QWORD *)a1 + 4);
  v4 = *a1;
  result = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v7 = result;
  if ( (unsigned int)v4 <= result )
  {
    v8 = (PVOID *)(v2 + 8 * v4);
    if ( *v8 )
    {
      v9 = v4;
      v10 = 0;
      do
      {
        result = v9;
        if ( !*(_QWORD *)(v2 + 8LL * v9) )
          break;
        ++v10;
        ++v9;
      }
      while ( v9 <= v7 );
      if ( a2 >= 0 )
      {
        _InterlockedExchangeAdd((volatile signed __int32 *)a1, v10);
      }
      else
      {
        result = v4 + v10;
        if ( (unsigned int)v4 < (unsigned int)v4 + v10 )
        {
          v11 = v10;
          do
          {
            result = PplpFreeOneLookasideList(*v8, a1[3]);
            *v8++ = 0LL;
            --v11;
          }
          while ( v11 );
        }
      }
    }
  }
  return result;
}
