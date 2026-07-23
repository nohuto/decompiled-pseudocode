/*
 * XREFs of MI_PAGEFILE_WRITE @ 0x140248ED4
 * Callers:
 *     MiGatherPagefilePages @ 0x140256844 (MiGatherPagefilePages.c)
 *     MiWriteComplete @ 0x1402766E0 (MiWriteComplete.c)
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
  v7 = 120LL * (((unsigned __int8)_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 7656), 1u) + 1) & 0x1F);
  *(_DWORD *)(v7 + v6 + 7664) = a5;
  Priority = KeGetCurrentThread()->Priority;
  *(_BYTE *)(v7 + v6 + 7672) = a4 != 0;
  *(_BYTE *)(v7 + v6 + 7670) = Priority;
  *(_BYTE *)(v7 + v6 + 7671) = a3;
  *(_QWORD *)(v7 + v6 + 7680) = *a2;
  *(_WORD *)(v7 + v6 + 7668) = *(_WORD *)v6;
  *(_QWORD *)(v7 + v6 + 7688) = *(_QWORD *)(v6 + 7104);
  *(_QWORD *)(v7 + v6 + 7696) = *(_QWORD *)(v6 + 7488);
  *(_QWORD *)(v7 + v6 + 7704) = *(_QWORD *)(v6 + 7600);
  *(_QWORD *)(v7 + v6 + 7712) = *(_QWORD *)(v6 + 7552);
  result = *(_QWORD *)(v6 + 2752);
  *(_QWORD *)(v7 + v6 + 7720) = result;
  *(_OWORD *)(v7 + v6 + 7728) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(v7 + v6 + 7744) = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(v7 + v6 + 7760) = *(_OWORD *)(a1 + 240);
  *(_QWORD *)(v7 + v6 + 7776) = *(_QWORD *)(a1 + 256);
  return result;
}
