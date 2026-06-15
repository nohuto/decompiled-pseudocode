/*
 * XREFs of sub_180034D90 @ 0x180034D90
 * Callers:
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 * Callees:
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_180035110 @ 0x180035110 (sub_180035110.c)
 *     sub_1800362DC @ 0x1800362DC (sub_1800362DC.c)
 *     sub_180036308 @ 0x180036308 (sub_180036308.c)
 */

__int64 __fastcall sub_180034D90(__int64 a1)
{
  void *v2; // rcx
  __int64 result; // rax
  void *v4; // rcx
  __int64 v5; // rcx
  void *v6; // rax
  void *v7; // rdi
  __int64 v8; // rcx
  int v9; // ebx
  WORD pControl; // [rsp+48h] [rbp+10h] BYREF
  DWORD dwBufferLength; // [rsp+50h] [rbp+18h] BYREF
  DWORD dwRevision; // [rsp+58h] [rbp+20h] BYREF

  v2 = *(void **)(a1 + 8);
  pControl = 0;
  if ( !v2 || !GetSecurityDescriptorControl(v2, &pControl, &dwRevision) )
    sub_18000A174(-2147467259);
  result = 0x8000LL;
  if ( (pControl & 0x8000u) == 0 )
  {
    v4 = *(void **)(a1 + 8);
    dwBufferLength = 0;
    MakeSelfRelativeSD(v4, 0LL, &dwBufferLength);
    if ( GetLastError() != 122 )
      sub_180036308(v5);
    v6 = (void *)o_malloc(dwBufferLength);
    v7 = v6;
    if ( !v6 )
      sub_18000A174(-2147024882);
    if ( !MakeSelfRelativeSD(*(PSECURITY_DESCRIPTOR *)(a1 + 8), v6, &dwBufferLength) )
    {
      v9 = sub_1800362DC(v8);
      _o_free(v7);
      sub_18000A174(v9);
    }
    result = sub_180035110(a1);
    *(_QWORD *)(a1 + 8) = v7;
  }
  return result;
}
