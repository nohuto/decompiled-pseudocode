/*
 * XREFs of Amd64FreeCounter @ 0x1404DDC9C
 * Callers:
 *     Amd64InitializeProfiling @ 0x1409AA650 (Amd64InitializeProfiling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Amd64FreeCounter(unsigned int a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = Amd64CounterStatus + ((unsigned __int64)KeGetPcr()->Prcb.Number << 6);
  result = 2LL * a1;
  *(_DWORD *)(v1 + 8 * result + 4) = 0;
  *(_DWORD *)(v1 + 8 * result) = 3;
  return result;
}
