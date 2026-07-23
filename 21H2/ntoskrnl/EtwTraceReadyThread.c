/*
 * XREFs of EtwTraceReadyThread @ 0x1405A81A0
 * Callers:
 *     KiFastReadyThread @ 0x140266130 (KiFastReadyThread.c)
 *     KiProcessExpiredTimerList @ 0x1402EC2F0 (KiProcessExpiredTimerList.c)
 *     KiReadyOutSwappedThreads @ 0x1402ECCB0 (KiReadyOutSwappedThreads.c)
 *     KiProcessThreadWaitList @ 0x1402EFB20 (KiProcessThreadWaitList.c)
 *     KiDirectSwitchThread @ 0x1402F1090 (KiDirectSwitchThread.c)
 *     KiExitDispatcher @ 0x14034E810 (KiExitDispatcher.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14027BDBC (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1405B02C4 (EtwpCoverageSamplerReadyThread.c)
 */

__int64 __fastcall EtwTraceReadyThread(__int64 a1, char a2, char a3, char a4)
{
  int v5; // edi
  __int64 v6; // rax
  char v7; // dl
  void (__noreturn *v8)(); // rax
  __int64 v9; // rcx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  char v12; // [rsp+34h] [rbp-1Ch]
  char v13; // [rsp+35h] [rbp-1Bh]
  char v14; // [rsp+36h] [rbp-1Ah]
  char v15; // [rsp+37h] [rbp-19h]
  int *v16; // [rsp+38h] [rbp-18h] BYREF
  int v17; // [rsp+40h] [rbp-10h]
  int v18; // [rsp+44h] [rbp-Ch]

  v11 = *(_DWORD *)(a1 + 1152);
  v5 = 5249538;
  v13 = a3;
  v12 = a2;
  v15 = 0;
  v6 = *(_QWORD *)(a1 + 184);
  v14 = ~*(_BYTE *)(a1 + 122) & 2 | KeGetPcr()->Prcb.DpcRequestSummary & 1;
  v7 = (*(_DWORD *)(v6 + 840) & 7) != 0 ? 4 : 0;
  v8 = *(void (__noreturn **)())(a1 + 1232);
  v14 = (v7 | v14 & 0xFB) ^ ((8 * a4) ^ (v14 | v7)) & 8;
  if ( (a4 & 2) != 0 || v8 == KeSwapProcessOrStack || (char *)v8 == (char *)EtwpLogger )
  {
    v5 = 5245442;
  }
  else if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4552) & 0x200) != 0 )
  {
    EtwpCoverageSamplerReadyThread(a1);
  }
  v9 = *(_QWORD *)(a1 + 544);
  v18 = 0;
  v16 = &v11;
  v17 = 8;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v9 + 2160), (int)&v16, 1, 0x20000200u, 1330, v5);
}
