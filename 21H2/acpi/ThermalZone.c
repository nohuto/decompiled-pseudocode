/*
 * XREFs of ThermalZone @ 0x1C002EBF0
 * Callers:
 *     <none>
 * Callees:
 *     CreateNameSpaceObject @ 0x1C0013250 (CreateNameSpaceObject.c)
 *     PushScope @ 0x1C0018570 (PushScope.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ThermalZone(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax

  v2 = (__int64 *)(a2 + 64);
  result = CreateNameSpaceObject(
             *(_QWORD *)(a1 + 320),
             *(unsigned __int8 **)(*(_QWORD *)(a2 + 80) + 32LL),
             *(_QWORD *)(a1 + 80),
             *(struct _EX_RUNDOWN_REF **)(a1 + 88),
             (__int64 *)(a2 + 64),
             0);
  if ( !(_DWORD)result )
  {
    *(_WORD *)(*v2 + 66) = 13;
    if ( ghCreate )
      ghCreate(13LL, *v2 + 120);
    return PushScope(
             a1,
             *(_QWORD *)(a1 + 120),
             *(_SLIST_ENTRY **)(a2 + 40),
             0LL,
             *v2,
             *(_QWORD *)(a1 + 88),
             *(_QWORD *)(a1 + 320),
             *(_QWORD *)(a2 + 88));
  }
  return result;
}
