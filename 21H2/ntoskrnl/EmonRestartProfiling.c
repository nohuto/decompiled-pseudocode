/*
 * XREFs of EmonRestartProfiling @ 0x140A530A0
 * Callers:
 *     <none>
 * Callees:
 *     EmonConfigureCounter @ 0x140399A14 (EmonConfigureCounter.c)
 *     EmonWriteCounter @ 0x140521A70 (EmonWriteCounter.c)
 */

__int64 (__fastcall **EmonRestartProfiling())()
{
  __int64 (__fastcall **result)(); // rax
  unsigned __int64 **v1; // rdi
  unsigned int v2; // esi
  unsigned int i; // ebx
  char v4; // r9
  char v5; // r11
  int v6; // edx
  __int64 v7; // r10
  unsigned int v8; // r8d
  int v9; // edx

  result = &DefaultProfileInterface;
  if ( HalpProfileInterface == &DefaultProfileInterface )
  {
    v1 = (unsigned __int64 **)HalpCounterStatus;
  }
  else
  {
    result = (__int64 (__fastcall **)())HalpCounterStatus;
    v1 = (unsigned __int64 **)(HalpCounterStatus + 8LL * HalpNumberOfCounters * KeGetPcr()->Prcb.Number);
  }
  v2 = EmonNumberCounters;
  for ( i = 0; i < v2; ++v1 )
  {
    v4 = 0;
    v5 = 1;
    v6 = *((_DWORD *)*v1 + 6);
    v7 = **v1;
    v8 = *(_DWORD *)(*v1)[2];
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          result = (__int64 (__fastcall **)())EmonWriteCounter(i, **v1, v8);
          goto LABEL_9;
        }
        v5 = 0;
        v7 = 0LL;
        v8 = 0;
      }
    }
    else
    {
      v4 = 1;
    }
    result = (__int64 (__fastcall **)())EmonConfigureCounter(i, v5, v7, v8, v4);
LABEL_9:
    ++i;
  }
  return result;
}
