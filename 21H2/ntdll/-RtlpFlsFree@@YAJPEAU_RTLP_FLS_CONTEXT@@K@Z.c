/*
 * XREFs of ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x1800746B0
 * Callers:
 *     RtlFlsFree @ 0x1800746A0 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x180074868 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x1800748BC (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(struct _RTLP_FLS_CONTEXT *a1, int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // ebx
  int v4; // ecx
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  _RTL_SRWLOCK *v7; // rbp
  unsigned __int64 Value; // r15
  _RTL_SRWLOCK *v9; // rcx
  __int64 v10; // rdi
  __int64 *i; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // edx
  __int64 v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v19; // rsi
  _QWORD v21[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) > 0xFEE )
    return (unsigned int)-1073741811;
  v2 = a2 + 16;
  v3 = 0;
  _BitScanReverse((unsigned int *)&v4, a2 + 16);
  v5 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v4 - 4) + 1);
  if ( !v5 )
    return (unsigned int)-1073741811;
  v6 = 16 * (v2 ^ (unsigned __int64)(unsigned int)(1 << v4));
  v7 = (_RTL_SRWLOCK *)(v6 + v5 + 8);
  if ( !v7 || !v7[1].Value )
    return (unsigned int)-1073741811;
  Value = 0LL;
  v9 = (_RTL_SRWLOCK *)(v6 + v5 + 8);
  if ( v7[1].Value != -1LL )
    Value = v7[1].Value;
  RtlAcquireSRWLockExclusive(v9);
  while ( 2 )
  {
    v10 = 0LL;
    RtlAcquireSRWLockShared(&RtlpFlsContext);
    for ( i = (__int64 *)qword_18016D348; i != &qword_18016D348 && (unsigned int)v10 < 0x10; i = (__int64 *)*i )
    {
      if ( !Value )
        goto LABEL_17;
      _BitScanReverse(&v12, v2);
      v13 = v2 ^ (1 << v12);
      v14 = i[v12 - 2];
      if ( v14 )
      {
        v15 = (__int64 *)(v14 + 8 * (v13 + 1LL));
        if ( v15 )
        {
          v16 = *v15;
          if ( v16 )
          {
            v17 = 2LL * (unsigned int)v10;
            v10 = (unsigned int)(v10 + 1);
            v21[v17 - 1] = Value;
            v21[v17] = v16;
LABEL_17:
            RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(i + 2, v2, 0LL);
            continue;
          }
        }
      }
    }
    RtlReleaseSRWLockShared(&RtlpFlsContext);
    if ( (_DWORD)v10 )
    {
      v19 = v21;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v19 - 1))(*v19);
        v19 += 2;
        --v10;
      }
      while ( v10 );
      continue;
    }
    break;
  }
  v7[1].Value = -2LL;
  RtlReleaseSRWLockExclusive(v7);
  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  v7[1].Value = 0LL;
  RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&xmmword_18016D308, v2);
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  return v3;
}
