/*
 * XREFs of ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006834
 * Callers:
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000694C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B898 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableCheckDelete(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  struct _RM_PSM_APP_FAMILY *i; // rdx
  __int64 v4; // [rsp+38h] [rbp+10h]

  if ( !*((_QWORD *)a2 + 69) )
  {
    v4 = *((_QWORD *)a2 + 1) & (-1LL << (*((_DWORD *)a1 + 637) & 0x1F));
    for ( i = (struct _RM_PSM_APP_FAMILY *)(*((_QWORD *)a1 + 319)
                                          + 8LL
                                          * ((37
                                            * (BYTE6(v4)
                                             + 37
                                             * (BYTE5(v4)
                                              + 37
                                              * (BYTE4(v4)
                                               + 37
                                               * (BYTE3(v4)
                                                + 37
                                                * (BYTE2(v4) + 37 * (BYTE1(v4) + 37 * ((unsigned __int8)v4 + 11623883)))))))
                                            + HIBYTE(v4)) & (unsigned int)((*((_DWORD *)a1 + 637) >> 5) - 1)));
          (*(_QWORD *)i & 1) == 0;
          i = *(struct _RM_PSM_APP_FAMILY **)i )
    {
      if ( *(struct _RM_PSM_APP_FAMILY **)i == a2 )
      {
        *(_QWORD *)i = *(_QWORD *)a2;
        --*((_DWORD *)a1 + 636);
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
  }
}
