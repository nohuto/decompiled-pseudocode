/*
 * XREFs of NtUserCreateLocalMemHandle @ 0x1C011DA10
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0067BB8 (HMValidateHandle.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserCreateLocalMemHandle(unsigned __int64 a1, volatile void *a2, unsigned int a3, _DWORD *a4)
{
  __int64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r14
  unsigned int v12; // ebx
  unsigned int v13; // eax

  EnterCrit(0LL, 1LL);
  v11 = HMValidateHandle(a1, 6u);
  v12 = 0;
  if ( v11 )
  {
    if ( a2 )
      ProbeForWrite(a2, a3, 1u);
    if ( a4 )
    {
      v8 = *(unsigned int *)(v11 + 16);
      v9 = MmUserProbeAddress;
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_DWORD *)MmUserProbeAddress;
      *a4 = v8;
    }
    if ( a2 && (v13 = *(_DWORD *)(v11 + 16), a3 >= v13) )
      memmove((void *)a2, (const void *)(v11 + 20), v13);
    else
      v12 = -1073741789;
  }
  else
  {
    v12 = -1073741816;
  }
  UserSessionSwitchLeaveCrit(v9, v8, v10);
  return v12;
}
