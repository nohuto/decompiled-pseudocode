/*
 * XREFs of MiInitializePrototypePtes @ 0x1406FF6DC
 * Callers:
 *     MiCreatePrototypePtes @ 0x140302B48 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x1405E8C28 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1406861B8 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x14023845C (MiEncodeProtoFill.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiMakeSubsectionPte @ 0x14030312C (MiMakeSubsectionPte.c)
 *     MiMakeDemandZeroPte @ 0x140334CC0 (MiMakeDemandZeroPte.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x1405391F0 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int16 *a3, int a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // r10
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  unsigned int v13; // edx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v18[24]; // [rsp+30h] [rbp-68h] BYREF

  result = (__int64)memset(v18, 0, sizeof(v18));
  v9 = *(_QWORD *)a3;
  v10 = 1LL;
  v11 = 8 * a2;
  v12 = 4096LL;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3);
LABEL_3:
    v14 = result;
    goto LABEL_4;
  }
  v13 = 0;
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F);
    goto LABEL_3;
  }
  v14 = 0LL;
LABEL_4:
  if ( v11 >= v12 )
  {
    if ( a4 )
    {
      v15 = v14;
      if ( !v14 )
        v15 = MiMakeDemandZeroPte(4) & 0xFFFFFFFFFFFFFC1FuLL;
      MiEncodeProtoFill(BugCheckParameter1, v11, v15 | (((v10 ^ v13) << 10) + 2));
      result = v11 & 0xFFFFFFFFFFFFF000uLL;
      BugCheckParameter1 += v11 & 0xFFFFFFFFFFFFF000uLL;
      v11 &= 0xFFFu;
    }
    else
    {
      v17[0] = BugCheckParameter1;
      v17[1] = v11;
      MiInitializeFaultVaListCore((__int64)v18, (__int64)v17, v10, 2);
      v18[10] = (*(_DWORD *)(v9 + 56) >> 20) & 0x3F;
      result = MmAccessFault(2uLL, BugCheckParameter1, 0, v16 | (unsigned __int64)v18);
    }
  }
  if ( v11 )
  {
    result = v14;
    memset64((void *)BugCheckParameter1, v14, v11 >> 3);
  }
  return result;
}
