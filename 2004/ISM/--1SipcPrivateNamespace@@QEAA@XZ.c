/*
 * XREFs of ??1SipcPrivateNamespace@@QEAA@XZ @ 0x1800BEED4
 * Callers:
 *     ?AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z @ 0x1800BF220 (-AcceptClientConnection@AlpcPort@@UEAAJIPEAXAEAPEAX1AEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ @ 0x1800C1A04 (-_FailFast_GetLastError@in1diag0@details@wil@@YAXXZ.c)
 */

void __fastcall SipcPrivateNamespace::~SipcPrivateNamespace(void **this)
{
  void *v1; // rcx
  wil::details::in1diag0 *v2; // rcx

  v1 = *this;
  if ( v1 )
  {
    if ( !ClosePrivateNamespace(v1, 1u) )
    {
      wil::details::in1diag0::_FailFast_GetLastError(v2);
      __debugbreak();
    }
  }
}
