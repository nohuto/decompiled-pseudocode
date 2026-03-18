/*
 * XREFs of MiInitializePrototypePtes @ 0x1406F4768
 * Callers:
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 *     MiCreatePagingFileMap @ 0x1406F3A44 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiEncodeProtoFill @ 0x14023FBE4 (MiEncodeProtoFill.c)
 *     MiMakeDemandZeroPte @ 0x14026E548 (MiMakeDemandZeroPte.c)
 *     MiMakeSubsectionPte @ 0x14026EA48 (MiMakeSubsectionPte.c)
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiInitializeFaultVaListCore @ 0x14045BA26 (MiInitializeFaultVaListCore.c)
 */

__int64 __fastcall MiInitializePrototypePtes(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int16 *a3, int a4)
{
  unsigned __int64 v4; // rsi
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rdx
  unsigned int v11; // r10d
  __int64 v12; // r8
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  ULONG_PTR v16; // r10
  _QWORD v17[2]; // [rsp+20h] [rbp-78h] BYREF
  _DWORD v18[24]; // [rsp+30h] [rbp-68h] BYREF

  v4 = 8 * a2;
  result = (__int64)memset(v18, 0, sizeof(v18));
  v9 = *(_QWORD *)a3;
  v10 = 4096LL;
  LOBYTE(v11) = 2;
  if ( *(_QWORD *)(*(_QWORD *)a3 + 64LL) )
  {
    result = MiMakeSubsectionPte((__int64)a3, 4096LL);
    v12 = v11;
LABEL_3:
    v13 = result;
    goto LABEL_4;
  }
  if ( (*(_DWORD *)(v9 + 56) & 0x1000) == 0 )
  {
    result = MiMakeDemandZeroPte((a3[16] >> 1) & 0x1F, 4096LL);
    v12 = 1026LL;
    goto LABEL_3;
  }
  v13 = 0LL;
  v12 = 1026LL;
LABEL_4:
  if ( v4 >= v10 )
  {
    if ( !a4 )
    {
      v17[0] = BugCheckParameter1;
      v17[1] = v4;
      MiInitializeFaultVaListCore((__int64)v18, (__int64)v17, 1LL, v11);
      v18[10] = (*(_DWORD *)(v9 + 56) >> 20) & 0x7F;
      MmAccessFault(v16, BugCheckParameter1, 0, v15 | (unsigned __int64)v18);
      goto LABEL_6;
    }
    v14 = v13;
    if ( !v13 )
      v14 = MiMakeDemandZeroPte(4, v10) & 0xFFFFFFFFFFFFFC1FuLL;
    MiEncodeProtoFill(BugCheckParameter1, v4, v14 | v12);
    result = v4 & 0xFFFFFFFFFFFFF000uLL;
    BugCheckParameter1 += v4 & 0xFFFFFFFFFFFFF000uLL;
    v4 &= 0xFFFu;
  }
  if ( v4 )
  {
LABEL_6:
    result = v13;
    memset64((void *)BugCheckParameter1, v13, v4 >> 3);
  }
  return result;
}
