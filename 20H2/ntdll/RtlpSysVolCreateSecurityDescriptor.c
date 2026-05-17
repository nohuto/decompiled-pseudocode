/*
 * XREFs of RtlpSysVolCreateSecurityDescriptor @ 0x1800882D0
 * Callers:
 *     RtlCreateSystemVolumeInformationFolder @ 0x180087E50 (RtlCreateSystemVolumeInformationFolder.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x18003C8E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x18003C950 (RtlCreateSecurityDescriptor.c)
 *     RtlSetControlSecurityDescriptor @ 0x18007F990 (RtlSetControlSecurityDescriptor.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpSysVolCreateSecurityDescriptor(__int64 *a1, char **a2)
{
  __int64 Heap; // rax
  __int64 v5; // rsi
  int SecurityDescriptor; // ebx
  void *ProcessHeap; // rcx
  __int64 v8; // rax
  char *v9; // rdi
  __int64 v10; // r8
  __int64 result; // rax
  __int16 Src; // [rsp+30h] [rbp-38h] BYREF
  int v13; // [rsp+32h] [rbp-36h]
  __int16 v14; // [rsp+36h] [rbp-32h]
  int v15; // [rsp+38h] [rbp-30h]

  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 40LL);
  v5 = Heap;
  if ( !Heap )
    return 3221225626LL;
  SecurityDescriptor = RtlCreateSecurityDescriptor(Heap, 1);
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  if ( SecurityDescriptor >= 0 )
  {
    v13 = 0;
    v14 = 1280;
    Src = 257;
    v15 = 18;
    v8 = RtlAllocateHeap((__int64)ProcessHeap, 0, 28LL);
    v9 = (char *)v8;
    if ( !v8 )
    {
      SecurityDescriptor = -1073741670;
      goto LABEL_12;
    }
    SecurityDescriptor = RtlCreateAcl(v8, 0x1Cu, 2);
    if ( SecurityDescriptor >= 0 )
    {
      SecurityDescriptor = RtlpAddKnownAce(v9, 2u, 3, 0x1FFFFF, (unsigned __int8 *)&Src, 0);
      v10 = (__int64)v9;
      if ( SecurityDescriptor < 0 )
      {
LABEL_11:
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v10);
LABEL_12:
        ProcessHeap = NtCurrentPeb()->ProcessHeap;
        goto LABEL_13;
      }
      SecurityDescriptor = RtlSetDaclSecurityDescriptor(v5, 1, (__int64)v9, 0);
      if ( SecurityDescriptor >= 0 )
      {
        SecurityDescriptor = RtlSetControlSecurityDescriptor(v5, 0x1000u, 0x1000u);
        if ( SecurityDescriptor >= 0 )
        {
          *a1 = v5;
          result = 0LL;
          *a2 = v9;
          return result;
        }
      }
    }
    v10 = (__int64)v9;
    goto LABEL_11;
  }
LABEL_13:
  RtlFreeHeap((__int64)ProcessHeap, 0, v5);
  return (unsigned int)SecurityDescriptor;
}
