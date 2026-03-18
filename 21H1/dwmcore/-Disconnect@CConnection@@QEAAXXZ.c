/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x1801526CC
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800D16E0 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x180152300 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@MEAA@XZ @ 0x180152604 (--1CConnection@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  void *v2; // rax

  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    v2 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5));
    SetEvent(v2);
    WaitForSingleObject(*((HANDLE *)this + 3), 0xFFFFFFFF);
  }
}
