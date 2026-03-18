/*
 * XREFs of PopFreeRegistration @ 0x140764414
 * Callers:
 *     PopDispatchNotificationsToList @ 0x1406CF638 (PopDispatchNotificationsToList.c)
 *     PopFreeSessionState @ 0x140764360 (PopFreeSessionState.c)
 * Callees:
 *     ZwDeleteWnfStateName @ 0x1403F3E30 (ZwDeleteWnfStateName.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall PopFreeRegistration(_DWORD *P, __int64 a2)
{
  _DWORD **v3; // rbx
  __int64 v4; // rsi
  _DWORD *v5; // rcx

  v3 = (_DWORD **)(P + 16);
  v4 = 3LL;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      if ( (*v5)-- == 1 )
        ExFreePoolWithTag(v5, 0x74655350u);
    }
    ++v3;
    --v4;
  }
  while ( v4 );
  if ( P[14] || P[15] )
    ZwDeleteWnfStateName((__int64)(P + 14), a2);
  ExFreePoolWithTag(P, 0x74655350u);
}
