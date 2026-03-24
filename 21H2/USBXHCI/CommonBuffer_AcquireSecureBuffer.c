/*
 * XREFs of CommonBuffer_AcquireSecureBuffer @ 0x1C0030530
 * Callers:
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C00165F0 (XilCommonBuffer_AcquireBufferEx.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C003701C (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     memset @ 0x1C001B2C0 (memset.c)
 *     SecureDmaEnabler_AllocateCommonBufferPage @ 0x1C0076F7C (SecureDmaEnabler_AllocateCommonBufferPage.c)
 */

char *__fastcall CommonBuffer_AcquireSecureBuffer(__int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  char *v7; // rdi
  char *PoolWithTag; // rax
  char *v10; // rbx
  __int64 v11; // rax
  void ***v12; // r14
  void **v13; // rcx

  v7 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(
                          (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                          0x60uLL,
                          0x49434858u);
  v10 = PoolWithTag;
  if ( PoolWithTag
    && (memset(PoolWithTag, 0, 0x60uLL),
        v11 = *a1,
        v12 = (void ***)(v10 + 88),
        (int)SecureDmaEnabler_AllocateCommonBufferPage(*(_QWORD *)(v11 + 104), a2, v10 + 88, 0LL) >= 0) )
  {
    memset(**v12, 0, a2);
    v13 = *v12;
    v7 = v10;
    *((_QWORD *)v10 + 2) = **v12;
    *((_QWORD *)v10 + 3) = v13[1];
    *((_DWORD *)v10 + 10) = a2;
    *((_DWORD *)v10 + 11) = a2;
    *((_DWORD *)v10 + 16) = a4;
    *((_QWORD *)v10 + 9) = a3;
    *((_DWORD *)v10 + 20) = 3;
  }
  else if ( v10 )
  {
    ExFreePoolWithTag(v10, 0x49434858u);
    return 0LL;
  }
  return v7;
}
