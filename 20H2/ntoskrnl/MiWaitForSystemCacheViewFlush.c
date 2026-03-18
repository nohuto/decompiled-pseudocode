/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14037F6F0
 * Callers:
 *     MiObtainSystemCacheView @ 0x140299AE0 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiGetPteLink @ 0x14029A1C0 (MiGetPteLink.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
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
