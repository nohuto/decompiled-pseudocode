/*
 * XREFs of PipUnlinkDeviceObjectAndDependencyNode @ 0x14089E204
 * Callers:
 *     IoResolveDependency @ 0x1403BF8D0 (IoResolveDependency.c)
 * Callees:
 *     PipDeleteDependencyNode @ 0x1407CD820 (PipDeleteDependencyNode.c)
 */

void __fastcall PipUnlinkDeviceObjectAndDependencyNode(__int64 a1, __int64 a2)
{
  *(_QWORD *)(*(_QWORD *)(a1 + 312) + 80LL) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  if ( (*(_DWORD *)(a2 + 88))-- == 1 )
    PipDeleteDependencyNode((_QWORD *)a2);
}
