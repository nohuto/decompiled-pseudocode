/*
 * XREFs of CmEnumerateValueKeyFromMergedView @ 0x14086F570
 * Callers:
 *     NtEnumerateValueKey @ 0x1406E4050 (NtEnumerateValueKey.c)
 *     CmQueryKey @ 0x1406E4F70 (CmQueryKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1405DED94 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFindNameInList @ 0x14065E418 (CmpFindNameInList.c)
 *     CmpLockTwoKcbsShared @ 0x1406E3020 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1406E30B0 (CmpUnlockTwoKcbs.c)
 *     CmpQueryKeyValueData @ 0x1406E7610 (CmpQueryKeyValueData.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x14070D2F0 (CmpLockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1407139E0 (CmpIsKeyDeletedForKeyBody.c)
 */

__int64 __fastcall CmEnumerateValueKeyFromMergedView(
        __int64 a1,
        __int64 a2,
        char a3,
        unsigned int a4,
        int a5,
        _DWORD *Size,
        unsigned int a7,
        unsigned int *a8,
        unsigned int *a9)
{
  __int64 v12; // r15
  int KeyValueData; // ebx
  unsigned int *v14; // r12
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // r14
  char v17; // al
  unsigned int *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // esi
  unsigned int v23; // r15d
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 (__fastcall *v28)(__int64, __int64, _DWORD *); // rax
  __int64 v29; // rax
  __int64 v30; // r13
  __int16 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rsi
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(__int64, __int64, _DWORD *); // rax
  int v39; // [rsp+48h] [rbp-69h]
  int v40; // [rsp+4Ch] [rbp-65h] BYREF
  int v41[2]; // [rsp+50h] [rbp-61h] BYREF
  _DWORD v42[2]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v43; // [rsp+60h] [rbp-51h]
  unsigned int *v44; // [rsp+68h] [rbp-49h]
  _DWORD v45[2]; // [rsp+70h] [rbp-41h] BYREF
  __int64 v46; // [rsp+78h] [rbp-39h]
  _DWORD v47[2]; // [rsp+80h] [rbp-31h] BYREF
  _DWORD v48[2]; // [rsp+88h] [rbp-29h] BYREF
  _DWORD v49[2]; // [rsp+90h] [rbp-21h] BYREF
  __int64 v50; // [rsp+98h] [rbp-19h]
  __int128 v51; // [rsp+A0h] [rbp-11h] BYREF
  int v52; // [rsp+F8h] [rbp+47h]

  *(_QWORD *)v41 = 0LL;
  v50 = 0LL;
  v48[0] = -1;
  v48[1] = 0;
  v46 = 0LL;
  v49[0] = -1;
  v12 = 0LL;
  v49[1] = 0;
  KeyValueData = 0;
  v44 = 0LL;
  v14 = 0LL;
  v52 = 0;
  v39 = 0;
  v43 = 0LL;
  v45[0] = -1;
  v45[1] = 0;
  v47[0] = -1;
  v47[1] = 0;
  v42[0] = -1;
  v42[1] = 0;
  v40 = 0;
  v51 = 0LL;
  if ( !a3 )
    CmpLockRegistry();
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, v41);
    if ( KeyValueData < 0 )
    {
      if ( !a3 )
        goto LABEL_67;
      return (unsigned int)KeyValueData;
    }
    v12 = *(_QWORD *)v41;
  }
  v15 = *(_QWORD *)(a1 + 8);
  v16 = *(_QWORD *)(a2 + 8);
  if ( !a3 )
    CmpLockTwoKcbsShared(*(_QWORD *)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( CmpIsKeyDeletedForKeyBody(a1, v12) )
  {
    v17 = *(_BYTE *)(a1 + 48);
LABEL_13:
    KeyValueData = (v17 & 1) != 0 ? -1073740763 : -1073741444;
    goto LABEL_65;
  }
  if ( CmpIsKeyDeletedForKeyBody(a2, v12) )
  {
    v17 = *(_BYTE *)(a2 + 48);
    goto LABEL_13;
  }
  if ( !v12 )
    goto LABEL_23;
  if ( *(_QWORD *)(v15 + 288) == v12 )
  {
    v18 = (unsigned int *)(v15 + 280);
    v44 = (unsigned int *)(v15 + 280);
  }
  else
  {
    v18 = 0LL;
  }
  if ( *(_QWORD *)(v16 + 288) == v12 )
    v14 = (unsigned int *)(v16 + 280);
  if ( !v18 )
  {
LABEL_23:
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 8LL))(
            *(_QWORD *)(v15 + 32),
            *(unsigned int *)(v15 + 40),
            v48);
    v50 = v19;
    if ( !v19 )
    {
      KeyValueData = -1073741670;
      goto LABEL_65;
    }
    v18 = (unsigned int *)(v19 + 36);
    v44 = (unsigned int *)(v19 + 36);
  }
  if ( v14 )
    goto LABEL_30;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 32) + 8LL))(
          *(_QWORD *)(v16 + 32),
          *(unsigned int *)(v16 + 40),
          v49);
  v46 = v20;
  v21 = v20;
  if ( v20 )
  {
    v14 = (unsigned int *)(v20 + 36);
LABEL_30:
    v22 = 0;
    v23 = 0;
    while ( v23 < *v18 )
    {
      v24 = v43;
      if ( !v43 )
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 8LL))(
                *(_QWORD *)(v15 + 32),
                v18[1],
                v45);
        v43 = v24;
        if ( !v24 )
        {
          KeyValueData = -1073741670;
          goto LABEL_60;
        }
      }
      v25 = v23;
      v26 = *(_QWORD *)(v15 + 32);
      v27 = *(unsigned int *)(v24 + 4 * v25);
      v28 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v26 + 8);
      v41[0] = v27;
      v29 = v28(v26, v27, v42);
      v30 = v29;
      if ( !v29 )
      {
        KeyValueData = -1073741670;
LABEL_46:
        v33 = 0LL;
        goto LABEL_56;
      }
      v31 = *(_WORD *)(v29 + 16);
      *((_QWORD *)&v51 + 1) = v29 + 20;
      LOWORD(v51) = *(_WORD *)(v29 + 2);
      if ( CmpFindNameInList(*(_QWORD *)(v16 + 32), v14, (__int64)&v51, (v31 & 1) << 16, 0LL, (__int64)&v40)
        && v40 == -1 )
      {
        if ( v22 == a4 )
        {
          v32 = v15;
          v33 = 0LL;
          goto LABEL_54;
        }
        v39 = ++v22;
      }
      v23 = ++v52;
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 16LL))(*(_QWORD *)(v15 + 32), v42);
      if ( v43 )
      {
        (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 16LL))(*(_QWORD *)(v15 + 32), v45);
        v43 = 0LL;
      }
      if ( v22 > a4 )
        goto LABEL_46;
      v18 = v44;
    }
    v34 = v22 + *v14;
    if ( v34 <= a4 )
    {
      KeyValueData = -2147483622;
      if ( a9 )
        *a9 = v34;
      goto LABEL_46;
    }
    v35 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *))(*(_QWORD *)(v16 + 32) + 8LL))(
            *(_QWORD *)(v16 + 32),
            v14[1],
            v47);
    v33 = v35;
    if ( !v35
      || (v26 = *(_QWORD *)(v16 + 32),
          v36 = *(unsigned int *)(v35 + 4LL * (a4 - v39)),
          v37 = *(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(v26 + 8),
          v41[0] = v36,
          (v30 = v37(v26, v36, v42)) == 0) )
    {
      KeyValueData = -1073741670;
      goto LABEL_56;
    }
    v32 = v16;
LABEL_54:
    KeyValueData = CmpQueryKeyValueData(v32, v41[0], v30, a5, Size, a7, a8);
    if ( v30 )
      (*(void (__fastcall **)(__int64, _DWORD *))(v26 + 16))(v26, v42);
LABEL_56:
    if ( v43 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 16LL))(*(_QWORD *)(v15 + 32), v45);
    if ( v33 )
      (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 32) + 16LL))(*(_QWORD *)(v16 + 32), v47);
LABEL_60:
    v21 = v46;
    goto LABEL_61;
  }
  KeyValueData = -1073741670;
LABEL_61:
  if ( v50 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v15 + 32) + 16LL))(*(_QWORD *)(v15 + 32), v48);
  if ( v21 )
    (*(void (__fastcall **)(_QWORD, _DWORD *))(*(_QWORD *)(v16 + 32) + 16LL))(*(_QWORD *)(v16 + 32), v49);
LABEL_65:
  if ( !a3 )
  {
    CmpUnlockTwoKcbs(v15, v16);
LABEL_67:
    CmpUnlockRegistry();
  }
  return (unsigned int)KeyValueData;
}
