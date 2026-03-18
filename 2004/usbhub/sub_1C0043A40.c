/*
 * XREFs of sub_1C0043A40 @ 0x1C0043A40
 * Callers:
 *     sub_1C0041990 @ 0x1C0041990 (sub_1C0041990.c)
 *     sub_1C0042BA0 @ 0x1C0042BA0 (sub_1C0042BA0.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

LONG __fastcall sub_1C0043A40(__int64 a1)
{
  _DWORD *v1; // rbx
  _QWORD *v2; // rax
  __int64 v3; // r8
  _QWORD *v4; // rdx

  v1 = sub_1C000F050(a1);
  if ( v1[344] )
    USBD_ReleaseHubNumber();
  KeWaitForSingleObject(&stru_1C006B480.Queue.Wcb.DeviceRoutine, Executive, 0, 0, 0LL);
  v2 = v1 + 1288;
  v3 = *((_QWORD *)v1 + 644);
  if ( *(_DWORD **)(v3 + 8) != v1 + 1288 || (v4 = (_QWORD *)*((_QWORD *)v1 + 645), (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  *((_QWORD *)v1 + 645) = v1 + 1288;
  *v2 = v2;
  return KeSetEvent((PRKEVENT)&stru_1C006B480.Queue.Wcb.DeviceRoutine, 0, 0);
}
