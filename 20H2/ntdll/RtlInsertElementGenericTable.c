/*
 * XREFs of RtlInsertElementGenericTable @ 0x1800651A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInsertElementGenericTableFull @ 0x180065210 (RtlInsertElementGenericTableFull.c)
 *     FindNodeOrParent_0 @ 0x180065368 (FindNodeOrParent_0.c)
 */

__int64 __fastcall RtlInsertElementGenericTable(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int NodeOrParent_0; // eax
  _QWORD v10[3]; // [rsp+30h] [rbp-18h] BYREF

  NodeOrParent_0 = FindNodeOrParent_0(a1, a2, v10);
  return RtlInsertElementGenericTableFull(a1, a2, a3, a4, v10[0], NodeOrParent_0);
}
