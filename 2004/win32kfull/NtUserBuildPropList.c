/*
 * XREFs of NtUserBuildPropList @ 0x1C01095E0
 * Callers:
 *     <none>
 * Callees:
 *     _BuildPropList @ 0x1C0109704 (_BuildPropList.c)
 */

__int64 __fastcall NtUserBuildPropList(__int64 a1, unsigned int a2, volatile void *a3, ULONG64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _DWORD *v15; // rdx
  unsigned int v16; // ebx
  __int128 v18; // [rsp+30h] [rbp-28h] BYREF
  __int64 v19; // [rsp+40h] [rbp-18h]

  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = ValidateHwnd(a1);
  if ( v10 )
  {
    *(_QWORD *)&v18 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v18;
    *((_QWORD *)&v18 + 1) = v10;
    HMLockObject(v10);
    if ( a2 )
    {
      ProbeForWrite(a3, 16LL * a2, 4u);
      v15 = (_DWORD *)a4;
      if ( a4 >= MmUserProbeAddress )
        v15 = (_DWORD *)MmUserProbeAddress;
      *v15 = *v15;
      v16 = BuildPropList(v10, a3, a2, a4);
    }
    else
    {
      v16 = -1073741816;
    }
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v16 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v11);
  return v16;
}
