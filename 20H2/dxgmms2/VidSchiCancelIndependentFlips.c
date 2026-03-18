/*
 * XREFs of VidSchiCancelIndependentFlips @ 0x1C002EF48
 * Callers:
 *     VidSchExitIndependentFlipInternal @ 0x1C00346EC (VidSchExitIndependentFlipInternal.c)
 * Callees:
 *     VidSchiCompleteFlipEntry @ 0x1C0002C90 (VidSchiCompleteFlipEntry.c)
 */

void __fastcall VidSchiCancelIndependentFlips(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _BYTE *a5)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  __int64 v9; // r8

  if ( a4 )
  {
    v6 = a3;
    v7 = *(_QWORD *)(a2 + 8LL * a3 + 3104);
    v8 = VidSchiCompleteFlipEntry(
           a1,
           a2,
           a3,
           a4,
           *(_DWORD *)(a4 + 40),
           ((unsigned __int8)*(_DWORD *)(a4 + 40) - 1) & 0x3F,
           12,
           a5);
    if ( v8 )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 40LL) + 24LL)
                                 + 8LL * *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 32LL) + 4LL))
                     + 8 * v6
                     + 88);
      _InterlockedExchangeAdd((volatile signed __int32 *)(*(_QWORD *)(a2 + 8 * v6 + 6352) + 8LL), -v8);
      *(_DWORD *)(*(_QWORD *)(a2 + 8 * v6 + 6352) + 4LL) += v8;
      *(_DWORD *)(v9 + 4) += v8;
    }
  }
}
