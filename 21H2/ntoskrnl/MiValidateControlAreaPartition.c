/*
 * XREFs of MiValidateControlAreaPartition @ 0x140361F84
 * Callers:
 *     MiReferenceExistingControlArea @ 0x140262384 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140361574 (MiReferenceControlArea.c)
 *     MiShareExistingControlArea @ 0x14071F1CC (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r10
  ULONG_PTR **v3; // rax
  int v5; // eax

  v2 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * (*(_WORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(a2 + 62) & 1) != 0 )
    {
      if ( v2 == *(ULONG_PTR **)(qword_140C4E688
                               + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessorPadding[5]) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x1000000;
LABEL_9:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &MiSystemPartition )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x2000000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x2000000;
    goto LABEL_9;
  }
  if ( *v3 == v2 && (((unsigned __int8)(*(_DWORD *)a1 >> 23) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x1000000u;
  return 3221226614LL;
}
