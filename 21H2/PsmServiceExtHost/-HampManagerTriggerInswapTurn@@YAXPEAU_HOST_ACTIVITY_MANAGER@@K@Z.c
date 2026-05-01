/*
 * XREFs of ?HampManagerTriggerInswapTurn@@YAXPEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x1800080D0
 * Callers:
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180008108 (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BC40 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerTriggerInswapTurn(struct _HOST_ACTIVITY_MANAGER *a1, int a2)
{
  _DWORD *v2; // rcx

  if ( *((struct _HOST_ACTIVITY_MANAGER **)a1 + 88) != (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 704)
    && (a2 || !*((_DWORD *)a1 + 180)) )
  {
    v2 = (_DWORD *)((char *)a1 + 724);
    ++*v2;
    RtlWakeAddressAll(v2);
  }
}
