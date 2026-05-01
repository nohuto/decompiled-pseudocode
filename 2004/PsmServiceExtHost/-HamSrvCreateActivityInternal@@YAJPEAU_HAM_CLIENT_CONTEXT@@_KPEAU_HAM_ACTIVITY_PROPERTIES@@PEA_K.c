/*
 * XREFs of ?HamSrvCreateActivityInternal@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180034C3C
 * Callers:
 *     ?HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180020030 (-HampWakeContextWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180009E2C (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18000F120 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18000F1E0 (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x18000F720 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x180011850 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x18001E110 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180022B10 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CemRcObjectDereference @ 0x180027240 (CemRcObjectDereference.c)
 */

__int64 __fastcall HamSrvCreateActivityInternal(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  struct _HOST_ACTIVITY_MANAGER *v7; // rcx
  __int64 v8; // rsi
  const unsigned __int16 *v9; // r15
  unsigned int v10; // r12d
  union _RM_SID *v11; // r13
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  unsigned int v14; // edi
  int v15; // eax
  struct _HAM_ACTIVITY *v16; // rcx
  __int64 v17; // rdx
  struct _HAM_ACTIVITY *v20; // [rsp+60h] [rbp-48h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v22; // [rsp+B8h] [rbp+10h]
  unsigned __int64 *v23; // [rsp+C8h] [rbp+20h]

  v23 = a4;
  v22 = a2;
  HampSrvTraceActivityCreateStart();
  v7 = *a1;
  v20 = 0LL;
  v21 = 0LL;
  v8 = -1LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  Host = RmHamFindHost(v7, a2, &v21);
  v13 = v21;
  v14 = Host;
  if ( Host >= 0 )
  {
    v10 = *((_DWORD *)v21 + 140);
    v9 = (const unsigned __int16 *)((char *)v21 + 24);
    v11 = (struct _RM_HAM_ACTIVITY_HOST *)((char *)v21 + 488);
    v15 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v21, a3, 0, &v20);
    v16 = v20;
    v14 = v15;
    if ( v15 >= 0 )
    {
      v14 = 0;
      v8 = *((_QWORD *)v20 + 5);
      *v23 = v8;
    }
    if ( v16 )
      CemRcObjectDereference(v16);
  }
  HampSrvTraceActivityCreateStop(v14, v8, 0LL, v9, v10, v11, v22, a3);
  if ( v13 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v13 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v13 - 64), v17);
    RmpReleaseGlobalLock();
  }
  return v14;
}
