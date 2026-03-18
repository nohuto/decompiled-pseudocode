/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x14037E43C
 * Callers:
 *     MiWriteComplete @ 0x14028C230 (MiWriteComplete.c)
 *     MiGatherPagefilePages @ 0x14037AFC0 (MiGatherPagefilePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_PAGEFILE_WRITE(__int64 a1, _QWORD *a2, char a3, int a4, int a5)
{
  __int64 v6; // r11
  __int64 v7; // r10
  char Priority; // cl
  __int64 result; // rax

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 248LL);
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 17576), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 17584) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 17592) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 17590) = Priority;
  *(_BYTE *)(v7 + v6 + 17591) = a3;
  *(_QWORD *)(v7 + v6 + 17600) = *a2;
  *(_WORD *)(v7 + v6 + 17588) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 17608) = *(_QWORD *)(v6 + 16896);
  *(_QWORD *)(v7 + v6 + 17616) = *(_QWORD *)(v6 + 17280);
  *(_QWORD *)(v7 + v6 + 17624) = *(_QWORD *)(v6 + 17504);
  *(_QWORD *)(v7 + v6 + 17632) = *(_QWORD *)(v6 + 17408);
  result = *(_QWORD *)(v6 + 3584);
  *(_QWORD *)(v7 + v6 + 17640) = result;
  *(_OWORD *)(v7 + v6 + 17648) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 17664) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 17680) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 17696) = *(_QWORD *)(a1 + 256);
  return result;
}
