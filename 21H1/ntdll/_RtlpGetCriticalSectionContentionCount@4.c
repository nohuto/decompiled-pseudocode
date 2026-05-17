/*
 * XREFs of _RtlpGetCriticalSectionContentionCount@4 @ 0x4B34A7EE
 * Callers:
 *     _RtlpWaitOnCriticalSection@8 @ 0x4B2DF4A0 (_RtlpWaitOnCriticalSection@8.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpGetCriticalSectionContentionCount(void *this)
{
  if ( *(_DWORD *)this == -1 )
    return 0;
  else
    return *(_DWORD *)(*(_DWORD *)this + 20);
}
