/*
 * XREFs of ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000ECE0
 * Callers:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000EAEC (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000EBF8 (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000EC70 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // r10

  v3 = *((_DWORD *)a1 + 1);
  v4 = 0LL;
  v5 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v6 = v5 & (HIBYTE(*a2)
           + 37
           * ((unsigned __int8)BYTE6(*a2)
            + 37
            * ((unsigned __int8)((unsigned __int16)WORD2(*a2) >> 8)
             + 37
             * ((unsigned __int8)BYTE4(*a2)
              + 37
              * (BYTE3(*a2)
               + 37
               * ((unsigned __int8)BYTE2(*a2)
                + 37 * (37 * ((unsigned __int8)*a2 + 11623883LL) + (unsigned __int8)BYTE1(*a2))))))));
LABEL_2:
  if ( v4 )
    goto LABEL_5;
  if ( v3 >> 5 )
  {
    v4 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & ((v3 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v4 = *(_QWORD *)v4;
      if ( (v4 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v4 + 8)) )
      {
        if ( *a2 != *(_QWORD *)(v4 + 32) )
          goto LABEL_2;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 16)) <= 1 )
          __fastfail(0xEu);
        *a3 = (struct _RM_OBJECT_HEADER *)v4;
        return 0LL;
      }
    }
  }
  return 3221226021LL;
}
