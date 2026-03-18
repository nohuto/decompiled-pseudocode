/*
 * XREFs of _GdiThreadCalloutFlushUserBatch@0 @ 0xA1896
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

unsigned int __stdcall GdiThreadCalloutFlushUserBatch()
{
  struct _NT_TIB *Self; // eax
  struct _NT_TIB *v1; // esi
  unsigned int result; // eax
  int ExceptionList_low; // [esp+14h] [ebp-2Ch]
  unsigned int v4; // [esp+18h] [ebp-28h]
  unsigned int StackBase; // [esp+1Ch] [ebp-24h]

  Self = KeGetPcr()->NtTib.Self;
  StackBase = (unsigned int)Self[141].StackBase;
  v1 = Self + 17;
  Self[141].StackBase = 0;
  Self[16].ArbitraryUserPointer = (PVOID)((int)Self[16].ArbitraryUserPointer & 0x80000000);
  result = (unsigned int)&Self[61].StackLimit;
  v4 = result;
  if ( StackBase && StackBase < 0x136 )
  {
    do
    {
      ExceptionList_low = LOWORD(v1->ExceptionList);
      result = (unsigned int)v1 + ExceptionList_low;
      if ( (unsigned int)v1 + ExceptionList_low > v4 )
        break;
      if ( HIWORD(v1->ExceptionList) == 8 )
        NtGdiDeleteObjectApp(v1->StackBase);
      --StackBase;
      result = (ExceptionList_low + 3) & 0xFFFFFFFC;
      v1 = (struct _NT_TIB *)((char *)v1 + result);
      if ( !StackBase )
        break;
      result = (unsigned int)&v1->StackBase;
    }
    while ( (unsigned int)&v1->StackBase < v4 );
  }
  return result;
}
