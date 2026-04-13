/*
 * XREFs of ?GetIids@UniqueExtendedExecutionSession@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18007FAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall UniqueExtendedExecutionSession::GetIids(
        UniqueExtendedExecutionSession *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
