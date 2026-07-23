/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x1403BF62C
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x1407532F8 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     IopResourceRequirementsListToReqList @ 0x140751A14 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x1407524A4 (IopCallArbiter.c)
 *     IopFreeReqList @ 0x140753228 (IopFreeReqList.c)
 *     PnpCmResourcesToIoResources @ 0x1407B6210 (PnpCmResourcesToIoResources.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  void *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rsi
  unsigned int v17; // r8d
  __int64 i; // rdx
  __int64 v19; // rax
  _QWORD *v21; // rax
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _QWORD v25[12]; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v26[8]; // [rsp+98h] [rbp+7h] BYREF

  memset(v25, 0, sizeof(v25));
  v2 = 0LL;
  memset(v26, 0, sizeof(v26));
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( !v6 || (v7 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v7) == 0LL) )
  {
    v8 = -1073741823;
    goto LABEL_15;
  }
  HIDWORD(v26[1]) = 4;
  v26[3] = v7;
  v26[0] = v4;
  v8 = IopResourceRequirementsListToReqList(v26, &v26[4]);
  if ( v8 < 0 )
  {
LABEL_15:
    v9 = (void *)v26[4];
    goto LABEL_16;
  }
  v9 = (void *)v26[4];
  if ( !v26[4] )
    goto LABEL_18;
  v10 = *(_QWORD *)(v26[4] + 40LL);
  v8 = 0;
  v11 = a1[4];
  v12 = 0LL;
  v13 = *(__int64 **)(v11 + 16);
  v14 = *(_QWORD *)(v5 + 32);
  v15 = *v13;
  v25[6] = 0LL;
  v25[9] = 0LL;
  v25[4] = v14;
  v25[5] = 4LL;
  if ( *(_DWORD *)(v10 + 20) )
  {
    do
    {
      v16 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12 + 24) + 288LL);
      if ( v16 )
      {
        v17 = *(_DWORD *)(v15 + 20);
        for ( i = 0LL; (unsigned int)i < v17; i = (unsigned int)(i + 1) )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v15 + 8 * i + 24) + 288LL);
          if ( v19 && *(_BYTE *)(v16 + 16) == *(_BYTE *)(v19 + 16) )
            break;
        }
        if ( (_DWORD)i == v17 )
        {
          v25[1] = v25;
          v25[0] = v25;
          v21 = *(_QWORD **)(v16 + 48);
          if ( *v21 != v16 + 40 )
            goto LABEL_27;
          v25[1] = *(_QWORD *)(v16 + 48);
          v25[0] = v16 + 40;
          *v21 = v25;
          *(_QWORD *)(v16 + 48) = v25;
          v22 = IopCallArbiter(v16, 0LL);
          v23 = v25[0];
          v8 = v22;
          v24 = v25[1];
          if ( *(_QWORD **)(v25[0] + 8LL) != v25 || *(_QWORD **)v25[1] != v25 )
LABEL_27:
            __fastfail(3u);
          *(_QWORD *)v25[1] = v25[0];
          *(_QWORD *)(v23 + 8) = v24;
          if ( v8 < 0 )
            break;
          v8 = IopCallArbiter(v16, 2LL);
          if ( v8 < 0 )
            break;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v10 + 20) );
    goto LABEL_15;
  }
LABEL_16:
  if ( v9 )
    IopFreeReqList(v9);
LABEL_18:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v8;
}
