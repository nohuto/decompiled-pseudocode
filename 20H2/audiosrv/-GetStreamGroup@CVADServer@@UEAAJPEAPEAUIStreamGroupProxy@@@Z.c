/*
 * XREFs of ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x1800DBC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetStreamGroup(CVADServer *this, struct IStreamGroupProxy **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  unsigned int v5; // ebx

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 224));
  v5 = (*(__int64 (__fastcall **)(__int64, struct IStreamGroupProxy **))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL)
                                                                       + 120LL))(
         *((_QWORD *)this + 24) + 8LL,
         a2);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v5;
}
