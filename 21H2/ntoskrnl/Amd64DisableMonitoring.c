/*
 * XREFs of Amd64DisableMonitoring @ 0x1404DDAC0
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ConfigureCounter @ 0x1404DDA4C (Amd64ConfigureCounter.c)
 */

unsigned int __fastcall Amd64DisableMonitoring(int a1, unsigned int *a2)
{
  unsigned int result; // eax
  _DWORD *v3; // r8
  unsigned int i; // ebx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // r9d

  result = KeGetPcr()->Prcb.Number;
  v3 = (_DWORD *)(Amd64CounterStatus + ((unsigned __int64)result << 6));
  if ( a2 )
  {
    i = *a2;
LABEL_8:
    Amd64ConfigureCounter(i, 0, 0, 0, 0);
    v5 = Amd64CounterStatus + ((unsigned __int64)KeGetPcr()->Prcb.Number << 6);
    v6 = 2LL * i;
    *(_DWORD *)(v5 + 8 * v6 + 4) &= v7;
    *(_DWORD *)(v5 + 8 * v6) = 3;
    return _InterlockedExchangeAdd(&HalpPmuInUse, v7 - 2);
  }
  for ( i = 0; i < 4; ++i )
  {
    if ( !*v3 && v3[1] == a1 )
      break;
    v3 += 4;
  }
  if ( i != 4 )
    goto LABEL_8;
  return result;
}
