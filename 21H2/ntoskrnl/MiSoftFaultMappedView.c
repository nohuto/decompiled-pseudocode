/*
 * XREFs of MiSoftFaultMappedView @ 0x14020A740
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiImagePageOk @ 0x14020ADB0 (MiImagePageOk.c)
 *     MiUnlockFaultWorkingSet @ 0x14020AEBC (MiUnlockFaultWorkingSet.c)
 *     KeShouldYieldProcessor @ 0x140211F40 (KeShouldYieldProcessor.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiCompleteRestrictedImageFault @ 0x140327DF0 (MiCompleteRestrictedImageFault.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
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
  unsigned __int64 *v17; // rbx
  __int64 v18; // rbx
  LONG *v19; // rax
  unsigned __int64 i; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  int v25; // ecx
  ULONG_PTR v26; // rbx
  ULONG_PTR v27; // rbx
  unsigned __int64 v28; // rdx
  int v29; // r15d
  unsigned __int8 v31[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v33; // [rsp+38h] [rbp-C8h]
  __int64 v34; // [rsp+40h] [rbp-C0h]
  __int128 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h]
  __int64 v38; // [rsp+68h] [rbp-98h]
  int v39; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v40; // [rsp+78h] [rbp-88h]
  _QWORD v41[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v36 = 0LL;
  v34 = a1;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v3 = a1;
  v35 = 0LL;
  if ( (_DWORD)CurrentThread == 128 )
    return (char)CurrentThread;
  if ( (v1 & 0x100000) == 0 )
  {
    LOBYTE(CurrentThread) = v1 & 0x70;
    if ( (v1 & 0x70) == 0x20 && (v1 & 0x200000) != 0 )
      return (char)CurrentThread;
  }
  LODWORD(CurrentThread) = MiVadMapsLargeImage();
  if ( (_DWORD)CurrentThread )
    return (char)CurrentThread;
  CurrentThread = *(struct _KTHREAD **)(v4 + 72);
  v5 = *(_QWORD *)&CurrentThread->Header.Lock;
  if ( (*(_DWORD *)(*(_QWORD *)&CurrentThread->Header.Lock + 56LL) & 0x4000000) != 0 )
    return (char)CurrentThread;
  v6 = 0;
  v7 = 0;
  v32 = 0;
  v37 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(v5 + 32);
  v9 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v38 = v9;
  if ( !v8 )
    return (char)CurrentThread;
  v10 = *(unsigned int *)(v3 + 24);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  v12 = *(unsigned __int64 **)(v3 + 80);
  v31[0] = 17;
  v13 = 8 * ((v10 | v11) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v35) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v40 = v15;
  *(_QWORD *)&v35 = v9;
  BYTE12(v35) = MiLockWorkingSetShared(v9);
  if ( v13 > v15 )
    goto LABEL_46;
  v17 = v12;
  while ( 1 )
  {
    if ( (unsigned __int64)v17 > *(_QWORD *)(v3 + 88) || !v8 )
      goto LABEL_41;
    if ( v6
      && (v6 & 8) == 0
      && ((v18 = v38, (*(_BYTE *)(v38 + 184) & 7) == 2) ? (v19 = &dword_140C4F7C0) : (v19 = (LONG *)(v38 + 192)),
          (*v19 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v29 = 1;
    }
    else
    {
      if ( v36 && (v13 & 0xFFF) != 0 )
        goto LABEL_20;
      v18 = v38;
      v29 = 2;
    }
    if ( v31[0] != 17 )
    {
      MiUnlockProtoPoolPage(v37, v31[0]);
      v31[0] = 17;
    }
    if ( v32 )
    {
      if ( !(unsigned int)MiCompleteRestrictedImageFault(&v35, v33, v41) )
      {
        v7 = 0;
LABEL_41:
        v27 = v33;
LABEL_42:
        if ( v31[0] != 17 )
          MiUnlockProtoPoolPage(v37, v31[0]);
        if ( v7 )
          MiCompleteRestrictedImageFault(&v35, v27, v41);
        goto LABEL_46;
      }
      v32 = 0;
    }
    if ( v36 )
    {
      MiUnlockPageTableInternal(v18, v36);
      v36 = 0LL;
    }
    if ( v29 == 1 )
    {
      MiUnlockFaultWorkingSet(&v35);
      MiLockWorkingSetShared(v38);
    }
    MiMakeSystemAddressValid(v13, 0);
    v7 = v32;
    v36 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_20:
    ++v6;
    if ( !*(_QWORD *)v13 )
      break;
LABEL_39:
    ++v12;
    v13 += 8LL;
    v17 = v12;
LABEL_40:
    v7 = v32;
    if ( v13 > v40 )
      goto LABEL_41;
  }
  if ( ((unsigned __int16)v12 & 0xFFF) != 0 )
  {
    if ( v31[0] != 17 )
      goto LABEL_23;
  }
  else if ( v31[0] != 17 )
  {
    MiUnlockProtoPoolPage(v37, v31[0]);
    v31[0] = 17;
  }
  if ( v7 )
  {
    v27 = v33;
    if ( !(unsigned int)MiCompleteRestrictedImageFault(&v35, v33, v41) )
    {
      v7 = 0;
      goto LABEL_42;
    }
    v32 = 0;
  }
  v37 = MiLockProtoPoolPage(v12, v31);
  if ( !v37 )
  {
    v28 = 8 * ((unsigned __int64)(4096 - ((unsigned __int16)v12 & 0xFFFu)) >> 3);
    v12 = (unsigned __int64 *)((char *)v12 + v28);
    v13 += v28;
    v17 = v12;
    if ( v36 && v36 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v38, v36);
      v36 = 0LL;
    }
    goto LABEL_40;
  }
LABEL_23:
  if ( (*(_BYTE *)v12 & 1) == 0 )
    goto LABEL_39;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), i) )
  {
    while ( 1 )
    {
      v21 = *v12;
      v22 = *v12;
      if ( (*v12 & 1) != 0 )
        goto LABEL_26;
      if ( (*v12 & 0xC00) != 0x800 )
        goto LABEL_38;
      if ( (unsigned int)MiInvalidPteConforms(*v12, i) )
      {
        v22 = v21;
        if ( qword_140C4DF80 && (v21 & 0x10) == 0 )
          v22 = v21 & ~qword_140C4DF80;
LABEL_26:
        v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v23 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v24 = v23 - 0x58000000000LL;
    v39 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x58000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v39);
        while ( *(__int64 *)(v24 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
      i = 0x7FFFFFFFFFFFFFFFLL;
    }
    if ( *v12 == v21 )
      break;
  }
  if ( v23 == 0x58000000000LL )
  {
LABEL_38:
    v3 = v34;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)v12 & 1) == 0 || (--v8, (*(_DWORD *)(v24 + 16) & 0x400LL) == 0) || (*(_BYTE *)(v24 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), i);
    goto LABEL_38;
  }
  if ( !(unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v23 - 0x58000000000LL, v16, v34) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_38;
  }
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v23 / 48 == -1 )
    goto LABEL_38;
  v25 = v32;
  v26 = v13;
  if ( v32 )
    v26 = v33;
  v41[v32] = v23 / 48;
  v33 = v26;
  v32 = v25 + 1;
  if ( v25 != 15 )
    goto LABEL_38;
  MiUnlockProtoPoolPage(v37, v31[0]);
  v31[0] = 17;
  if ( (unsigned int)MiCompleteRestrictedImageFault(&v35, v26, v41) )
  {
    v33 = v26;
    v32 = 0;
    goto LABEL_38;
  }
LABEL_46:
  if ( v36 )
  {
    MiUnlockPageTableInternal(v38, v36);
    v36 = 0LL;
  }
  LOBYTE(CurrentThread) = MiUnlockFaultWorkingSet(&v35);
  return (char)CurrentThread;
}
