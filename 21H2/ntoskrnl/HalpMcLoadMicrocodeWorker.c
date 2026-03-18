/*
 * XREFs of HalpMcLoadMicrocodeWorker @ 0x14051EFC0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMcUpdateMicrocode @ 0x1403B607C (HalpMcUpdateMicrocode.c)
 *     HalpInterruptGetIdentifiers @ 0x1403D8F10 (HalpInterruptGetIdentifiers.c)
 */

ULONG_PTR __fastcall HalpMcLoadMicrocodeWorker(ULONG_PTR Argument)
{
  unsigned int Number; // ecx
  unsigned int v2; // ebx
  int Identifiers; // eax
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rdx
  int v7; // edi
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v9 = 0;
  v2 = -KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  Identifiers = HalpInterruptGetIdentifiers(Number, &v9, 0LL);
  v5 = v9;
  v6 = 0xFFFFFFFFLL;
  if ( Identifiers < 0 )
    v5 = 0xFFFFFFFFLL;
  v9 = v5;
  v7 = v2 & v5;
  if ( (v2 & (unsigned int)v5) == (_DWORD)v5 )
    HalpMcUpdateMicrocode(v5, 0xFFFFFFFFLL, v4);
  _InterlockedDecrement(&HalpMcLoadSyncBarrier);
  while ( HalpMcLoadSyncBarrier > 0 )
    _mm_pause();
  if ( v7 != v9 )
    HalpMcUpdateMicrocode(v5, v6, v4);
  _InterlockedDecrement(&HalpMcSyncBarrier);
  while ( HalpMcSyncBarrier > 0 )
    _mm_pause();
  return 0LL;
}
