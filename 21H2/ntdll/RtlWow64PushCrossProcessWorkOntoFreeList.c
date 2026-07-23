/*
 * XREFs of RtlWow64PushCrossProcessWorkOntoFreeList @ 0x180103460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlWow64PushCrossProcessWorkOntoFreeList(volatile signed __int64 *a1, _DWORD *a2)
{
  signed __int64 v2; // r9
  bool v3; // zf
  signed __int64 v4; // rax
  signed __int64 v6; // [rsp+8h] [rbp-30h]

  v2 = *a1;
  do
  {
    HIDWORD(v6) = HIDWORD(v2) + 1;
    *a2 = v2 & 0x7FFFFFFF;
    LODWORD(v6) = (((_DWORD)a2 - (_DWORD)a1) ^ v2) & 0x7FFFFFFF ^ v2;
    v4 = _InterlockedCompareExchange64(a1, v6, v2);
    v3 = v2 == v4;
    v2 = v4;
  }
  while ( !v3 );
  return 1;
}
