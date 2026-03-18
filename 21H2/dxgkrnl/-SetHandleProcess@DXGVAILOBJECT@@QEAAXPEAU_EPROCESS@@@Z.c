/*
 * XREFs of ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0351A20
 * Callers:
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C033770C (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGVAILOBJECT::SetHandleProcess(DXGVAILOBJECT *this, struct _EPROCESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (DXGVAILOBJECT *)((char *)this + 40), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  if ( a2 || PsGetCurrentProcess(v5, v4, v6, v7) == *((_QWORD *)this + 12) )
  {
    v8 = (void *)*((_QWORD *)this + 12);
    if ( v8 )
    {
      ObfDereferenceObject(v8);
      *((_QWORD *)this + 12) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 12) = a2;
      ObfReferenceObject(a2);
    }
  }
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
