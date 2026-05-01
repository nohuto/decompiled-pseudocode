/*
 * XREFs of ?HampClientAllocateState@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAX@Z @ 0x18000955C
 * Callers:
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_HAM_LOCAL_CALLBACKS@@2PEAT_HAM_STATE_CHANGE_FLAGS@@PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000932C (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@KPEAU_H.c)
 * Callees:
 *     RmpWnfAllocateAndInitializePendingCallbackList @ 0x1800090C4 (RmpWnfAllocateAndInitializePendingCallbackList.c)
 *     ?HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z @ 0x180009684 (-HampClientTypeReceivesCallbacks@@YAKW4_HAM_CLIENT_TYPE@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180009B88 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     RmpWnfCreateStateNameForClient @ 0x18002E7E8 (RmpWnfCreateStateNameForClient.c)
 */

int __fastcall HampClientAllocateState(struct _WNF_STATE_NAME *a1, union _RM_SID *a2, void *a3)
{
  int v5; // ecx
  void *v6; // r10
  unsigned int v7; // r8d
  unsigned int v8; // edx
  int result; // eax
  HANDLE CurrentProcess; // rbx
  HANDLE v11; // rax
  unsigned int v12; // r8d

  if ( (unsigned int)HampClientTypeReceivesCallbacks(a1[17].Data[0]) && (a1[16].Data[0] & 2) == 0 && v5 >= 0 )
  {
    v7 = 1;
    if ( v5 <= 1 )
      goto LABEL_15;
    switch ( v5 )
    {
      case 2:
        v8 = 64;
LABEL_7:
        result = RmpWnfCreateStateNameForClient(v6, v8, v7, a1 + 13);
        if ( result < 0 )
          return result;
        result = RmpWnfAllocateAndInitializePendingCallbackList(&a1[14]);
        if ( result < 0 )
          return result;
        break;
      case 3:
LABEL_15:
        v8 = 64;
LABEL_16:
        v7 = 0;
        goto LABEL_7;
      case 6:
        v8 = 544;
        goto LABEL_16;
    }
  }
  if ( !a3
    || (CurrentProcess = GetCurrentProcess(),
        v11 = GetCurrentProcess(),
        result = NtDuplicateObject(v11, a3, CurrentProcess, (PHANDLE)&a1[20], 8u, 0, 0),
        result >= 0) )
  {
    v12 = a1[17].Data[1];
    if ( !v12 )
      return 0;
    result = RmpSystemOpenProcess((void **)&a1[21], 0x101000u, v12);
    if ( result >= 0 )
      return 0;
  }
  return result;
}
