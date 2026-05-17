/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x180088D30
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800880E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x18006D3E8 (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

__int64 __fastcall RtlSelfRelativeToAbsoluteSD2(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // rbx
  __int16 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  unsigned int v11; // ecx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned int v16; // [rsp+50h] [rbp-30h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-28h] BYREF
  unsigned __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v22; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v23; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( *a2 < 0x14 )
    return 3221225485LL;
  v5 = *(_WORD *)(a1 + 2);
  if ( v5 >= 0 )
    return 3221225703LL;
  RtlpQuerySecurityDescriptor(a1, &v17, &v21, &v18, &v22, &v19, &v23, &v20, &v16);
  v6 = v17;
  v7 = v18;
  if ( v17 > v18 )
    v8 = v17 + v21;
  else
    v8 = v18 + v22;
  v9 = v19;
  if ( v8 <= v19 )
    v8 = v19 + v23;
  v10 = v20;
  if ( v8 <= v20 )
    v8 = v20 + v16;
  v11 = 40;
  if ( v8 )
    v11 = ((v8 - a1 - 13) & 0xFFFFFFF8) + 40;
  if ( v11 > *a2 )
  {
    *a2 = v11;
    return 3221225507LL;
  }
  else
  {
    if ( v8 )
    {
      memmove((void *)(a1 + 40), (const void *)(a1 + 20), v11 - 40LL);
      v6 = v17;
      v5 = *(_WORD *)(a1 + 2);
    }
    v12 = v6 + 20;
    *(_WORD *)(a1 + 2) = v5 & 0x7FFF;
    if ( !v6 )
      v12 = 0LL;
    *(_QWORD *)(a1 + 8) = v12;
    v13 = v7 + 20;
    if ( !v7 )
      v13 = 0LL;
    *(_QWORD *)(a1 + 16) = v13;
    v14 = v10 + 20;
    if ( !v10 )
      v14 = 0LL;
    *(_QWORD *)(a1 + 24) = v14;
    if ( v9 )
      v2 = v9 + 20;
    *(_QWORD *)(a1 + 32) = v2;
    return 0LL;
  }
}
