/*
 * XREFs of AlpcpCaptureIdMessage @ 0x1406D95A0
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x1405E31B0 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1406D9170 (NtAlpcImpersonateClientOfPort.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1408C2690 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall AlpcpCaptureIdMessage(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  char PreviousMode; // r10
  __int64 result; // rax

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode && (a1 & 3) != 0 )
    goto LABEL_8;
  if ( (*(_WORD *)(a1 + 4) & 0x1000) != 0 )
  {
    *a2 = *(_DWORD *)(a1 + 16);
    result = *(unsigned int *)(a1 + 20);
    goto LABEL_7;
  }
  if ( PreviousMode && (a1 & 3) != 0 )
LABEL_8:
    ExRaiseDatatypeMisalignment();
  *a2 = *(_DWORD *)(a1 + 24);
  result = *(unsigned int *)(a1 + 32);
LABEL_7:
  *a3 = result;
  return result;
}
