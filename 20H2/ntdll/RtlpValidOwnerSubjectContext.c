/*
 * XREFs of RtlpValidOwnerSubjectContext @ 0x18007D3D0
 * Callers:
 *     RtlpNewSecurityObject @ 0x180038B7C (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x1800767AC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlEqualSid @ 0x180038310 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     NtOpenProcessToken @ 0x18009F5A0 (NtOpenProcessToken.c)
 *     ZwPrivilegeCheck @ 0x18009F780 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidOwnerSubjectContext(void *a1, unsigned __int8 *a2, char a3, int *a4)
{
  char v4; // bl
  void *ProcessHeap; // r13
  int v9; // eax
  int InformationToken; // eax
  unsigned int *Heap; // r14
  unsigned int v13; // edi
  _WORD **v14; // r15
  int v15; // eax
  int v16; // eax
  char v17; // cl
  char v18[4]; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v19; // [rsp+34h] [rbp-85h]
  HANDLE Handle[2]; // [rsp+38h] [rbp-81h] BYREF
  void *v21; // [rsp+48h] [rbp-71h]
  _DWORD v22[2]; // [rsp+50h] [rbp-69h] BYREF
  __int64 v23; // [rsp+58h] [rbp-61h]
  int v24; // [rsp+60h] [rbp-59h]
  _WORD *v25; // [rsp+70h] [rbp-49h] BYREF

  v4 = 0;
  v21 = a1;
  if ( !a2 )
  {
LABEL_32:
    *a4 = -1073741734;
    return 0;
  }
  if ( !a3 )
  {
    Handle[0] = a1;
    goto LABEL_4;
  }
  v15 = NtOpenProcessToken(-1LL, 8LL, Handle);
  *a4 = v15;
  if ( v15 >= 0 )
  {
LABEL_4:
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
    v9 = NtQueryInformationToken(Handle[0], 1LL, &v25);
    *a4 = v9;
    if ( v9 < 0 )
      goto LABEL_27;
    if ( RtlEqualSid(a2, v25) )
    {
      if ( a3 )
        NtClose(Handle[0]);
      return 1;
    }
    InformationToken = NtQueryInformationToken(Handle[0], 2LL, 0LL);
    *a4 = InformationToken;
    if ( (int)(InformationToken + 0x80000000) >= 0 && InformationToken != -1073741789 )
      goto LABEL_27;
    Heap = (unsigned int *)RtlAllocateHeap((__int64)ProcessHeap, 0, v19);
    if ( !Heap )
    {
      *a4 = -1073741801;
LABEL_27:
      if ( a3 )
        NtClose(Handle[0]);
      return 0;
    }
    *a4 = NtQueryInformationToken(Handle[0], 2LL, Heap);
    if ( a3 )
      NtClose(Handle[0]);
    if ( *a4 < 0 )
    {
LABEL_19:
      RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
      return v4;
    }
    v13 = 0;
    if ( *Heap )
    {
      v14 = (_WORD **)(Heap + 2);
      while ( !RtlEqualSid(a2, *v14) )
      {
        ++v13;
        v14 += 2;
        if ( v13 >= *Heap )
          goto LABEL_29;
      }
      if ( (Heap[4 * v13 + 4] & 0x18) == 8 )
      {
        v4 = 1;
        goto LABEL_19;
      }
    }
LABEL_29:
    RtlFreeHeap((__int64)ProcessHeap, 0, (__int64)Heap);
    Handle[1] = (HANDLE)18;
    v23 = 18LL;
    v22[0] = 1;
    v22[1] = 1;
    v24 = 0;
    v16 = ZwPrivilegeCheck(v21, v22, v18);
    v17 = v18[0];
    if ( v16 < 0 )
      v17 = 0;
    if ( v17 )
      return 1;
    goto LABEL_32;
  }
  return 0;
}
