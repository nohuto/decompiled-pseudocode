/*
 * XREFs of MmCopyMemory @ 0x140232A90
 * Callers:
 *     <none>
 * Callees:
 *     MiCopySinglePage @ 0x140232D74 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x140232F94 (MiTranslatePageForCopy.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140262E40 (MiPrefetchVirtualMemory.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1403FAD60 (ZwReadVirtualMemory.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x14054581C (MiCheckPhysicalAddressRange.c)
 */

NTSTATUS __fastcall MmCopyMemory(
        char *Buffer,
        unsigned __int64 BaseAddress,
        SIZE_T BufferSize,
        int a4,
        PSIZE_T NumberOfBytesRead)
{
  PSIZE_T v5; // r13
  unsigned __int64 v10; // rsi
  SIZE_T v11; // r15
  int v12; // edi
  SIZE_T v13; // r12
  __int64 v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r13
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  char EffectivePagePriorityThread; // al
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 SessionVm; // r13
  SIZE_T v27; // rdx
  char *v28; // rcx
  int v29; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  char *v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int128 v40; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v41[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = NumberOfBytesRead;
  v31 = Buffer;
  v33 = a4;
  memset(v41, 0, sizeof(v41));
  v34 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v29 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(BaseAddress, BufferSize) )
      goto LABEL_9;
    return -1073741800;
  }
  if ( BaseAddress + BufferSize <= BaseAddress )
    return -1073741800;
  if ( BaseAddress <= 0x7FFFFFFEFFFFLL )
  {
    if ( BaseAddress + BufferSize <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID)BaseAddress,
               Buffer,
               BufferSize,
               NumberOfBytesRead);
    return -1073741800;
  }
  if ( BaseAddress < 0xFFFF800000000000uLL )
    return -1073741800;
LABEL_9:
  v10 = BaseAddress & 0xFFF;
  v11 = (v10 + BufferSize + 4095) >> 12;
  if ( v11 >= 0x100000000LL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = 0;
  v39 = MiReservePtes(&qword_140C4EF80, (unsigned int)v11);
  v32 = v39;
  v13 = BufferSize;
  v14 = v39;
  if ( 4096 - v10 <= BufferSize )
    v13 = 4096 - v10;
  v15 = v29;
  if ( v29 )
    v16 = BaseAddress >> 12;
  else
    v16 = -1LL;
  v30 = v16;
  if ( !BufferSize )
    goto LABEL_30;
  while ( 1 )
  {
    v36 = 0LL;
    v35 = 0LL;
    if ( v15 )
    {
      v18 = 0LL;
      goto LABEL_19;
    }
    v17 = MiTranslatePageForCopy(BaseAddress, v41, &v30, &v36, &v35);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v18 = v41[3];
      if ( v17 == 273 )
      {
        MiUnlockSystemVa(v41);
        v12 = 0;
        v27 = v13;
        if ( v13 )
        {
          v28 = &v31[-v10];
          do
          {
            v28[v10] = *((_BYTE *)&v35 + (v10 & 7));
            ++v10;
            --v27;
          }
          while ( v27 );
        }
LABEL_24:
        v34 += v13;
        BufferSize -= v13;
        v31 += v13;
        BaseAddress += v13;
        ++v30;
        v14 = v32;
        v13 = BufferSize;
        if ( BufferSize > 0x1000 )
          v13 = 4096LL;
        v10 = 0LL;
        if ( v32 )
        {
          v14 = v32 + 8;
          v32 += 8LL;
        }
        goto LABEL_28;
      }
      v14 = v32;
LABEL_19:
      v19 = v10;
      v20 = v30;
      v12 = MiCopySinglePage(v31, v30, v19, v13, v14, v33);
      if ( v18 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v36 )
        {
          LOBYTE(v21) = 2;
          MiUnlockProtoPoolPage(v36, v21);
        }
        MiUnlockSystemVa(v41);
      }
      if ( v12 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v17 != -1073741608 )
      goto LABEL_29;
    v40 = 0LL;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
    *(_QWORD *)&v40 = BaseAddress;
    v24 = EffectivePagePriorityThread & 7 | 0x80B8;
    v25 = BufferSize;
    SessionVm = 1LL;
    if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
      v25 = 0x200000 - (BaseAddress & 0x1FFFFF);
    *((_QWORD *)&v40 + 1) = v25;
    if ( (unsigned int)MiGetSystemRegionType(BaseAddress) == 1 )
      break;
LABEL_49:
    if ( BaseAddress >= qword_140C4FB78 && BaseAddress <= qword_140C4E3A8 )
    {
      v12 = -1073741585;
      goto LABEL_29;
    }
    v12 = MiPrefetchVirtualMemory(1LL, &v40, SessionVm, v24);
    if ( v12 < 0 )
      goto LABEL_29;
    v14 = v32;
LABEL_28:
    if ( !BufferSize )
      goto LABEL_29;
    v15 = v29;
  }
  if ( Process[1].AffinityPadding[5] && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    SessionVm = MiGetSessionVm();
    goto LABEL_49;
  }
  v12 = -1073741819;
LABEL_29:
  v5 = NumberOfBytesRead;
LABEL_30:
  if ( v39 )
    MiReleasePtes(&qword_140C4EF80, v39, (unsigned int)v11);
  *v5 += v34;
  return v12;
}
