/*
 * XREFs of ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C00464A0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C005B0D0 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0268200 (--1DXGGLOBAL@@AEAA@XZ.c)
 *     ??1OUTPUTDUPL_MGR@@QEAA@XZ @ 0x1C02985D8 (--1OUTPUTDUPL_MGR@@QEAA@XZ.c)
 * Callees:
 *     ??_GDXGFASTMUTEX@@QEAAPEAXI@Z @ 0x1C0012E24 (--_GDXGFASTMUTEX@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(_QWORD *P, __int64 a2)
{
  void *v3; // rcx
  DXGFASTMUTEX *v4; // rcx

  v3 = (void *)P[6];
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = (DXGFASTMUTEX *)P[7];
  if ( v4 )
  {
    DXGFASTMUTEX::`scalar deleting destructor'(v4, a2);
    P[7] = 0LL;
  }
  ExFreePoolWithTag(P, 0);
  return P;
}
