/*
 * XREFs of ViLockContextPointer @ 0x1409CB56C
 * Callers:
 *     VfInsertContext @ 0x14059EE20 (VfInsertContext.c)
 *     VfRemoveContext @ 0x14059EFF0 (VfRemoveContext.c)
 *     ViQueryObjectContext @ 0x1409CB5B4 (ViQueryObjectContext.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 */

char __fastcall ViLockContextPointer(signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(a1);
      v5 = *a1;
      if ( (*a1 & 1) != 0 )
        break;
      if ( !v5 )
        return v5;
      KeYieldProcessorEx(&v8, a2, a3, a4);
    }
    v6 = *a1;
  }
  while ( v6 != _InterlockedCompareExchange64(a1, v5 - 1, v5) );
  LOBYTE(v5) = 1;
  return v5;
}
