/*
 * XREFs of RtlAddCompoundAce @ 0x1800E97E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x180037710 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180037950 (RtlValidSid.c)
 *     RtlCopySid @ 0x180068900 (RtlCopySid.c)
 */

__int64 __fastcall RtlAddCompoundAce(
        __int64 a1,
        int a2,
        unsigned __int8 a3,
        int a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6)
{
  __int16 v7; // r13
  unsigned __int8 v10; // r14
  __int64 v11; // rdi
  unsigned __int16 v12; // dx
  unsigned __int8 v13; // cl
  __int64 result; // rax
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = a3;
  if ( !RtlValidSid(a5) || !RtlValidSid(a6) )
    return 3221225592LL;
  v10 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 > 4u || (unsigned int)(a2 - 3) > 1 )
    return 3221225561LL;
  if ( !RtlValidAcl(a1) || !RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v11 = v15[0];
  v12 = 4 * (a6[1] + a5[1] + 7);
  if ( !v15[0] || v15[0] + (unsigned __int64)v12 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v12;
  *(_WORD *)v11 = 4;
  *(_DWORD *)(v11 + 4) = a4;
  *(_WORD *)(v11 + 8) = v7;
  RtlCopySid(4 * a5[1] + 8, (void *)(v11 + 12), a5);
  RtlCopySid(4 * a6[1] + 8, (void *)(v11 + 4 * (a5[1] + 5LL)), a6);
  v13 = v10;
  ++*(_WORD *)(a1 + 4);
  if ( v10 <= (unsigned __int8)a2 )
    v13 = a2;
  result = 0LL;
  *(_BYTE *)a1 = v13;
  return result;
}
