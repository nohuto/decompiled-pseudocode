/*
 * XREFs of ?RmpObjectTableFindObjectByHandleWithLock@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x18000EE88
 * Callers:
 *     ?RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z @ 0x180007574 (-RmpObjectTableFindObjectByHandle@@YAJPEAU_RM_OBJECT_TABLE@@PEA_KPEAPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000ED7C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpObjectTableFindObjectByHandleWithLock(
        struct _RM_OBJECT_TABLE *a1,
        unsigned __int64 *a2,
        struct _RM_OBJECT_HEADER **a3)
{
  __int64 v3; // r9
  unsigned int v4; // r10d
  __int64 v5; // rdi
  __int64 v6; // r11
  int v7; // r9d
  __int64 v9; // [rsp+18h] [rbp+8h]

  v9 = *a2;
  v3 = 0LL;
  v4 = -1073741275;
  v5 = -1LL << (*((_BYTE *)a1 + 4) & 0x1F);
  v6 = v5 & (HIBYTE(v9)
           + 37
           * (BYTE6(v9)
            + 37
            * (BYTE5(v9)
             + 37
             * (BYTE4(v9)
              + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883LL))))))));
  while ( 1 )
  {
    if ( v3 )
      goto LABEL_5;
    v7 = *((_DWORD *)a1 + 1) >> 5;
    if ( !v7 )
      return v4;
    v3 = *((_QWORD *)a1 + 1)
       + 8LL
       * ((37
         * (BYTE6(v6)
          + 37
          * (BYTE5(v6)
           + 37
           * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
         + HIBYTE(v6)) & (unsigned int)(v7 - 1));
LABEL_5:
    while ( 1 )
    {
      v3 = *(_QWORD *)v3;
      if ( (v3 & 1) != 0 )
        break;
      if ( v6 == (v5 & *(_QWORD *)(v3 + 8)) )
        goto LABEL_7;
    }
    v3 = 0LL;
LABEL_7:
    if ( !v3 )
      return v4;
    if ( v9 == *(_QWORD *)(v3 + 32) )
    {
      v4 = 0;
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v3 + 16)) <= 1 )
        __fastfail(0xEu);
      *a3 = (struct _RM_OBJECT_HEADER *)v3;
      return v4;
    }
  }
}
