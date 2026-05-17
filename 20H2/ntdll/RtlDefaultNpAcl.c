/*
 * XREFs of RtlDefaultNpAcl @ 0x1800D6CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x18003A450 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x1800400B0 (RtlInitializeSid.c)
 *     RtlGetAppContainerParent @ 0x180043E50 (RtlGetAppContainerParent.c)
 *     RtlGetAppContainerSidType @ 0x1800446C0 (RtlGetAppContainerSidType.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlDefaultNpAcl(__int64 *a1)
{
  void *ProcessHeap; // rcx
  unsigned __int8 **Heap; // r14
  int InformationToken; // ebx
  unsigned int v5; // ebx
  __int64 v6; // rax
  char *v7; // rcx
  char *v8; // rcx
  char *v9; // rcx
  char *v10; // rcx
  int v12; // [rsp+30h] [rbp-40h] BYREF
  __int16 v13; // [rsp+34h] [rbp-3Ch]
  int v14; // [rsp+38h] [rbp-38h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-34h]
  int v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+48h] [rbp-28h]
  void *v18; // [rsp+50h] [rbp-20h]
  unsigned __int8 Src[8]; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]

  v13 = 1280;
  *a1 = 0LL;
  v12 = 0;
  v14 = 0;
  v15 = 256;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v18 = 0LL;
  v17 = 0;
  Heap = (unsigned __int8 **)RtlAllocateHeap((__int64)ProcessHeap, 0, 76LL);
  if ( !Heap )
  {
    InformationToken = -1073741801;
LABEL_12:
    if ( *a1 )
    {
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *a1);
      *a1 = 0LL;
    }
    return (unsigned int)InformationToken;
  }
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
  {
    v16 = 0;
    NtQueryInformationToken();
    v5 = 4 * ((*Heap)[1] + 14) + 52;
    v6 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
    *a1 = v6;
    if ( v6 )
    {
      RtlCreateAcl(v6, v5, 2);
      RtlInitializeSid((__int64)Src, (__int64)&v12, 1u);
      v7 = (char *)*a1;
      v20 = 18;
      RtlpAddKnownAce(v7, 2u, 0, 0x10000000, Src, 0);
      RtlInitializeSid((__int64)Src, (__int64)&v12, 2u);
      v8 = (char *)*a1;
      v20 = 32;
      v21 = 544;
      RtlpAddKnownAce(v8, 2u, 0, 0x10000000, Src, 0);
      if ( v18 )
        RtlpAddKnownAce((char *)*a1, 2u, 0, 0x10000000, (unsigned __int8 *)v18, 0);
      RtlpAddKnownAce((char *)*a1, 2u, 0, 0x10000000, *Heap, 0);
      RtlInitializeSid((__int64)Src, (__int64)&v14, 1u);
      v9 = (char *)*a1;
      v20 = 0;
      RtlpAddKnownAce(v9, 2u, 0, 0x80000000, Src, 0);
      RtlInitializeSid((__int64)Src, (__int64)&v12, 1u);
      v10 = (char *)*a1;
      v20 = 7;
      RtlpAddKnownAce(v10, 2u, 0, 0x80000000, Src, 0);
      InformationToken = 0;
    }
    else
    {
      InformationToken = -1073741801;
    }
    if ( v18 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)v18);
  }
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( InformationToken < 0 )
    goto LABEL_12;
  return (unsigned int)InformationToken;
}
