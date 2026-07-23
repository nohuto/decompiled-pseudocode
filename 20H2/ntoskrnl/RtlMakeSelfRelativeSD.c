/*
 * XREFs of RtlMakeSelfRelativeSD @ 0x140764E64
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14072DD88 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140764E40 (RtlAbsoluteToSelfRelativeSD.c)
 * Callees:
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlpQuerySecurityDescriptor @ 0x140764FD4 (RtlpQuerySecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlMakeSelfRelativeSD(
        PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
        PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
        PULONG BufferLength)
{
  size_t v6; // r15
  size_t v7; // r12
  size_t v8; // r13
  size_t v9; // r14
  ULONG v10; // ecx
  int v11; // eax
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void *v17; // [rsp+50h] [rbp-28h] BYREF
  void *Src; // [rsp+58h] [rbp-20h] BYREF
  void *v19; // [rsp+60h] [rbp-18h] BYREF
  void *v20; // [rsp+68h] [rbp-10h] BYREF
  size_t v21; // [rsp+C0h] [rbp+48h] BYREF
  size_t v22; // [rsp+C8h] [rbp+50h] BYREF
  size_t v23; // [rsp+D0h] [rbp+58h] BYREF
  size_t Size; // [rsp+D8h] [rbp+60h] BYREF

  LODWORD(Size) = 0;
  LODWORD(v23) = 0;
  LODWORD(v22) = 0;
  LODWORD(v21) = 0;
  v19 = 0LL;
  v20 = 0LL;
  Src = 0LL;
  v17 = 0LL;
  RtlpQuerySecurityDescriptor(
    (_DWORD)AbsoluteSecurityDescriptor,
    (unsigned int)&v19,
    (unsigned int)&v22,
    (unsigned int)&v20,
    (__int64)&v21,
    (__int64)&Src,
    (__int64)&Size,
    (__int64)&v17,
    (__int64)&v23);
  v6 = (unsigned int)v21;
  v7 = (unsigned int)v22;
  v8 = (unsigned int)Size;
  v9 = (unsigned int)v23;
  v10 = v23 + v21 + v22 + Size + 20;
  if ( v10 > *BufferLength )
  {
    *BufferLength = v10;
    return -1073741789;
  }
  else if ( SelfRelativeSecurityDescriptor )
  {
    memset(SelfRelativeSecurityDescriptor, 0, v10);
    v11 = *(_DWORD *)AbsoluteSecurityDescriptor;
    v12 = (char *)SelfRelativeSecurityDescriptor + 20;
    *(_DWORD *)SelfRelativeSecurityDescriptor = v11;
    if ( (_DWORD)v9 )
    {
      memmove((char *)SelfRelativeSecurityDescriptor + 20, v17, v9);
      v12 += v9;
      v13 = 20;
    }
    else
    {
      v13 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 3) = v13;
    if ( (_DWORD)v8 )
    {
      memmove(v12, Src, v8);
      v14 = (int)v12;
      v12 += v8;
      v15 = v14 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    else
    {
      v15 = 0;
    }
    *((_DWORD *)SelfRelativeSecurityDescriptor + 4) = v15;
    if ( (_DWORD)v7 )
    {
      memmove(v12, v19, v7);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 1) = (_DWORD)v12 - (_DWORD)SelfRelativeSecurityDescriptor;
      v12 += v7;
    }
    if ( (_DWORD)v6 )
    {
      memmove(v12, v20, v6);
      *((_DWORD *)SelfRelativeSecurityDescriptor + 2) = (_DWORD)v12 - (_DWORD)SelfRelativeSecurityDescriptor;
    }
    *((_WORD *)SelfRelativeSecurityDescriptor + 1) |= 0x8000u;
    return 0;
  }
  else
  {
    return -1073741811;
  }
}
