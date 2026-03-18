/*
 * XREFs of ExpFreeOwnerEntry @ 0x1402C3DC0
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14020A940 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x140279D74 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 */

__int64 __fastcall ExpFreeOwnerEntry(__int64 a1)
{
  int v1; // eax
  __int64 v3; // rdi
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( (v1 & 2) != 0 )
  {
    v3 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v3 & 3) != 0 )
  {
LABEL_11:
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  if ( !v3 )
    goto LABEL_11;
  if ( (v1 & 1) != 0 )
  {
    PsBoostThreadIoEx(v3, 1, 0, 0LL);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v1 = *(_DWORD *)(a1 + 8);
  }
  if ( (v1 & 4) != 0 )
  {
    PsBoostThreadIoQoS(v3, 1);
    *(_DWORD *)(a1 + 8) &= ~4u;
    v1 = *(_DWORD *)(a1 + 8);
  }
  if ( (v1 & 2) != 0 )
  {
    ObDereferenceObjectDeferDelete((PVOID)v3);
    *(_DWORD *)(a1 + 8) &= ~2u;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
