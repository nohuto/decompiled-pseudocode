/*
 * XREFs of HalpShutdownReset @ 0x1404B9090
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     HalReturnToFirmware @ 0x1404B8BE0 (HalReturnToFirmware.c)
 */

void __fastcall __noreturn HalpShutdownReset(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *a5)
{
  unsigned int v5; // ebx
  struct _KPRCB *CurrentPrcb; // rsi

  v5 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( _InterlockedDecrement(a5) )
  {
    do
    {
      if ( (++v5 & dword_140C4A35C) != 0 || !qword_140C4A360 )
        _mm_pause();
      else
        qword_140C4A360(v5, a2, a3);
    }
    while ( *a5 );
  }
  if ( !CurrentPrcb->Number )
    HalReturnToFirmware(3);
  while ( 1 )
    _mm_pause();
}
