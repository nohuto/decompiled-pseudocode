/*
 * XREFs of MiSoftFaultMappedView @ 0x14025AFC0
 * Callers:
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140213440 (MiVadMapsLargeImage.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiImagePageOk @ 0x14025B630 (MiImagePageOk.c)
 *     MiCompleteRestrictedImageFault @ 0x14025BEB0 (MiCompleteRestrictedImageFault.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     KeShouldYieldProcessor @ 0x140327BB0 (KeShouldYieldProcessor.c)
 *     MiUnlockFaultWorkingSet @ 0x1403541F4 (MiUnlockFaultWorkingSet.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
  unsigned int v30; // ebx
  unsigned __int8 v32[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v33; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int128 v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  int v40; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR v41; // [rsp+78h] [rbp-88h]
  _QWORD v42[16]; // [rsp+80h] [rbp-80h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v37 = 0LL;
  v35 = a1;
  LODWORD(CurrentThread) = v1 & 0xF80;
  v3 = a1;
  v36 = 0LL;
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
  v33 = 0;
  v38 = 0LL;
  v34 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v8 = *(_QWORD *)(v5 + 32);
  v9 = (__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6];
  v39 = v9;
  if ( !v8 )
    return (char)CurrentThread;
  v10 = *(unsigned int *)(v3 + 24);
  v11 = (unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32;
  v12 = *(unsigned __int64 **)(v3 + 80);
  v32[0] = 17;
  v13 = 8 * ((v10 | v11) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v14 = (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) & 0xFFFFFFFFFLL;
  BYTE13(v36) |= 4u;
  v15 = 8 * v14 - 0x98000000000LL;
  v41 = v15;
  *(_QWORD *)&v36 = v9;
  BYTE12(v36) = MiLockWorkingSetShared(v9);
  if ( v13 > v15 )
    goto LABEL_46;
  v17 = v12;
  while ( 1 )
  {
    if ( (unsigned __int64)v17 > *(_QWORD *)(v3 + 88) || !v8 )
      goto LABEL_41;
    if ( v6
      && (v6 & 8) == 0
      && ((v18 = v39, (*(_BYTE *)(v39 + 184) & 7) == 2) ? (v19 = &dword_140C4F580) : (v19 = (LONG *)(v39 + 192)),
          (*v19 & 0x40000000) != 0 || KeShouldYieldProcessor()) )
    {
      v29 = 1;
    }
    else
    {
      if ( v37 && (v13 & 0xFFF) != 0 )
        goto LABEL_20;
      v18 = v39;
      v29 = 2;
    }
    if ( v32[0] != 17 )
    {
      MiUnlockProtoPoolPage(v38, v32[0]);
      v32[0] = 17;
    }
    if ( v33 )
    {
      if ( !(unsigned int)MiCompleteRestrictedImageFault(&v36, v34, v42) )
      {
        v7 = 0;
LABEL_41:
        v27 = v34;
LABEL_42:
        if ( v32[0] != 17 )
          MiUnlockProtoPoolPage(v38, v32[0]);
        if ( v7 )
          MiCompleteRestrictedImageFault(&v36, v27, v42);
        goto LABEL_46;
      }
      v33 = 0;
    }
    if ( v37 )
    {
      MiUnlockPageTableInternal(v18, v37);
      v37 = 0LL;
    }
    if ( v29 == 1 )
      MiUnlockFaultWorkingSet(&v36);
    v30 = (*(_DWORD *)(v3 + 48) >> 12) & 0x3F;
    if ( v29 == 1 )
      MiLockWorkingSetShared(v39);
    MiMakeSystemAddressValid(v13, 0LL, v30, BYTE12(v36), 0);
    v7 = v33;
    v37 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
LABEL_20:
    ++v6;
    if ( !*(_QWORD *)v13 )
      break;
LABEL_39:
    ++v12;
    v13 += 8LL;
    v17 = v12;
LABEL_40:
    v7 = v33;
    if ( v13 > v41 )
      goto LABEL_41;
  }
  if ( ((unsigned __int16)v12 & 0xFFF) != 0 )
  {
    if ( v32[0] != 17 )
      goto LABEL_23;
  }
  else if ( v32[0] != 17 )
  {
    MiUnlockProtoPoolPage(v38, v32[0]);
    v32[0] = 17;
  }
  if ( v7 )
  {
    v27 = v34;
    if ( !(unsigned int)MiCompleteRestrictedImageFault(&v36, v34, v42) )
    {
      v7 = 0;
      goto LABEL_42;
    }
    v33 = 0;
  }
  v38 = MiLockProtoPoolPage((unsigned __int64)v12, v32);
  if ( !v38 )
  {
    v28 = 8 * ((unsigned __int64)(4096 - ((unsigned __int16)v12 & 0xFFFu)) >> 3);
    v12 = (unsigned __int64 *)((char *)v12 + v28);
    v13 += v28;
    v17 = v12;
    if ( v37 && v37 != ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
    {
      MiUnlockPageTableInternal(v39, v37);
      v37 = 0LL;
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
      if ( MiInvalidPteConforms(*v12) )
      {
        v22 = v21;
        if ( qword_140C4DD40 && (v21 & 0x10) == 0 )
          v22 = v21 & ~qword_140C4DD40;
LABEL_26:
        v23 = 48 * ((v22 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(v23 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
          break;
      }
    }
    v24 = v23 - 0x58000000000LL;
    v40 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 - 0x58000000000LL + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v40, i);
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
    v3 = v35;
    goto LABEL_39;
  }
  if ( (*(_BYTE *)v12 & 1) == 0 || (--v8, (*(_DWORD *)(v24 + 16) & 0x400LL) == 0) || (*(_BYTE *)(v24 + 35) & 0x40) != 0 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), i);
    goto LABEL_38;
  }
  if ( !(unsigned int)MiImagePageOk((__int64)(v13 << 25) >> 16, v23 - 0x58000000000LL, v16, v35) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_38;
  }
  v16 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ (*(_QWORD *)(v24 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v23 / 48 == -1 )
    goto LABEL_38;
  v25 = v33;
  v26 = v13;
  if ( v33 )
    v26 = v34;
  v42[v33] = v23 / 48;
  v34 = v26;
  v33 = v25 + 1;
  if ( v25 != 15 )
    goto LABEL_38;
  MiUnlockProtoPoolPage(v38, v32[0]);
  v32[0] = 17;
  if ( (unsigned int)MiCompleteRestrictedImageFault(&v36, v26, v42) )
  {
    v34 = v26;
    v33 = 0;
    goto LABEL_38;
  }
LABEL_46:
  if ( v37 )
  {
    MiUnlockPageTableInternal(v39, v37);
    v37 = 0LL;
  }
  LOBYTE(CurrentThread) = MiUnlockFaultWorkingSet(&v36);
  return (char)CurrentThread;
}
