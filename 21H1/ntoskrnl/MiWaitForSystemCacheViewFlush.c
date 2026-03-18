/*
 * XREFs of MiWaitForSystemCacheViewFlush @ 0x14037CF00
 * Callers:
 *     MiObtainSystemCacheView @ 0x140226830 (MiObtainSystemCacheView.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 * Callees:
 *     MiGetPteLink @ 0x140226F10 (MiGetPteLink.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
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
