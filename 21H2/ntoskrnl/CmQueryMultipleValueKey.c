/*
 * XREFs of CmQueryMultipleValueKey @ 0x14065E494
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140601D50 (NtQueryMultipleValueKey.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14065B100 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFindNameInList @ 0x14065E418 (CmpFindNameInList.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpLockTwoKcbsShared @ 0x1406E3020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmpGetValueData @ 0x1406E7B70 (CmpGetValueData.c)
 *     CmpUnlockKcb @ 0x140709F20 (CmpUnlockKcb.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C6A8 (CmQueryMultipleValueForLayeredKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  int v8; // r12d
  __int64 v11; // r14
  ULONG_PTR v12; // rsi
  ULONG_PTR v13; // r12
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r9
  __int64 v18; // r8
  int v19; // edi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r13
  unsigned __int16 i; // dx
  unsigned int ValueByName; // r15d
  __int64 v25; // r12
  __int64 v26; // rax
  unsigned int v27; // r12d
  unsigned int v28; // ecx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  __int64 v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rdx
  unsigned int v34; // edx
  ULONG_PTR v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  unsigned int MultipleValueForLayeredKey; // ebx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // r12d
  __int64 v49; // rdx
  __int64 v50; // rcx
  int v51; // eax
  char v52; // [rsp+40h] [rbp-E8h]
  unsigned int v53; // [rsp+44h] [rbp-E4h]
  int v54; // [rsp+48h] [rbp-E0h] BYREF
  unsigned int v55; // [rsp+4Ch] [rbp-DCh]
  unsigned int v56; // [rsp+50h] [rbp-D8h]
  __int64 v57; // [rsp+58h] [rbp-D0h]
  int v58; // [rsp+60h] [rbp-C8h]
  __int64 v59; // [rsp+68h] [rbp-C0h] BYREF
  unsigned int Size; // [rsp+70h] [rbp-B8h] BYREF
  int Size_4; // [rsp+74h] [rbp-B4h]
  ULONG_PTR v62; // [rsp+78h] [rbp-B0h]
  void *Src; // [rsp+80h] [rbp-A8h] BYREF
  _DWORD v64[2]; // [rsp+88h] [rbp-A0h] BYREF
  __int64 v65; // [rsp+90h] [rbp-98h]
  _DWORD v66[2]; // [rsp+98h] [rbp-90h] BYREF
  _DWORD v67[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v68; // [rsp+A8h] [rbp-80h]
  _DWORD v69[2]; // [rsp+B0h] [rbp-78h] BYREF
  __int64 v70; // [rsp+B8h] [rbp-70h]
  __int64 v71; // [rsp+C0h] [rbp-68h]
  __int64 v72; // [rsp+C8h] [rbp-60h]
  __int64 v73; // [rsp+D0h] [rbp-58h]
  ULONG_PTR v74; // [rsp+D8h] [rbp-50h]
  ULONG_PTR v75; // [rsp+E0h] [rbp-48h]
  char v76; // [rsp+130h] [rbp+8h] BYREF
  __int64 v77; // [rsp+140h] [rbp+18h]
  unsigned int v78; // [rsp+148h] [rbp+20h]

  v78 = a4;
  v77 = a3;
  v8 = a3;
  v68 = 0LL;
  v57 = 0LL;
  v64[0] = -1;
  v64[1] = 0;
  v55 = 0;
  v53 = 0;
  v52 = 0;
  v66[0] = -1;
  v66[1] = 0;
  v65 = 0LL;
  v69[0] = -1;
  v69[1] = 0;
  v11 = 0LL;
  v70 = 0LL;
  v59 = 0LL;
  LOBYTE(v58) = 0;
  LOBYTE(v56) = 0;
  Src = 0LL;
  v76 = 0;
  v67[0] = -1;
  v67[1] = 0;
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v75 = v12;
  if ( *(_WORD *)(v12 + 66) )
  {
    MultipleValueForLayeredKey = CmQueryMultipleValueForLayeredKey(a1, v8, a4, a5, (__int64)a6, (__int64)a7);
    CmpUnlockRegistry(v41, v40);
    return MultipleValueForLayeredKey;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    ExAcquirePushLockSharedEx(v12 + 48, 0LL);
    _InterlockedAdd((volatile signed __int32 *)(v12 + 56), 1u);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v42 = (*(_DWORD *)(a1 + 48) & 1) != 0 ? 0x2A9 : 0;
      CmpUnlockKcb(v12);
LABEL_51:
      CmpUnlockRegistry(v44, v43);
      return (unsigned int)(v42 - 1073741444);
    }
    CmpUnlockKcb(v12);
    v48 = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, &v59);
    if ( v48 < 0 )
    {
      CmpUnlockRegistry(v47, v46);
      return (unsigned int)v48;
    }
  }
  if ( a2 )
  {
    v11 = *(_QWORD *)(a2 + 8);
    v70 = v11;
  }
  CmpLockTwoKcbsShared(v11, v12);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v59) )
  {
    v45 = *(_DWORD *)(a1 + 48);
LABEL_50:
    v42 = (v45 & 1) != 0 ? 0x2A9 : 0;
    CmpUnlockTwoKcbs(v11, v12);
    goto LABEL_51;
  }
  if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v59) )
  {
    v45 = *(_DWORD *)(a2 + 48);
    goto LABEL_50;
  }
  v13 = *(_QWORD *)(v12 + 32);
  v62 = v13;
  v74 = v13;
  v14 = (volatile signed __int64 *)(v13 + 72);
  ExAcquirePushLockSharedEx(v13 + 72, 0LL);
  v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v13 + 8))(v13, *(unsigned int *)(v12 + 40), v66);
  v72 = v15;
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
  v16 = v59;
  if ( v59 )
  {
    v51 = (unsigned __int8)v58;
    if ( *(_QWORD *)(v12 + 288) == v59 )
      v51 = 1;
    v58 = v51;
  }
  if ( !v11 )
  {
    v17 = 0LL;
    v18 = v56;
    goto LABEL_14;
  }
  v68 = *(_QWORD *)(v11 + 32);
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(v68 + 8))(v68, *(unsigned int *)(v11 + 40), v69);
  v65 = v17;
  if ( !v17 )
  {
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v13 + 16))(v13, v66);
LABEL_60:
    CmpUnlockTwoKcbs(v11, v12);
    CmpUnlockRegistry(v50, v49);
    return 3221225626LL;
  }
  v18 = v56;
  if ( v16 )
  {
    v18 = (unsigned __int8)v56;
    if ( *(_QWORD *)(v11 + 288) == v16 )
      v18 = 1LL;
    v56 = v18;
  }
LABEL_14:
  v19 = 0;
  v20 = 0LL;
  while ( 1 )
  {
    Size_4 = v20;
    v21 = 0LL;
    if ( (unsigned int)v20 >= v78 )
      goto LABEL_35;
    v73 = 3 * v20;
    v22 = *(_QWORD *)(v77 + 24 * v20);
    for ( i = *(_WORD *)v22; i && !*(_WORD *)(*(_QWORD *)(v22 + 8) + 2 * ((unsigned __int64)i >> 1) - 2); *(_WORD *)v22 = i )
      i -= 2;
    ValueByName = -1;
    v54 = -1;
    if ( v11 )
    {
      v57 = v68;
      if ( (_BYTE)v18 )
      {
        CmpFindNameInList(v68, (unsigned int *)(v11 + 280), v22, 0, 0LL, (__int64)&v54);
        ValueByName = v54;
      }
      else
      {
        ValueByName = CmpFindValueByName(v68, v17, v22);
        v54 = ValueByName;
      }
    }
    if ( ValueByName == -1 )
    {
      v57 = v13;
      if ( (_BYTE)v58 )
      {
        CmpFindNameInList(v13, (unsigned int *)(v12 + 280), v22, 0, 0LL, (__int64)&v54);
        ValueByName = v54;
      }
      else
      {
        ValueByName = CmpFindValueByName(v13, v72, v22);
      }
      if ( ValueByName == -1 )
      {
        v19 = -1073741772;
        v21 = 0LL;
LABEL_35:
        v34 = v55;
        v35 = v62;
        if ( v19 >= 0 )
        {
          if ( v52 )
            v19 = -2147483643;
          *a6 = v53;
          if ( a7 )
            *a7 = v34;
        }
LABEL_40:
        v25 = v57;
        goto LABEL_41;
      }
    }
    v25 = v57;
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, __int64))(v57 + 8))(v57, ValueByName, v64, v17);
    v21 = v26;
    v71 = v26;
    if ( !v26 )
      break;
    v27 = *(_DWORD *)(v26 + 4);
    if ( v27 >= 0x80000000 )
      v27 += 0x80000000;
    Size = v27;
    v28 = (v53 + 3) & 0xFFFFFFFC;
    v53 = v28;
    LODWORD(v59) = v28;
    v29 = (v55 + 3) & 0xFFFFFFFC;
    v55 = v29;
    v54 = v29;
    if ( v27 + v28 > *a6 || v27 + v28 < v28 || v52 )
    {
      v52 = 1;
      v31 = v57;
    }
    else
    {
      v30 = ValueByName;
      v31 = v57;
      if ( !(unsigned __int8)CmpGetValueData(
                               v57,
                               v30,
                               v26,
                               (unsigned int)&Size,
                               (__int64)&Src,
                               (__int64)&v76,
                               (__int64)v67) )
      {
        v19 = -1073741670;
        v35 = v62;
        goto LABEL_40;
      }
      v27 = Size;
      memmove((void *)(a5 + v53), Src, Size);
      v32 = v73;
      v33 = v77;
      *(_DWORD *)(v77 + 8 * v73 + 16) = *(_DWORD *)(v21 + 12);
      *(_DWORD *)(v33 + 8 * v32 + 8) = v27;
      *(_DWORD *)(v33 + 8 * v32 + 12) = v53;
      if ( v76 )
      {
        ExFreePoolWithTag(Src, 0);
        v76 = 0;
      }
      else
      {
        (*(void (__fastcall **)(__int64, _DWORD *))(v31 + 16))(v31, v67);
      }
      Src = 0LL;
      v53 += v27;
      v29 = v55;
    }
    v55 = v27 + v29;
    (*(void (__fastcall **)(__int64, _DWORD *))(v31 + 16))(v31, v64);
    v20 = (unsigned int)(Size_4 + 1);
    v13 = v62;
    v17 = v65;
    v18 = v56;
  }
  v19 = -1073741670;
  v35 = v62;
LABEL_41:
  if ( v21 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v25 + 16))(v25, v64, v18, v17);
  if ( v65 )
    (*(void (__fastcall **)(__int64, _DWORD *, __int64, __int64))(v68 + 16))(v68, v69, v18, v17);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *, __int64, __int64))(v35 + 16))(v35, v66, v18, v17);
  CmpUnlockTwoKcbs(v11, v12);
  CmpUnlockRegistry(v37, v36);
  return (unsigned int)v19;
}
