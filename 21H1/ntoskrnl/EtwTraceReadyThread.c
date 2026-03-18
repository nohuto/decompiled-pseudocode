/*
 * XREFs of EtwTraceReadyThread @ 0x1405A23B0
 * Callers:
 *     KiProcessThreadWaitList @ 0x1402443B0 (KiProcessThreadWaitList.c)
 *     KiReadyOutSwappedThreads @ 0x140244A20 (KiReadyOutSwappedThreads.c)
 *     KiProcessExpiredTimerList @ 0x140244DA0 (KiProcessExpiredTimerList.c)
 *     KiExitDispatcher @ 0x14024A750 (KiExitDispatcher.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x1402A8CA4 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1405AA444 (EtwpCoverageSamplerReadyThread.c)
 */

void __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  unsigned int v5; // edi
  __int64 v6; // rax
  char v7; // dl
  void (__noreturn *v8)(); // rax
  __int64 v9; // rcx
  int v10; // [rsp+30h] [rbp-20h] BYREF
  char v11; // [rsp+34h] [rbp-1Ch]
  char v12; // [rsp+35h] [rbp-1Bh]
  char v13; // [rsp+36h] [rbp-1Ah]
  char v14; // [rsp+37h] [rbp-19h]
  int *v15; // [rsp+38h] [rbp-18h] BYREF
  int v16; // [rsp+40h] [rbp-10h]
  int v17; // [rsp+44h] [rbp-Ch]

  v10 = *(_DWORD *)(a1 + 1152);
  v5 = 5249538;
  v12 = a3;
  v11 = a2;
  v14 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v13 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v7 = (*(_DWORD *)(v6 + 840) & 7) != 0 ? 4 : 0;
  v8 = *(void (__noreturn **)())(a1 + 1232);
  v13 = (v7 | v13 & 0xFB) ^ ((8 * a4) ^ (v13 | v7)) & 8;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
  {
    v5 = 5245442;
  }
  else if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4552) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v9 = *(_QWORD *)(a1 + 544);
  v17 = 0;
  v15 = &v10;
  v16 = 8;
  EtwTraceSiloKernelEvent(*(_QWORD *)(v9 + 2160), (__int64)&v15, 1u, 0x20000200u, 0x532u, v5);
}
