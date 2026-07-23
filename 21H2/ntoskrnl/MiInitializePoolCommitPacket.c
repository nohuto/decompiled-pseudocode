/*
 * XREFs of MiInitializePoolCommitPacket @ 0x140316928
 * Callers:
 *     MmAllocatePoolMemory @ 0x140315E28 (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x140545000 (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiGetLargePageChain @ 0x14023D194 (MiGetLargePageChain.c)
 *     MiGetPoolPages @ 0x1402629AC (MiGetPoolPages.c)
 *     MiReturnPoolCharges @ 0x140273E90 (MiReturnPoolCharges.c)
 *     MiObtainPoolCharges @ 0x140296F74 (MiObtainPoolCharges.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        __int64 *a1,
        ULONG_PTR *a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  ULONG_PTR v9; // rbx
  unsigned int ProtectionMask; // r8d
  unsigned int v11; // r9d
  ULONG_PTR v12; // r10
  int v13; // r11d
  int v14; // eax
  __int16 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // edx
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  bool v21; // zf
  __int64 result; // rax
  _QWORD *LargePageChain; // rax
  unsigned __int64 PoolPages; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-38h] BYREF
  __int128 v26; // [rsp+38h] [rbp-30h]
  unsigned __int64 v27; // [rsp+48h] [rbp-20h]
  __int128 v28; // [rsp+50h] [rbp-18h]

  v8 = *a1;
  v9 = *a2;
  *(_WORD *)(a8 + 78) = 0;
  *(_QWORD *)a8 = v8;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask > 0x18 || (v14 = 16777298, !_bittest(&v14, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v12, v9, v11);
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 40) = 5LL;
  v15 = 8 * (ProtectionMask & 0x1F);
  *(_WORD *)(a8 + 78) = v15;
  *(_QWORD *)(a8 + 48) = &unk_140C4F680;
  *(_QWORD *)(a8 + 56) = (((v12 + v9 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((__int64)((((v12 + v9 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (a5 & 1) != 0 )
  {
    *(_WORD *)(a8 + 78) = v15 | 2;
    if ( (a5 & 0x20) != 0 )
    {
      *(_DWORD *)(a8 + 44) = 2;
      v17 = 1;
      v18 = (unsigned __int16 *)(KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[5] + 256);
    }
    else
    {
      v17 = 6;
      v18 = (unsigned __int16 *)&unk_140C4F2C0;
    }
    v19 = v18[87];
    *(_QWORD *)(a8 + 48) = v18;
    v20 = qword_140C4E688;
    *(_DWORD *)(a8 + 40) = v17;
    v21 = (unsigned int)MiChargeCommit(*(_QWORD *)(v20 + 8 * v19), v16, 1u) == 0;
    goto LABEL_7;
  }
  if ( (v13 & 0x20000000) == 0 )
  {
    if ( a7 )
    {
      *(_QWORD *)(a8 + 16) = a7;
      *(_DWORD *)(a8 + 40) = 15;
      *(_WORD *)(a8 + 78) = v15 | 0x100;
      goto LABEL_8;
    }
    PoolPages = MiGetPoolPages(v13, a6, v16);
    *(_QWORD *)(a8 + 16) = PoolPages;
    v21 = PoolPages == 0;
LABEL_7:
    if ( !v21 )
    {
LABEL_8:
      *(_QWORD *)(a8 + 24) = 0LL;
      result = 0LL;
      *(_QWORD *)(a8 + 8) = v16;
      *(_DWORD *)(a8 + 72) = a6;
      *(_QWORD *)(a8 + 64) = 0LL;
      *(_QWORD *)(a8 + 32) = 0LL;
      return result;
    }
    return 3221225626LL;
  }
  if ( (unsigned int)MiObtainPoolCharges(v16, 0) )
  {
    LargePageChain = MiGetLargePageChain(a6, v16);
    *(_QWORD *)(a8 + 16) = LargePageChain;
    if ( LargePageChain )
    {
      *(_WORD *)(a8 + 78) |= 4u;
      goto LABEL_8;
    }
    v27 = v16;
    v25 = v16;
    v26 = 0LL;
    v28 = 0LL;
    MiReturnPoolCharges(&v25, 0);
  }
  return 3221225626LL;
}
