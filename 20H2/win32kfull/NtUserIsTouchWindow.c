/*
 * XREFs of NtUserIsTouchWindow @ 0x1C01FDF50
 * Callers:
 *     <none>
 * Callees:
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserIsTouchWindow(__int64 a1, unsigned int *a2)
{
  int v4; // edi
  __int64 v5; // rax
  ULONG64 v6; // rcx
  int Prop; // eax
  _DWORD *v8; // rdx

  v4 = 1;
  EnterSharedCrit(0LL, 1LL);
  v5 = ValidateHwnd(a1);
  if ( v5 && (Prop = GetProp(v5, (unsigned __int16)gatomTouchFlags, 1LL), (Prop & 0x10000) != 0) )
  {
    if ( a2 )
    {
      v6 = MmUserProbeAddress;
      v8 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v8 = (_DWORD *)MmUserProbeAddress;
      *v8 = *v8;
      *a2 = Prop & 0xFFFEFFFF;
    }
  }
  else
  {
    v4 = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
