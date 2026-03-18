/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x14061ADEC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E78C8 (CmDeleteLayeredKey.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpReportNotify @ 0x1406581E4 (CmpReportNotify.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmpSetKeySecurity @ 0x14068AE1C (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140692448 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmpCreateChild @ 0x140696A68 (CmpCreateChild.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x14061AE80 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x14061CD58 (CmpGetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmpReportNotifyForKcbStack(__int64 a1, int a2, int a3, __int64 a4)
{
  int v7; // edi
  __int64 KcbAtLayerHeight; // rbx
  int v9; // ecx
  __int64 v10; // r9
  __int64 result; // rax

  v7 = a1;
  KcbAtLayerHeight = CmpGetKcbAtLayerHeight(a1);
  result = CmpReportNotifyHelper(v9, *(_QWORD *)(KcbAtLayerHeight + 32), a2, a3, v10);
  if ( *(PVOID *)(KcbAtLayerHeight + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, (_DWORD)CmpMasterHive, a2, a3, a4);
  return result;
}
