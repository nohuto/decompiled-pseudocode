/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0012910
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002D2F8 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

char __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r9
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx

  v1 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  if ( *(_BYTE *)(a1 + 640)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2448LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 404)] )
  {
    v4 = *(_QWORD *)(a1 + 472);
    *(_BYTE *)(a1 + 640) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 440) = v4;
LABEL_4:
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 3, 2);
    v3 = 1;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v1 + 2000) )
    v7 = *(_QWORD *)(v1 + 2008);
  else
    v7 = *(_QWORD *)(a1 + 472);
  if ( *(_BYTE *)(v1 + 2016) && *(__int64 *)(a1 + 440) <= 0 )
  {
    v8 = *(_QWORD *)(v1 + 1992);
    if ( *(_QWORD *)(a1 + 488) == v8 )
      v7 = 0LL;
    else
      *(_QWORD *)(a1 + 488) = v8;
  }
  *(_QWORD *)(a1 + 440) += v7;
  v9 = *(_QWORD *)(a1 + 440);
  if ( v9 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 472);
    if ( v9 <= v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
LABEL_5:
  if ( bTracingEnabled )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( !v5 || (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      LODWORD(v5) = a1;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        v5,
        a1,
        v5,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        *(_QWORD *)(v1 + 2008),
        *(_DWORD *)(a1 + 436),
        1);
  }
  return v3;
}
