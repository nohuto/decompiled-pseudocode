/*
 * XREFs of AuthzBasepQuerySecurityAttributesToken @ 0x1402F3050
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140230DD8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402F2FB0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     NtQueryInformationToken @ 0x14064CC10 (NtQueryInformationToken.c)
 * Callees:
 *     AuthzBasepCopyoutSecurityAttributes @ 0x1402F2020 (AuthzBasepCopyoutSecurityAttributes.c)
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402F3190 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 *     memset @ 0x140414300 (memset.c)
 */

NTSTATUS __fastcall AuthzBasepQuerySecurityAttributesToken(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        size_t Size,
        _DWORD *a6)
{
  _DWORD *v6; // rsi
  unsigned int v7; // r10d
  unsigned int v9; // ebx
  _QWORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  NTSTATUS result; // eax
  int v16; // r14d
  size_t v17; // r15
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v6 = a6;
  v7 = 0;
  v18 = 0LL;
  v9 = a3;
  *a6 = 0;
  if ( *a1 )
  {
    if ( (_DWORD)a3 )
    {
      v12 = (_QWORD *)(a2 + 8);
      while ( 1 )
      {
        v13 = *((_WORD *)v12 - 4);
        if ( !v13 )
          return -1073741811;
        v14 = *((_WORD *)v12 - 3);
        if ( !v14 || v13 > v14 || !*v12 )
          return -1073741811;
        ++v7;
        v12 += 2;
        if ( v7 >= (unsigned int)a3 )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      result = AuthzBasepGetSecurityAttributesCopyoutBufferSize(a1, a2, a3, &v18);
      if ( result >= 0 )
      {
        v16 = v18;
        if ( v18 )
        {
          v17 = (unsigned int)Size;
          if ( (unsigned int)Size < v18 )
          {
            result = -1073741789;
            *v6 = v18;
          }
          else
          {
            memset(a4, 0, (unsigned int)Size);
            result = AuthzBasepCopyoutSecurityAttributes(a1, a2, v9, a4, v17);
            *v6 = v16;
          }
        }
        else
        {
          return -1073741811;
        }
      }
    }
  }
  else
  {
    if ( (unsigned int)Size < 0x10 )
    {
      v7 = -1073741789;
    }
    else
    {
      *a4 = 0LL;
      *(_WORD *)a4 = 1;
    }
    *v6 = 16;
    return v7;
  }
  return result;
}
