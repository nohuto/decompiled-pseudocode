/*
 * XREFs of ?AddDropTarget@DragData@@AEAAJW4DropLocation@WindowArrangementViewDragData@@AEBUCRect@Geometry@@_N@Z @ 0x1803F4840
 * Callers:
 *     ?InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z @ 0x1803F4DA0 (-InitDropTargets@DragData@@AEAAJW4DragDataFlags@WindowArrangementViewDragData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardCompareHelper@URecoveredWindowForViewWrapper@@@@V?$CSimpleArrayStandardMergeHelper@URecoveredWindowForViewWrapper@@@@@@QEAAJ_K0@Z @ 0x180289810 (-_EnsureCapacity@-$CTSimpleArray@URecoveredWindowForViewWrapper@@$0PPPPPPPO@V-$CTPolicyCoTaskMem.c)
 */

__int64 __fastcall DragData::AddDropTarget(_QWORD *a1, int a2, _OWORD *a3, char a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rdx
  int v6; // ebx
  __int64 v7; // rax
  _BYTE v9[24]; // [rsp+20h] [rbp-28h] OVERLAPPED
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = a1 + 17;
  *(_DWORD *)v9 = a2;
  v5 = a1[18];
  v6 = 0;
  *(_OWORD *)&v9[4] = *a3;
  v9[20] = a4;
  if ( v5 == a1[20] )
  {
    v6 = CTSimpleArray<RecoveredWindowForViewWrapper,4294967294,CTPolicyCoTaskMem<RecoveredWindowForViewWrapper>,CSimpleArrayStandardCompareHelper<RecoveredWindowForViewWrapper>,CSimpleArrayStandardMergeHelper<RecoveredWindowForViewWrapper>>::_EnsureCapacity(
           (__int64)(a1 + 17),
           v5 + 1,
           a3);
    if ( v6 < 0 )
      goto LABEL_6;
  }
  ++v4[1];
  v7 = *v4 + 8 * (3LL * v4[1] - 3);
  if ( v7 )
  {
    *(_OWORD *)v7 = *(_OWORD *)v9;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)&v9[16];
  }
  if ( v6 < 0 )
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x152,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}
