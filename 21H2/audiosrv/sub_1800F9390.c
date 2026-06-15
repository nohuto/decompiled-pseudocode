/*
 * XREFs of sub_1800F9390 @ 0x1800F9390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB660 @ 0x1800BB660 (sub_1800BB660.c)
 *     sub_1800DA7C4 @ 0x1800DA7C4 (sub_1800DA7C4.c)
 *     sub_1800F950C @ 0x1800F950C (sub_1800F950C.c)
 */

__int64 __fastcall sub_1800F9390(__int64 a1, void *a2, int a3)
{
  HRESULT v6; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  DWORD ProcessId; // ebx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // r8
  int v17; // edx
  DWORD v19; // [rsp+40h] [rbp-20h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h] BYREF
  HANDLE Process; // [rsp+50h] [rbp-10h] BYREF
  void *v22; // [rsp+58h] [rbp-8h] BYREF
  _UNKNOWN *retaddr; // [rsp+78h] [rbp+18h]
  int v24; // [rsp+98h] [rbp+38h] BYREF

  v6 = CoImpersonateClient();
  v8 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84((int)retaddr, 27, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp", v6);
    return v8;
  }
  Process = 0LL;
  v9 = sub_1800F950C(a1, v7, &Process);
  v8 = v9;
  if ( v9 >= 0 )
  {
    ProcessId = GetProcessId(Process);
    v12 = (_DWORD *)sub_180008448(v11, sub_1800B6240)[1];
    if ( *v12 > 4u )
    {
      v24 = a3;
      v22 = a2;
      v19 = ProcessId;
      sub_1800BB660((__int64)v12, byte_180168EC9, v13, v14, (__int64)&v19, &v22, (__int64)&v24);
    }
    v20 = 0LL;
    v15 = sub_1800DA7C4((__int64)v12, (__int64)&v20);
    v8 = v15;
    if ( v15 >= 0 )
    {
      LOBYTE(v16) = a3 == 1;
      v15 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v20 + 104LL))(v20, a2, v16);
      v8 = v15;
      if ( v15 >= 0 )
      {
        v8 = 0;
        goto LABEL_13;
      }
      v17 = 46;
    }
    else
    {
      v17 = 43;
    }
    sub_18004BD84((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp", v15);
LABEL_13:
    sub_18000F708(&v20);
    goto LABEL_14;
  }
  sub_18004BD84((int)retaddr, 31, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationtracker.cpp", v9);
LABEL_14:
  if ( Process )
    CloseHandle(Process);
  CoRevertToSelf();
  return v8;
}
