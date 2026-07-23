/*
 * XREFs of KeIntSteerGetSteeringMode @ 0x140377C70
 * Callers:
 *     KiIntSteerChooseInitialTargetProcessors @ 0x140377B64 (KiIntSteerChooseInitialTargetProcessors.c)
 *     ExpQueryInterruptSteeringInformation @ 0x1407CF714 (ExpQueryInterruptSteeringInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIntSteerGetSteeringMode(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  unsigned int v5; // edx
  __int64 v6; // rcx

  v5 = 0;
  if ( KiIntSteerEnabled && a3 && !*(_WORD *)(a5 + 8) )
  {
    v6 = 0LL;
    if ( KeActiveProcessors[0] )
      v6 = qword_140CFC848[0];
    if ( *(_QWORD *)a5 == v6 )
    {
      if ( (KiInterruptControllerInfo & 1) != 0 && !a4 )
        return 1;
      if ( a4 != 1 )
        return v5;
      if ( (((unsigned int)KiInterruptControllerInfo >> 1) & 1) != 0 )
        return 1;
      if ( (KiInterruptControllerInfo & 1) != 0 )
        return 2;
    }
  }
  return v5;
}
