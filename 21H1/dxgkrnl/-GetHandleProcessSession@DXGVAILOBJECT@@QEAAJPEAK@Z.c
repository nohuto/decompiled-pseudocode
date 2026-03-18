/*
 * XREFs of ?GetHandleProcessSession@DXGVAILOBJECT@@QEAAJPEAK@Z @ 0x1C02B0B84
 * Callers:
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C02AFAA4 (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::GetHandleProcessSession(DXGVAILOBJECT *this, unsigned int *a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
    *a2 = PsGetProcessSessionIdEx(v6);
  else
    v4 = -1073741275;
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8, v5);
  return v4;
}
