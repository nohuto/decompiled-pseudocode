/*
 * XREFs of ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029718
 * Callers:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180006850 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001BB00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029600 (-HampHostCheckWaitForQuiesceTurn@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A764 (-HampHostCheckEndQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceSerialized(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  int v3; // edx
  int v4; // edx

  v1 = *((_QWORD *)a1 + 97);
  v2 = 0;
  v3 = *(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v1 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                              + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                 + 580) & 3;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
      return v4 == 1;
    else
      return *(_WORD *)(v1 + 610) & 1;
  }
  return v2;
}
