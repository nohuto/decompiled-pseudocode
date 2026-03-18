/*
 * XREFs of SeQuerySigningPolicy @ 0x140690484
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspCreateProcess @ 0x1407CA1A0 (PspCreateProcess.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     SeQuerySigningPolicyWorker @ 0x14069004C (SeQuerySigningPolicyWorker.c)
 *     SepIsMinTCB @ 0x1406905B8 (SepIsMinTCB.c)
 */

__int64 __fastcall SeQuerySigningPolicy(
        void *a1,
        UNICODE_STRING *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7)
{
  unsigned __int8 v7; // bp
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int IsMinTCB; // r14d
  __int64 v14; // rcx
  char v15; // bl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int (__fastcall *v20)(__int64, __int64); // rax

  v7 = SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    v7 = SeILSigningPolicyRuntime;
  IsMinTCB = SepIsMinTCB(a2, (__int64)a5, (__int64)a6, (__int64)a7);
  if ( (IsMinTCB & 0x80000000) != 0 )
  {
    IsMinTCB = SeQuerySigningPolicyWorker(a1, &a2->Length, a3, a4, v7, a5, a6, a7);
    if ( (IsMinTCB & 0x80000000) != 0 )
      return IsMinTCB;
  }
  v14 = (*a7 & 7u) - 1;
  if ( (*a7 & 7) == 1 )
  {
    *a5 |= 0x30u;
  }
  else if ( (*a7 & 7) == 2 )
  {
    *a5 |= 0x10u;
    *a6 |= 0x10u;
  }
  v15 = 8;
  if ( (*a5 & 0xF) == 8 )
    return IsMinTCB;
  if ( !qword_140C1D980 )
    return IsMinTCB;
  LOBYTE(v11) = 8;
  LOBYTE(v14) = *a5;
  if ( !(unsigned int)qword_140C1D980(v14, v11, v12)
    || (SeCiDebugOptions & 4) == 0
    && ((SeCiDebugOptions & 2) == 0 || !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent) )
  {
    return IsMinTCB;
  }
  if ( !qword_140C1D980 || (LOBYTE(v16) = 8, LOBYTE(v17) = v7, !(unsigned int)qword_140C1D980(v17, v16, v18)) )
  {
    if ( (*a7 & 7) != 0 )
    {
      *a5 = *a5 & 0x30 | 8;
      v20 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1D980;
      if ( qword_140C1D980 )
      {
        LOBYTE(v17) = 8;
        goto LABEL_25;
      }
LABEL_26:
      *a6 = v15 | *a6 & 0x30;
      return IsMinTCB;
    }
  }
  v15 = v7 & 0xF;
  *a5 = v7 & 0xF | *a5 & 0x30;
  v20 = (unsigned int (__fastcall *)(__int64, __int64))qword_140C1D980;
  if ( !qword_140C1D980 )
    goto LABEL_26;
  LOBYTE(v17) = v7;
LABEL_25:
  LOBYTE(v16) = *a6;
  if ( !v20(v17, v16) )
    goto LABEL_26;
  return IsMinTCB;
}
