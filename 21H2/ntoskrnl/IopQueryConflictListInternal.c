/*
 * XREFs of IopQueryConflictListInternal @ 0x1408B9A4C
 * Callers:
 *     IopQueryConflictList @ 0x1408B99B4 (IopQueryConflictList.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     IopResourceRequirementsListToReqList @ 0x140751A14 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x1407524A4 (IopCallArbiter.c)
 *     IopFreeReqList @ 0x140753228 (IopFreeReqList.c)
 *     PnpCmResourcesToIoResources @ 0x1407B6210 (PnpCmResourcesToIoResources.c)
 *     IopQueryConflictFillConflicts @ 0x1408B946C (IopQueryConflictFillConflicts.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopQueryConflictListInternal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  __int64 v8; // rdx
  int ConflictFillConflicts; // ebx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // eax
  int v13; // eax
  char *v14; // rax
  char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 v19; // rcx
  char v20; // al
  int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-69h] BYREF
  PVOID P; // [rsp+38h] [rbp-61h] BYREF
  PVOID v25[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v26[8]; // [rsp+50h] [rbp-49h] BYREF
  __int128 v27; // [rsp+90h] [rbp-9h] BYREF
  __int128 v28; // [rsp+A0h] [rbp+7h]

  v23 = 0;
  P = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  memset(v26, 0, sizeof(v26));
  v25[0] = 0LL;
  a4[2] = 0;
  a4[3] = 0;
  a4[4] = 32;
  if ( a1 )
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v8 = 0LL;
  if ( !v8 )
    return (unsigned int)-1073741810;
  if ( *(_BYTE *)(a2 + 20) == 1 )
    goto LABEL_12;
  if ( *(_BYTE *)(a2 + 20) != 2 )
  {
    if ( *(_BYTE *)(a2 + 20) == 3 )
    {
LABEL_12:
      if ( !*(_DWORD *)(a2 + 32) )
        return 0;
      goto LABEL_14;
    }
    if ( *(_BYTE *)(a2 + 20) != 4 )
    {
      if ( *(_BYTE *)(a2 + 20) != 7 )
        return (unsigned int)-1073741811;
      goto LABEL_12;
    }
  }
LABEL_14:
  v10 = *(_DWORD *)(v8 + 456);
  v11 = *(_QWORD *)(v8 + 440);
  if ( v10 == -1 )
  {
    if ( !v11 || (v10 = *(_DWORD *)(v11 + 4), v10 == -1) )
      v10 = 1;
  }
  v12 = v10;
  if ( v10 == 8 )
    v12 = 1;
  *(_DWORD *)(a2 + 4) = v12;
  v13 = *(_DWORD *)(v8 + 460);
  if ( v13 == -1 )
  {
    if ( !v11 || (v13 = *(_DWORD *)(v11 + 8), v13 == -1) )
      v13 = 0;
  }
  *(_DWORD *)(a2 + 8) = v13;
  v14 = PnpCmResourcesToIoResources(0xFFFFFFFFLL, (_DWORD *)a2, 0);
  v15 = v14;
  if ( v14 )
  {
    HIDWORD(v26[1]) = -1;
    v26[0] = a1;
    v26[3] = v14;
    ConflictFillConflicts = IopResourceRequirementsListToReqList((__int64)v26, v25);
    if ( ConflictFillConflicts >= 0 )
    {
      if ( v25[0]
        && (v16 = *((_QWORD *)v25[0] + 5), *((_QWORD *)v25[0] + 2) = (char *)v25[0] + 40, *(_DWORD *)(v16 + 20) == 1)
        && (v17 = *(_QWORD *)(v16 + 24), *(_BYTE *)(v17 + 8)) )
      {
        v18 = *(_QWORD *)(v17 + 288);
        v19 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 64LL);
        v20 = *(_BYTE *)(v19 + 1);
        if ( v20 == (char)0x80 || v20 == -16 )
          v19 += 32LL;
        *((_QWORD *)&v27 + 1) = v19;
        *(_QWORD *)&v28 = &v23;
        *(_QWORD *)&v27 = a1;
        *((_QWORD *)&v28 + 1) = &P;
        v21 = IopCallArbiter(v18, 6LL, &v27);
        ConflictFillConflicts = v21;
        if ( v21 < 0 )
        {
          if ( v21 == -1073741172 )
            ConflictFillConflicts = IopQueryConflictFillConflicts(0LL, 0, 0LL, (__int64)a4, a5, 4);
        }
        else
        {
          ConflictFillConflicts = IopQueryConflictFillConflicts(a1, v23, P, (__int64)a4, a5, 0);
          if ( P )
            ExFreePoolWithTag(P, 0);
        }
      }
      else
      {
        ConflictFillConflicts = -1073741811;
      }
    }
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    ConflictFillConflicts = -1073741811;
  }
  if ( v25[0] )
    IopFreeReqList((_QWORD *)v25[0]);
  return (unsigned int)ConflictFillConflicts;
}
