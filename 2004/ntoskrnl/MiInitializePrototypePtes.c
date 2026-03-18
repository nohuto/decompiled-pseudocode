/*
 * XREFs of MiInitializePrototypePtes @ 0x14060A974
 * Callers:
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiCreatePagingFileMap @ 0x14060A014 (MiCreatePagingFileMap.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     MiMakeSubsectionPte @ 0x140263B4C (MiMakeSubsectionPte.c)
 *     MiEncodeProtoFill @ 0x140265984 (MiEncodeProtoFill.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiMakeDemandZeroPte @ 0x1402B6020 (MiMakeDemandZeroPte.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x140533AE0 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // r10
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  _QWORD v18[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v19[24]; // [rsp+30h] [rbp-68h] BYREF

  result = (__int64)memset(v19, 0, sizeof(v19));
  v10 = *(_QWORD *)a3;
  v11 = 1LL;
  v12 = 8 * a2;
  v13 = 4096LL;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3, 1LL, 4096LL, v9);
LABEL_3:
    v15 = result;
    goto LABEL_4;
  }
  v14 = 0LL;
  if ( (*(_DWORD *)(v10 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F, 0LL, 4096LL, v9);
    goto LABEL_3;
  }
  v15 = 0LL;
LABEL_4:
  if ( v12 >= v13 )
  {
    if ( a4 )
    {
      v16 = v15;
      if ( !v15 )
        v16 = MiMakeDemandZeroPte(4, v14, v13, v9) & 0xFFFFFFFFFFFFFC1FuLL;
      MiEncodeProtoFill(BugCheckParameter1, v12, v16 | (((v11 ^ (unsigned int)v14) << 10) + 2));
      result = v12 & 0xFFFFFFFFFFFFF000uLL;
      BugCheckParameter1 += v12 & 0xFFFFFFFFFFFFF000uLL;
      v12 &= 0xFFFu;
    }
    else
    {
      v18[0] = BugCheckParameter1;
      v18[1] = v12;
      MiInitializeFaultVaListCore((__int64)v19, (__int64)v18, v11, 2);
      v19[10] = (*(_DWORD *)(v10 + 56) >> 20) & 0x3F;
      result = MmAccessFault(2uLL, BugCheckParameter1, 0, v17 | (unsigned __int64)v19);
    }
  }
  if ( v12 )
  {
    result = v15;
    memset64((void *)BugCheckParameter1, v15, v12 >> 3);
  }
  return result;
}
