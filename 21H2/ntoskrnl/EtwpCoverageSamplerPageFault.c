/*
 * XREFs of EtwpCoverageSamplerPageFault @ 0x1405B00B4
 * Callers:
 *     EtwTracePageFault @ 0x1405A7D5C (EtwTracePageFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerPageFault(unsigned __int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v3; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rdi
  int v10; // esi
  int v11; // r9d
  int v12; // r10d
  int v13; // ecx
  int v14; // r8d
  unsigned int v15; // r8d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // ecx

  if ( a3 )
  {
    v3 = qword_140C198C8;
    if ( a1 - 1 <= 0xFFFF7FFFFFFFFFFEuLL && a2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v6 = *(_QWORD *)(v3 + 8);
      LODWORD(CurrentThread) = v6;
      v7 = (v6 >> 4) & 0x1FF;
      LODWORD(CurrentThread) = ((unsigned int)CurrentThread >> 13) & 0x3FFFF;
      _BitScanReverse(&v8, (unsigned int)CurrentThread);
      v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v8 - 2)
                     + 8LL * ((unsigned int)CurrentThread ^ (1 << v8))
                     + 8);
      if ( *(_DWORD *)(v9 + 8 * v7 + 264) )
      {
        v11 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v7 + 268)) > *(_DWORD *)(v9 + 8 * v7 + 272) )
        {
          v12 = *(_DWORD *)(v9 + 8 * v7 + 264);
          *(_DWORD *)(v9 + 8 * v7 + 284) += v12;
          v13 = *(_DWORD *)(v9 + 8 * v7 + 284);
          v14 = *(_DWORD *)(v9 + 8 * v7 + 280);
          if ( v13 > *(_DWORD *)(v9 + 8 * v7 + 276) )
            v13 = *(_DWORD *)(v9 + 8 * v7 + 276);
          *(_DWORD *)(v9 + 8 * v7 + 268) = v11;
          v15 = *(_DWORD *)(v9 + 8 * v7 + 292) + v14;
          *(_DWORD *)(v9 + 8 * v7 + 280) = 0;
          v16 = v15 >> 1;
          *(_DWORD *)(v9 + 8 * v7 + 284) = v13;
          *(_DWORD *)(v9 + 8 * v7 + 292) = v16;
          if ( v16 >= 2 * v12 )
          {
            v17 = v16 / (v12 + 1);
            v18 = v11 ^ *(_DWORD *)(v9 + 8 * v7 + 300);
            *(_DWORD *)(v9 + 8 * v7 + 296) = v17;
            *(_DWORD *)(v9 + 8 * v7 + 300) = 16777619 * v18;
            *(_DWORD *)(v9 + 8 * v7 + 288) = (16777619 * v18) & (2 * v17);
          }
          else
          {
            *(_DWORD *)(v9 + 8 * v7 + 296) = 1;
            *(_DWORD *)(v9 + 8 * v7 + 288) = 1;
          }
        }
        ++*(_DWORD *)(v9 + 8 * v7 + 280);
        v19 = *(_DWORD *)(v9 + 8 * v7 + 284);
        if ( v19 <= 0 || (--*(_DWORD *)(v9 + 8 * v7 + 288), *(int *)(v9 + 8 * v7 + 288) > 0) )
        {
          v10 = 0;
LABEL_16:
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v10 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v9 + 8 * v7 + 332), 1u);
            EtwpCovSampCaptureSample(a1, 0x50000010u);
          }
          return;
        }
        *(_DWORD *)(v9 + 8 * v7 + 284) = v19 - 1;
        *(_DWORD *)(v9 + 8 * v7 + 288) = *(_DWORD *)(v9 + 8 * v7 + 296);
      }
      v10 = 1;
      goto LABEL_16;
    }
  }
}
