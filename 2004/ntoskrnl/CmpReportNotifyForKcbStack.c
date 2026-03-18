/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1405E57CC
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404E7EF8 (CmDeleteLayeredKey.c)
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D900 (CmpSetKeySecurity.c)
 *     CmDeleteKey @ 0x140643F58 (CmDeleteKey.c)
 *     CmpPerformUnloadKey @ 0x1406503FC (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406547E8 (CmpReportNotify.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1405E5860 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405E7738 (CmpGetKcbAtLayerHeight.c)
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
  if ( *(_QWORD *)(KcbAtLayerHeight + 32) != CmpMasterHive )
    return CmpReportNotifyHelper(v7, CmpMasterHive, a2, a3, a4);
  return result;
}
