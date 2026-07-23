/*
 * XREFs of MmCopyMemory @ 0x1402513F0
 * Callers:
 *     <none>
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiPrefetchVirtualMemory @ 0x14022D6A0 (MiPrefetchVirtualMemory.c)
 *     MiTranslatePageForCopy @ 0x140251058 (MiTranslatePageForCopy.c)
 *     MiCopySinglePage @ 0x1402516D4 (MiCopySinglePage.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiUnlockSystemVa @ 0x1402996DC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1403F8950 (ZwReadVirtualMemory.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x140543AD8 (MiCheckPhysicalAddressRange.c)
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
  int v24; // edi
  __int64 v25; // rax
  unsigned __int64 SessionVm; // r13
  __int64 v27; // rdx
  SIZE_T v28; // rdx
  char *v29; // rcx
  int v30; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  char *v32; // [rsp+48h] [rbp-B8h]
  __int64 v33; // [rsp+50h] [rbp-B0h]
  int v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  __int64 v37; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = NumberOfBytesRead;
  v32 = Buffer;
  v34 = a4;
  memset(v42, 0, sizeof(v42));
  v35 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v30 = a4 & 1;
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
  v40 = MiReservePtes(&qword_140C4EDC0, (unsigned int)v11);
  v33 = v40;
  v13 = BufferSize;
  v14 = v40;
  if ( 4096 - v10 <= BufferSize )
    v13 = 4096 - v10;
  v15 = v30;
  if ( v30 )
    v16 = BaseAddress >> 12;
  else
    v16 = -1LL;
  v31 = v16;
  if ( !BufferSize )
    goto LABEL_30;
  while ( 1 )
  {
    v37 = 0LL;
    v36 = 0LL;
    if ( v15 )
    {
      v18 = 0LL;
      goto LABEL_19;
    }
    v17 = MiTranslatePageForCopy(BaseAddress, (__int64)v42, &v31, &v37, &v36);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v18 = v42[3];
      if ( v17 == 273 )
      {
        MiUnlockSystemVa(v42);
        v12 = 0;
        v28 = v13;
        if ( v13 )
        {
          v29 = &v32[-v10];
          do
          {
            v29[v10] = *((_BYTE *)&v36 + (v10 & 7));
            ++v10;
            --v28;
          }
          while ( v28 );
        }
LABEL_24:
        v35 += v13;
        BufferSize -= v13;
        v32 += v13;
        BaseAddress += v13;
        ++v31;
        v14 = v33;
        v13 = BufferSize;
        if ( BufferSize > 0x1000 )
          v13 = 4096LL;
        v10 = 0LL;
        if ( v33 )
        {
          v14 = v33 + 8;
          v33 += 8LL;
        }
        goto LABEL_28;
      }
      v14 = v33;
LABEL_19:
      v19 = v10;
      v20 = v31;
      v12 = MiCopySinglePage(v32, v31, v19, v13, v14, v34);
      if ( v18 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v37 )
        {
          LOBYTE(v21) = 2;
          MiUnlockProtoPoolPage(v37, v21);
        }
        MiUnlockSystemVa(v42);
      }
      if ( v12 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v17 != -1073741608 )
      goto LABEL_29;
    v41 = 0LL;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
    *(_QWORD *)&v41 = BaseAddress;
    v24 = EffectivePagePriorityThread & 7 | 0x80B8;
    v25 = BufferSize;
    SessionVm = 1LL;
    if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
      v25 = 0x200000 - (BaseAddress & 0x1FFFFF);
    *((_QWORD *)&v41 + 1) = v25;
    if ( (unsigned int)MiGetSystemRegionType(BaseAddress) == 1 )
      break;
LABEL_49:
    if ( BaseAddress >= qword_140C4F9B8 && BaseAddress <= qword_140C4E1E8 )
    {
      v12 = -1073741585;
      goto LABEL_29;
    }
    v12 = MiPrefetchVirtualMemory(1uLL, (unsigned __int64)&v41, SessionVm, v24);
    if ( v12 < 0 )
      goto LABEL_29;
    v14 = v33;
LABEL_28:
    if ( !BufferSize )
      goto LABEL_29;
    v15 = v30;
  }
  if ( Process[1].AffinityPadding[5] && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    SessionVm = MiGetSessionVm(4096LL, v27);
    goto LABEL_49;
  }
  v12 = -1073741819;
LABEL_29:
  v5 = NumberOfBytesRead;
LABEL_30:
  if ( v40 )
    MiReleasePtes(&qword_140C4EDC0, v40, (unsigned int)v11);
  *v5 += v35;
  return v12;
}
