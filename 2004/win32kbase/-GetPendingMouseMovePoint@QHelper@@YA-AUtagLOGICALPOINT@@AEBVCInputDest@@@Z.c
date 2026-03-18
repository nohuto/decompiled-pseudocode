/*
 * XREFs of ?GetPendingMouseMovePoint@QHelper@@YA?AUtagLOGICALPOINT@@AEBVCInputDest@@@Z @ 0x1C0056808
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C006B7A4 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 * Callees:
 *     QHelper::_anonymous_namespace_::GetQ @ 0x1C0070F8C (QHelper--_anonymous_namespace_--GetQ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QHelper::GetPendingMouseMovePoint(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  int v5; // eax
  int v7; // ecx

  v3 = QHelper::_anonymous_namespace_::GetQ(a2);
  if ( !v3 )
    goto LABEL_8;
  v4 = (int)qword_1C0252D28;
  if ( qword_1C0252D28 )
    v4 = qword_1C0252D28();
  if ( v4 )
  {
    v5 = *(_DWORD *)(v3 + 192);
    *(_QWORD *)a1 = *(_QWORD *)(v3 + 184);
    *(_DWORD *)(a1 + 8) = v5;
  }
  else
  {
LABEL_8:
    v7 = *((_DWORD *)gpsi + 1241);
    *(_DWORD *)a1 = *((_DWORD *)gpsi + 1240);
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)(a1 + 8) = 18;
  }
  return a1;
}
