/*
 * XREFs of LogicalToPhysicalPointForWindow @ 0x1C01E5FE0
 * Callers:
 *     ?CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z @ 0x1C01D0528 (-CloneWindowPosAndArrangementAsync@@YA_NPEAUtagWND@@PEBU1@1W4CloneWindowPosOptions@@@Z.c)
 * Callees:
 *     TransformVector @ 0x1C0217FDC (TransformVector.c)
 */

__int64 __fastcall LogicalToPhysicalPointForWindow(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r10
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 216);
  result = (__int64)a3;
  *a3 = a1;
  if ( v3 )
    return TransformVector(v3, (_DWORD)a3, (int)a3 + 4, 0, 0);
  return result;
}
