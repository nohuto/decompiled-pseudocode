/*
 * XREFs of ?RmpQoSDisableForHostOnTimerExpiry@@YAXPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180076FC8
 * Callers:
 *     ?RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z @ 0x1800012F4 (-RmpQoSCheckHostsSetTimer@@YAXPEAU_RM_QOS_CONTEXT@@_K@Z.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180071A20 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     ?RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z @ 0x1800013AC (-RmpQoSSetForHost@@YAJPEAU_RM_QOS_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009240 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180009FB0 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18001CB50 (-HampHostCheckQueueStateWorker@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 */

void __fastcall RmpQoSDisableForHostOnTimerExpiry(struct _RM_QOS_CONTEXT *a1, struct _RM_ACTIVITY_HOST *a2)
{
  struct _RM_HAM_ACTIVITY_HOST *v2; // rdi
  _OWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  v2 = (struct _RM_ACTIVITY_HOST *)((char *)a2 + 64);
  if ( (*((_BYTE *)a2 + 836) & 1) != 0 )
  {
    HampHostAcquireLockExclusiveEx(v2, 0);
    *((_QWORD *)v2 + 81) |= 0x8000000000000uLL;
    HampHostCheckQueueStateWorker(v2, 0);
    HampHostReleaseLockExclusiveEx(v2);
  }
  else
  {
    *((_DWORD *)a2 + 310) |= 2u;
    RmpQoSSetForHost(a1, a2, 0);
  }
  v4 = (_OWORD *)((char *)a2 + 1256);
  v5 = *((_QWORD *)a2 + 157);
  if ( *(struct _RM_ACTIVITY_HOST **)(v5 + 8) != (struct _RM_ACTIVITY_HOST *)((char *)a2 + 1256)
    || (v6 = (_QWORD *)*((_QWORD *)a2 + 158), (_OWORD *)*v6 != v4) )
  {
    __fastfail(3u);
  }
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = 0LL;
  RmpObjectRelease((char *)a2);
}
