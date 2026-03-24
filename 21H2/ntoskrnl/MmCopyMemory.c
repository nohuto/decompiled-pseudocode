/*
 * XREFs of MmCopyMemory @ 0x1402B48E0
 * Callers:
 *     <none>
 * Callees:
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140274EA0 (MiPrefetchVirtualMemory.c)
 *     MiCopySinglePage @ 0x1402B4BC4 (MiCopySinglePage.c)
 *     MiTranslatePageForCopy @ 0x1402B4DE4 (MiTranslatePageForCopy.c)
 *     MiUnlockSystemVa @ 0x1403120FC (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwReadVirtualMemory @ 0x1403FAB80 (ZwReadVirtualMemory.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiCheckPhysicalAddressRange @ 0x1405455DC (MiCheckPhysicalAddressRange.c)
 */

__int64 __fastcall MmCopyMemory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // edi
  __int64 v15; // r12
  _QWORD *v16; // rdx
  int v17; // ecx
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rsi
  char EffectivePagePriorityThread; // al
  int v25; // edi
  __int64 v26; // rax
  __int64 SessionVm; // r13
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // [rsp+38h] [rbp-C8h]
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+48h] [rbp-B8h]
  _QWORD *v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  _KPROCESS *Process; // [rsp+80h] [rbp-80h]
  _QWORD *v42; // [rsp+88h] [rbp-78h]
  __int128 v43; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v44[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a5;
  v34 = a1;
  v36 = a4;
  memset(v44, 0, sizeof(v44));
  v37 = 0LL;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v32 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)MiCheckPhysicalAddressRange(a2, a3) )
      goto LABEL_9;
    return 3221225496LL;
  }
  if ( a2 + a3 <= a2 )
    return 3221225496LL;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    if ( a2 + a3 <= 0x7FFFFFFEFFFFLL )
      return ZwReadVirtualMemory(-1LL, a2, a1, a3, a5);
    return 3221225496LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 3221225496LL;
LABEL_9:
  v12 = a2 & 0xFFF;
  v13 = (v12 + a3 + 4095) >> 12;
  if ( v13 >= 0x100000000LL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v14 = 0;
  v42 = (_QWORD *)MiReservePtes((__int64)&qword_140C4EF40, v13, v10, v11);
  v35 = v42;
  v15 = a3;
  v16 = v42;
  if ( 4096 - v12 <= a3 )
    v15 = 4096 - v12;
  v17 = v32;
  if ( v32 )
    v18 = a2 >> 12;
  else
    v18 = -1LL;
  v33 = v18;
  if ( !a3 )
    goto LABEL_30;
  while ( 1 )
  {
    v39 = 0LL;
    v38 = 0LL;
    if ( v17 )
    {
      v20 = 0LL;
      goto LABEL_19;
    }
    v19 = MiTranslatePageForCopy(a2, v44, &v33, &v39, &v38);
    v14 = v19;
    if ( v19 >= 0 )
    {
      v20 = v44[3];
      if ( v19 == 273 )
      {
        MiUnlockSystemVa(v44);
        v14 = 0;
        v30 = v15;
        if ( v15 )
        {
          v31 = v34 - v12;
          do
          {
            *(_BYTE *)(v31 + v12) = *((_BYTE *)&v38 + (v12 & 7));
            ++v12;
            --v30;
          }
          while ( v30 );
        }
LABEL_24:
        v37 += v15;
        a3 -= v15;
        v34 += v15;
        a2 += v15;
        ++v33;
        v16 = v35;
        v15 = a3;
        if ( a3 > 0x1000 )
          v15 = 4096LL;
        v12 = 0LL;
        if ( v35 )
          v16 = ++v35;
        goto LABEL_28;
      }
      v16 = v35;
LABEL_19:
      v21 = v12;
      v22 = v33;
      v14 = MiCopySinglePage(v34, v33, v21, v15, v16, v36);
      if ( v20 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v22 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v39 )
          MiUnlockProtoPoolPage(v39, 2u);
        MiUnlockSystemVa(v44);
      }
      if ( v14 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v19 != -1073741608 )
      goto LABEL_29;
    v43 = 0LL;
    EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
    *(_QWORD *)&v43 = a2;
    v25 = EffectivePagePriorityThread & 7 | 0x80B8;
    v26 = a3;
    SessionVm = 1LL;
    if ( a3 > 0x200000 - (a2 & 0x1FFFFF) )
      v26 = 0x200000 - (a2 & 0x1FFFFF);
    *((_QWORD *)&v43 + 1) = v26;
    if ( (unsigned int)MiGetSystemRegionType(a2) == 1 )
      break;
LABEL_49:
    if ( a2 >= qword_140C4FB38 && a2 <= qword_140C4E368 )
    {
      v14 = -1073741585;
      goto LABEL_29;
    }
    v14 = MiPrefetchVirtualMemory(1uLL, (__int64)&v43, SessionVm, v25);
    if ( v14 < 0 )
      goto LABEL_29;
    v16 = v35;
LABEL_28:
    if ( !a3 )
      goto LABEL_29;
    v17 = v32;
  }
  if ( Process[1].AffinityPadding[5] && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    SessionVm = MiGetSessionVm(4096LL, v28, v29);
    goto LABEL_49;
  }
  v14 = -1073741819;
LABEL_29:
  v5 = a5;
LABEL_30:
  if ( v42 )
    MiReleasePtes((__int64)&qword_140C4EF40, v42, v13);
  *v5 += v37;
  return (unsigned int)v14;
}
