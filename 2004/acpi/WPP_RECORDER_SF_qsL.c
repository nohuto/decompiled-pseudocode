/*
 * XREFs of WPP_RECORDER_SF_qsL @ 0x1C001D5D0
 * Callers:
 *     ACPIDevicePowerProcessPhase3 @ 0x1C001345C (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyCreate @ 0x1C001D3F0 (OSNotifyCreate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsL(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  unsigned __int64 v11; // rsi
  int v13; // eax
  __int64 v15; // rdx
  const char *v16; // rcx
  int v17; // [rsp+20h] [rbp-58h]

  v7 = (__int64)a7;
  v8 = -1LL;
  v11 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= 4u )
  {
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
    }
    v16 = a7;
    if ( !a7 )
      v16 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11), 43LL, a5, a4, &a6, 8LL, v16);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v17, &a6);
}
