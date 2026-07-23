/*
 * XREFs of ExpFreeOwnerEntry @ 0x1402FFD40
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x1402045F8 (PsBoostThreadIoQoS.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     PsBoostThreadIoEx @ 0x140358550 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall ExpFreeOwnerEntry(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rdi
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 8);
  v4 = *(_QWORD *)a1;
  if ( (v2 & 2) != 0 )
  {
    v4 &= 0xFFFFFFFFFFFFFFFCuLL;
  }
  else if ( (v4 & 3) != 0 )
  {
LABEL_11:
    result = 0LL;
    *(_QWORD *)a1 = 0LL;
    return result;
  }
  if ( !v4 )
    goto LABEL_11;
  if ( (v2 & 1) != 0 )
  {
    LOBYTE(a2) = 1;
    PsBoostThreadIoEx(v4, a2, 0LL, 0LL);
    *(_DWORD *)(a1 + 8) &= ~1u;
    v2 = *(_DWORD *)(a1 + 8);
  }
  if ( (v2 & 4) != 0 )
  {
    PsBoostThreadIoQoS(v4, 1);
    *(_DWORD *)(a1 + 8) &= ~4u;
    v2 = *(_DWORD *)(a1 + 8);
  }
  if ( (v2 & 2) != 0 )
  {
    ObDereferenceObjectDeferDelete((PVOID)v4);
    *(_DWORD *)(a1 + 8) &= ~2u;
  }
  result = 0LL;
  *(_QWORD *)a1 = 0LL;
  return result;
}
