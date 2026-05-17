/*
 * XREFs of ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180073680
 * Callers:
 *     RtlFlsFree @ 0x180073670 (RtlFlsFree.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z @ 0x180073838 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SAJPEAU1@KURTLP_FLS_SLOT@@K@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18007388C (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpFlsFree(struct _RTLP_FLS_CONTEXT *a1, unsigned __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r14d
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rbp
  __int64 v10; // r15
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rdi
  __int64 *i; // rsi
  unsigned int v17; // ecx
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // r9
  _QWORD *v27; // rsi
  _QWORD v29[31]; // [rsp+28h] [rbp-130h] BYREF

  if ( (unsigned int)(a2 - 1) > 0xFEE )
    return (unsigned int)-1073741811;
  v4 = a2 + 16;
  v5 = 0;
  _BitScanReverse((unsigned int *)&v6, a2 + 16);
  v7 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v6 - 4) + 1);
  if ( !v7 )
    return (unsigned int)-1073741811;
  v8 = 16 * (v4 ^ (unsigned __int64)(unsigned int)(1 << v6));
  v9 = v8 + v7 + 8;
  if ( !v9 || !*(_QWORD *)(v9 + 8) )
    return (unsigned int)-1073741811;
  v10 = 0LL;
  v11 = v8 + v7 + 8;
  if ( *(_QWORD *)(v9 + 8) != -1LL )
    v10 = *(_QWORD *)(v9 + 8);
  RtlAcquireSRWLockExclusive(v11, a2, v7, a4);
  while ( 2 )
  {
    v15 = 0LL;
    RtlAcquireSRWLockShared((volatile signed __int64 *)&RtlpFlsContext, v12, v13, v14);
    for ( i = (__int64 *)qword_18016D348; i != &qword_18016D348 && (unsigned int)v15 < 0x10; i = (__int64 *)*i )
    {
      if ( !v10 )
        goto LABEL_17;
      _BitScanReverse(&v17, v4);
      v18 = v4 ^ (1 << v17);
      v19 = i[v17 - 2];
      if ( v19 )
      {
        v20 = (__int64 *)(v19 + 8 * (v18 + 1LL));
        if ( v20 )
        {
          v21 = *v20;
          if ( v21 )
          {
            v22 = 2LL * (unsigned int)v15;
            v15 = (unsigned int)(v15 + 1);
            v29[v22 - 1] = v10;
            v29[v22] = v21;
LABEL_17:
            RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(i + 2, v4, 0LL);
            continue;
          }
        }
      }
    }
    RtlReleaseSRWLockShared((volatile signed __int64 *)&RtlpFlsContext);
    if ( (_DWORD)v15 )
    {
      v27 = v29;
      do
      {
        ((void (__fastcall *)(_QWORD))*(v27 - 1))(*v27);
        v27 += 2;
        --v15;
      }
      while ( v15 );
      continue;
    }
    break;
  }
  *(_QWORD *)(v9 + 8) = -2LL;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)v9);
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpFlsContext, v23, v24, v25);
  *(_QWORD *)(v9 + 8) = 0LL;
  RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(&xmmword_18016D308, v4);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)&RtlpFlsContext);
  return v5;
}
