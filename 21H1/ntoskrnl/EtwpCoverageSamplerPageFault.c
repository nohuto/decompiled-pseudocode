/*
 * XREFs of EtwpCoverageSamplerPageFault @ 0x1405AA234
 * Callers:
 *     EtwTracePageFault @ 0x1405A1F6C (EtwTracePageFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     EtwpCovSampCaptureSample @ 0x1405A9588 (EtwpCovSampCaptureSample.c)
 */

void __fastcall EtwpCoverageSamplerPageFault(unsigned __int64 a1, unsigned __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  int v13; // esi
  int v14; // r10d
  int v15; // ecx
  int v16; // r8d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ecx

  if ( a3 )
  {
    v4 = qword_140C19868;
    if ( a1 - 1 <= 0xFFFF7FFFFFFFFFFEuLL && a2 < 0xFFFF800000000000uLL )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      v7 = *(_QWORD *)(v4 + 8);
      LODWORD(CurrentThread) = v7;
      v8 = (v7 >> 4) & 0x1FF;
      LODWORD(CurrentThread) = ((unsigned int)CurrentThread >> 13) & 0x3FFFF;
      _BitScanReverse(&v9, (unsigned int)CurrentThread);
      v10 = (unsigned int)CurrentThread ^ (1 << v9);
      v11 = *((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2);
      v12 = *(_QWORD *)(v11 + 8 * v10 + 8);
      if ( *(_DWORD *)(v12 + 8 * v8 + 264) )
      {
        a4 = MEMORY[0xFFFFF78000000320];
        if ( (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v12 + 8 * v8 + 268)) > *(_DWORD *)(v12 + 8 * v8 + 272) )
        {
          v14 = *(_DWORD *)(v12 + 8 * v8 + 264);
          *(_DWORD *)(v12 + 8 * v8 + 284) += v14;
          v15 = *(_DWORD *)(v12 + 8 * v8 + 284);
          v11 = *(unsigned int *)(v12 + 8 * v8 + 276);
          v16 = *(_DWORD *)(v12 + 8 * v8 + 280);
          if ( v15 > (int)v11 )
            v15 = *(_DWORD *)(v12 + 8 * v8 + 276);
          *(_DWORD *)(v12 + 8 * v8 + 268) = a4;
          v17 = *(_DWORD *)(v12 + 8 * v8 + 292) + v16;
          *(_DWORD *)(v12 + 8 * v8 + 280) = 0;
          v10 = v17 >> 1;
          *(_DWORD *)(v12 + 8 * v8 + 284) = v15;
          *(_DWORD *)(v12 + 8 * v8 + 292) = v10;
          if ( (unsigned int)v10 >= 2 * v14 )
          {
            v18 = (unsigned int)v10 / (v14 + 1);
            v19 = a4 ^ *(_DWORD *)(v12 + 8 * v8 + 300);
            *(_DWORD *)(v12 + 8 * v8 + 296) = v18;
            v11 = (unsigned int)(16777619 * v19);
            *(_DWORD *)(v12 + 8 * v8 + 300) = v11;
            *(_DWORD *)(v12 + 8 * v8 + 288) = v11 & (2 * v18);
          }
          else
          {
            *(_DWORD *)(v12 + 8 * v8 + 296) = 1;
            *(_DWORD *)(v12 + 8 * v8 + 288) = 1;
          }
        }
        ++*(_DWORD *)(v12 + 8 * v8 + 280);
        v20 = *(_DWORD *)(v12 + 8 * v8 + 284);
        if ( v20 <= 0 || (--*(_DWORD *)(v12 + 8 * v8 + 288), *(int *)(v12 + 8 * v8 + 288) > 0) )
        {
          v13 = 0;
LABEL_16:
          KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v11, v10, a4);
          if ( v13 )
          {
            _InterlockedAdd((volatile signed __int32 *)(v12 + 8 * v8 + 332), 1u);
            EtwpCovSampCaptureSample(a1, 0x50000010u);
          }
          return;
        }
        *(_DWORD *)(v12 + 8 * v8 + 284) = v20 - 1;
        *(_DWORD *)(v12 + 8 * v8 + 288) = *(_DWORD *)(v12 + 8 * v8 + 296);
      }
      v13 = 1;
      goto LABEL_16;
    }
  }
}
