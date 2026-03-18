/*
 * XREFs of CmQueryMultipleValueKey @ 0x1406552BC
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140654D60 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1405E2CC4 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpGetValueData @ 0x1405EBEC0 (CmpGetValueData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405EDBB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockKcb @ 0x1405F0C10 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F3D60 (CmpLockRegistry.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1406536B4 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindValueByName @ 0x140655740 (CmpFindValueByName.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmpLockTwoKcbsShared @ 0x140672100 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x140672190 (CmpUnlockTwoKcbs.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmQueryMultipleValueKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int *a7)
{
  int v8; // r13d
  __int64 v11; // r14
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r12
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r9
  int v19; // r10d
  int v20; // edi
  unsigned int v21; // eax
  __int64 v22; // r13
  unsigned __int16 *v23; // r8
  unsigned __int16 i; // dx
  unsigned int ValueByName; // r15d
  __int64 v26; // r13
  __int64 v27; // rax
  unsigned int v28; // r12d
  unsigned int v29; // ecx
  unsigned int v30; // r8d
  __int64 v31; // rdx
  __int64 v32; // r15
  unsigned __int16 *v33; // rdx
  unsigned int v34; // edx
  ULONG_PTR v35; // r15
  unsigned int MultipleValueForLayeredKey; // ebx
  int v38; // ebx
  int v39; // eax
  int v40; // r12d
  int v41; // eax
  char v42; // [rsp+40h] [rbp-D8h]
  unsigned int v43; // [rsp+44h] [rbp-D4h]
  int v44; // [rsp+48h] [rbp-D0h] BYREF
  unsigned int v45; // [rsp+4Ch] [rbp-CCh]
  int v46; // [rsp+50h] [rbp-C8h]
  int v47; // [rsp+54h] [rbp-C4h]
  __int64 v48; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+60h] [rbp-B8h]
  unsigned int Size; // [rsp+68h] [rbp-B0h] BYREF
  unsigned int Size_4; // [rsp+6Ch] [rbp-ACh]
  ULONG_PTR v52; // [rsp+70h] [rbp-A8h]
  void *Src; // [rsp+78h] [rbp-A0h] BYREF
  _DWORD v54[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v55; // [rsp+88h] [rbp-90h]
  _DWORD v56[2]; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int16 *v57; // [rsp+98h] [rbp-80h]
  _DWORD v58[2]; // [rsp+A0h] [rbp-78h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-70h]
  _DWORD v60[2]; // [rsp+B0h] [rbp-68h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-60h]
  __int64 v62; // [rsp+C0h] [rbp-58h]
  __int64 v63; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v64; // [rsp+D0h] [rbp-48h]
  ULONG_PTR v65; // [rsp+D8h] [rbp-40h]
  char v66; // [rsp+120h] [rbp+8h] BYREF
  __int64 v67; // [rsp+130h] [rbp+18h]
  unsigned int v68; // [rsp+138h] [rbp+20h]

  v68 = a4;
  v67 = a3;
  v8 = a3;
  v59 = 0LL;
  v49 = 0LL;
  v54[0] = -1;
  v54[1] = 0;
  v45 = 0;
  v43 = 0;
  v42 = 0;
  v56[0] = -1;
  v56[1] = 0;
  v55 = 0LL;
  v60[0] = -1;
  v60[1] = 0;
  v11 = 0LL;
  v61 = 0LL;
  v48 = 0LL;
  LOBYTE(v47) = 0;
  LOBYTE(v46) = 0;
  Src = 0LL;
  v66 = 0;
  v58[0] = -1;
  v58[1] = 0;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v65 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v8, a4, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry();
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 48, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 56), 1u);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v38 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_51:
      CmpUnlockRegistry();
      return (unsigned int)(v38 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v40 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v48);
    if ( v40 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v40;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v61 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( CmpIsKeyDeletedForKeyBody(a1, v48) )
  {
    v39 = *(_DWORD *)(a1 + 48);
LABEL_50:
    v38 = (v39 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_51;
  }
  if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v48) )
  {
    v39 = *(_DWORD *)(a2 + 48);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v52 = v13;
  v64 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 40), v56);
  v63 = v15;
  if ( !v15 )
  {
    if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
    KeAbPostRelease(v13 + 72);
    goto LABEL_60;
  }
  CmpUpdateKeyNodeAccessBits(v13, v15, *(_DWORD *)(v12 + 40));
  if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(v13 + 72));
  KeAbPostRelease(v13 + 72);
  v17 = v48;
  if ( v48 )
  {
    v41 = (unsigned __int8)v47;
    if ( *(_QWORD *)(v12 + 288) == v48 )
      v41 = 1;
    v47 = v41;
  }
  if ( !v11 )
  {
    v18 = 0LL;
    LOBYTE(v19) = v46;
    goto LABEL_14;
  }
  v59 = *(_QWORD *)(v11 + 32);
  v18 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v59 + 8))(v59, *(unsigned int *)(v11 + 40), v60);
  v55 = v18;
  if ( !v18 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v56);
LABEL_60:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
  LOBYTE(v19) = v46;
  if ( v17 )
  {
    v19 = (unsigned __int8)v46;
    if ( *(_QWORD *)(v11 + 288) == v17 )
      v19 = 1;
    v46 = v19;
  }
LABEL_14:
  v20 = 0;
  v21 = 0;
  while ( 1 )
  {
    Size_4 = v21;
    v22 = 0LL;
    if ( v21 >= v68 )
      break;
    v23 = (unsigned __int16 *)(v67 + 32LL * v21);
    v57 = v23;
    for ( i = *v23; i && !*(_WORD *)(*((_QWORD *)v23 + 1) + 2 * ((unsigned __int64)i >> 1) - 2); *v23 = i )
      i -= 2;
    ValueByName = -1;
    v44 = -1;
    if ( v11 )
    {
      v26 = v59;
      v49 = v59;
      if ( (_BYTE)v19 )
      {
        CmpFindNameInList(v59, v11 + 280, (_DWORD)v23, 0, 0LL, (__int64)&v44);
        ValueByName = v44;
      }
      else
      {
        ValueByName = CmpFindValueByName(v59, v18);
        v44 = ValueByName;
      }
      LODWORD(v23) = (_DWORD)v57;
    }
    else
    {
      v26 = v49;
    }
    if ( ValueByName == -1 )
    {
      v26 = v13;
      v49 = v13;
      if ( (_BYTE)v47 )
      {
        CmpFindNameInList(v13, v12 + 280, (_DWORD)v23, 0, 0LL, (__int64)&v44);
        ValueByName = v44;
      }
      else
      {
        ValueByName = CmpFindValueByName(v13, v63);
      }
      if ( ValueByName == -1 )
      {
        v20 = -1073741772;
        v22 = 0LL;
        break;
      }
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(v26 + 8))(v26, ValueByName, v54, v18);
    v22 = v27;
    v62 = v27;
    if ( !v27 )
      goto LABEL_75;
    v28 = *(_DWORD *)(v27 + 4);
    if ( v28 >= 0x80000000 )
      v28 += 0x80000000;
    Size = v28;
    v29 = (v43 + 3) & 0xFFFFFFFC;
    v43 = v29;
    LODWORD(v48) = v29;
    v30 = (v45 + 3) & 0xFFFFFFFC;
    v45 = v30;
    v44 = v30;
    if ( v28 + v29 > *a6 || v28 + v29 < v29 || v42 )
    {
      v42 = 1;
      v32 = v49;
    }
    else
    {
      v31 = ValueByName;
      v32 = v49;
      if ( !CmpGetValueData(v49, v31, v27, &Size, (__int64)&Src, (__int64)&v66, (__int64)v58) )
      {
LABEL_75:
        v20 = -1073741670;
        v35 = v52;
        goto LABEL_41;
      }
      v28 = Size;
      memmove((void *)(a5 + v43), Src, Size);
      v33 = v57;
      *((_DWORD *)v57 + 6) = *(_DWORD *)(v22 + 12);
      *((_DWORD *)v33 + 4) = v28;
      *((_DWORD *)v33 + 5) = v43;
      if ( v66 )
      {
        ExFreePoolWithTag(Src, 0);
        v66 = 0;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v58);
      }
      Src = 0LL;
      v43 += v28;
      v30 = v45;
    }
    v45 = v28 + v30;
    (*(void (__fastcall **)(__int64, _DWORD *))(v32 + 16))(v32, v54);
    v21 = Size_4 + 1;
    v13 = v52;
    v18 = v55;
    LOBYTE(v19) = v46;
  }
  v34 = v45;
  v35 = v52;
  if ( v20 >= 0 )
  {
    if ( v42 )
      v20 = -2147483643;
    *a6 = v43;
    if ( a7 )
      *a7 = v34;
  }
LABEL_41:
  if ( v22 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v49 + 16))(v49, v54, v16, v18);
  if ( v55 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v59 + 16))(v59, v60, v16, v18);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v35 + 16))(v35, v56, v16, v18);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry();
  return (unsigned int)v20;
}
