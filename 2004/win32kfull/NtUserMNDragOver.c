/*
 * XREFs of NtUserMNDragOver @ 0x1C01FF2D0
 * Callers:
 *     <none>
 * Callees:
 *     xxxMNDragOver @ 0x1C024AC44 (xxxMNDragOver.c)
 */

__int64 __fastcall NtUserMNDragOver(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // rdx
  ULONG64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int128 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (__int64 *)MmUserProbeAddress;
  v11 = *a1;
  v6 = xxxMNDragOver(&v11, &v9);
  if ( v6 )
  {
    DWORD1(v9) = 0;
    DWORD1(v10) = 0;
    v5 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_OWORD *)MmUserProbeAddress;
    *a2 = v9;
    a2[1] = v10;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7);
  return v6;
}
