/*
 * XREFs of sub_180108F20 @ 0x180108F20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 */

void __fastcall sub_180108F20(PTP_CALLBACK_INSTANCE Instance, PVOID Context, PTP_TIMER Timer)
{
  *((_BYTE *)Context + 137) = 0;
  if ( !*((_BYTE *)Context + 136) )
  {
    if ( *((_QWORD *)Context + 16) )
      SubmitThreadpoolWork(*((PTP_WORK *)Context + 2));
    else
      sub_18000410C(*((void **)Context + 28));
  }
}
