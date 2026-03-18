/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x1C0019BA8
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C00197B0 (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0010190 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiCancelIndependentFlips(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // r9d
  __int64 v9; // r8

  if ( a4 )
  {
    v6 = a3;
    v7 = *(_QWORD *)(a2 + 8LL * a3 + 3200);
    v8 = VidSchiCompleteFlipEntry(
           a1,
           a2,
           a3,
           a4,
           *(_DWORD *)(a4 + 64),
           ((unsigned __int8)*(_DWORD *)(a4 + 64) - 1) & 0x3F,
           0xCu,
           a5);
    if ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL) + 32LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL) + 4LL))
                     + 8 * v6
                     + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v6 + 6456) + 8LL), -v8);
      *(_DWORD *)(*(_QWORD *)(a2 + 8 * v6 + 6456) + 4LL) += v8;
      *(_DWORD *)(v9 + 4) += v8;
    }
  }
}
