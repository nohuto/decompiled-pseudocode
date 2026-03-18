/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x18014EC4C
 * Callers:
 *     ?MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z @ 0x1800D9090 (-MilCompositionEngine_Initialize@@YAJHPEAPEAUHMIL_CONNECTION__@@@Z.c)
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x18014E880 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@MEAA@XZ @ 0x18014EB84 (--1CConnection@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
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
