/*
 * XREFs of NtUserDdeInitialize @ 0x1C011DC40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     xxxCsDdeInitialize @ 0x1C011DD40 (xxxCsDdeInitialize.c)
 *     xxxDestroyThreadDDEObject @ 0x1C0129D20 (xxxDestroyThreadDDEObject.c)
 */

__int64 __fastcall NtUserDdeInitialize(_QWORD *a1, _QWORD *a2, _DWORD *a3, int a4, __int64 a5)
{
  ULONG64 v9; // rdx
  ULONG64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r8
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF

  v15 = 0LL;
  v16 = 0LL;
  v14 = 0;
  EnterCrit(0LL, 1LL);
  v11 = xxxCsDdeInitialize((unsigned int)&v15, (unsigned int)&v16, (unsigned int)&v14, a4, a5);
  if ( !v11 )
  {
    v9 = MmUserProbeAddress;
    v10 = MmUserProbeAddress;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_QWORD *)MmUserProbeAddress;
    *a1 = v15;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    *a2 = v16;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (_DWORD *)MmUserProbeAddress;
    *a3 = v14;
  }
  UserSessionSwitchLeaveCrit(v10, v9, v12);
  return v11;
}
