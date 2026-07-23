/*
 * XREFs of MmCopyVirtualMemory @ 0x1406E6510
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14023D260 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x14051D864 (KiTpWriteUmMemory.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     MiReadWriteVirtualMemory @ 0x1406E58F0 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1406EB0A0 (NtQueryInformationThread.c)
 *     LpcpCopyRequestData @ 0x1408C1DAC (LpcpCopyRequestData.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402AE010 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiGetExceptionInfo @ 0x140534C00 (MiGetExceptionInfo.c)
 *     MiFindNextEnclaveBoundary @ 0x1406E6DA0 (MiFindNextEnclaveBoundary.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F570 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x1408D2E3C (MiDbgReadWriteEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmCopyVirtualMemory(
        ULONG_PTR a1,
        char *a2,
        ULONG_PTR a3,
        char *a4,
        size_t Size,
        KPROCESSOR_MODE a6,
        _QWORD *a7)
{
  char *v8; // rsi
  ULONG_PTR v9; // rcx
  unsigned int v10; // ebx
  size_t v11; // r13
  int v12; // ebx
  ULONG_PTR v13; // r14
  char NextEnclaveBoundary; // si
  int v15; // ecx
  unsigned __int8 v16; // al
  unsigned __int64 v17; // rdi
  SIZE_T v18; // r14
  char i; // si
  SIZE_T v20; // rax
  void *v21; // r10
  int v22; // ecx
  $716DEF6A987B9E81ED436DA1BE78D38B *v23; // rsi
  unsigned __int8 v24; // r13
  int v25; // ecx
  int v26; // eax
  PVOID v27; // rsi
  char *v28; // r13
  int v29; // esi
  int v30; // eax
  bool v32; // cc
  int v33; // [rsp+30h] [rbp-418h]
  _BYTE *P; // [rsp+40h] [rbp-408h]
  int v35; // [rsp+48h] [rbp-400h]
  SIZE_T v36; // [rsp+50h] [rbp-3F8h] BYREF
  void *v37; // [rsp+58h] [rbp-3F0h]
  char *v38; // [rsp+60h] [rbp-3E8h]
  size_t v39; // [rsp+68h] [rbp-3E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-3D8h]
  int v41; // [rsp+78h] [rbp-3D0h]
  _QWORD *v42; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR v43; // [rsp+88h] [rbp-3C0h]
  size_t v44; // [rsp+90h] [rbp-3B8h]
  char *v45; // [rsp+98h] [rbp-3B0h]
  unsigned __int64 v46; // [rsp+A0h] [rbp-3A8h]
  void *Src; // [rsp+A8h] [rbp-3A0h]
  int v48; // [rsp+B0h] [rbp-398h]
  size_t v49; // [rsp+B8h] [rbp-390h]
  char *v50; // [rsp+C0h] [rbp-388h]
  size_t v51; // [rsp+C8h] [rbp-380h] BYREF
  _QWORD v52[5]; // [rsp+D0h] [rbp-378h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-350h]
  $716DEF6A987B9E81ED436DA1BE78D38B *v54; // [rsp+100h] [rbp-348h]
  SIZE_T v55; // [rsp+108h] [rbp-340h]
  PMDL p_MemoryDescriptorList; // [rsp+110h] [rbp-338h]
  _OWORD v57[3]; // [rsp+120h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+150h] [rbp-2F8h] BYREF
  _BYTE v59[512]; // [rsp+200h] [rbp-248h] BYREF

  v38 = a4;
  v43 = a3;
  v8 = a2;
  v45 = a2;
  BugCheckParameter1 = a1;
  v52[3] = a1;
  v52[1] = a2;
  v52[2] = a3;
  v50 = a4;
  v49 = Size;
  v42 = a7;
  memset(v57, 0, sizeof(v57));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  v36 = 0LL;
  if ( !Size )
    return 0LL;
  *v42 = 0LL;
  v46 = 0LL;
  v9 = BugCheckParameter1;
  v10 = *(_QWORD *)(BugCheckParameter1 + 1264) == 0LL;
  Src = v8;
  v37 = a4;
  v11 = Size;
  v44 = Size;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  P = 0LL;
  v52[4] = 0LL;
  v41 = 0;
  v51 = Size;
  v52[0] = Size;
LABEL_3:
  v12 = ((unsigned __int8)v10 ^ (unsigned __int8)(2 * v10)) & 2 ^ v10;
  if ( (*(_BYTE *)(v9 + 992) & 1) != 0 )
    v12 |= 0x40u;
  v13 = v43;
  if ( (*(_BYTE *)(v43 + 992) & 1) != 0 )
    v12 |= 0x80u;
  NextEnclaveBoundary = MiFindNextEnclaveBoundary(v9, &v8[Size - v11], v11, &v51);
  v15 = 4 * (NextEnclaveBoundary & 3 | (4 * (MiFindNextEnclaveBoundary(v13, &v38[Size - v11], v11, v52) & 3)));
  v16 = v12 & 0xC3;
  v10 = v12 & 0xFFFFFFC3 | v15;
  if ( ((v16 | (unsigned __int8)v15) & 0xC0) != 0 || (v10 & 0xC) != 0 )
    v10 &= ~2u;
  v17 = v11;
  v39 = v11;
  if ( v51 < v11 )
  {
    v17 = v51;
    v39 = v51;
  }
  if ( v52[0] < v17 )
  {
    v17 = v52[0];
    v39 = v52[0];
  }
LABEL_13:
  if ( v17 >= 0x200 && (v10 & 2) != 0 )
  {
    v18 = 57344LL;
    v32 = Size <= 0xE000;
    goto LABEL_71;
  }
  v10 &= ~2u;
  if ( v46 )
  {
    v18 = v17;
    if ( v17 > v46 )
      v18 = v46;
    goto LABEL_18;
  }
  if ( v17 > 0x200 )
  {
    v18 = 0x10000LL;
    if ( v11 <= 0x10000 )
      v18 = v11;
    do
    {
      P = MiAllocatePool(256, v18, 0x77526D4Du);
      if ( P )
      {
        v46 = v18;
        goto LABEL_84;
      }
      v18 >>= 1;
    }
    while ( v18 > 0x200 );
    P = v59;
    v18 = 512LL;
LABEL_84:
    v32 = v17 <= v18;
LABEL_71:
    if ( !v32 )
      goto LABEL_18;
    goto LABEL_17;
  }
  P = v59;
LABEL_17:
  v18 = v17;
LABEL_18:
  for ( i = v10; ; i = v10 )
  {
    v9 = BugCheckParameter1;
    if ( !v17 )
    {
      v8 = v45;
      if ( v11 )
        goto LABEL_3;
      if ( v46 )
        ExFreePoolWithTag(P, 0);
      *v42 = Size;
      return 0LL;
    }
    v20 = v17;
    if ( v17 >= v18 )
      v20 = v18;
    v18 = v20;
    v55 = v20;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v57);
    v21 = Src;
    if ( a6 && Src == v45 && ((unsigned __int64)&v45[Size] > 0x7FFFFFFF0000LL || &v45[Size] < v45) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v22 = i & 2;
    v35 = v22;
    v48 = v22;
    if ( (i & 2) != 0 )
    {
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * (((v18 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
      MemoryDescriptorList.ByteCount = v18;
      v22 = i & 2;
    }
    v23 = &CurrentThread->116;
    v54 = &CurrentThread->116;
    v24 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( v22 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      v25 = v33;
    }
    else
    {
      if ( (v10 & 0x40) != 0 || (v10 & 0xC) == 8 )
      {
        v26 = VslDebugReadWriteSecureProcess(BugCheckParameter1, (_DWORD)v21, (_DWORD)P, v18, 1, (__int64)&v36);
      }
      else
      {
        if ( (v10 & 0xC) != 4 )
        {
          memmove(P, v21, v18);
          v25 = v33;
          goto LABEL_38;
        }
        v26 = MiDbgReadWriteEnclave((_DWORD)v21, (_DWORD)P, v18, 1, (__int64)&v36);
      }
      v33 = v26;
      v25 = v26;
    }
LABEL_38:
    if ( !v24 )
      v23->MiscFlags &= ~0x20u;
    if ( v25 < 0 )
      break;
    if ( v35 )
    {
      v27 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v27 )
        goto LABEL_43;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_85:
      v10 &= ~2u;
      KiUnstackDetachProcess((__int64)v57, 0LL);
      v11 = v44;
      goto LABEL_13;
    }
    v27 = P;
LABEL_43:
    KiUnstackDetachProcess((__int64)v57, 0LL);
    KiStackAttachProcess((_KPROCESS *)v43, 0, (__int64)v57);
    if ( a6 && Src == v45 )
    {
      v28 = v38;
      if ( (unsigned __int64)&v38[Size] > 0x7FFFFFFF0000LL || &v38[Size] < v38 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v28 = v38;
    }
    if ( (v10 & 0x80u) != 0 || (v10 & 0x30) == 0x20 )
    {
      v30 = VslDebugReadWriteSecureProcess(v43, (_DWORD)v37, (_DWORD)P, v18, 0, (__int64)&v36);
    }
    else
    {
      if ( (v10 & 0x30) != 0x10 )
      {
        memmove(v37, v27, v18);
        v29 = 0;
        v33 = 0;
        v36 = v18;
        goto LABEL_52;
      }
      v30 = MiDbgReadWriteEnclave((_DWORD)v37, (_DWORD)P, v18, 0, (__int64)&v36);
    }
    v33 = v30;
    v29 = v30;
LABEL_52:
    if ( v29 == -1073741819 )
    {
      *v42 = (char *)v37 + v36 - (_QWORD)v28;
      v29 = -2147483635;
      goto LABEL_77;
    }
    if ( v29 < 0 )
      goto LABEL_77;
    KiUnstackDetachProcess((__int64)v57, 0LL);
    if ( v35 )
      MmUnlockPages(&MemoryDescriptorList);
    v17 -= v18;
    v39 = v17;
    v11 = v44 - v18;
    v44 -= v18;
    Src = (char *)Src + v18;
    v37 = (char *)v37 + v18;
  }
  if ( v35 )
    goto LABEL_85;
  *v42 = Size - v17;
  v29 = -2147483635;
LABEL_77:
  KiUnstackDetachProcess((__int64)v57, 0LL);
  if ( v46 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v29;
}
