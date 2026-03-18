/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14037D9C0
 * Callers:
 *     MiObtainSystemCacheView @ 0x1402B94B0 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPteLink @ 0x1402B9B90 (MiGetPteLink.c)
 */

unsigned __int64 __fastcall MiWaitForSystemCacheViewFlush(__int64 a1)
{
  unsigned __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int i; // [rsp+30h] [rbp+8h] BYREF

  for ( i = 0; ; KeYieldProcessorEx(&i, v3, v4, v5) )
  {
    result = MiGetPteLink(*(_QWORD *)(a1 + 24));
    if ( !result )
      break;
  }
  return result;
}
