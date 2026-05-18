/*
 * XREFs of sub_18001D220 @ 0x18001D220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D220(volatile signed __int32 *a1)
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
      (*(void (__fastcall **)(volatile signed __int32 *, __int64, __int64, __int64))(*(_QWORD *)a1 + 120LL))(
        a1,
        1LL,
        v2,
        0x7FFFFFFFLL);
    if ( qword_18021F678 )
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(*(_QWORD *)qword_18021F678 + 16LL))(
        qword_18021F678,
        *(_QWORD *)qword_18021F678,
        v2,
        v1);
  }
  return v3;
}
