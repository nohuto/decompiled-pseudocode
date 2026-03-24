/*
 * XREFs of MmCopyVirtualMemory @ 0x1405F6DB0
 * Callers:
 *     PsQueryProcessCommandLine @ 0x1402BEE10 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x14051D624 (KiTpWriteUmMemory.c)
 *     MiReadWriteVirtualMemory @ 0x1405F6190 (MiReadWriteVirtualMemory.c)
 *     NtQueryInformationThread @ 0x1405FB940 (NtQueryInformationThread.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     LpcpCopyRequestData @ 0x1408C1C4C (LpcpCopyRequestData.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x140209710 (MmProbeAndLockPages.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140226CC0 (MmMapLockedPagesSpecifyCache.c)
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiGetExceptionInfo @ 0x1405349C0 (MiGetExceptionInfo.c)
 *     MiFindNextEnclaveBoundary @ 0x1405F7640 (MiFindNextEnclaveBoundary.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F410 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x1408D2CDC (MiDbgReadWriteEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
  _DWORD *v16; // r9
  unsigned __int8 v17; // al
  unsigned __int64 v18; // rdi
  SIZE_T v19; // r14
  char i; // si
  SIZE_T v21; // rax
  void *v22; // r10
  int v23; // ecx
  $716DEF6A987B9E81ED436DA1BE78D38B *v24; // rsi
  unsigned __int8 v25; // r13
  int v26; // ecx
  int v27; // eax
  PVOID v28; // rsi
  _DWORD *v29; // r9
  char *v30; // r13
  int v31; // esi
  int v32; // eax
  bool v34; // cc
  int v35; // [rsp+30h] [rbp-418h]
  _BYTE *P; // [rsp+40h] [rbp-408h]
  int v37; // [rsp+48h] [rbp-400h]
  SIZE_T v38; // [rsp+50h] [rbp-3F8h] BYREF
  void *v39; // [rsp+58h] [rbp-3F0h]
  char *v40; // [rsp+60h] [rbp-3E8h]
  size_t v41; // [rsp+68h] [rbp-3E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-3D8h]
  int v43; // [rsp+78h] [rbp-3D0h]
  _QWORD *v44; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR v45; // [rsp+88h] [rbp-3C0h]
  size_t v46; // [rsp+90h] [rbp-3B8h]
  char *v47; // [rsp+98h] [rbp-3B0h]
  unsigned __int64 v48; // [rsp+A0h] [rbp-3A8h]
  void *Src; // [rsp+A8h] [rbp-3A0h]
  int v50; // [rsp+B0h] [rbp-398h]
  size_t v51; // [rsp+B8h] [rbp-390h]
  char *v52; // [rsp+C0h] [rbp-388h]
  size_t v53; // [rsp+C8h] [rbp-380h] BYREF
  _QWORD v54[5]; // [rsp+D0h] [rbp-378h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-350h]
  $716DEF6A987B9E81ED436DA1BE78D38B *v56; // [rsp+100h] [rbp-348h]
  SIZE_T v57; // [rsp+108h] [rbp-340h]
  PMDL p_MemoryDescriptorList; // [rsp+110h] [rbp-338h]
  _OWORD v59[3]; // [rsp+120h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+150h] [rbp-2F8h] BYREF
  _BYTE v61[512]; // [rsp+200h] [rbp-248h] BYREF

  v40 = a4;
  v45 = a3;
  v8 = a2;
  v47 = a2;
  BugCheckParameter1 = a1;
  v54[3] = a1;
  v54[1] = a2;
  v54[2] = a3;
  v52 = a4;
  v51 = Size;
  v44 = a7;
  memset(v59, 0, sizeof(v59));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  v38 = 0LL;
  if ( !Size )
    return 0LL;
  *v44 = 0LL;
  v48 = 0LL;
  v9 = BugCheckParameter1;
  v10 = *(_QWORD *)(BugCheckParameter1 + 1264) == 0LL;
  Src = v8;
  v39 = a4;
  v11 = Size;
  v46 = Size;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v35 = 0;
  P = 0LL;
  v54[4] = 0LL;
  v43 = 0;
  v53 = Size;
  v54[0] = Size;
LABEL_3:
  v12 = ((unsigned __int8)v10 ^ (unsigned __int8)(2 * v10)) & 2 ^ v10;
  if ( (*(_BYTE *)(v9 + 992) & 1) != 0 )
    v12 |= 0x40u;
  v13 = v45;
  if ( (*(_BYTE *)(v45 + 992) & 1) != 0 )
    v12 |= 0x80u;
  NextEnclaveBoundary = MiFindNextEnclaveBoundary(v9, &v8[Size - v11], v11, &v53);
  v15 = 4 * (NextEnclaveBoundary & 3 | (4 * (MiFindNextEnclaveBoundary(v13, &v40[Size - v11], v11, v54) & 3)));
  v17 = v12 & 0xC3;
  v10 = v12 & 0xFFFFFFC3 | v15;
  if ( ((v17 | (unsigned __int8)v15) & 0xC0) != 0 || (v10 & 0xC) != 0 )
    v10 &= ~2u;
  v18 = v11;
  v41 = v11;
  if ( v53 < v11 )
  {
    v18 = v53;
    v41 = v53;
  }
  if ( v54[0] < v18 )
  {
    v18 = v54[0];
    v41 = v54[0];
  }
LABEL_13:
  if ( v18 >= 0x200 && (v10 & 2) != 0 )
  {
    v19 = 57344LL;
    v34 = Size <= 0xE000;
    goto LABEL_71;
  }
  v10 &= ~2u;
  if ( v48 )
  {
    v19 = v18;
    if ( v18 > v48 )
      v19 = v48;
    goto LABEL_18;
  }
  if ( v18 > 0x200 )
  {
    v19 = 0x10000LL;
    if ( v11 <= 0x10000 )
      v19 = v11;
    do
    {
      P = MiAllocatePool(256, v19, 0x77526D4Du);
      if ( P )
      {
        v48 = v19;
        goto LABEL_84;
      }
      v19 >>= 1;
    }
    while ( v19 > 0x200 );
    P = v61;
    v19 = 512LL;
LABEL_84:
    v34 = v18 <= v19;
LABEL_71:
    if ( !v34 )
      goto LABEL_18;
    goto LABEL_17;
  }
  P = v61;
LABEL_17:
  v19 = v18;
LABEL_18:
  for ( i = v10; ; i = v10 )
  {
    v9 = BugCheckParameter1;
    if ( !v18 )
    {
      v8 = v47;
      if ( v11 )
        goto LABEL_3;
      if ( v48 )
        ExFreePoolWithTag(P, 0);
      *v44 = Size;
      return 0LL;
    }
    v21 = v18;
    if ( v18 >= v19 )
      v21 = v19;
    v19 = v21;
    v57 = v21;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v59, v16);
    v22 = Src;
    if ( a6 && Src == v47 && ((unsigned __int64)&v47[Size] > 0x7FFFFFFF0000LL || &v47[Size] < v47) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v23 = i & 2;
    v37 = v23;
    v50 = v23;
    if ( (i & 2) != 0 )
    {
      MemoryDescriptorList.Next = 0LL;
      MemoryDescriptorList.Size = 8 * (((v19 + ((unsigned __int16)Src & 0xFFF) + 4095LL) >> 12) + 6);
      MemoryDescriptorList.MdlFlags = 0;
      MemoryDescriptorList.StartVa = (PVOID)((unsigned __int64)Src & 0xFFFFFFFFFFFFF000uLL);
      MemoryDescriptorList.ByteOffset = (unsigned __int16)Src & 0xFFF;
      MemoryDescriptorList.ByteCount = v19;
      v23 = i & 2;
    }
    v24 = &CurrentThread->116;
    v56 = &CurrentThread->116;
    v25 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( v23 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      v26 = v35;
    }
    else
    {
      if ( (v10 & 0x40) != 0 || (v10 & 0xC) == 8 )
      {
        v27 = VslDebugReadWriteSecureProcess(BugCheckParameter1, (_DWORD)v22, (_DWORD)P, v19, 1, (__int64)&v38);
      }
      else
      {
        if ( (v10 & 0xC) != 4 )
        {
          memmove(P, v22, v19);
          v26 = v35;
          goto LABEL_38;
        }
        v27 = MiDbgReadWriteEnclave((_DWORD)v22, (_DWORD)P, v19, 1, (__int64)&v38);
      }
      v35 = v27;
      v26 = v27;
    }
LABEL_38:
    if ( !v25 )
      v24->MiscFlags &= ~0x20u;
    if ( v26 < 0 )
      break;
    if ( v37 )
    {
      v28 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v28 )
        goto LABEL_43;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_85:
      v10 &= ~2u;
      KiUnstackDetachProcess((__int64)v59, 0);
      v11 = v46;
      goto LABEL_13;
    }
    v28 = P;
LABEL_43:
    KiUnstackDetachProcess((__int64)v59, 0);
    KiStackAttachProcess((_KPROCESS *)v45, 0LL, (__int64)v59, v29);
    if ( a6 && Src == v47 )
    {
      v30 = v40;
      if ( (unsigned __int64)&v40[Size] > 0x7FFFFFFF0000LL || &v40[Size] < v40 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v30 = v40;
    }
    if ( (v10 & 0x80u) != 0 || (v10 & 0x30) == 0x20 )
    {
      v32 = VslDebugReadWriteSecureProcess(v45, (_DWORD)v39, (_DWORD)P, v19, 0, (__int64)&v38);
    }
    else
    {
      if ( (v10 & 0x30) != 0x10 )
      {
        memmove(v39, v28, v19);
        v31 = 0;
        v35 = 0;
        v38 = v19;
        goto LABEL_52;
      }
      v32 = MiDbgReadWriteEnclave((_DWORD)v39, (_DWORD)P, v19, 0, (__int64)&v38);
    }
    v35 = v32;
    v31 = v32;
LABEL_52:
    if ( v31 == -1073741819 )
    {
      *v44 = (char *)v39 + v38 - (_QWORD)v30;
      v31 = -2147483635;
      goto LABEL_77;
    }
    if ( v31 < 0 )
      goto LABEL_77;
    KiUnstackDetachProcess((__int64)v59, 0);
    if ( v37 )
      MmUnlockPages(&MemoryDescriptorList);
    v18 -= v19;
    v41 = v18;
    v11 = v46 - v19;
    v46 -= v19;
    Src = (char *)Src + v19;
    v39 = (char *)v39 + v19;
  }
  if ( v37 )
    goto LABEL_85;
  *v44 = Size - v18;
  v31 = -2147483635;
LABEL_77:
  KiUnstackDetachProcess((__int64)v59, 0);
  if ( v48 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v31;
}
