/*
 * XREFs of ??0CResourceTable@@QEAA@IPEAVCProcessAttribution@@@Z @ 0x1800915F8
 * Callers:
 *     ?Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z @ 0x180091654 (-Create@CChannelContext@@SAJIK_KPEAVCConnection@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CResourceTable *__fastcall CResourceTable::CResourceTable(CResourceTable *this, int a2, struct CProcessAttribution *a3)
{
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 7) = 0;
  *(_QWORD *)this = &CResourceTable::`vftable';
  *((_QWORD *)this + 2) = &HANDLE_TABLE::`vftable';
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 6) = 16;
  *((_QWORD *)this + 7) = a3;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 12) = a2;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  return this;
}
