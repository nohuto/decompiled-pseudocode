/*
 * XREFs of PerfReadActualMasterCount @ 0x1C000BBE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfReadActualMasterCount(_QWORD *a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  void (__fastcall *v4)(_QWORD, __int64, __int64 *, __int64 *); // rax
  char v7; // bl
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+60h] [rbp+18h] BYREF

  v4 = (void (__fastcall *)(_QWORD, __int64, __int64 *, __int64 *))a1[6];
  v12 = 0LL;
  v11 = 0LL;
  v7 = a2;
  LOBYTE(a2) = 1;
  v4(a1[7], a2, &v11, &v12);
  v9 = a1[3];
  if ( !v7 )
  {
    v9 += v11;
    a1[2] += v12;
    a1[3] = v9;
  }
  *a3 = v9;
  result = a1[2];
  *a4 = result;
  return result;
}
