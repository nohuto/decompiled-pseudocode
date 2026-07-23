/*
 * XREFs of RtlSelfRelativeToAbsoluteSD2 @ 0x180088C30
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x180087FE0 (RtlpSysVolCheckOwnerAndSecurity.c)
 * Callees:
 *     RtlpQuerySecurityDescriptor @ 0x18006D2D8 (RtlpQuerySecurityDescriptor.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

NTSTATUS __cdecl RtlSelfRelativeToAbsoluteSD2(PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor, PULONG BufferSize)
{
  unsigned __int64 v2; // rbx
  __int16 v5; // r14
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  ULONG v11; // ecx
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
  if ( !SelfRelativeSecurityDescriptor )
    return -1073741585;
  if ( !BufferSize )
    return -1073741584;
  if ( *BufferSize < 0x14 )
    return -1073741811;
  v5 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
  if ( v5 >= 0 )
    return -1073741593;
  RtlpQuerySecurityDescriptor((__int64)SelfRelativeSecurityDescriptor, &v17, &v21, &v18, &v22, &v19, &v23, &v20, &v16);
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
    v11 = ((v8 - (_DWORD)SelfRelativeSecurityDescriptor - 13) & 0xFFFFFFF8) + 40;
  if ( v11 > *BufferSize )
  {
    *BufferSize = v11;
    return -1073741789;
  }
  else
  {
    if ( v8 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 40, (char *)SelfRelativeSecurityDescriptor + 20, v11 - 40LL);
      v6 = v17;
      v5 = *((_WORD *)SelfRelativeSecurityDescriptor + 1);
    }
    v12 = v6 + 20;
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) = v5 & 0x7FFF;
    if ( !v6 )
      v12 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 1) = v12;
    v13 = v7 + 20;
    if ( !v7 )
      v13 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 2) = v13;
    v14 = v10 + 20;
    if ( !v10 )
      v14 = 0LL;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 3) = v14;
    if ( v9 )
      v2 = v9 + 20;
    *((_QWORD *)SelfRelativeSecurityDescriptor + 4) = v2;
    return 0;
  }
}
