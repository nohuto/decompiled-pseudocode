/*
 * XREFs of MiMoveLargeFreePage @ 0x140556E00
 * Callers:
 *     MiTransferPartitionPageRun @ 0x140563050 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiTryUnlinkNodeLargePage @ 0x14020F8CC (MiTryUnlinkNodeLargePage.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiMoveBadPageCrossPartition @ 0x14054F22C (MiMoveBadPageCrossPartition.c)
 */

__int64 __fastcall MiMoveLargeFreePage(__int64 a1, int a2, __int64 a3, ULONG_PTR *a4)
{
  unsigned int v5; // ebp
  __int64 v7; // r14
  ULONG_PTR v8; // rsi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  _DWORD *v12; // r9
  unsigned __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned __int8 v15; // al
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r14
  BOOL v23; // [rsp+30h] [rbp-78h] BYREF
  int v24; // [rsp+34h] [rbp-74h] BYREF
  _QWORD v25[3]; // [rsp+38h] [rbp-70h] BYREF

  v5 = 0;
  v23 = 0;
  v7 = MiLargePageSizes[a2];
  v8 = a1 & ~(v7 - 1);
  result = MiTryUnlinkNodeLargePage(a3, v8, a2, 8, &v23);
  if ( (_DWORD)result )
  {
    v13 = 48 * v8 - 0x58000000000LL;
    v14 = *(_QWORD *)(v13 + 16);
    v15 = MiLockPageInline(v13, v10, v11, v12);
    v25[0] = 0LL;
    v25[2] = v15;
    v18 = 1023LL;
    v25[1] = (v14 & 0x3E0) != 0;
    v19 = (*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL;
    v25[0] = v8;
    if ( *(_QWORD *)(qword_140C4E688 + 8 * v19) == a3 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v20 = v13 + 48 * v7 - 48;
      if ( v20 >= v13 )
      {
        v21 = v20 + 24;
        v22 = (unsigned __int64)(*(_WORD *)a4 & 0x3FF) << 39;
        do
        {
          v24 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)v21, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v24, v18, v16, v17);
            while ( *(__int64 *)v21 < 0 );
          }
          if ( (*(_BYTE *)(v21 + 11) & 0x40) != 0 )
            MiMoveBadPageCrossPartition(v20, a3, a4);
          *(_QWORD *)(v21 + 16) = v22 | *(_QWORD *)(v21 + 16) & 0xFFFE007FFFFFFFFFuLL;
          if ( v20 != v13 )
            _InterlockedAnd64((volatile signed __int64 *)v21, 0x7FFFFFFFFFFFFFFFuLL);
          v20 -= 48LL;
          v21 -= 48LL;
        }
        while ( v20 >= v13 );
      }
      v5 = 1;
    }
    MiInsertLargePageInNodeList((__int64)v25);
    return v5;
  }
  return result;
}
