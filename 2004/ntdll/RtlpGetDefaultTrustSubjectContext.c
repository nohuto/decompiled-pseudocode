/*
 * XREFs of RtlpGetDefaultTrustSubjectContext @ 0x180066EF8
 * Callers:
 *     RtlpGetDefaultsSubjectContext @ 0x180066CBC (RtlpGetDefaultsSubjectContext.c)
 *     RtlpSetSecurityObject @ 0x1800766AC (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlSidDominatesForTrust @ 0x180067070 (RtlSidDominatesForTrust.c)
 *     RtlCopySid @ 0x180067300 (RtlCopySid.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D230 (NtQueryInformationToken.c)
 */

__int64 __fastcall RtlpGetDefaultTrustSubjectContext(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rsi
  void *ProcessHeap; // r14
  int InformationToken; // edi
  unsigned int v7; // ecx
  _QWORD *Heap; // rax
  __int64 v9; // rbx
  _BYTE v11[4]; // [rsp+30h] [rbp-89h] BYREF
  int v12; // [rsp+34h] [rbp-85h]
  int v13; // [rsp+38h] [rbp-81h]
  _QWORD v14[10]; // [rsp+40h] [rbp-79h] BYREF
  _QWORD v15[10]; // [rsp+90h] [rbp-29h] BYREF

  v11[0] = 0;
  v12 = 76;
  v13 = 76;
  v2 = v14;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  InformationToken = NtQueryInformationToken(-4LL, 41LL, v14);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  if ( !a1 )
    goto LABEL_16;
  InformationToken = NtQueryInformationToken(a1, 41LL, v15);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  InformationToken = RtlSidDominatesForTrust(v14[0], v15[0], v11);
  if ( InformationToken < 0 )
    return (unsigned int)InformationToken;
  if ( v11[0] )
  {
    v7 = v13;
    v2 = v15;
    v12 = v13;
  }
  else
  {
LABEL_16:
    v7 = v12;
  }
  Heap = (_QWORD *)RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1310720, v7);
  v9 = (__int64)Heap;
  if ( !Heap )
    return (unsigned int)-1073741801;
  if ( !*v2 )
  {
    *Heap = 0LL;
LABEL_10:
    *a2 = v9;
    v9 = 0LL;
    goto LABEL_11;
  }
  *Heap = Heap + 1;
  InformationToken = RtlCopySid((unsigned int)(v12 - 8), Heap + 1, *v2);
  if ( InformationToken >= 0 )
    goto LABEL_10;
LABEL_11:
  if ( v9 )
    RtlFreeHeap((__int64)ProcessHeap, 0, v9);
  return (unsigned int)InformationToken;
}
