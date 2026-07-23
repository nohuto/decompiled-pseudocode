/*
 * XREFs of HvpReleaseCellPaged @ 0x1405DA820
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HvpReleaseCellPaged(ULONG_PTR BugCheckParameter2, _QWORD *a2)
{
  ULONG_PTR v2; // r9
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *(unsigned int *)a2;
  v3 = (unsigned int)v2 >> 31;
  if ( (unsigned int)(v2 + ((_DWORD)v3 << 31)) >= *(_DWORD *)(632 * v3 + BugCheckParameter2 + 272)
    || !(*(_QWORD *)(*(_QWORD *)(632 * v3 + BugCheckParameter2 + 280) + 8 * ((v2 >> 21) & 0x3FF))
       + 24LL * (((unsigned int)v2 >> 12) & 0x1FF)) )
  {
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v2, 0x271uLL);
  }
  result = 0LL;
  *a2 = 0LL;
  *(_DWORD *)a2 = -1;
  return result;
}
