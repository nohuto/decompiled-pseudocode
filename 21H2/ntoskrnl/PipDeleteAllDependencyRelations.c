/*
 * XREFs of PipDeleteAllDependencyRelations @ 0x1407CD770
 * Callers:
 *     PnpDeleteAllDependencyRelations @ 0x14061220C (PnpDeleteAllDependencyRelations.c)
 * Callees:
 *     PiListEntryToDependencyEdge @ 0x14050C738 (PiListEntryToDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x14050C960 (PipFreeDependencyEdge.c)
 *     PipDeleteDependencyNode @ 0x1407CD820 (PipDeleteDependencyNode.c)
 *     PipConvertResolutionsToReservations @ 0x1407CD888 (PipConvertResolutionsToReservations.c)
 *     PipAttemptDependentStart @ 0x14089DC14 (PipAttemptDependentStart.c)
 */

__int64 __fastcall PipDeleteAllDependencyRelations(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  bool v6; // zf
  int v7; // eax
  _DWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  void *v12; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a1 )
  {
    result = *(_QWORD *)(a1 + 312);
    v3 = *(_QWORD *)(result + 80);
  }
  else
  {
    v3 = 0LL;
  }
  if ( v3 )
  {
    ++*(_DWORD *)(v3 + 88);
    PipConvertResolutionsToReservations(v3);
    v4 = *(_QWORD **)(v3 + 16);
    while ( v4 != (_QWORD *)(v3 + 16) )
    {
      v8 = (_DWORD *)PiListEntryToDependencyEdge((__int64)v4, 0);
      v4 = (_QWORD *)*v4;
      PipFreeDependencyEdge(v8, v9);
    }
    v5 = *(_QWORD **)(v3 + 32);
    while ( v5 != (_QWORD *)(v3 + 32) )
    {
      v10 = PiListEntryToDependencyEdge((__int64)v5, 1);
      v5 = (_QWORD *)*v5;
      v11 = *(_QWORD *)(v10 + 40);
      ++*(_DWORD *)(v11 + 88);
      PipFreeDependencyEdge((_DWORD *)v10, 0LL);
      v12 = *(void **)(v11 + 48);
      if ( v12 && *(_QWORD *)(v11 + 16) != v11 + 16 )
        PipAttemptDependentStart(v12);
      v6 = (*(_DWORD *)(v11 + 88))-- == 1;
      if ( v6 )
        PipDeleteDependencyNode((PVOID)v11);
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    v6 = (*(_DWORD *)(v3 + 88))-- == 1;
    v7 = *(_DWORD *)(v3 + 88);
    if ( v6 )
    {
      PipDeleteDependencyNode((PVOID)v3);
      v7 = *(_DWORD *)(v3 + 88);
    }
    result = (unsigned int)(v7 - 1);
    *(_DWORD *)(v3 + 88) = result;
    if ( !(_DWORD)result )
      return PipDeleteDependencyNode((PVOID)v3);
  }
  return result;
}
