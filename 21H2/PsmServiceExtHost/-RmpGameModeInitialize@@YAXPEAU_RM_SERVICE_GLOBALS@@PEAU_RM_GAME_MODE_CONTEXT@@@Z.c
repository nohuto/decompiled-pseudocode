/*
 * XREFs of ?RmpGameModeInitialize@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18003FBC4
 * Callers:
 *     ?RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18003F41C (-RmpInitializeAllModules@@YAXPEAU_RM_RUNTIME_CONFIGURATION@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x18003FCCC (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

void __fastcall RmpGameModeInitialize(struct _RM_SERVICE_GLOBALS *a1, struct _RM_GAME_MODE_CONTEXT *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF

  memset_0((char *)a2 + 16, 0, 0x88uLL);
  *(_QWORD *)a2 = a1;
  *((_QWORD *)a2 + 1) = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  RtlInitializeSRWLock((char *)a2 + 72);
  v4 = (_QWORD *)((char *)a2 + 88);
  v5 = 2LL;
  do
  {
    v4[1] = v4;
    *v4 = v4;
    v4 += 2;
    --v5;
  }
  while ( v5 );
  v6 = 0LL;
  LODWORD(v6) = 16;
  *((_QWORD *)a2 + 4) = (char *)a2 + 24;
  *((_QWORD *)a2 + 3) = (char *)a2 + 24;
  if ( (int)D3DKMTGetYieldPercentage(&v6) < 0
    || (*((_DWORD *)a2 + 12) = HIDWORD(v6),
        *((_DWORD *)a2 + 15) = DWORD2(v6),
        v6 = 0LL,
        LODWORD(v6) = 16,
        (int)D3DKMTGetMemoryBudgetTarget(&v6) < 0) )
  {
    *((_BYTE *)a2 + 149) |= 1u;
  }
  else
  {
    *(_QWORD *)((char *)a2 + 52) = *((_QWORD *)&v6 + 1);
  }
  RmpSystemPublishGlobalGameModeState(0);
}
