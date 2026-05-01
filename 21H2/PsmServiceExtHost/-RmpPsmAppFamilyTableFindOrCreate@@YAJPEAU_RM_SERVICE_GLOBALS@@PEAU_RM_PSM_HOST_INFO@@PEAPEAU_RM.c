/*
 * XREFs of ?RmpPsmAppFamilyTableFindOrCreate@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18000D480
 * Callers:
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B898 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CD80 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180010130 (CempPackageFamilyNameFromPsmKey.c)
 *     ?RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180010270 (-RmpPsmAppFamilyIdInitialize@@YAXPEBGPEAT_RM_SID@@KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180030A80 (-RmpPsmAppFamilyIdHash@@YA_KPEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180033E48 (-RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall RmpPsmAppFamilyTableFindOrCreate(
        struct _RM_SERVICE_GLOBALS *a1,
        struct _RM_PSM_HOST_INFO *a2,
        struct _RM_PSM_APP_FAMILY **a3)
{
  int v6; // ebx
  struct _RM_PSM_APP_FAMILY *v7; // rax
  char *Heap; // rax
  char *v9; // rbx
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _BYTE v15[544]; // [rsp+20h] [rbp-418h] BYREF
  unsigned __int16 v16[232]; // [rsp+240h] [rbp-1F8h] BYREF

  v6 = CempPackageFamilyNameFromPsmKey(a2, v16);
  if ( v6 >= 0 )
  {
    RmpPsmAppFamilyIdInitialize(
      v16,
      (struct _RM_PSM_HOST_INFO *)((char *)a2 + 464),
      *((_DWORD *)a2 + 133),
      (struct _RM_PSM_APP_FAMILY_ID *)v15);
    v7 = RmpPsmAppFamilyTableFind(a1, (struct _RM_PSM_APP_FAMILY_ID *)v15);
    if ( v7 )
    {
      *a3 = v7;
    }
    else
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x248uLL);
      v9 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      memset_0(Heap, 0, 0x248uLL);
      v10 = 4LL;
      v11 = v9 + 16;
      v12 = v15;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        v13 = v12[7];
        v12 += 8;
        *(v11 - 1) = v13;
        --v10;
      }
      while ( v10 );
      *v11 = *v12;
      *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
      *((_QWORD *)v9 + 1) = RmpPsmAppFamilyIdHash((struct _RM_PSM_APP_FAMILY_ID *)(v9 + 16));
      RmpPsmAppFamilyTableAdd(a1, (struct _RM_PSM_APP_FAMILY *)v9);
      *a3 = (struct _RM_PSM_APP_FAMILY *)v9;
    }
    return 0;
  }
  return (unsigned int)v6;
}
