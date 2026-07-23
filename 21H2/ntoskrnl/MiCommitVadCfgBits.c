/*
 * XREFs of MiCommitVadCfgBits @ 0x14068592C
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiCfgInitializeProcess @ 0x1406C072C (MiCfgInitializeProcess.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406E97C0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x1407034E0 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 * Callees:
 *     MiIsProcessCfgEnabled @ 0x14027C590 (MiIsProcessCfgEnabled.c)
 *     MiMarkPrivateOpenCfgBits @ 0x140607118 (MiMarkPrivateOpenCfgBits.c)
 *     MiMarkProcessCfgBits @ 0x140685B78 (MiMarkProcessCfgBits.c)
 *     MiSelectCfgBitMap @ 0x140685BE4 (MiSelectCfgBitMap.c)
 */

__int64 __fastcall MiCommitVadCfgBits(__int64 a1, __int64 a2, char *a3)
{
  __int64 v4; // r14
  _KPROCESS *Process; // rbp
  unsigned __int64 *v6; // r9
  __int64 v7; // r11
  __int64 v8; // r12
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  __int64 **v11; // rax
  __int64 *v12; // r8
  int v13; // r10d
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int16 v16; // r9
  bool v17; // al
  __int64 v18; // rsi
  int v19; // edx
  int v20; // r10d
  int v21; // r11d
  __int64 result; // rax
  unsigned __int64 v23; // rcx
  __int16 v24; // cx
  unsigned __int64 v25; // rdx
  int v26; // ecx
  char v27; // [rsp+98h] [rbp+20h] BYREF

  v27 = 0;
  v4 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !MiIsProcessCfgEnabled() )
    return 0LL;
  v8 = *(unsigned int *)(v7 + 24);
  v9 = (v8 | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32)) << 12;
  v10 = ((*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32)) << 12) + 4096;
  if ( v6 )
  {
    v9 = *v6;
    v10 = (v6[1] | 0xFFF) + 1;
  }
  else if ( (*(_DWORD *)(v7 + 48) & 0x100000) == 0 )
  {
    v11 = *(__int64 ***)(v7 + 72);
    v12 = *v11;
    v13 = *((_DWORD *)*v11 + 14);
    if ( (v13 & 0x20) != 0 )
    {
      v4 = *v12;
      v14 = *(_QWORD *)(*v12 + 56);
      v15 = Process[1].AffinityPadding[10];
      if ( !v15 || (v16 = *(_WORD *)(v15 + 8)) == 0 )
        v16 = -31132;
      v17 = *(_WORD *)(v14 + 48) == 0x8664;
      if ( *(_WORD *)(v14 + 48) == v16 )
        v17 = 1;
      if ( !v17 )
        a3 = &v27;
    }
  }
  v18 = MiSelectCfgBitMap(Process, v9, v4);
  result = MiMarkProcessCfgBits(v20, v19, v21, v9, v10, v18, (__int64)a3);
  v23 = Process[1].AffinityPadding[10];
  if ( v23 )
  {
    v24 = *(_WORD *)(v23 + 8);
    if ( (v24 == 332 || v24 == 452) && (int)result >= 0 )
    {
      v25 = Process[1].ActiveProcessorsPadding[8];
      v26 = v25 + 440;
      if ( v18 != v25 + 440 )
        return MiMarkPrivateOpenCfgBits(v26, v9, v10, 0);
      v26 = v25 + 472;
      if ( v9 <= 0x100000000LL )
      {
        if ( v10 > 0x100000000LL )
          v10 = 0x100000000LL;
        return MiMarkPrivateOpenCfgBits(v26, v9, v10, 0);
      }
    }
  }
  return result;
}
