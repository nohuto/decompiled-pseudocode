/*
 * XREFs of SmKmStoreHelperWorker @ 0x140309210
 * Callers:
 *     <none>
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     SmKmStoreHelperCommandProcess @ 0x1403092F0 (SmKmStoreHelperCommandProcess.c)
 *     SmKmStoreHelperCommandCleanup @ 0x140598554 (SmKmStoreHelperCommandCleanup.c)
 */

LONG __fastcall SmKmStoreHelperWorker(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v6; // bl
  LONG result; // eax
  unsigned int v8; // esi
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+40h] [rbp-38h]
  __int128 v13; // [rsp+50h] [rbp-28h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 25LL, a3, a4);
  CurrentThread = KeGetCurrentThread();
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 8), Executive, 0, 0, 0LL);
    result = KeResetEvent((PRKEVENT)(a1 + 8));
    v8 = *(unsigned __int16 *)(a1 + 58);
    if ( v8 == 1 )
      break;
    SmKmStoreHelperCommandProcess(a1, *(unsigned __int16 *)(a1 + 58), a1 + 64);
    _m_prefetchw((const void *)(a1 + 56));
    v6 = _InterlockedOr((volatile signed __int32 *)(a1 + 56), 1u);
    if ( (v6 & 2) != 0 )
    {
      v9 = *(_OWORD *)(a1 + 80);
      v11 = *(_OWORD *)(a1 + 64);
      v10 = *(_OWORD *)(a1 + 96);
      v12 = v9;
      v13 = v10;
      if ( v8 == 4 )
      {
        SmKmStoreHelperCommandCleanup(a1, 4LL, &v11);
        v6 &= ~2u;
      }
    }
    KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
    if ( (v6 & 2) != 0 )
      SmKmStoreHelperCommandCleanup(a1, v8, &v11);
  }
  return result;
}
