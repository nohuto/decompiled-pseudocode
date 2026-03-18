/*
 * XREFs of MiInitializePoolCommitPacket @ 0x1403523C0
 * Callers:
 *     MmAllocatePoolMemory @ 0x14035225C (MmAllocatePoolMemory.c)
 *     MmAllocateSecurePoolMemory @ 0x14059A86C (MmAllocateSecurePoolMemory.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140228AA0 (MiReturnPoolCharges.c)
 *     MiGetLargePageChain @ 0x140266158 (MiGetLargePageChain.c)
 *     MiObtainPoolCharges @ 0x14026A718 (MiObtainPoolCharges.c)
 *     MiGetPoolPages @ 0x140284A20 (MiGetPoolPages.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     MiMakeProtectionMask @ 0x14032BCC0 (MiMakeProtectionMask.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiInitializePoolCommitPacket(
        __int64 *a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r10
  unsigned int ProtectionMask; // r8d
  unsigned int v11; // r9d
  ULONG_PTR v12; // r10
  ULONG_PTR v13; // r11
  int v14; // eax
  __int16 v15; // r8
  unsigned __int64 v16; // rsi
  int v17; // edx
  unsigned __int16 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 result; // rax
  volatile signed __int32 *PoolPages; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 *LargePageChain; // rax
  unsigned __int64 v25; // [rsp+30h] [rbp-48h] BYREF
  __int128 v26; // [rsp+38h] [rbp-40h]
  __int64 v27; // [rsp+48h] [rbp-30h]
  unsigned __int64 v28; // [rsp+50h] [rbp-28h]
  __int128 v29; // [rsp+58h] [rbp-20h]

  v8 = *a1;
  *(_WORD *)(a8 + 78) = 0;
  *(_QWORD *)a8 = v8;
  ProtectionMask = MiMakeProtectionMask(a4);
  if ( ProtectionMask > 0x18 || (v14 = 16777298, !_bittest(&v14, ProtectionMask)) )
    KeBugCheckEx(0x1Au, 0x5300uLL, v12, v13, v11);
  v15 = 8 * (ProtectionMask & 0x1F);
  *(_WORD *)(a8 + 78) = v15;
  *(_QWORD *)(a8 + 16) = 0LL;
  *(_QWORD *)(a8 + 48) = &unk_140C53BC0;
  *(_QWORD *)(a8 + 40) = 5LL;
  *(_QWORD *)(a8 + 56) = (((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = ((__int64)((((v12 + v13 - 1) >> 9) & 0x7FFFFFFFF8LL) - ((v12 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (a5 & 1) == 0 )
  {
    if ( (a3 & 0x20000000) != 0 )
    {
      if ( !(unsigned int)MiObtainPoolCharges(v16, 0) )
        return 3221225626LL;
      LargePageChain = MiGetLargePageChain(a6, v16);
      *(_QWORD *)(a8 + 16) = LargePageChain;
      if ( !LargePageChain )
      {
        v27 = 0LL;
        v28 = v16;
        v25 = v16;
        v26 = 0LL;
        v29 = 0LL;
        MiReturnPoolCharges(&v25, 0, 0);
        return 3221225626LL;
      }
      *(_WORD *)(a8 + 78) |= 4u;
    }
    else if ( a7 )
    {
      *(_QWORD *)(a8 + 16) = a7;
      *(_DWORD *)(a8 + 40) = 15;
      *(_WORD *)(a8 + 78) = v15 | 0x100;
    }
    else
    {
      PoolPages = MiGetPoolPages(a3, a6, v16);
      *(_QWORD *)(a8 + 16) = PoolPages;
      if ( !PoolPages )
        return 3221225626LL;
    }
LABEL_7:
    *(_QWORD *)(a8 + 24) = 0LL;
    result = 0LL;
    *(_QWORD *)(a8 + 8) = v16;
    *(_DWORD *)(a8 + 72) = a6;
    *(_QWORD *)(a8 + 64) = 0LL;
    *(_QWORD *)(a8 + 32) = 0LL;
    return result;
  }
  *(_WORD *)(a8 + 78) = v15 | 2;
  if ( (a5 & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v17 = 1;
    *(_DWORD *)(a8 + 44) = 2;
    v18 = (unsigned __int16 *)(CurrentThread->ApcState.Process[1].Affinity.StaticBitmap[25] + 192);
  }
  else
  {
    v17 = 6;
    v18 = (unsigned __int16 *)&unk_140C53800;
  }
  v19 = v18[87];
  *(_QWORD *)(a8 + 48) = v18;
  v20 = qword_140C51F48;
  *(_DWORD *)(a8 + 40) = v17;
  if ( (unsigned int)MiChargeCommit(*(_QWORD *)(v20 + 8 * v19), v16, 1u) )
    goto LABEL_7;
  return 3221225626LL;
}
