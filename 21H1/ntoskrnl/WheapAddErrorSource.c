/*
 * XREFs of WheapAddErrorSource @ 0x1403B6D54
 * Callers:
 *     WheaAddErrorSource @ 0x140797430 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A5BD6C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_140CDB038, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_140CDB020;
  v3 = (__int64 *)qword_140CDB030;
  if ( *(__int64 **)qword_140CDB030 != &qword_140CDB028 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_140CDB028;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_140CDB030 = a2;
  _InterlockedIncrement(&dword_140CDB01C);
  _InterlockedIncrement(&dword_140CDB020);
  return KeSetEvent(&stru_140CDB038, 0, 0);
}
