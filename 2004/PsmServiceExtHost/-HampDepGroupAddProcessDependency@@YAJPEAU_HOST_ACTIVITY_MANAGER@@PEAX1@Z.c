/*
 * XREFs of ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x1800284B0
 * Callers:
 *     ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x1800288B4 (-HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAPEAU_HAM_HOST_DEPENDENCY@@PEAPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000AF5C (-HampDepGroupAddDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@0PEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@P.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAEC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180017CF0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180028438 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

void __fastcall __noreturn HampDepGroupAddProcessDependency(struct _HOST_ACTIVITY_MANAGER *a1, void *a2, void *a3)
{
  struct _RM_HAM_ACTIVITY_HOST *v6; // rdi
  struct _HAM_DEPENDENCY_GROUP *v7; // r14
  __int64 v8; // r8
  __int64 v9; // rdx
  _WORD *v10; // rcx
  __int16 v11; // ax
  _WORD *v12; // rax
  _WORD *v13; // rcx
  __int16 v14; // ax
  _WORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r8
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v27; // rsi
  int v28; // eax
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v32; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v33; // [rsp+38h] [rbp-C8h] BYREF
  struct _HAM_DEPENDENCY_GROUP *v34; // [rsp+40h] [rbp-C0h] BYREF
  char v35; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+51h] [rbp-AFh]
  __int16 v37; // [rsp+55h] [rbp-ABh]
  char v38; // [rsp+57h] [rbp-A9h]
  char v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+1E0h] [rbp+E0h]
  void *v41; // [rsp+1E8h] [rbp+E8h]
  void *v42; // [rsp+1F0h] [rbp+F0h]
  DWORD ProcessId; // [rsp+1F8h] [rbp+F8h]
  DWORD v44; // [rsp+1FCh] [rbp+FCh]
  _DWORD v45[3]; // [rsp+200h] [rbp+100h] BYREF
  _BYTE v46[128]; // [rsp+20Ch] [rbp+10Ch] BYREF
  _BYTE v47[128]; // [rsp+28Ch] [rbp+18Ch] BYREF
  int v48; // [rsp+30Ch] [rbp+20Ch]
  int v49; // [rsp+314h] [rbp+214h]
  _BYTE v50[40]; // [rsp+318h] [rbp+218h] BYREF
  __int64 v51; // [rsp+340h] [rbp+240h]
  __int64 v52; // [rsp+348h] [rbp+248h]
  __int64 v53; // [rsp+350h] [rbp+250h]
  __int64 v54; // [rsp+358h] [rbp+258h]
  __int64 v55; // [rsp+360h] [rbp+260h]
  int v56; // [rsp+370h] [rbp+270h]

  v33 = 0LL;
  v32 = 0LL;
  v34 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset_0(v45, 0, 0x188uLL);
  v8 = 64LL;
  v45[0] = 8397888;
  v9 = 64LL;
  v10 = v46;
  do
  {
    if ( v9 == -2147483582 )
      break;
    v11 = *(_WORD *)((char *)v10 + (char *)L"ProcessDependency" - v46);
    if ( !v11 )
      break;
    *v10++ = v11;
    --v9;
  }
  while ( v9 );
  v12 = v10 - 1;
  if ( v9 )
    v12 = v10;
  v13 = v47;
  *v12 = 0;
  do
  {
    if ( v8 == -2147483582 )
      break;
    v14 = *(_WORD *)((char *)v13 + &unk_180095550 - (_UNKNOWN *)v47);
    if ( !v14 )
      break;
    *v13++ = v14;
    --v8;
  }
  while ( v8 );
  v15 = v13 - 1;
  if ( v8 )
    v15 = v13;
  *v15 = 0;
  v49 = -1;
  v48 = 5;
  memset_0(v50, 0, 0x68uLL);
  v45[0] |= 0x400u;
  v16 = &v39;
  v56 = 33;
  v55 = -1LL;
  v51 |= 0x80uLL;
  v54 = -1LL;
  v53 = -1LL;
  v52 = -1LL;
  v17 = 3LL;
  v40 = 0LL;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v18 = v45;
  v35 = 0;
  do
  {
    v19 = v18[1];
    *(_OWORD *)v16 = *v18;
    v20 = v18[2];
    *((_OWORD *)v16 + 1) = v19;
    v21 = v18[3];
    *((_OWORD *)v16 + 2) = v20;
    v22 = v18[4];
    *((_OWORD *)v16 + 3) = v21;
    v23 = v18[5];
    *((_OWORD *)v16 + 4) = v22;
    v24 = v18[6];
    *((_OWORD *)v16 + 5) = v23;
    v25 = v18[7];
    v18 += 8;
    *((_OWORD *)v16 + 6) = v24;
    v16 += 128;
    *((_OWORD *)v16 - 1) = v25;
    --v17;
  }
  while ( v17 );
  *(_QWORD *)v16 = *(_QWORD *)v18;
  v41 = a2;
  v42 = a3;
  ProcessId = GetProcessId(a2);
  v44 = GetProcessId(a3);
  HostByProcessHandle = RmHamFindHostByProcessHandle(a1, a2, &v33);
  v27 = v33;
  if ( HostByProcessHandle >= 0 )
  {
    v28 = RmHamFindHostByProcessHandle(a1, a3, &v32);
    v6 = v32;
    if ( v28 >= 0 )
    {
      HampDepGroupAddDependency(v27, v32, (struct _HAM_ADD_DEPENDENCY_PARAMETERS *)&v35, 0LL, &v34);
      v7 = v34;
    }
  }
  if ( v27 )
  {
    RmpAcquireGlobalLock();
    v30 = (*((_QWORD *)v27 + 74))-- == 1LL;
    if ( v30 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v27 - 64), v29);
    RmpReleaseGlobalLock();
  }
  if ( v6 )
  {
    RmpAcquireGlobalLock();
    v30 = (*((_QWORD *)v6 + 74))-- == 1LL;
    if ( v30 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v6 - 64), v31);
    RmpReleaseGlobalLock();
  }
  if ( v7 )
  {
    HampDepGroupRunStateChangeWorker(v7);
    HampDepGroupDereference(v7);
  }
}
