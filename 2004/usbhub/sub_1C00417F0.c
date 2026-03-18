/*
 * XREFs of sub_1C00417F0 @ 0x1C00417F0
 * Callers:
 *     sub_1C0009690 @ 0x1C0009690 (sub_1C0009690.c)
 *     sub_1C00099C0 @ 0x1C00099C0 (sub_1C00099C0.c)
 *     sub_1C0014E84 @ 0x1C0014E84 (sub_1C0014E84.c)
 *     sub_1C002DBF0 @ 0x1C002DBF0 (sub_1C002DBF0.c)
 *     sub_1C002DC34 @ 0x1C002DC34 (sub_1C002DC34.c)
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_1C00417F0(__int64 a1))(_QWORD)
{
  _DWORD *v1; // rdi
  void *v2; // rbx
  int v3; // edx
  _DWORD *v4; // rax
  void *v5; // rbx
  __int64 (__fastcall *result)(_QWORD); // rax

  v1 = 0LL;
  v2 = 0LL;
  v3 = **(_DWORD **)(a1 + 64);
  if ( v3 == 541218120 )
  {
    v2 = (void *)a1;
    goto LABEL_6;
  }
  if ( v3 == 1329877064 )
  {
    v4 = sub_1C0011220(a1);
    v2 = (void *)*((_QWORD *)v4 + 148);
    if ( v2 )
    {
      a1 = *((_QWORD *)v4 + 148);
LABEL_6:
      v1 = sub_1C000F050(a1);
    }
  }
  ObfReferenceObject(v2);
  v5 = (void *)_InterlockedExchange64((volatile __int64 *)&stru_1C006B480.Queue.ListEntry.Flink, (__int64)v2);
  result = (__int64 (__fastcall *)(_QWORD))*((_QWORD *)v1 + 585);
  if ( result )
    result = (__int64 (__fastcall *)(_QWORD))result(*((_QWORD *)v1 + 582));
  if ( v5 )
    return (__int64 (__fastcall *)(_QWORD))ObfDereferenceObject(v5);
  return result;
}
