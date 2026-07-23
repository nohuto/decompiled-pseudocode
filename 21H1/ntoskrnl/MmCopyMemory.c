/*
 * XREFs of MmCopyMemory @ 0x1403028D0
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockSystemVa @ 0x14022B50C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiPrefetchVirtualMemory @ 0x1402A1330 (MiPrefetchVirtualMemory.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiCopySinglePage @ 0x140302BB4 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x140302DD4 (MiTranslatePageForCopy.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1403F2B10 (ZwReadVirtualMemory.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x14053FAB8 (MiCheckPhysicalAddressRange.c)
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
  _QWORD *v14; // rdx
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r13
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  char EffectivePagePriorityThread; // al
  int v26; // edi
  __int64 v27; // rax
  unsigned __int64 SessionVm; // r13
  SIZE_T v29; // rdx
  char *v30; // rcx
  int v31; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  char *v33; // [rsp+48h] [rbp-B8h]
  _QWORD *v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+58h] [rbp-A8h]
  __int64 v36; // [rsp+60h] [rbp-A0h]
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  __int64 v38; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _QWORD *v41; // [rsp+88h] [rbp-78h]
  __int128 v42; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v43[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = NumberOfBytesRead;
  v33 = Buffer;
  v35 = a4;
  memset(v43, 0, sizeof(v43));
  v36 = 0LL;
  *NumberOfBytesRead = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return -1073741582;
  v31 = a4 & 1;
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
  v41 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EE80, (unsigned int)v11);
  v34 = v41;
  v13 = BufferSize;
  v14 = v41;
  if ( 4096 - v10 <= BufferSize )
    v13 = 4096 - v10;
  v15 = v31;
  if ( v31 )
    v16 = BaseAddress >> 12;
  else
    v16 = -1LL;
  v32 = v16;
  if ( !BufferSize )
    goto LABEL_30;
  while ( 1 )
  {
    v38 = 0LL;
    v37 = 0LL;
    if ( v15 )
    {
      v18 = 0LL;
      goto LABEL_19;
    }
    v17 = MiTranslatePageForCopy(BaseAddress, v43, &v32, &v38, &v37);
    v12 = v17;
    if ( v17 >= 0 )
    {
      v18 = v43[3];
      if ( v17 == 273 )
      {
        MiUnlockSystemVa((__int64)v43);
        v12 = 0;
        v29 = v13;
        if ( v13 )
        {
          v30 = &v33[-v10];
          do
          {
            v30[v10] = *((_BYTE *)&v37 + (v10 & 7));
            ++v10;
            --v29;
          }
          while ( v29 );
        }
LABEL_24:
        v36 += v13;
        BufferSize -= v13;
        v33 += v13;
        BaseAddress += v13;
        ++v32;
        v14 = v34;
        v13 = BufferSize;
        if ( BufferSize > 0x1000 )
          v13 = 4096LL;
        v10 = 0LL;
        if ( v34 )
          v14 = ++v34;
        goto LABEL_28;
      }
      v14 = v34;
LABEL_19:
      v19 = v10;
      v20 = v32;
      v12 = MiCopySinglePage(v33, v32, v19, v13, v14, v35);
      if ( v18 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v20 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v38 )
        {
          LOBYTE(v21) = 2;
          MiUnlockProtoPoolPage(v38, v21, v22, v23);
        }
        MiUnlockSystemVa((__int64)v43);
      }
      if ( v12 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v17 != -1073741608 )
      goto LABEL_29;
    v42 = 0LL;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    *(_QWORD *)&v42 = BaseAddress;
    v26 = EffectivePagePriorityThread & 7 | 0x80B8;
    v27 = BufferSize;
    SessionVm = 1LL;
    if ( BufferSize > 0x200000 - (BaseAddress & 0x1FFFFF) )
      v27 = 0x200000 - (BaseAddress & 0x1FFFFF);
    *((_QWORD *)&v42 + 1) = v27;
    if ( (unsigned int)MiGetSystemRegionType(BaseAddress) == 1 )
      break;
LABEL_49:
    if ( BaseAddress >= qword_140C4FA78 && BaseAddress <= qword_140C4E2A8 )
    {
      v12 = -1073741585;
      goto LABEL_29;
    }
    v12 = MiPrefetchVirtualMemory(1uLL, (__int64)&v42, SessionVm, v26);
    if ( v12 < 0 )
      goto LABEL_29;
    v14 = v34;
LABEL_28:
    if ( !BufferSize )
      goto LABEL_29;
    v15 = v31;
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
  if ( v41 )
    MiReleasePtes((__int64)&qword_140C4EE80, v41, v11);
  *v5 += v36;
  return v12;
}
