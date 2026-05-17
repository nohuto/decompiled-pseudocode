/*
 * XREFs of RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800CBC00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     RtlCreateServiceSid @ 0x18003FA70 (RtlCreateServiceSid.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x1800784B0 (RtlGetOwnerSecurityDescriptor.c)
 *     NtQuerySecurityObject @ 0x18009F960 (NtQuerySecurityObject.c)
 */

__int64 __fastcall RtlAppxIsFileOwnedByTrustedInstaller(__int64 a1, bool *a2)
{
  int SecurityObject; // ebx
  __int64 Heap; // rsi
  _DWORD *v6; // rax
  _WORD *v7; // rdi
  unsigned __int8 *v8; // [rsp+30h] [rbp-20h] BYREF
  int v9; // [rsp+38h] [rbp-18h] BYREF
  const wchar_t *v10; // [rsp+40h] [rbp-10h]
  char v11; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v12; // [rsp+90h] [rbp+40h]
  unsigned int v13; // [rsp+98h] [rbp+48h] BYREF

  v8 = 0LL;
  v13 = 0;
  v9 = 2228256;
  v10 = L"TrustedInstaller";
  if ( !a2 )
    return 3221225485LL;
  SecurityObject = NtQuerySecurityObject();
  if ( SecurityObject == -1073741789 )
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v12);
    if ( Heap )
    {
      SecurityObject = NtQuerySecurityObject();
      if ( SecurityObject >= 0 )
      {
        SecurityObject = RtlGetOwnerSecurityDescriptor(Heap, &v8, &v11);
        if ( SecurityObject >= 0 )
        {
          if ( v8 )
          {
            SecurityObject = RtlCreateServiceSid((unsigned __int16 *)&v9, 0LL, &v13);
            if ( SecurityObject == -1073741789 )
            {
              v6 = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v13);
              v7 = v6;
              if ( v6 )
              {
                SecurityObject = RtlCreateServiceSid((unsigned __int16 *)&v9, v6, &v13);
                if ( SecurityObject >= 0 )
                  *a2 = RtlEqualSid(v8, v7);
                RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v7);
              }
            }
          }
        }
      }
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  return (unsigned int)SecurityObject;
}
