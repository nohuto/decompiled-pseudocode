/*
 * XREFs of sub_180034970 @ 0x180034970
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180035110 @ 0x180035110 (sub_180035110.c)
 *     sub_180036244 @ 0x180036244 (sub_180036244.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 */

__int64 __fastcall sub_180034970(__int64 a1, void *a2)
{
  __int64 v4; // rax
  int v6; // ebx
  int v7; // ebx
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  sub_180035110();
  dwBufferLength = GetSecurityDescriptorLength(a2);
  v4 = o_malloc(dwBufferLength);
  *(_QWORD *)(a1 + 8) = v4;
  if ( !v4 )
    sub_18000A174(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    v7 = sub_1800362DC();
    _o_free(*(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = 0LL;
    sub_18000A174(v7);
  }
  if ( (pControl & 0x8000u) == 0 )
  {
    if ( !MakeSelfRelativeSD(a2, *(PSECURITY_DESCRIPTOR *)(a1 + 8), &dwBufferLength) )
    {
      v6 = sub_1800362DC();
      _o_free(*(_QWORD *)(a1 + 8));
      *(_QWORD *)(a1 + 8) = 0LL;
      sub_18000A174(v6);
    }
  }
  else
  {
    sub_180036244(*(_QWORD *)(a1 + 8), dwBufferLength, a2, dwBufferLength);
  }
  return a1;
}
