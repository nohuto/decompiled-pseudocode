/*
 * XREFs of ?RtlpFlsAlloc@@YAJPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_THREAD_CONTEXT@@P6AXPEAX@ZPEAK@Z @ 0x180074774
 * Callers:
 *     RtlFlsAlloc @ 0x180074760 (RtlFlsAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z @ 0x18007378C (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAXPEAU1@K@Z.c)
 *     ?SlotAllocate@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z @ 0x1800748A0 (-SlotAllocate@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SAKPEAU1@@Z.c)
 */

__int64 __fastcall RtlpFlsAlloc(
        struct _RTLP_FLS_CONTEXT *a1,
        struct _RTLP_FLS_THREAD_CONTEXT *a2,
        __int64 a3,
        unsigned int *a4)
{
  int v6; // esi
  __int64 v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // edi
  int v11; // r8d
  __int64 v12; // r9
  unsigned int v13; // eax
  unsigned int v14; // ebx
  unsigned int v16; // ecx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rax

  v6 = 1;
  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  v7 = 8LL;
  while ( 1 )
  {
    v8 = RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotAllocate(&xmmword_18016B2B8);
    v9 = v8;
    if ( v8 == -1 )
    {
      v14 = -1073741801;
LABEL_22:
      RtlReleaseSRWLockExclusive(&RtlpFlsContext);
      return v14;
    }
    v10 = v8 - 16;
    if ( v8 != 16 )
      break;
    _BitScanReverse(&v16, 0x10u);
    v17 = (1 << v16) ^ 0x10;
    v18 = *((_QWORD *)&RtlpFlsContext + v16 - 3);
    if ( v18 )
      v19 = v18 + 16 * (v17 + 1LL);
    else
      v19 = 8LL;
    *(_QWORD *)v19 = -1LL;
  }
  if ( v10 >= 0xFF0 )
  {
    v14 = -1073741801;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v11, v8);
    v12 = *((_QWORD *)&RtlpFlsContext + (unsigned int)(v11 - 4) + 1);
    if ( v12 )
      v7 = v12 + 16 * ((v8 ^ (unsigned __int64)(unsigned int)(1 << v11)) + 1);
    if ( !a3 )
      a3 = -1LL;
    *(_QWORD *)v7 = a3;
    v13 = qword_18016B308;
    if ( v10 > (unsigned int)qword_18016B308 )
      v13 = v9 - 16;
    LODWORD(qword_18016B308) = v13;
    RtlReleaseSRWLockExclusive(&RtlpFlsContext);
    v9 = -1;
    *a4 = v10;
    v6 = 0;
    v14 = 0;
  }
  if ( v9 != -1 )
    RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree((__int64)&xmmword_18016B2B8, v9);
  if ( v6 )
    goto LABEL_22;
  return v14;
}
