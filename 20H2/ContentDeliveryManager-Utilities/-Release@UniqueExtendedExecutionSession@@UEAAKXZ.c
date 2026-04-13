/*
 * XREFs of ?Release@UniqueExtendedExecutionSession@@UEAAKXZ @ 0x18007F6A0
 * Callers:
 *     ?Release@UniqueExtendedExecutionSession@@W7EAAKXZ @ 0x1800836E0 (-Release@UniqueExtendedExecutionSession@@W7EAAKXZ.c)
 *     ?Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ @ 0x180083710 (-Release@UniqueExtendedExecutionSession@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall UniqueExtendedExecutionSession::Release(UniqueExtendedExecutionSession *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::Release(this);
}
