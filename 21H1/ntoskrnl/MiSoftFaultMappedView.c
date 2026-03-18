/*
 * XREFs of MiSoftFaultMappedView @ 0x1402B3FF0
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406362B0 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiImagePageOk @ 0x1402B4660 (MiImagePageOk.c)
 *     MiCompleteRestrictedImageFault @ 0x1402B4EE0 (MiCompleteRestrictedImageFault.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x1402EE280 (KeShouldYieldProcessor.c)
 *     MiUnlockFaultWorkingSet @ 0x14031667C (MiUnlockFaultWorkingSet.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
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
  unsigned int v31; // ebx
  unsigned __int8 v33[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v34; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v35; // [rsp+38h] [rbp-C8h]
  __int64 v36; // [rsp+40h] [rbp-C0h]
  __int128 v37; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v42; // [rsp+78h] [rbp-88h]
  _QWORD v43[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v38 = 0LL;
  v36 = a1;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v3 = a1;
  v37 = 0LL;
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
  v34 = 0;
  v39 = 0LL;
  v35 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(v5 + 32);
  v9 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v40 = v9;
  if ( !v8 )
    return (char)CurrentThread;
  v10 = *(unsigned int *)(v3 + 24);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  v12 = *(unsigned __int64 **)(v3 + 80);
  v33[0] = 17;
  v13 = 8 * ((v10 | v11) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v37) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v42 = v15;
  *(_QWORD *)&v37 = v9;
  BYTE12(v37) = MiLockWorkingSetShared(v9);
  if ( v13 > v15 )
    goto LABEL_46;
  v18 = v12;
  while ( 1 )
  {
    if ( (unsigned __int64)v18 > *(_QWORD *)(v3 + 88) || !v8 )
      goto LABEL_41;
    if ( v6
      && (v6 & 8) == 0
      && ((v19 = v40, (*(_BYTE *)(v40 + 184) & 7) == 2) ? (v20 = &dword_140C4F6C0) : (v20 = (LONG *)(v40 + 192)),
          (*v20 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v30 = 1;
    }
    else
    {
      if ( v38 && (v13 & 0xFFF) != 0 )
        goto LABEL_20;
      v19 = v40;
      v30 = 2;
    }
    if ( v33[0] != 17 )
    {
      MiUnlockProtoPoolPage(v39, v33[0], v16, v17);
      v33[0] = 17;
    }
    if ( v34 )
    {
      if ( !(unsigned int)MiCompleteRestrictedImageFault(&v37, v35, v43) )
      {
        v7 = 0;
LABEL_41:
        v28 = v35;
LABEL_42:
        if ( v33[0] != 17 )
          MiUnlockProtoPoolPage(v39, v33[0], v16, v17);
        if ( v7 )
          MiCompleteRestrictedImageFault(&v37, v28, v43);
        goto LABEL_46;
      }
      v34 = 0;
    }
    if ( v38 )
    {
      MiUnlockPageTableInternal(v19, v38);
      v38 = 0LL;
    }
    if ( v30 == 1 )
      MiUnlockFaultWorkingSet(&v37);
    v31 = (*(_DWORD *)(v3 + 48) >> 12) & 0x3F;
    if ( v30 == 1 )
      MiLockWorkingSetShared(v40);
    MiMakeSystemAddressValid(v13, 0LL, v31, BYTE12(v37), 0);
    v7 = v34;
    v38 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_20:
    ++v6;
    if ( !*(_QWORD *)v13 )
      break;
LABEL_39:
    ++v12;
    v13 += 8LL;
    v18 = v12;
LABEL_40:
    v7 = v34;
    if ( v13 > v42 )
      goto LABEL_41;
  }
  if ( ((unsigned __int16)v12 & 0xFFF) != 0 )
  {
    if ( v33[0] != 17 )
      goto LABEL_23;
  }
  else if ( v33[0] != 17 )
  {
    MiUnlockProtoPoolPage(v39, v33[0], v16, v17);
    v33[0] = 17;
  }
  if ( v7 )
  {
    v28 = v35;
    if ( !(unsigned int)MiCompleteRestrictedImageFault(&v37, v35, v43) )
    {
      v7 = 0;
      goto LABEL_42;
    }
    v34 = 0;
  }
  v39 = MiLockProtoPoolPage((unsigned __int64)v12, (__int64)v33);
  if ( !v39 )
  {
    v29 = 8 * ((unsigned __int64)(4096 - ((unsigned __int16)v12 & 0xFFFu)) >> 3);
    v12 = (unsigned __int64 *)((char *)v12 + v29);
    v13 += v29;
    v18 = v12;
    if ( v38 && v38 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v40, v38);
      v38 = 0LL;
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
        if ( qword_140C4DE80 && (v22 & 0x10) == 0 )
          v23 = v22 & ~qword_140C4DE80;
LABEL_26:
        v24 = 48 * ((v23 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v24 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v25 = v24 - 0x58000000000LL;
    v41 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 - 0x58000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v41, i, v16, v17);
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
    v3 = v36;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)v12 & 1) == 0 || (--v8, (*(_DWORD *)(v25 + 16) & 0x400LL) == 0) || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), i);
    goto LABEL_38;
  }
  if ( !(unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v24 - 0x58000000000LL, v16, v36) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_38;
  }
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v24 / 48 == -1 )
    goto LABEL_38;
  v26 = v34;
  v27 = v13;
  if ( v34 )
    v27 = v35;
  v43[v34] = v24 / 48;
  v35 = v27;
  v34 = v26 + 1;
  if ( v26 != 15 )
    goto LABEL_38;
  MiUnlockProtoPoolPage(v39, v33[0], 0x3FFFFFFFFFFFFFFFLL, v17);
  v33[0] = 17;
  if ( (unsigned int)MiCompleteRestrictedImageFault(&v37, v27, v43) )
  {
    v17 = 0LL;
    v35 = v27;
    v34 = 0;
    goto LABEL_38;
  }
LABEL_46:
  if ( v38 )
  {
    MiUnlockPageTableInternal(v40, v38);
    v38 = 0LL;
  }
  LOBYTE(CurrentThread) = MiUnlockFaultWorkingSet(&v37);
  return (char)CurrentThread;
}
