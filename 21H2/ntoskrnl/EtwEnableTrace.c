/*
 * XREFs of EtwEnableTrace @ 0x140789DE0
 * Callers:
 *     WdipSemEnableDisableTrace @ 0x140789D88 (WdipSemEnableDisableTrace.c)
 *     EtwWmitraceWorker @ 0x14093CA94 (EtwWmitraceWorker.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpEnableTrace @ 0x140789EA4 (EtwpEnableTrace.c)
 */

__int64 __fastcall EtwEnableTrace(__int64 a1, __int64 a2, int a3, int a4, char a5, __int64 a6, __int64 a7, int a8)
{
  int v10; // esi
  int v11; // ebp
  _QWORD *CurrentServerSiloGlobals; // rax
  size_t Size; // [rsp+60h] [rbp-38h]
  size_t v15; // [rsp+70h] [rbp-28h]
  size_t v16; // [rsp+80h] [rbp-18h]

  v10 = a2;
  v11 = a1;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals(a1, a2);
  LODWORD(v16) = 0;
  LODWORD(v15) = 0;
  LODWORD(Size) = 0;
  return EtwpEnableTrace(
           CurrentServerSiloGlobals[108],
           v11,
           v10,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           0LL,
           0LL,
           0LL,
           Size,
           0LL,
           v15,
           0LL,
           v16,
           0LL);
}
