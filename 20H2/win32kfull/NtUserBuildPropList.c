/*
 * XREFs of NtUserBuildPropList @ 0x1C010A400
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C010A524 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, ULONG64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v9;
    HMLockObject(v9);
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v13 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v13 = (_DWORD *)MmUserProbeAddress;
      *v13 = *v13;
      v14 = BuildPropList(v9, a3, a2, a4);
    }
    else
    {
      v14 = -1073741816;
    }
    ThreadUnlock1(v11, v10, v12);
  }
  else
  {
    v14 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v8);
  return v14;
}
