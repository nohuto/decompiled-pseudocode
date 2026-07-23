/*
 * XREFs of EtwpPoolRunDown @ 0x14093E4D0
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14079763C (EtwpKernelTraceRundown.c)
 * Callees:
 *     ExGetSessionPoolTagInfo @ 0x14021564C (ExGetSessionPoolTagInfo.c)
 *     MmDetachSession @ 0x140215920 (MmDetachSession.c)
 *     MmAttachSession @ 0x1402159C0 (MmAttachSession.c)
 *     MmGetSessionId @ 0x1402863C0 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x1402872E0 (MmGetNextSession.c)
 *     EtwpLogKernelEvent @ 0x14035AD50 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExGetBigPoolInfo @ 0x1405B398C (ExGetBigPoolInfo.c)
 *     ExGetPoolTagInfo @ 0x1406B47B8 (ExGetPoolTagInfo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpPoolRunDown(__int64 a1, char a2)
{
  int *v2; // rbx
  char v3; // r12
  unsigned int v5; // edi
  unsigned __int16 v6; // si
  int *PoolWithTag; // rax
  int PoolTagInfo; // eax
  unsigned int v9; // edi
  int *v10; // r14
  unsigned int v11; // r8d
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // edi
  int *v15; // rax
  int BigPoolInfo; // eax
  unsigned int v17; // edi
  int *v18; // r14
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v21; // eax
  struct _DMA_ADAPTER *j; // rcx
  unsigned int v23; // esi
  unsigned int v24; // r14d
  int *v25; // rax
  int SessionPoolTagInfo; // eax
  unsigned int v27; // esi
  int *v28; // r14
  unsigned int v29; // r8d
  __int64 v30; // rdx
  int v31; // eax
  unsigned int v32; // esi
  int *v33; // rax
  int v34; // eax
  unsigned int v35; // esi
  int *v36; // r15
  unsigned int v37; // r8d
  __int64 v38; // rdx
  int v39; // eax
  ULONG_PTR NextSession; // rax
  __int64 v41; // rdi
  unsigned int v43; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned int i; // [rsp+40h] [rbp-41h] BYREF
  int SessionId; // [rsp+44h] [rbp-3Dh] BYREF
  int v46; // [rsp+48h] [rbp-39h] BYREF
  _OWORD v47[3]; // [rsp+50h] [rbp-31h] BYREF
  unsigned int *v48; // [rsp+80h] [rbp-1h] BYREF
  int v49; // [rsp+88h] [rbp+7h]
  int v50; // [rsp+8Ch] [rbp+Bh]
  int *p_SessionId; // [rsp+90h] [rbp+Fh]
  int v52; // [rsp+98h] [rbp+17h]
  int v53; // [rsp+9Ch] [rbp+1Bh]
  int *v54; // [rsp+A0h] [rbp+1Fh]
  int v55; // [rsp+A8h] [rbp+27h]
  int v56; // [rsp+ACh] [rbp+2Bh]

  v46 = 0;
  v43 = 0;
  v2 = 0LL;
  SessionId = 0;
  v50 = 0;
  v3 = a2;
  v48 = &v43;
  v49 = 4;
  v5 = 48;
  i = 48;
  v6 = 3625 - (a2 != 0);
  memset(v47, 0, sizeof(v47));
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = (int *)ExAllocatePoolWithTag(PagedPool, v5, 0x74777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    PoolTagInfo = ExGetPoolTagInfo(PoolWithTag, v5, (int *)&i);
    if ( PoolTagInfo != -1073741820 )
    {
      if ( PoolTagInfo >= 0 )
      {
        v9 = *v2;
        v10 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v11 = *(_DWORD *)a1;
            v12 = *(_QWORD *)(a1 + 1080);
            v13 = v9;
            p_SessionId = v10;
            if ( v9 > 0x64 )
              v13 = 100;
            v53 = 0;
            v43 = v13;
            v52 = 40 * v13;
            EtwpLogKernelEvent((__int64)&v48, v12, v11, 2u, v6, 0x401802u);
            v10 += 10 * v43;
            v9 -= v43;
          }
          while ( v9 );
          v3 = a2;
        }
      }
      break;
    }
    v5 = i;
  }
  v14 = 32;
  for ( i = 32; ; v14 = i )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    v15 = (int *)ExAllocatePoolWithTag(PagedPool, v14, 0x74777445u);
    v2 = v15;
    if ( !v15 )
      break;
    BigPoolInfo = ExGetBigPoolInfo(v15, v14, 1, &i);
    if ( BigPoolInfo != -1073741820 )
    {
      if ( BigPoolInfo >= 0 )
      {
        v17 = *v2;
        v18 = v2 + 2;
        if ( *v2 )
        {
          do
          {
            v19 = *(_DWORD *)a1;
            v20 = *(_QWORD *)(a1 + 1080);
            v21 = v17;
            p_SessionId = v18;
            if ( v17 > 0x64 )
              v21 = 100;
            v53 = 0;
            v43 = v21;
            v52 = 24 * v21;
            EtwpLogKernelEvent((__int64)&v48, v20, v19, 2u, 3627 - (v3 != 0), 0x401802u);
            v18 += 6 * v43;
            v17 -= v43;
          }
          while ( v17 );
          v3 = a2;
        }
      }
      break;
    }
  }
  for ( j = 0LL; ; j = (struct _DMA_ADAPTER *)v41 )
  {
    NextSession = MmGetNextSession(j);
    v41 = NextSession;
    if ( !NextSession )
      break;
    if ( (int)MmAttachSession(NextSession) >= 0 )
    {
      SessionId = MmGetSessionId(v41);
      v23 = 4000;
      v24 = 4000;
      while ( 1 )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v25 = (int *)ExAllocatePoolWithTag(PagedPool, v24, 0x74777445u);
        v2 = v25;
        if ( !v25 )
          break;
        SessionPoolTagInfo = ExGetSessionPoolTagInfo(v25, v23, &v43, &v46);
        v23 = 40 * v46;
        v24 = 40 * v46;
        if ( SessionPoolTagInfo != -1073741820 )
        {
          if ( SessionPoolTagInfo >= 0 )
          {
            v53 = 0;
            v27 = v43;
            v28 = v2;
            p_SessionId = &SessionId;
            v52 = 4;
            if ( v43 )
            {
              do
              {
                v29 = *(_DWORD *)a1;
                v30 = *(_QWORD *)(a1 + 1080);
                v31 = v27;
                v54 = v28;
                if ( v27 > 0x64 )
                  v31 = 100;
                v56 = 0;
                v43 = v31;
                v55 = 40 * v31;
                EtwpLogKernelEvent((__int64)&v48, v30, v29, 3u, 3629 - (v3 != 0), 0x401802u);
                v28 += 10 * v43;
                v27 -= v43;
              }
              while ( v27 );
              v3 = a2;
            }
          }
          break;
        }
      }
      v32 = 40;
      for ( i = 40; ; v32 = i )
      {
        if ( v2 )
          ExFreePoolWithTag(v2, 0);
        v33 = (int *)ExAllocatePoolWithTag(PagedPool, v32, 0x74777445u);
        v2 = v33;
        if ( !v33 )
          break;
        v34 = ExGetBigPoolInfo(v33, v32, 0, &i);
        if ( v34 != -1073741820 )
        {
          if ( v34 >= 0 )
          {
            v53 = 0;
            v35 = v2[3];
            v36 = v2 + 4;
            p_SessionId = &SessionId;
            v52 = 4;
            if ( v35 )
            {
              do
              {
                v37 = *(_DWORD *)a1;
                v38 = *(_QWORD *)(a1 + 1080);
                v39 = v35;
                v54 = v36;
                if ( v35 > 0x64 )
                  v39 = 100;
                v56 = 0;
                v43 = v39;
                v55 = 24 * v39;
                EtwpLogKernelEvent((__int64)&v48, v38, v37, 3u, 3631 - (v3 != 0), 0x401802u);
                v36 += 6 * v43;
                v35 -= v43;
              }
              while ( v35 );
              v3 = a2;
            }
          }
          break;
        }
      }
      MmDetachSession(v41, (__int64)v47);
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
