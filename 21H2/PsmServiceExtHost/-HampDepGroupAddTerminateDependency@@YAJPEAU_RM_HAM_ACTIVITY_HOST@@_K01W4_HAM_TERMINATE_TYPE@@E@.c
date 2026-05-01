/*
 * XREFs of ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028348
 * Callers:
 *     ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180028B1C (-HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 *     ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18007C328 (-HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z.c)
 * Callees:
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000B1C8 (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017E70 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall HampDepGroupAddTerminateDependency(
        struct _RM_HAM_ACTIVITY_HOST *a1,
        __int64 a2,
        struct _RM_HAM_ACTIVITY_HOST *a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  _WORD *v12; // rcx
  __int16 v13; // ax
  _WORD *v14; // rax
  _WORD *v15; // rcx
  __int16 v16; // ax
  _WORD *v17; // rax
  char *v18; // r8
  __int64 v19; // rcx
  _OWORD *v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // edi
  struct _HAM_DEPENDENCY_GROUP *v29; // rbx
  struct _HAM_DEPENDENCY_GROUP *v31; // [rsp+30h] [rbp-D0h] BYREF
  char v32; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+41h] [rbp-BFh]
  __int16 v34; // [rsp+45h] [rbp-BBh]
  char v35; // [rsp+47h] [rbp-B9h]
  char v36; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v37; // [rsp+1D0h] [rbp+D0h]
  __int64 v38; // [rsp+1D8h] [rbp+D8h]
  __int64 v39; // [rsp+1E0h] [rbp+E0h]
  int v40; // [rsp+1E8h] [rbp+E8h]
  int v41; // [rsp+1ECh] [rbp+ECh]
  _DWORD v42[3]; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE v43[128]; // [rsp+1FCh] [rbp+FCh] BYREF
  _BYTE v44[128]; // [rsp+27Ch] [rbp+17Ch] BYREF
  int v45; // [rsp+2FCh] [rbp+1FCh]
  int v46; // [rsp+304h] [rbp+204h]
  _BYTE v47[40]; // [rsp+308h] [rbp+208h] BYREF
  __int64 v48; // [rsp+330h] [rbp+230h]
  __int64 v49; // [rsp+338h] [rbp+238h]
  __int64 v50; // [rsp+340h] [rbp+240h]
  __int64 v51; // [rsp+348h] [rbp+248h]
  __int64 v52; // [rsp+350h] [rbp+250h]
  int v53; // [rsp+360h] [rbp+260h]

  v31 = 0LL;
  memset_0(v42, 0, 0x188uLL);
  v42[0] = 8397888;
  v10 = 64LL;
  v11 = 64LL;
  v12 = v43;
  do
  {
    if ( v11 == -2147483582 )
      break;
    v13 = *(_WORD *)((char *)v12 + &unk_180095550 - (_UNKNOWN *)v43);
    if ( !v13 )
      break;
    *v12++ = v13;
    --v11;
  }
  while ( v11 );
  v14 = v12 - 1;
  if ( v11 )
    v14 = v12;
  v15 = v44;
  *v14 = 0;
  do
  {
    if ( v10 == -2147483582 )
      break;
    v16 = *(_WORD *)((char *)v15 + &unk_180095550 - (_UNKNOWN *)v44);
    if ( !v16 )
      break;
    *v15++ = v16;
    --v10;
  }
  while ( v10 );
  v17 = v15 - 1;
  if ( v10 )
    v17 = v15;
  *v17 = 0;
  v46 = -1;
  v45 = 5;
  memset_0(v47, 0, 0x68uLL);
  v53 = 33;
  v52 = -1LL;
  v48 |= 0x80uLL;
  v18 = &v36;
  v51 = -1LL;
  v50 = -1LL;
  v49 = -1LL;
  v19 = 3LL;
  v32 = 3;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v20 = v42;
  v37 = 0LL;
  do
  {
    v21 = v20[1];
    *(_OWORD *)v18 = *v20;
    v22 = v20[2];
    *((_OWORD *)v18 + 1) = v21;
    v23 = v20[3];
    *((_OWORD *)v18 + 2) = v22;
    v24 = v20[4];
    *((_OWORD *)v18 + 3) = v23;
    v25 = v20[5];
    *((_OWORD *)v18 + 4) = v24;
    v26 = v20[6];
    *((_OWORD *)v18 + 5) = v25;
    v27 = v20[7];
    v20 += 8;
    *((_OWORD *)v18 + 6) = v26;
    v18 += 128;
    *((_OWORD *)v18 - 1) = v27;
    --v19;
  }
  while ( v19 );
  *(_QWORD *)v18 = *(_QWORD *)v20;
  v41 = a5;
  v38 = a4;
  v40 = a6 | 0xC00;
  v39 = a2;
  v28 = HampDepGroupAddDependency(a3, a1, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v32, 0LL, &v31);
  if ( v28 >= 0 )
    v28 = 0;
  v29 = v31;
  if ( v31 )
  {
    HampDepGroupRunStateChangeWorker(v31);
    HampDepGroupDereference(v29);
  }
  return (unsigned int)v28;
}
