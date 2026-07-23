/*
 * XREFs of PopFreeRegistration @ 0x140764414
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1406CF638 (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140764360 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x1403F3E30 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(WNF_STATE_NAME *P)
{
  WNF_STATE_NAME *v2; // rbx
  __int64 v3; // rsi
  _DWORD *v4; // rcx

  v2 = P + 8;
  v3 = 3LL;
  do
  {
    v4 = (_DWORD *)*v2;
    if ( *v2 )
    {
      if ( (*v4)-- == 1 )
        ExFreePoolWithTag(v4, 0x74655350u);
    }
    ++v2;
    --v3;
  }
  while ( v3 );
  if ( P[7].Data[0] || P[7].Data[1] )
    ZwDeleteWnfStateName(P + 7);
  ExFreePoolWithTag(P, 0x74655350u);
}
