/*
 * XREFs of _RtlpValidOwnerSubjectContext@16 @ 0x4B2D94CA
 * Callers:
 *     _RtlpNewSecurityObject@40 @ 0x4B2D6852 (_RtlpNewSecurityObject@40.c)
 *     _RtlpSetSecurityObject@32 @ 0x4B3491B6 (_RtlpSetSecurityObject@32.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlEqualSid@8 @ 0x4B2D85D0 (_RtlEqualSid@8.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     _ZwOpenProcessToken@12 @ 0x4B2F3C00 (_ZwOpenProcessToken@12.c)
 *     _ZwPrivilegeCheck@12 @ 0x4B2F3CF0 (_ZwPrivilegeCheck@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, unsigned __int8 *a2, char a3, int *a4)
{
  int v5; // eax
  char v6; // bl
  int v8; // eax
  unsigned int *Heap; // edi
  unsigned int v10; // ebx
  _WORD **v11; // eax
  int v12; // eax
  int v13; // eax
  _DWORD *v16; // [esp+14h] [ebp-80h]
  void *ProcessHeap; // [esp+18h] [ebp-7Ch]
  int v18; // [esp+1Ch] [ebp-78h] BYREF
  HANDLE Handle; // [esp+20h] [ebp-74h] BYREF
  char v20; // [esp+27h] [ebp-6Dh] BYREF
  _DWORD v21[5]; // [esp+28h] [ebp-6Ch] BYREF
  void *Buf2; // [esp+3Ch] [ebp-58h] BYREF

  if ( !a2 )
  {
LABEL_31:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    Handle = a1;
LABEL_4:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v5 = ZwQueryInformationToken(Handle, 1, &Buf2, 76, &v18);
    *a4 = v5;
    if ( v5 >= 0 )
    {
      if ( RtlEqualSid(a2, Buf2) )
      {
        if ( a3 )
          NtClose(Handle);
        return 1;
      }
      v8 = ZwQueryInformationToken(Handle, 2, 0, 0, &v18);
      *a4 = v8;
      if ( v8 >= 0 || v8 == -1073741789 )
      {
        Heap = (unsigned int *)RtlAllocateHeap((int)ProcessHeap, 0, v18);
        if ( Heap )
        {
          *a4 = ZwQueryInformationToken(Handle, 2, Heap, v18, &v18);
          if ( a3 )
            NtClose(Handle);
          if ( *a4 < 0 )
          {
            v6 = 0;
            goto LABEL_23;
          }
          v10 = 0;
          if ( *Heap )
          {
            v11 = (_WORD **)(Heap + 1);
            v16 = Heap + 1;
            while ( !RtlEqualSid(a2, *v11) )
            {
              ++v10;
              v11 = (_WORD **)(v16 + 2);
              v16 += 2;
              if ( v10 >= *Heap )
                goto LABEL_30;
            }
            if ( (Heap[2 * v10 + 2] & 0x18) == 8 )
            {
              v6 = 1;
LABEL_23:
              RtlFreeHeap((int)ProcessHeap, 0, (int)Heap);
              return v6;
            }
          }
LABEL_30:
          RtlFreeHeap((int)ProcessHeap, 0, (int)Heap);
          v21[3] = 0;
          v21[4] = 0;
          v21[2] = 18;
          v6 = 1;
          v21[0] = 1;
          v21[1] = 1;
          v13 = ZwPrivilegeCheck(a1, v21, &v20);
          v20 = v13 < 0 ? 0 : v20;
          if ( v20 )
            return v6;
          goto LABEL_31;
        }
        *a4 = -1073741801;
      }
    }
    if ( a3 )
      NtClose(Handle);
    return 0;
  }
  v12 = ZwOpenProcessToken(-1, 8, &Handle);
  *a4 = v12;
  if ( v12 >= 0 )
    goto LABEL_4;
  return 0;
}
