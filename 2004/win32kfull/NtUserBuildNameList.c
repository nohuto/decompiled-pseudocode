/*
 * XREFs of NtUserBuildNameList @ 0x1C010C4A0
 * Callers:
 *     <none>
 * Callees:
 *     _BuildNameList @ 0x1C010C5B4 (_BuildNameList.c)
 */

__int64 __fastcall NtUserBuildNameList(__int64 a1, unsigned int a2, _WORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  PVOID v9; // rcx
  __int64 v10; // r8
  _DWORD *v11; // rdx
  int v12; // ebx
  PVOID Object[7]; // [rsp+20h] [rbp-38h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = 0;
  Object[0] = 0LL;
  EnterSharedCrit(0LL, 1LL);
  if ( a2 < 0xC )
  {
    v12 = -1073741816;
  }
  else
  {
    v11 = a4;
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      v11 = (_DWORD *)MmUserProbeAddress;
    *v11 = *v11;
    ProbeForWrite(a3, a2, 4u);
    if ( a1 )
    {
      LOBYTE(v8) = 1;
      v12 = ValidateHwinsta(a1, v8, 1LL, Object);
    }
    else
    {
      v12 = 0;
    }
    if ( v12 < 0 )
    {
      a3[4] = 0;
      *(_DWORD *)a3 = 1;
    }
    else
    {
      v12 = BuildNameList(Object[0], a3, a2, &v15);
      *a4 = v15;
      v9 = Object[0];
      if ( Object[0] )
        ObfDereferenceObject(Object[0]);
    }
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return (unsigned int)v12;
}
