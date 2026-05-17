/*
 * XREFs of _TppCallbackCheckThreadBeforeCallback@4 @ 0x4B2B6D20
 * Callers:
 *     _TppCleanupGroupMemberDestroy@4 @ 0x4B2B250C (_TppCleanupGroupMemberDestroy@4.c)
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppCheckForTransactions@0 @ 0x4B2B68E9 (_TppCheckForTransactions@0.c)
 *     _TppCheckLdrLockHeld@0 @ 0x4B38477D (_TppCheckLdrLockHeld@0.c)
 */

void __thiscall TppCallbackCheckThreadBeforeCallback(int this)
{
  int v2; // eax
  _GUID *p_ActivityId; // esi
  struct _TEB *v4; // eax
  int v5; // esi

  if ( this )
  {
    v2 = *(_DWORD *)(this + 72);
    p_ActivityId = &NtCurrentTeb()->ActivityId;
    *(_DWORD *)(this + 136) = p_ActivityId->Data1;
    p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
    *(_DWORD *)(this + 140) = p_ActivityId->Data1;
    *(_QWORD *)(this + 144) = *(_QWORD *)&p_ActivityId->Data2;
    if ( v2 )
    {
      if ( (*(_BYTE *)(v2 + 268) & 1) == 0 )
      {
        v4 = NtCurrentTeb();
        v5 = *(_DWORD *)(this + 56) | 8;
        *(_DWORD *)(this + 56) = v5;
        if ( v4->IsImpersonating )
        {
          v5 |= 4u;
          *(_DWORD *)(this + 56) = v5;
        }
        if ( TppCheckForTransactions() )
        {
          v5 |= 0x10u;
          *(_DWORD *)(this + 56) = v5;
        }
        if ( (unsigned __int8)TppCheckLdrLockHeld() )
        {
          v5 |= 0x20u;
          *(_DWORD *)(this + 56) = v5;
        }
        if ( NtCurrentTeb()->PreferredLanguages )
        {
          v5 |= 0x40u;
          *(_DWORD *)(this + 56) = v5;
        }
        if ( NtCurrentTeb()->SavedPriorityState )
          *(_DWORD *)(this + 56) = v5 | 0x80;
      }
    }
  }
}
