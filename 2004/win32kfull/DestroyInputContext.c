/*
 * XREFs of DestroyInputContext @ 0x1C014A8AC
 * Callers:
 *     NtUserDestroyInputContext @ 0x1C014A830 (NtUserDestroyInputContext.c)
 * Callees:
 *     BuildHwndList @ 0x1C006B520 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006CD90 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     AssociateInputContext @ 0x1C010F914 (AssociateInputContext.c)
 */

__int64 __fastcall DestroyInputContext(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  struct tagBWL *v5; // rax
  struct tagBWL *v6; // rbp
  unsigned __int64 *i; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v11; // rcx

  v4 = a1[2];
  if ( v4 != gptiCurrent )
  {
    v11 = 5LL;
LABEL_16:
    UserSetLastError(v11, a2, a3);
    return 0LL;
  }
  if ( a1 == *(_QWORD **)(v4 + 784) )
  {
    v11 = 87LL;
    goto LABEL_16;
  }
  v5 = BuildHwndList(
         *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 448) + 8LL) + 24LL) + 112LL),
         3,
         a1[2]);
  v6 = v5;
  if ( v5 )
  {
    for ( i = (unsigned __int64 *)((char *)v5 + 32); *i != 1; ++i )
    {
      v8 = HMValidateHandleNoSecure(*i, 1);
      if ( v8 )
      {
        if ( *(_QWORD *)(*(_QWORD *)(v8 + 40) + 208LL) == *a1 )
          AssociateInputContext(v8, *(__int64 **)(v4 + 784));
      }
    }
    FreeHwndList(v6);
  }
  v9 = _HMPheFromObject(a1);
  if ( (*(_BYTE *)(v9 + 25) & 1) == 0 )
    HMDestroyUnlockedObject(v9);
  return 1LL;
}
