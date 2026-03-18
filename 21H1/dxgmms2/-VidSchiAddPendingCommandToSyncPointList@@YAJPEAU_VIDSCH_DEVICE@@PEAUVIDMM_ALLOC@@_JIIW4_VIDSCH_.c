/*
 * XREFs of ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0004BDC
 * Callers:
 *     VidSchSubmitDeviceCommand @ 0x1C00059B0 (VidSchSubmitDeviceCommand.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 *     ??_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z @ 0x1C0029F70 (--_G_VIDSCH_SYNC_POINT@@QEAAPEAXI@Z.c)
 *     McTemplateK0pxqPR2XR2_EtwWriteTransfer @ 0x1C0033960 (McTemplateK0pxqPR2XR2_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiAddPendingCommandToSyncPointList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v6; // rdi
  POOL_TYPE v7; // r12d
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rbx
  _QWORD *v14; // rcx
  _QWORD *PoolWithTag; // rax
  unsigned __int64 v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // r12
  char *v21; // rax
  char *v22; // rsi
  _QWORD *v23; // rdx
  unsigned int v24; // r8d
  _QWORD *i; // rcx
  _QWORD *v26; // rdi
  unsigned __int64 v27; // r9
  _QWORD *v28; // r15
  __int64 v29; // r15
  _QWORD *v30; // rcx
  _BYTE *v31; // rcx
  _BYTE *v32; // r9
  unsigned __int64 v33; // rdi
  __int64 v34; // r15
  size_t v35; // rsi
  __int64 v36; // r8
  _QWORD *v37; // rcx
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // rax
  _QWORD *v42; // rax
  _QWORD *j; // rdx
  _QWORD *v44; // r8
  __int64 *v45; // r9
  __int64 v46; // rdi
  char *v47; // r10
  __int64 v48; // rax
  __int64 v49; // rax
  _BYTE *v50; // rax
  _BYTE *v51; // rax
  __int64 v52; // [rsp+40h] [rbp-59h]
  _BYTE *v53; // [rsp+50h] [rbp-49h]
  _BYTE v54[16]; // [rsp+58h] [rbp-41h] BYREF
  int v55; // [rsp+68h] [rbp-31h]
  __int64 v56; // [rsp+70h] [rbp-29h]
  __int64 v57; // [rsp+78h] [rbp-21h]
  _BYTE *v58; // [rsp+80h] [rbp-19h]
  _BYTE P[16]; // [rsp+88h] [rbp-11h] BYREF
  int v60; // [rsp+98h] [rbp-1h]

  v9 = a1;
  v10 = a4;
  v52 = a2;
  v56 = a1;
  if ( a4 || a5 )
  {
    v11 = *(_QWORD **)(a1 + 1616);
    v6 = a1 + 1608;
    if ( v11 != (_QWORD *)(a1 + 1608) && v11[2] == a3 )
      goto LABEL_4;
    v7 = 512;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0xA8uLL, 0x66616956u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      PoolWithTag[3] = 0LL;
      *((_DWORD *)PoolWithTag + 16) = 0;
      PoolWithTag[9] = 0LL;
      *((_DWORD *)PoolWithTag + 32) = 0;
      goto LABEL_13;
    }
  }
  else
  {
    v41 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v41[7] = a6;
    v41[3] = 281LL;
    v41[4] = 3328LL;
    v41[5] = v9;
    v41[6] = a3;
    WdLogEvent5_WdCriticalError(v41);
    __debugbreak();
  }
  v11 = 0LL;
LABEL_13:
  if ( !v11 )
    return 3221225495LL;
  v11[2] = a3;
  v11[18] = v11 + 17;
  v11[17] = v11 + 17;
  v11[20] = v11 + 19;
  v11[19] = v11 + 19;
  v18 = *(_QWORD **)(v6 + 8);
  if ( *v18 != v6 )
    goto LABEL_100;
  *v11 = v6;
  v11[1] = v18;
  *v18 = v11;
  *(_QWORD *)(v6 + 8) = v11;
  if ( (unsigned int)v10 > 2 )
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % v10;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v10 < 0x10 )
    {
      v20 = 0LL;
      goto LABEL_20;
    }
    v19 = ExAllocatePoolWithTag(v7, 16 * v10, 0x35616956u);
  }
  else
  {
    v19 = v11 + 4;
  }
  v11[3] = v19;
  *((_DWORD *)v11 + 16) = v10;
  v20 = v19;
  if ( v19 && (_DWORD)v10 )
  {
    memset(v19, 0, 16 * v10);
    v20 = (_QWORD *)v11[3];
  }
LABEL_20:
  if ( a5 > 2 )
  {
    v17 = 0xFFFFFFFFFFFFFFFFuLL % a5;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a5 < 0x18 )
    {
      v22 = 0LL;
      goto LABEL_25;
    }
    v21 = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 24LL * a5, 0x35616956u);
  }
  else
  {
    v21 = (char *)(v11 + 10);
  }
  v11[9] = v21;
  *((_DWORD *)v11 + 32) = a5;
  v22 = v21;
  if ( v21 && a5 )
  {
    memset(v21, 0, 24LL * a5);
    v22 = (char *)v11[9];
  }
LABEL_25:
  if ( !v20 )
  {
LABEL_98:
    if ( v22 )
      ExFreePoolWithTag(v22, 0);
    _VIDSCH_SYNC_POINT::`scalar deleting destructor'(v11, v17);
    return 3221225495LL;
  }
  if ( !v22 )
  {
    ExFreePoolWithTag(v20, 0);
    goto LABEL_98;
  }
  v23 = (_QWORD *)(v9 + 72);
  v24 = 0;
  for ( i = *(_QWORD **)(v9 + 72); i != v23; i = (_QWORD *)*i )
  {
    v26 = i - 3;
    v27 = i[19];
    if ( v27 > i[17] )
    {
      v28 = (_QWORD *)v24;
      if ( v24 > (int)v10 - 1 )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdCriticalError(i, v23);
        v42[3] = 281LL;
        v42[4] = 3328LL;
        v42[5] = v26[22];
        v42[6] = v26[20];
        v42[7] = v28;
        WdLogEvent5_WdCriticalError(v42);
        __debugbreak();
        goto LABEL_76;
      }
      v29 = 2LL * v24++;
      v20[v29 + 1] = v27;
      v20[v29] = v26;
    }
  }
  v9 = 0LL;
  v28 = (_QWORD *)(v56 + 88);
  v30 = *(_QWORD **)(v56 + 88);
LABEL_34:
  if ( v30 == v28 )
  {
    if ( bTracingEnabled )
    {
      v31 = 0LL;
      v32 = 0LL;
      v55 = 0;
      v33 = v10;
      v60 = 0;
      v53 = 0LL;
      v58 = 0LL;
      if ( (unsigned int)v10 > 2 )
        goto LABEL_87;
      v31 = v54;
      v53 = v54;
      goto LABEL_38;
    }
    goto LABEL_62;
  }
LABEL_76:
  for ( j = (_QWORD *)v30[4]; ; j = (_QWORD *)*j )
  {
    if ( j == v30 + 4 )
    {
      v30 = (_QWORD *)*v30;
      goto LABEL_34;
    }
    v44 = j - 1;
    v45 = j + 8;
    if ( (unsigned __int64)*v45 > j[7] || v44[12] > v44[11] )
      break;
LABEL_83:
    ;
  }
  v33 = (unsigned int)v9;
  if ( (unsigned int)v9 <= a5 - 1 )
  {
    v46 = 2LL;
    v57 = 3 * v9;
    v47 = &v22[24 * v9 + 8];
    do
    {
      v48 = *v45;
      v45 += 3;
      *(_QWORD *)v47 = v48;
      v47 += 8;
      --v46;
    }
    while ( v46 );
    v9 = (unsigned int)(v9 + 1);
    *(_QWORD *)&v22[8 * v57] = v44;
    goto LABEL_83;
  }
  v49 = WdLogNewEntry5_WdCriticalError(v30, j);
  *(_QWORD *)(v49 + 24) = 281LL;
  *(_QWORD *)(v49 + 32) = 3328LL;
  *(_OWORD *)(v49 + 40) = 0LL;
  *(_QWORD *)(v49 + 56) = (unsigned int)v9;
  WdLogEvent5_WdCriticalError(v49);
  __debugbreak();
LABEL_87:
  if ( 0xFFFFFFFFFFFFFFFFuLL / v33 < 8 )
  {
    v34 = 0LL;
    goto LABEL_42;
  }
  v50 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v33, 0x66616956u);
  v32 = v58;
  v31 = v50;
  v53 = v50;
LABEL_38:
  v55 = v10;
  if ( v31 && (_DWORD)v10 )
  {
    memset(v31, 0, 8 * v33);
    v31 = v53;
    v32 = v58;
  }
  v34 = (__int64)v31;
LABEL_42:
  if ( (unsigned int)v10 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v33 >= 8 )
    {
      v35 = 8 * v33;
      v51 = ExAllocatePoolWithTag((POOL_TYPE)512, 8 * v33, 0x66616956u);
      v31 = v53;
      v32 = v51;
      v58 = v51;
      goto LABEL_44;
    }
    v36 = 0LL;
  }
  else
  {
    v32 = P;
    v58 = P;
    v35 = 8 * v33;
LABEL_44:
    v60 = v10;
    if ( v32 && (_DWORD)v10 )
    {
      memset(v32, 0, v35);
      v31 = v53;
      v32 = v58;
    }
    v36 = (__int64)v32;
  }
  if ( v34 && v36 )
  {
    if ( (_DWORD)v10 )
    {
      v37 = (_QWORD *)v36;
      do
      {
        v38 = *(_QWORD *)(*v20 + 56LL);
        if ( !v38 || (*(_DWORD *)(*v20 + 112LL) & 0x40) != 0 )
          v38 = *v20;
        *(_QWORD *)((char *)v37 + v34 - v36) = v38;
        v39 = v20[1];
        v20 += 2;
        *v37++ = v39;
        --v33;
      }
      while ( v33 );
      v31 = v53;
      v32 = v58;
    }
    v40 = *(_QWORD *)(v56 + 8);
    if ( !v40 )
      LODWORD(v40) = v56;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pxqPR2XR2_EtwWriteTransfer((_DWORD)v31, v40, v36, v40, v11[2], v10, v34, v36);
      v31 = v53;
      v32 = v58;
    }
  }
  if ( v32 != P && v32 )
  {
    ExFreePoolWithTag(v32, 0);
    v31 = v53;
  }
  v58 = 0LL;
  v60 = 0;
  if ( v31 != v54 )
  {
    if ( v31 )
      ExFreePoolWithTag(v31, 0);
  }
LABEL_62:
  a2 = v52;
LABEL_4:
  if ( !a6 )
  {
    v12 = (_QWORD *)(a2 + 200);
    v13 = v11 + 17;
    goto LABEL_6;
  }
  if ( a6 == 3 )
  {
    v12 = (_QWORD *)(a2 + 216);
    v13 = v11 + 19;
LABEL_6:
    v14 = (_QWORD *)v13[1];
    if ( (_QWORD *)*v14 == v13 )
    {
      *v12 = v13;
      v12[1] = v14;
      *v14 = v12;
      v13[1] = v12;
      return 0LL;
    }
LABEL_100:
    __fastfail(3u);
  }
  return 0LL;
}
