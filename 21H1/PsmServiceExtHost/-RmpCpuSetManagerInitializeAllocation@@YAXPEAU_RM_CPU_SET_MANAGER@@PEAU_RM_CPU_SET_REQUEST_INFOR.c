/*
 * XREFs of ?RmpCpuSetManagerInitializeAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006C590
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFORMATION@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18006BAD0 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_REQUEST_INFO.c)
 * Callees:
 *     ?HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z @ 0x1800274E4 (-HamObjectIdGenerate@@YA_KW4_HAM_OBJECT_TYPE@@@Z.c)
 *     memset_0 @ 0x18004651A (memset_0.c)
 */

void __fastcall RmpCpuSetManagerInitializeAllocation(
        struct _RM_CPU_SET_MANAGER *a1,
        struct _RM_CPU_SET_REQUEST_INFORMATION *a2,
        struct _RM_CPU_SET_ALLOCATION *a3)
{
  __int64 v6; // rax
  int v7; // r8d

  memset_0(a3, 0, 0x110uLL);
  v6 = HamObjectIdGenerate(2);
  *((_QWORD *)a3 + 4) = v6;
  *((_QWORD *)a3 + 6) = a1;
  *((_DWORD *)a3 + 10) = v7;
  *((_QWORD *)a3 + 2) = 1LL;
  *((_QWORD *)a3 + 1) = HIBYTE(v6)
                      + 37
                      * (BYTE6(v6)
                       + 37
                       * (BYTE5(v6)
                        + 37
                        * (BYTE4(v6)
                         + 37
                         * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883LL)))))));
  *((_DWORD *)a3 + 67) = *((_DWORD *)a2 + 1);
  *((_QWORD *)a3 + 11) = (char *)a3 + 80;
  *((_QWORD *)a3 + 10) = (char *)a3 + 80;
}
