/*
 * XREFs of VidSchiResetContextQuantumAtISR @ 0x1C0016990
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C00366DC (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiResetContextQuantumAtISR(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 v2; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 96);
  v2 = 0;
  if ( *(_BYTE *)(a1 + 640)
    || (*(_DWORD *)(*(_QWORD *)(v1 + 24) + 2536LL) & 4) == 0
    || gulPriorityToYieldPriorityBand[*(unsigned int *)(a1 + 404)] )
  {
    v4 = *(_QWORD *)(a1 + 472);
    *(_BYTE *)(a1 + 640) = 0;
LABEL_3:
    *(_QWORD *)(a1 + 440) = v4;
LABEL_4:
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 436), 3, 2);
    v2 = 1;
    goto LABEL_5;
  }
  if ( *(_QWORD *)(v1 + 2008) )
    v8 = *(_QWORD *)(v1 + 2016);
  else
    v8 = *(_QWORD *)(a1 + 472);
  if ( *(_BYTE *)(v1 + 2024) && *(__int64 *)(a1 + 440) <= 0 )
  {
    v9 = *(_QWORD *)(v1 + 2000);
    if ( *(_QWORD *)(a1 + 488) == v9 )
      v8 = 0LL;
    else
      *(_QWORD *)(a1 + 488) = v9;
  }
  *(_QWORD *)(a1 + 440) += v8;
  v10 = *(_QWORD *)(a1 + 440);
  if ( v10 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 472);
    if ( v10 <= v4 )
      goto LABEL_4;
    goto LABEL_3;
  }
LABEL_5:
  if ( bTracingEnabled )
  {
    v5 = *(_QWORD *)(a1 + 56);
    v6 = *(_QWORD *)(v1 + 2016);
    if ( !v5 || (LODWORD(v1) = *(_DWORD *)(a1 + 112), (v1 & 0x40) != 0) )
      LODWORD(v5) = a1;
    if ( (byte_1C006E941 & 2) != 0 )
      McTemplateK0piixqq_EtwWriteTransfer(
        *(_QWORD *)(a1 + 448),
        a1,
        v1,
        v5,
        *(_QWORD *)(a1 + 448),
        *(_QWORD *)(a1 + 440),
        v6,
        *(_DWORD *)(a1 + 436),
        1);
  }
  return v2;
}
