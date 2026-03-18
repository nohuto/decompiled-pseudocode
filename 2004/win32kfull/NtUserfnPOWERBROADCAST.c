/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C01114C0
 * Callers:
 *     <none>
 * Callees:
 *     PushW32ThreadLock @ 0x1C001DE60 (PushW32ThreadLock.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C001DEF0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4, __int64 a5, char a6)
{
  _DWORD *v6; // rsi
  __int64 v10; // rdi
  unsigned int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rbx
  __int128 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h] BYREF
  __int64 v19; // [rsp+68h] [rbp-30h]

  v6 = a4;
  v10 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (a3 & 0x8000) != 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v17 = *(_OWORD *)v6;
    v11 = v6[4];
    if ( v11 + 20 < v11 )
    {
      v15 = 0LL;
      goto LABEL_9;
    }
    ProbeForRead(v6, v11 + 20, 1u);
    v12 = Win32AllocPoolWithQuota(v11 + 20, 1651536725LL);
    v10 = v12;
    if ( !v12 )
    {
      UserSetLastError(8LL, v13, v14);
      v15 = 0LL;
      goto LABEL_9;
    }
    PushW32ThreadLock(v12, &v18, (__int64)Win32FreePool);
    *(_OWORD *)v10 = v17;
    *(_DWORD *)(v10 + 16) = v11;
    memmove((void *)(v10 + 20), v6 + 5, v11);
    v6 = (_DWORD *)v10;
  }
  v15 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _DWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
          a1,
          a2,
          a3,
          v6,
          a5);
LABEL_9:
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v18);
  return v15;
}
