/*
 * XREFs of RtlEnumerateGenericTableLikeADirectory @ 0x1800F7AD0
 * Callers:
 *     <none>
 * Callees:
 *     FindNodeOrParent @ 0x18005BC2C (FindNodeOrParent.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     RealSuccessor @ 0x1800F7A84 (RealSuccessor.c)
 */

_QWORD *__fastcall RtlEnumerateGenericTableLikeADirectory(
        __int64 a1,
        __int64 (*a2)(),
        __int64 a3,
        int a4,
        _QWORD *a5,
        _DWORD *a6,
        __int64 a7)
{
  bool v7; // zf
  _QWORD *v9; // rsi
  _QWORD *v12; // rbx
  _DWORD *v14; // r14
  __int64 (*v15)(); // r15
  int v16; // eax
  _QWORD *v17; // rcx
  int NodeOrParent; // eax
  int v19; // ecx

  v7 = *(_DWORD *)(a1 + 44) == 0;
  v9 = a5;
  v12 = (_QWORD *)*a5;
  a5 = (_QWORD *)*a5;
  if ( v7 )
  {
    *v9 = 0LL;
    return 0LL;
  }
  v14 = a6;
  v15 = WinSqmCheckEscalationSetString;
  v16 = *(_DWORD *)(a1 + 64);
  v17 = v12;
  if ( a2 )
    v15 = a2;
  if ( *a6 != v16 )
  {
    v12 = 0LL;
    a5 = 0LL;
    v17 = 0LL;
  }
  if ( v17 )
    goto LABEL_14;
  NodeOrParent = FindNodeOrParent(a1, a7, &a5);
  if ( NodeOrParent == 1 )
  {
    v12 = a5;
LABEL_14:
    if ( a4 )
      v12 = RealSuccessor(v12);
    goto LABEL_16;
  }
  a4 = 0;
  if ( NodeOrParent == 3 )
  {
    v12 = RealSuccessor(a5);
    goto LABEL_14;
  }
  v12 = a5;
LABEL_16:
  if ( !v12 )
    return 0LL;
  while ( 1 )
  {
    v19 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v15)(a1, v12 + 4, a3);
    if ( v19 != -1073741198 )
      break;
    v12 = RealSuccessor(v12);
    if ( !v12 )
      return 0LL;
  }
  *v9 = v12;
  *v14 = *(_DWORD *)(a1 + 64);
  if ( v19 )
    return 0LL;
  return v12 + 4;
}
