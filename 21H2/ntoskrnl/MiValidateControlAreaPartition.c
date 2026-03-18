/*
 * XREFs of MiValidateControlAreaPartition @ 0x14028ADEC
 * Callers:
 *     MiReferenceExistingControlArea @ 0x14023F590 (MiReferenceExistingControlArea.c)
 *     MiReferenceControlArea @ 0x140287C84 (MiReferenceControlArea.c)
 *     MiShareExistingControlArea @ 0x1406FE8F4 (MiShareExistingControlArea.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateControlAreaPartition(__int64 a1, __int64 a2)
{
  ULONG_PTR *v2; // r10
  ULONG_PTR **v3; // rax
  int v5; // eax

  v2 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * (*(_WORD *)(a2 + 60) & 0x3FF));
  v3 = *(ULONG_PTR ***)(a1 + 176);
  if ( !v3 )
  {
    if ( (*(_BYTE *)(a2 + 62) & 1) != 0 )
    {
      if ( v2 == *(ULONG_PTR **)(qword_140C51F48 + 8LL * KeGetCurrentThread()->ApcState.Process[1].IdealProcessor[25]) )
        return 0LL;
      if ( (*(_DWORD *)a1 & 1) == 0 )
      {
        v5 = *(_DWORD *)a1 | 0x2000000;
LABEL_9:
        *(_DWORD *)a1 = v5;
        return 3221226614LL;
      }
    }
    else if ( v2 == &MiSystemPartition )
    {
      return 0LL;
    }
    if ( (*(_DWORD *)a1 & 0x4000000) != 0 )
      return 0LL;
    v5 = *(_DWORD *)a1 | 0x4000000;
    goto LABEL_9;
  }
  if ( *v3 == v2 && ((*(_BYTE *)(a1 + 3) ^ *(_BYTE *)(a2 + 62)) & 1) == 0 )
    return 0LL;
  *(_DWORD *)a1 |= 0x2000000u;
  return 3221226614LL;
}
