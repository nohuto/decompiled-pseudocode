/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01FEDC0
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C0022FD8 (_GetProp.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  int v4; // edi
  __int64 v5; // rax
  _DWORD *v6; // rdx
  ULONG64 v7; // rcx
  __int64 v8; // r8
  int Prop; // eax

  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1LL), (Prop & 0x10000) != 0) )
  {
    if ( a2 )
    {
      v7 = MmUserProbeAddress;
      v6 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v6 = (_DWORD *)MmUserProbeAddress;
      *v6 = *v6;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8);
  return v4;
}
