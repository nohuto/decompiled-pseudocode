/*
 * XREFs of MmCopyVirtualMemory @ 0x14061FF30
 * Callers:
 *     PsQueryProcessCommandLine @ 0x14030EFD0 (PsQueryProcessCommandLine.c)
 *     KiTpWriteUmMemory @ 0x140517B24 (KiTpWriteUmMemory.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 *     MiReadWriteVirtualMemory @ 0x14061FCA0 (MiReadWriteVirtualMemory.c)
 *     LpcpCopyRequestData @ 0x1408BD3BC (LpcpCopyRequestData.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140274AB0 (MmMapLockedPagesSpecifyCache.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiGetExceptionInfo @ 0x14052EEA0 (MiGetExceptionInfo.c)
 *     MiFindNextEnclaveBoundary @ 0x1406207C0 (MiFindNextEnclaveBoundary.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088B000 (VslDebugReadWriteSecureProcess.c)
 *     MiDbgReadWriteEnclave @ 0x1408CE38C (MiDbgReadWriteEnclave.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  $8F66661DB6C9C59E7BD0F880B8A64BC5 *v24; // rsi
  unsigned __int8 v25; // r13
  __int64 v26; // r8
  _DWORD *v27; // r9
  int v28; // ecx
  int v29; // eax
  PVOID v30; // rsi
  _DWORD *v31; // r9
  char *v32; // r13
  int v33; // esi
  int v34; // eax
  bool v36; // cc
  int v37; // [rsp+30h] [rbp-418h]
  _BYTE *P; // [rsp+40h] [rbp-408h]
  int v39; // [rsp+48h] [rbp-400h]
  SIZE_T v40; // [rsp+50h] [rbp-3F8h] BYREF
  void *v41; // [rsp+58h] [rbp-3F0h]
  char *v42; // [rsp+60h] [rbp-3E8h]
  size_t v43; // [rsp+68h] [rbp-3E0h]
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp-3D8h]
  int v45; // [rsp+78h] [rbp-3D0h]
  _QWORD *v46; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR v47; // [rsp+88h] [rbp-3C0h]
  size_t v48; // [rsp+90h] [rbp-3B8h]
  char *v49; // [rsp+98h] [rbp-3B0h]
  unsigned __int64 v50; // [rsp+A0h] [rbp-3A8h]
  void *Src; // [rsp+A8h] [rbp-3A0h]
  int v52; // [rsp+B0h] [rbp-398h]
  size_t v53; // [rsp+B8h] [rbp-390h]
  char *v54; // [rsp+C0h] [rbp-388h]
  size_t v55; // [rsp+C8h] [rbp-380h] BYREF
  _QWORD v56[5]; // [rsp+D0h] [rbp-378h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-350h]
  $8F66661DB6C9C59E7BD0F880B8A64BC5 *v58; // [rsp+100h] [rbp-348h]
  SIZE_T v59; // [rsp+108h] [rbp-340h]
  PMDL p_MemoryDescriptorList; // [rsp+110h] [rbp-338h]
  _OWORD v61[3]; // [rsp+120h] [rbp-328h] BYREF
  struct _MDL MemoryDescriptorList; // [rsp+150h] [rbp-2F8h] BYREF
  _BYTE v63[512]; // [rsp+200h] [rbp-248h] BYREF

  v42 = a4;
  v47 = a3;
  v8 = a2;
  v49 = a2;
  BugCheckParameter1 = a1;
  v56[3] = a1;
  v56[1] = a2;
  v56[2] = a3;
  v54 = a4;
  v53 = Size;
  v46 = a7;
  memset(v61, 0, sizeof(v61));
  memset(&MemoryDescriptorList, 0, 0xA8uLL);
  v40 = 0LL;
  if ( !Size )
    return 0LL;
  *v46 = 0LL;
  v50 = 0LL;
  v9 = BugCheckParameter1;
  v10 = *(_QWORD *)(BugCheckParameter1 + 1264) == 0LL;
  Src = v8;
  v41 = a4;
  v11 = Size;
  v48 = Size;
  p_MemoryDescriptorList = &MemoryDescriptorList;
  CurrentThread = KeGetCurrentThread();
  v37 = 0;
  P = 0LL;
  v56[4] = 0LL;
  v45 = 0;
  v55 = Size;
  v56[0] = Size;
LABEL_3:
  v12 = ((unsigned __int8)v10 ^ (unsigned __int8)(2 * v10)) & 2 ^ v10;
  if ( (*(_BYTE *)(v9 + 992) & 1) != 0 )
    v12 |= 0x40u;
  v13 = v47;
  if ( (*(_BYTE *)(v47 + 992) & 1) != 0 )
    v12 |= 0x80u;
  NextEnclaveBoundary = MiFindNextEnclaveBoundary(v9, &v8[Size - v11], v11, &v55);
  v15 = 4 * (NextEnclaveBoundary & 3 | (4 * (MiFindNextEnclaveBoundary(v13, &v42[Size - v11], v11, v56) & 3)));
  v17 = v12 & 0xC3;
  v10 = v12 & 0xFFFFFFC3 | v15;
  if ( ((v17 | (unsigned __int8)v15) & 0xC0) != 0 || (v10 & 0xC) != 0 )
    v10 &= ~2u;
  v18 = v11;
  v43 = v11;
  if ( v55 < v11 )
  {
    v18 = v55;
    v43 = v55;
  }
  if ( v56[0] < v18 )
  {
    v18 = v56[0];
    v43 = v56[0];
  }
LABEL_13:
  if ( v18 >= 0x200 && (v10 & 2) != 0 )
  {
    v19 = 57344LL;
    v36 = Size <= 0xE000;
    goto LABEL_71;
  }
  v10 &= ~2u;
  if ( v50 )
  {
    v19 = v18;
    if ( v18 > v50 )
      v19 = v50;
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
        v50 = v19;
        goto LABEL_84;
      }
      v19 >>= 1;
    }
    while ( v19 > 0x200 );
    P = v63;
    v19 = 512LL;
LABEL_84:
    v36 = v18 <= v19;
LABEL_71:
    if ( !v36 )
      goto LABEL_18;
    goto LABEL_17;
  }
  P = v63;
LABEL_17:
  v19 = v18;
LABEL_18:
  for ( i = v10; ; i = v10 )
  {
    v9 = BugCheckParameter1;
    if ( !v18 )
    {
      v8 = v49;
      if ( v11 )
        goto LABEL_3;
      if ( v50 )
        ExFreePoolWithTag(P, 0);
      *v46 = Size;
      return 0LL;
    }
    v21 = v18;
    if ( v18 >= v19 )
      v21 = v19;
    v19 = v21;
    v59 = v21;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v61, v16);
    v22 = Src;
    if ( a6 && Src == v49 && ((unsigned __int64)&v49[Size] > 0x7FFFFFFF0000LL || &v49[Size] < v49) )
      MEMORY[0x7FFFFFFF0000] = 0;
    v23 = i & 2;
    v39 = v23;
    v52 = v23;
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
    v58 = &CurrentThread->116;
    v25 = _bittestandset((signed __int32 *)&CurrentThread->116, 5u);
    if ( v23 )
    {
      MmProbeAndLockPages(&MemoryDescriptorList, a6, IoReadAccess);
      v28 = v37;
    }
    else
    {
      if ( (v10 & 0x40) != 0 || (v10 & 0xC) == 8 )
      {
        v29 = VslDebugReadWriteSecureProcess(BugCheckParameter1, (_DWORD)v22, (_DWORD)P, v19, 1, (__int64)&v40);
      }
      else
      {
        if ( (v10 & 0xC) != 4 )
        {
          memmove(P, v22, v19);
          v28 = v37;
          goto LABEL_38;
        }
        v29 = MiDbgReadWriteEnclave((_DWORD)v22, (_DWORD)P, v19, 1, (__int64)&v40);
      }
      v37 = v29;
      v28 = v29;
    }
LABEL_38:
    if ( !v25 )
      v24->MiscFlags &= ~0x20u;
    if ( v28 < 0 )
      break;
    if ( v39 )
    {
      v30 = MmMapLockedPagesSpecifyCache(&MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000020);
      if ( v30 )
        goto LABEL_43;
      MmUnlockPages(&MemoryDescriptorList);
LABEL_85:
      v10 &= ~2u;
      KiUnstackDetachProcess((__int64)v61, 0LL, v26, v27);
      v11 = v48;
      goto LABEL_13;
    }
    v30 = P;
LABEL_43:
    KiUnstackDetachProcess((__int64)v61, 0LL, v26, v27);
    KiStackAttachProcess((_KPROCESS *)v47, 0LL, (__int64)v61, v31);
    if ( a6 && Src == v49 )
    {
      v32 = v42;
      if ( (unsigned __int64)&v42[Size] > 0x7FFFFFFF0000LL || &v42[Size] < v42 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v32 = v42;
    }
    if ( (v10 & 0x80u) != 0 || (v10 & 0x30) == 0x20 )
    {
      v34 = VslDebugReadWriteSecureProcess(v47, (_DWORD)v41, (_DWORD)P, v19, 0, (__int64)&v40);
    }
    else
    {
      if ( (v10 & 0x30) != 0x10 )
      {
        memmove(v41, v30, v19);
        v33 = 0;
        v37 = 0;
        v40 = v19;
        goto LABEL_52;
      }
      v34 = MiDbgReadWriteEnclave((_DWORD)v41, (_DWORD)P, v19, 0, (__int64)&v40);
    }
    v37 = v34;
    v33 = v34;
LABEL_52:
    if ( v33 == -1073741819 )
    {
      *v46 = (char *)v41 + v40 - (_QWORD)v32;
      v33 = -2147483635;
      goto LABEL_77;
    }
    if ( v33 < 0 )
      goto LABEL_77;
    KiUnstackDetachProcess((__int64)v61, 0LL, v26, v27);
    if ( v39 )
      MmUnlockPages(&MemoryDescriptorList);
    v18 -= v19;
    v43 = v18;
    v11 = v48 - v19;
    v48 -= v19;
    Src = (char *)Src + v19;
    v41 = (char *)v41 + v19;
  }
  if ( v39 )
    goto LABEL_85;
  *v46 = Size - v18;
  v33 = -2147483635;
LABEL_77:
  KiUnstackDetachProcess((__int64)v61, 0LL, v26, v27);
  if ( v50 )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v33;
}
