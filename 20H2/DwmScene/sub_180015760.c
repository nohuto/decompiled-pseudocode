/*
 * XREFs of sub_180015760 @ 0x180015760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180015760(volatile signed __int32 *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  unsigned int v3; // ebx

  v1 = 0x7FFFFFFFLL;
  do
    v2 = *((unsigned int *)a1 + 3);
  while ( (_DWORD)v2 != 0x7FFFFFFF && (_DWORD)v2 != _InterlockedCompareExchange(a1 + 3, v2 - 1, v2) );
  v3 = v2 - 1;
  if ( (_DWORD)v2 == 1 )
  {
    if ( a1 )
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 80LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( qword_180218548 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)qword_180218548 + 16LL))(
        qword_180218548,
        *(_QWORD *)qword_180218548,
        v2,
        v1);
  }
  return v3;
}
