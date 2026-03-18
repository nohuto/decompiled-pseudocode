/*
 * XREFs of PipDeleteAllDependencyRelations @ 0x14085C97C
 * Callers:
 *     PnpDeleteAllDependencyRelations @ 0x14077503C (PnpDeleteAllDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14055F84C (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x14055FBE4 (PipFreeDependencyEdge.c)
 *     PipDeleteDependencyNode @ 0x14085CA14 (PipDeleteDependencyNode.c)
 *     PipConvertResolutionsToReservations @ 0x14085CA7C (PipConvertResolutionsToReservations.c)
 *     PipUnlinkDeviceObjectAndDependencyNode @ 0x14085CB58 (PipUnlinkDeviceObjectAndDependencyNode.c)
 *     PipAttemptDependentStart @ 0x1409428B8 (PipAttemptDependentStart.c)
 */

void __fastcall PipDeleteAllDependencyRelations(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  _QWORD *v4; // r14
  bool v5; // zf
  _DWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  void *v10; // rcx

  if ( a1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL);
    if ( v2 )
    {
      ++*(_DWORD *)(v2 + 88);
      PipConvertResolutionsToReservations(v2);
      v3 = *(_QWORD **)(v2 + 16);
      while ( v3 != (_QWORD *)(v2 + 16) )
      {
        v6 = (_DWORD *)PiListEntryToDependencyEdge((__int64)v3, 0);
        v3 = (_QWORD *)*v3;
        PipFreeDependencyEdge(v6, v7);
      }
      v4 = *(_QWORD **)(v2 + 32);
      while ( v4 != (_QWORD *)(v2 + 32) )
      {
        v8 = PiListEntryToDependencyEdge((__int64)v4, 1);
        v4 = (_QWORD *)*v4;
        v9 = *(_QWORD *)(v8 + 40);
        ++*(_DWORD *)(v9 + 88);
        PipFreeDependencyEdge((_DWORD *)v8, 0LL);
        v10 = *(void **)(v9 + 48);
        if ( v10 && *(_QWORD *)(v9 + 16) != v9 + 16 )
          PipAttemptDependentStart(v10);
        v5 = (*(_DWORD *)(v9 + 88))-- == 1;
        if ( v5 )
          PipDeleteDependencyNode((PVOID)v9);
      }
      PipUnlinkDeviceObjectAndDependencyNode(a1, v2);
      v5 = (*(_DWORD *)(v2 + 88))-- == 1;
      if ( v5 )
        PipDeleteDependencyNode((PVOID)v2);
    }
  }
}
