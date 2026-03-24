/*
 * XREFs of MiSoftFaultMappedView @ 0x14028D5A0
 * Callers:
 *     MiMapViewOfImageSection @ 0x14061CEB0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiImagePageOk @ 0x14028DC10 (MiImagePageOk.c)
 *     MiUnlockFaultWorkingSet @ 0x14028DD1C (MiUnlockFaultWorkingSet.c)
 *     KeShouldYieldProcessor @ 0x140293FD0 (KeShouldYieldProcessor.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiCompleteRestrictedImageFault @ 0x14031D0A0 (MiCompleteRestrictedImageFault.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

char __fastcall MiSoftFaultMappedView(__int64 a1)
{
  int v1; // edx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // r14d
  int v7; // r15d
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 *v12; // rsi
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v18; // rbx
  __int64 v19; // rbx
  LONG *v20; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r15
  int v26; // ecx
  ULONG_PTR v27; // rbx
  ULONG_PTR v28; // rbx
  unsigned __int64 v29; // rdx
  int v30; // r15d
  __int64 v31; // rdx
  __int64 v32; // r8
  _DWORD *v33; // r9
  unsigned __int8 v35[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v36; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v37; // [rsp+38h] [rbp-C8h]
  __int64 v38; // [rsp+40h] [rbp-C0h]
  __int128 v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-A8h]
  __int64 v41; // [rsp+60h] [rbp-A0h]
  __int64 v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v44; // [rsp+78h] [rbp-88h]
  _QWORD v45[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v40 = 0LL;
  v38 = a1;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v3 = a1;
  v39 = 0LL;
  if ( (_DWORD)CurrentThread == 128 )
    return (char)CurrentThread;
  if ( (v1 & 0x100000) == 0 )
  {
    LOBYTE(CurrentThread) = v1 & 0x70;
    if ( (v1 & 0x70) == 0x20 && (v1 & 0x200000) != 0 )
      return (char)CurrentThread;
  }
  LODWORD(CurrentThread) = MiVadMapsLargeImage(a1);
  if ( (_DWORD)CurrentThread )
    return (char)CurrentThread;
  CurrentThread = *(struct _KTHREAD **)(v4 + 72);
  v5 = *(_QWORD *)&CurrentThread->Header.Lock;
  if ( (*(_DWORD *)(*(_QWORD *)&CurrentThread->Header.Lock + 56LL) & 0x4000000) != 0 )
    return (char)CurrentThread;
  v6 = 0;
  v7 = 0;
  v36 = 0;
  v41 = 0LL;
  v37 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(v5 + 32);
  v9 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v42 = v9;
  if ( !v8 )
    return (char)CurrentThread;
  v10 = *(unsigned int *)(v3 + 24);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  v12 = *(unsigned __int64 **)(v3 + 80);
  v35[0] = 17;
  v13 = 8 * ((v10 | v11) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v39) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v44 = v15;
  *(_QWORD *)&v39 = v9;
  BYTE12(v39) = MiLockWorkingSetShared(v9, v9, 0xFFFFFFFFFLL, (_DWORD *)0xFFFFF68000000000LL);
  if ( v13 > v15 )
    goto LABEL_46;
  v18 = v12;
  while ( 1 )
  {
    if ( (unsigned __int64)v18 > *(_QWORD *)(v3 + 88) || !v8 )
      goto LABEL_41;
    if ( v6
      && (v6 & 8) == 0
      && ((v19 = v42, (*(_BYTE *)(v42 + 184) & 7) == 2) ? (v20 = &dword_140C4F780) : (v20 = (LONG *)(v42 + 192)),
          (*v20 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v30 = 1;
    }
    else
    {
      if ( v40 && (v13 & 0xFFF) != 0 )
        goto LABEL_20;
      v19 = v42;
      v30 = 2;
    }
    if ( v35[0] != 17 )
    {
      MiUnlockProtoPoolPage(v41, v35[0]);
      v35[0] = 17;
    }
    if ( v36 )
    {
      if ( !(unsigned int)MiCompleteRestrictedImageFault(&v39, v37, v45) )
      {
        v7 = 0;
LABEL_41:
        v28 = v37;
LABEL_42:
        if ( v35[0] != 17 )
          MiUnlockProtoPoolPage(v41, v35[0]);
        if ( v7 )
          MiCompleteRestrictedImageFault(&v39, v28, v45);
        goto LABEL_46;
      }
      v36 = 0;
    }
    if ( v40 )
    {
      MiUnlockPageTableInternal(v19, v40);
      v40 = 0LL;
    }
    if ( v30 == 1 )
    {
      MiUnlockFaultWorkingSet(&v39);
      MiLockWorkingSetShared(v42, v31, v32, v33);
    }
    MiMakeSystemAddressValid(v13, 0);
    v7 = v36;
    v40 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_20:
    ++v6;
    if ( !*(_QWORD *)v13 )
      break;
LABEL_39:
    ++v12;
    v13 += 8LL;
    v18 = v12;
LABEL_40:
    v7 = v36;
    if ( v13 > v44 )
      goto LABEL_41;
  }
  if ( ((unsigned __int16)v12 & 0xFFF) != 0 )
  {
    if ( v35[0] != 17 )
      goto LABEL_23;
  }
  else if ( v35[0] != 17 )
  {
    MiUnlockProtoPoolPage(v41, v35[0]);
    v35[0] = 17;
  }
  if ( v7 )
  {
    v28 = v37;
    if ( !(unsigned int)MiCompleteRestrictedImageFault(&v39, v37, v45) )
    {
      v7 = 0;
      goto LABEL_42;
    }
    v36 = 0;
  }
  v41 = MiLockProtoPoolPage(v12, v35);
  if ( !v41 )
  {
    v29 = 8 * ((unsigned __int64)(4096 - ((unsigned __int16)v12 & 0xFFFu)) >> 3);
    v12 = (unsigned __int64 *)((char *)v12 + v29);
    v13 += v29;
    v18 = v12;
    if ( v40 && v40 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v42, v40);
      v40 = 0LL;
    }
    goto LABEL_40;
  }
LABEL_23:
  if ( (*(_BYTE *)v12 & 1) == 0 )
    goto LABEL_39;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), i) )
  {
    while ( 1 )
    {
      v22 = *v12;
      v23 = *v12;
      if ( (*v12 & 1) != 0 )
        goto LABEL_26;
      if ( (*v12 & 0xC00) != 0x800 )
        goto LABEL_38;
      if ( MiInvalidPteConforms(*v12) )
      {
        v23 = v22;
        if ( qword_140C4DF40 && (v22 & 0x10) == 0 )
          v23 = v22 & ~qword_140C4DF40;
LABEL_26:
        v24 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v24 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v25 = v24 - 0x58000000000LL;
    v43 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 - 0x58000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v43, i, v16, v17);
        while ( *(__int64 *)(v25 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 24), 0x3FuLL) );
      i = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( *v12 == v22 )
      break;
  }
  if ( v24 == 0x58000000000LL )
  {
LABEL_38:
    v3 = v38;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)v12 & 1) == 0 || (--v8, (*(_DWORD *)(v25 + 16) & 0x400LL) == 0) || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), i);
    goto LABEL_38;
  }
  if ( !(unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v24 - 0x58000000000LL, v16, v38) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_38;
  }
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v24 / 48 == -1 )
    goto LABEL_38;
  v26 = v36;
  v27 = v13;
  if ( v36 )
    v27 = v37;
  v45[v36] = v24 / 48;
  v37 = v27;
  v36 = v26 + 1;
  if ( v26 != 15 )
    goto LABEL_38;
  MiUnlockProtoPoolPage(v41, v35[0]);
  v35[0] = 17;
  if ( (unsigned int)MiCompleteRestrictedImageFault(&v39, v27, v45) )
  {
    v17 = 0LL;
    v37 = v27;
    v36 = 0;
    goto LABEL_38;
  }
LABEL_46:
  if ( v40 )
  {
    MiUnlockPageTableInternal(v42, v40);
    v40 = 0LL;
  }
  LOBYTE(CurrentThread) = MiUnlockFaultWorkingSet(&v39);
  return (char)CurrentThread;
}
