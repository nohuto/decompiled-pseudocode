/*
 * XREFs of SmmIoMmuReferenceMdl @ 0x1C006DA40
 * Callers:
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006DBA8 (SmmIoMmuUnmapStagingMdl.c)
 *     SmmIommuMapStagingMdl @ 0x1C006DEC4 (SmmIommuMapStagingMdl.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIoMmuUpdatePfn @ 0x1C006DCC8 (SmmIoMmuUpdatePfn.c)
 */

__int64 __fastcall SmmIoMmuReferenceMdl(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rsi
  volatile LONG *v4; // r13
  __int64 v6; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  __int64 v10; // r8
  __int64 v11; // r12
  int updated; // eax
  __int64 v13; // rdx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  KIRQL OldIrql; // [rsp+A0h] [rbp+8h]

  v3 = *(unsigned int *)(a2 + 24);
  v4 = (volatile LONG *)(a1 + 8);
  v6 = 0LL;
  v8 = 0;
  v9 = 0;
  OldIrql = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 8));
  if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) )
  {
    do
    {
      LOBYTE(v10) = a3;
      v11 = *(_QWORD *)(*(_QWORD *)a2 + 8 * v3);
      updated = SmmIoMmuUpdatePfn(a1, v11, v10);
      v8 = updated;
      if ( updated == -1073741801 )
        break;
      v3 = (unsigned int)(v3 + 1);
      if ( updated == 259 )
      {
        v13 = v9++;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v13) = v11;
        if ( v9 == *(_DWORD *)(a2 + 20) )
          goto LABEL_10;
      }
    }
    while ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) );
    if ( updated < 0 )
    {
      if ( (_DWORD)v3 )
      {
        do
        {
          SmmIoMmuUpdatePfn(a1, *(_QWORD *)(v6 + *(_QWORD *)a2), 0LL);
          v6 += 8LL;
          --v3;
        }
        while ( v3 );
      }
      goto LABEL_16;
    }
LABEL_10:
    if ( (_DWORD)v3 != *(_DWORD *)(a2 + 16) && *(_DWORD *)(a2 + 20) != v9 )
    {
      WdLogSingleEntry1(1LL, 659LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v15,
            v14,
            v16,
            0LL,
            2,
            -1,
            L"pArgs->OutputSize == OutputIndex",
            659LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
  }
  *(_DWORD *)(a2 + 28) = v9;
  *(_DWORD *)(a2 + 24) = v3;
LABEL_16:
  ExReleaseSpinLockExclusive(v4, OldIrql);
  return v8;
}
