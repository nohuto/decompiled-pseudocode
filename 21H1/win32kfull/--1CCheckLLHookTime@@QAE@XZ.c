/*
 * XREFs of ??1CCheckLLHookTime@@QAE@XZ @ 0x1A4DD2
 * Callers:
 *     _xxxHkCallHook@16 @ 0x6B2E0 (_xxxHkCallHook@16.c)
 * Callees:
 *     ?TraceLoggingSlowLowLevelHook@@YGXI_KK@Z @ 0x186FE5 (-TraceLoggingSlowLowLevelHook@@YGXI_KK@Z.c)
 */

void __thiscall CCheckLLHookTime::~CCheckLLHookTime(CCheckLLHookTime *this)
{
  CCheckLLHookTime *v1; // esi
  unsigned int v2; // edx
  unsigned int v3; // ebx
  int v4; // edi
  unsigned __int64 v5; // kr10_8
  unsigned __int64 v6; // [esp-4h] [ebp-1Ch]
  unsigned int v7; // [esp+4h] [ebp-14h]

  v1 = this;
  v2 = MEMORY[0xFFDF0324];
  v3 = MEMORY[0xFFDF0320];
  v4 = MEMORY[0xFFDF0004];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v2 = MEMORY[0xFFDF0324];
      v3 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v1 = this;
    v4 = MEMORY[0xFFDF0004];
  }
  v5 = (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v3) >> 24)
     + (((unsigned int)v4 * (unsigned __int64)v2) << 8)
     - *(_QWORD *)v1;
  *(_DWORD *)(_gptiCurrent + 380) = 0;
  if ( v5 > 0x14 )
  {
    LODWORD(v6) = HIDWORD(v5);
    TraceLoggingSlowLowLevelHook(*((_DWORD *)v1 + 3), *((_DWORD *)v1 + 2), v5, v6, v7);
  }
}
