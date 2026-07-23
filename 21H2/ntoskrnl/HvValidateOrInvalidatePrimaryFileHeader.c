/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x14061A9CC
 * Callers:
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x14087421C (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpFileFlushAndPurge @ 0x1406FA1C8 (CmpFileFlushAndPurge.c)
 *     HvpHeaderCheckSum @ 0x1406FC8D4 (HvpHeaderCheckSum.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  char v4; // bp
  char v5; // r14
  int v7; // ebx
  _DWORD *v8; // rdi
  int v9; // ecx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, _DWORD *, __int64, int); // rax
  int v12; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  __int128 v17; // xmm1
  _DWORD v18[2]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v19; // [rsp+38h] [rbp-20h]
  int v20; // [rsp+40h] [rbp-18h]
  int v21; // [rsp+44h] [rbp-14h]

  v18[1] = 0;
  v21 = 0;
  v4 = a3;
  v5 = a2;
  if ( *(_QWORD *)(a1 + 1536) )
  {
    v7 = a4 & 1;
    if ( (_BYTE)a3 )
    {
      v8 = *(_DWORD **)(a1 + 1768);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F494D43u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x1000uLL);
      v15 = *(_OWORD **)(a1 + 64);
      a2 = 4LL;
      v16 = v8;
      a3 = 128LL;
      do
      {
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
        v16[3] = v15[3];
        v16[4] = v15[4];
        v16[5] = v15[5];
        v16[6] = v15[6];
        v16 += 8;
        v17 = v15[7];
        v15 += 8;
        *(v16 - 1) = v17;
        --a2;
      }
      while ( a2 );
    }
    v9 = *(_DWORD *)(a1 + 168);
    v10 = v9 - 1;
    if ( v5 )
      v10 = *(_DWORD *)(a1 + 168);
    v8[2] = v10;
    v8[1] = v9;
    v8[127] = HvpHeaderCheckSum(v8, a2, a3);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64, int))(a1 + 40);
    v18[0] = 0;
    v19 = v8;
    v20 = 4096;
    v12 = v11(a1, 0LL, v18, 1LL, v7);
    if ( v12 >= 0 )
    {
      v12 = CmpFileFlushAndPurge(a1, 0LL);
      if ( v12 >= 0 )
      {
        *(_BYTE *)(a1 + 190) = v5;
        v12 = 0;
        *(_DWORD *)(a1 + 180) = v8[2];
      }
    }
    if ( !v4 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
