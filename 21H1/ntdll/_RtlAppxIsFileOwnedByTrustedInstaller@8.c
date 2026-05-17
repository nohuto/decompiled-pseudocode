/*
 * XREFs of _RtlAppxIsFileOwnedByTrustedInstaller@8 @ 0x4B32C800
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCreateServiceSid@12 @ 0x4B2AC190 (_RtlCreateServiceSid@12.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _RtlGetOwnerSecurityDescriptor@12 @ 0x4B2EAA80 (_RtlGetOwnerSecurityDescriptor@12.c)
 *     _NtQuerySecurityObject@20 @ 0x4B2F3F30 (_NtQuerySecurityObject@20.c)
 */

int __stdcall RtlAppxIsFileOwnedByTrustedInstaller(int a1, bool *a2)
{
  int SecurityObject; // esi
  int Heap; // ebx
  _DWORD *v5; // eax
  _WORD *v6; // edi
  _WORD v7[2]; // [esp+0h] [ebp-18h] BYREF
  const wchar_t *v8; // [esp+4h] [ebp-14h]
  void *Buf1; // [esp+8h] [ebp-10h] BYREF
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h] BYREF
  char v12; // [esp+17h] [ebp-1h] BYREF

  v7[0] = 32;
  Buf1 = 0;
  v7[1] = 34;
  v8 = L"TrustedInstaller";
  v10 = 0;
  if ( !a2 )
    return -1073741811;
  SecurityObject = NtQuerySecurityObject(a1, 1, 0, 0, (int)&v11);
  if ( SecurityObject == -1073741789 )
  {
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v11);
    if ( Heap )
    {
      SecurityObject = NtQuerySecurityObject(a1, 1, Heap, v11, (int)&v11);
      if ( SecurityObject >= 0 )
      {
        SecurityObject = RtlGetOwnerSecurityDescriptor(Heap, (int *)&Buf1, &v12);
        if ( SecurityObject >= 0 )
        {
          if ( Buf1 )
          {
            SecurityObject = RtlCreateServiceSid((int)v7, 0, (unsigned int *)&v10);
            if ( SecurityObject == -1073741789 )
            {
              v5 = (_DWORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v10);
              v6 = v5;
              if ( v5 )
              {
                SecurityObject = RtlCreateServiceSid((int)v7, v5, (unsigned int *)&v10);
                if ( SecurityObject >= 0 )
                  *a2 = RtlEqualSid((unsigned __int8 *)Buf1, v6);
                RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v6);
              }
            }
          }
        }
      }
      RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
  }
  return SecurityObject;
}
