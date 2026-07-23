/*
 * XREFs of KeSignalCallDpcSynchronize @ 0x14051A020
 * Callers:
 *     KiInitializeDynamicProcessorDpc @ 0x1409B02C0 (KiInitializeDynamicProcessorDpc.c)
 *     MiApplyImageHotPatchDpc @ 0x1409B1820 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeSignalCallDpcSynchronize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int32 v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = _InterlockedDecrement((volatile signed __int32 *)a1);
  v6 = ~v5 & 0x80000000;
  if ( (v5 & 0x7FFFFFFF) != 0 )
  {
    v7 = 0;
    v9 = 0;
    while ( (*(_DWORD *)a1 & 0x80000000) != v6 )
      KeYieldProcessorEx(&v9, a2, a3, a4);
  }
  else
  {
    v7 = 1;
    *(_DWORD *)a1 = v6 | *(_DWORD *)(a1 + 4);
  }
  return v7;
}
