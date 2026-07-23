/*
 * XREFs of NtQuerySecurityPolicy @ 0x14091BCA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ProbeForWrite @ 0x1406495C0 (ProbeForWrite.c)
 *     SepCaptureUnicodeStringArray @ 0x1406F0C70 (SepCaptureUnicodeStringArray.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall NtQuerySecurityPolicy(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        volatile void *a5,
        unsigned __int64 Address)
{
  __int64 v7; // r12
  PVOID PoolWithQuotaTag; // rsi
  char PreviousMode; // r14
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r8
  _DWORD *v14; // r15
  void *v15; // r12
  unsigned int v16; // eax
  SIZE_T Length; // [rsp+44h] [rbp-54h] BYREF
  PVOID v19; // [rsp+50h] [rbp-48h]
  PVOID P; // [rsp+58h] [rbp-40h] BYREF
  PVOID v21; // [rsp+60h] [rbp-38h] BYREF
  PVOID v22[3]; // [rsp+68h] [rbp-30h] BYREF

  v7 = a3;
  P = 0LL;
  v21 = 0LL;
  PoolWithQuotaTag = 0LL;
  v19 = 0LL;
  v22[0] = 0LL;
  Length = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(a3) = PreviousMode;
  v11 = SepCaptureUnicodeStringArray(a1, 1u, a3, &P);
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = PreviousMode;
    v11 = SepCaptureUnicodeStringArray(a2, 1u, v12, &v21);
    if ( v11 >= 0 )
    {
      LOBYTE(v13) = PreviousMode;
      v11 = SepCaptureUnicodeStringArray(v7, 1u, v13, v22);
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(a4, 4uLL, 4u);
          v14 = (_DWORD *)Address;
          if ( (Address & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( Address + 4 > 0x7FFFFFFF0000LL || Address + 4 < Address )
            MEMORY[0x7FFFFFFF0000] = 0;
          LODWORD(Length) = *(_DWORD *)Address;
          ProbeForWrite((volatile void *)Address, 4uLL, 4u);
          v15 = (void *)a5;
          if ( a5 )
          {
            ProbeForWrite(a5, (unsigned int)Length, 1u);
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, (unsigned int)Length, 0x20206553u);
            v19 = PoolWithQuotaTag;
            if ( !PoolWithQuotaTag )
            {
              v11 = -1073741670;
              goto LABEL_26;
            }
          }
        }
        else
        {
          v15 = (void *)a5;
          PoolWithQuotaTag = (PVOID)a5;
          v19 = (PVOID)a5;
          v14 = (_DWORD *)Address;
          LODWORD(Length) = *(_DWORD *)Address;
        }
        if ( qword_140C1DB78 )
        {
          if ( !PoolWithQuotaTag || (_DWORD)Length )
            v11 = qword_140C1DB78(P, v21, v22[0], (char *)&Length + 4, PoolWithQuotaTag, &Length);
          else
            v11 = -1073741811;
        }
        else
        {
          v11 = -1073741637;
        }
        if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
        {
          *a4 = HIDWORD(Length);
          v16 = Length;
          *v14 = Length;
          if ( v15 )
          {
            if ( PreviousMode == 1 && v11 >= 0 )
              memmove(v15, PoolWithQuotaTag, v16);
          }
        }
      }
    }
  }
LABEL_26:
  if ( PreviousMode == 1 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v21 )
      ExFreePoolWithTag(v21, 0);
    if ( v22[0] )
      ExFreePoolWithTag(v22[0], 0);
  }
  if ( PoolWithQuotaTag && PreviousMode == 1 )
    ExFreePoolWithTag(PoolWithQuotaTag, 0);
  return (unsigned int)v11;
}
