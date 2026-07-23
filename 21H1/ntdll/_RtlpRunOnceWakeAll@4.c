/*
 * XREFs of _RtlpRunOnceWakeAll@4 @ 0x4B2B11E4
 * Callers:
 *     _RtlRunOnceComplete@12 @ 0x4B2B1140 (_RtlRunOnceComplete@12.c)
 * Callees:
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

unsigned int __thiscall RtlpRunOnceWakeAll(_DWORD *this)
{
  unsigned int result; // eax
  unsigned int v2; // esi
  void *v3; // ecx

  result = *this & 0xFFFFFFFC;
  if ( result )
  {
    do
    {
      v2 = *(_DWORD *)result;
      v3 = *(void **)(result + 12);
      _interlockedbittestandset((volatile signed __int32 *)(result + 20), 2u);
      ZwAlertThreadByThreadId(v3);
      result = v2;
    }
    while ( v2 );
  }
  return result;
}
