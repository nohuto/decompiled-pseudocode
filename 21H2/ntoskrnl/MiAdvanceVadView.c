/*
 * XREFs of MiAdvanceVadView @ 0x140309344
 * Callers:
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 * Callees:
 *     MiComputeContiguousSubsectionPte @ 0x140321800 (MiComputeContiguousSubsectionPte.c)
 *     MiLocateSubsectionNode @ 0x140321830 (MiLocateSubsectionNode.c)
 *     MiLocatePagefileSubsection @ 0x140321A4C (MiLocatePagefileSubsection.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 */

__int64 __fastcall MiAdvanceVadView(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 *v5; // rcx
  __int64 v6; // rbp
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  bool v9; // zf
  __int64 SubsectionNode; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 24);
  v4 = a2 + (result | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32));
  if ( (*(_DWORD *)(a1 + 48) & 0x100000) == 0 )
  {
    v5 = *(__int64 **)(a1 + 72);
    v6 = *v5;
    v7 = (a2 << 12) + MiStartingOffset(v5, *(_QWORD *)(a1 + 80), 0xFFFFFFFFLL);
    v8 = v7 >> 12;
    v9 = *(_QWORD *)(v6 + 64) == 0LL;
    v16 = v7 >> 12;
    if ( v9 )
    {
      SubsectionNode = MiLocatePagefileSubsection(v6 + 128, &v16);
      v8 = v16;
    }
    else
    {
      SubsectionNode = MiLocateSubsectionNode(v6, v7, 0LL);
    }
    v11 = SubsectionNode;
    v12 = (unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32;
    v13 = v8
        - (*(unsigned int *)(SubsectionNode + 36) | ((unsigned __int64)(*(_WORD *)(SubsectionNode + 32) & 0xFFC0) << 26));
    *(_QWORD *)(a1 + 72) = SubsectionNode;
    v14 = *(_QWORD *)(SubsectionNode + 8) + 8 * v13;
    v15 = *(unsigned int *)(a1 + 28);
    *(_QWORD *)(a1 + 80) = v14;
    result = MiComputeContiguousSubsectionPte(v11, v13 + (v15 | v12) - v4);
    *(_QWORD *)(a1 + 88) = result;
  }
  *(_DWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a1 + 32) = BYTE4(v4);
  return result;
}
