/*
 * XREFs of _RtlResetNtUserPfn@0 @ 0x4B2F4970
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDllShutdownInProgress@0 @ 0x4B2DF490 (_RtlDllShutdownInProgress@0.c)
 *     _LdrProtectMrdata@4 @ 0x4B2E1D36 (_LdrProtectMrdata@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __stdcall RtlResetNtUserPfn()
{
  int result; // eax

  if ( !LdrParentRtlResetNtUserPfn || (result = LdrParentRtlResetNtUserPfn(LdrParentRtlResetNtUserPfn), result >= 0) )
  {
    if ( byte_4B3A91D8 )
    {
      if ( !RtlDllShutdownInProgress() )
      {
        LdrProtectMrdata(0);
        byte_4B3A91D8 = 0;
        off_4B3A9180[0] = (_DWORD (__stdcall *__ptr64)())(int)UninitUser32Proc;
        qmemcpy(&off_4B3A9188, off_4B3A9180, 0x50u);
        NtUserPfn[0] = (_DWORD (__stdcall *__ptr64)())(int)UninitUser32Proc;
        qmemcpy(&off_4B3A9008, NtUserPfn, 0xB8u);
        off_4B3A90C0[0] = (_DWORD (__stdcall *__ptr64)())(int)UninitUser32Proc;
        qmemcpy(&off_4B3A90C8, off_4B3A90C0, 0xB8u);
        LdrProtectMrdata(1);
      }
      return 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
