/*
 * XREFs of CmpReportNotifyForKcbStack @ 0x1405F3830
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404EB788 (CmDeleteLayeredKey.c)
 *     CmpSetKeySecurity @ 0x1405E0AE4 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14066C6F4 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x14066E7B0 (CmSetValueKey.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmpReportNotify @ 0x1406A456C (CmpReportNotify.c)
 *     CmDeleteKey @ 0x1407022EC (CmDeleteKey.c)
 *     CmpCreateChild @ 0x140704B98 (CmpCreateChild.c)
 * Callees:
 *     CmpReportNotifyHelper @ 0x1405F38C0 (CmpReportNotifyHelper.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405F3B6C (CmpGetKcbAtLayerHeight.c)
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
