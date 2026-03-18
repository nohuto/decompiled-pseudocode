/*
 * XREFs of EtwTracePriority @ 0x1405A22E4
 * Callers:
 *     PsSetIoPriorityThread @ 0x140234A9C (PsSetIoPriorityThread.c)
 *     PsSetPagePriorityThread @ 0x140234D94 (PsSetPagePriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1403355DC (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     EtwpPsProvTracePriority @ 0x1405A372C (EtwpPsProvTracePriority.c)
 */

void __fastcall EtwTracePriority(__int64 a1, unsigned __int16 a2, int a3, int a4, _BYTE *a5)
{
  char v5; // di
  char v7; // bl
  int v9; // eax
  int v10; // [rsp+30h] [rbp-48h] BYREF
  char v11; // [rsp+34h] [rbp-44h]
  char v12; // [rsp+35h] [rbp-43h]
  __int16 v13; // [rsp+36h] [rbp-42h]
  int *v14; // [rsp+38h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-38h]
  int v16; // [rsp+44h] [rbp-34h]

  if ( a3 != a4 )
  {
    v5 = a4;
    v7 = a3;
    if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4520) & 0x2000) != 0 )
      EtwpPsProvTracePriority(a1, a2);
    v9 = *(_DWORD *)(a1 + 1152);
    v13 = 0;
    v10 = v9;
    v11 = v7;
    v12 = v5;
    if ( a5 )
      LOBYTE(v13) = *a5;
    v16 = 0;
    v14 = &v10;
    v15 = 8;
    EtwTraceKernelEvent((__int64)&v14, 1u, 0x20002000u, a2, 0x1501903u);
  }
}
