/*
 * XREFs of VidSchiInitializeNode @ 0x1C00AF36C
 * Callers:
 *     VidSchInitializeAdapter @ 0x1C00AE220 (VidSchInitializeAdapter.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001CD70 (__security_check_cookie.c)
 *     memset @ 0x1C001DC40 (memset.c)
 *     ?DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z @ 0x1C002CBD4 (-DdiSetupPriorityBands@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETUPPRIORITYBANDS@@@Z.c)
 */

__int64 __fastcall VidSchiInitializeNode(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // rax
  __int64 Pool2; // rax
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int i; // esi
  __int64 result; // rax
  unsigned int j; // esi
  unsigned int k; // esi
  unsigned int m; // esi
  unsigned int n; // esi
  UINT v14; // eax
  ADAPTER_RENDER *v15; // rcx
  _DXGKARG_SETUPPRIORITYBANDS v16; // [rsp+20h] [rbp-98h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned int *)(v1 + 224);
  *(_DWORD *)(a1 + 192) = v3;
  Pool2 = ExAllocatePool2(64LL, 112 * v3, 828467542LL);
  v5 = 0LL;
  *(_QWORD *)(a1 + 184) = Pool2;
  if ( Pool2
    && (v6 = *(unsigned int *)(v1 + 224),
        *(_DWORD *)(a1 + 208) = v6,
        v7 = ExAllocatePool2(64LL, 96 * v6, 828467542LL),
        (*(_QWORD *)(a1 + 200) = v7) != 0LL) )
  {
    InitializeSListHead((PSLIST_HEADER)(a1 + 6240));
    for ( i = 0; i < 0x10; ++i )
      ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6240), (PSLIST_ENTRY)(112LL * (int)i + a1 + 6256));
    if ( (*(_DWORD *)(a1 + 12) & 2) == 0 )
      return 0LL;
    InitializeSListHead((PSLIST_HEADER)(a1 + 2928));
    for ( j = 0;
          j < 0x40;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 2928), (PSLIST_ENTRY)(48LL * (int)j++ + a1 + 2944)) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 6016));
    for ( k = 0;
          k < 2;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6016), (PSLIST_ENTRY)(48LL * (int)k++ + a1 + 6032)) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 6128));
    for ( m = 0;
          m < 2;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 6128), (PSLIST_ENTRY)(a1 + 48 * ((int)m++ + 128LL))) )
    {
      ;
    }
    InitializeSListHead((PSLIST_HEADER)(a1 + 8048));
    for ( n = 0;
          n < 0x40;
          ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 8048), (PSLIST_ENTRY)(a1 + 48 * ((int)n++ + 168LL))) )
    {
      ;
    }
    memset(&v16, 0, sizeof(v16));
    do
    {
      v16.processQuantumForBand[v5] = 50000LL;
      v16.processGracePeriodForBand[v5++] = 20000LL;
    }
    while ( v5 < 2 );
    v16.processQuantumForBand[3] = 20000LL;
    v16.gracePeriodForBand[2] = 10000LL;
    v16.processQuantumForBand[2] = 10000LL;
    v14 = *(_DWORD *)(v1 + 208);
    v16.processGracePeriodForBand[3] = 50000LL;
    v15 = *(ADAPTER_RENDER **)(v1 + 8);
    v16.targetNormalBandPercentage = v14;
    v16.processGracePeriodForBand[2] = 30000LL;
    result = ADAPTER_RENDER::DdiSetupPriorityBands(v15, &v16);
    if ( (int)(result + 0x80000000) < 0 || (_DWORD)result == -1073741822 )
      return 0LL;
  }
  else
  {
    WdLogSingleEntry0(3LL);
    return 3221225495LL;
  }
  return result;
}
