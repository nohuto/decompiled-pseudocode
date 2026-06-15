/*
 * XREFs of ?GetInputChannelCount@CAPOWrapperSrv@@UEAAJPEAI@Z @ 0x140047A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::GetInputChannelCount(CAPOWrapperSrv *this, unsigned int *a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v2 + 72LL))(v2, a2);
  else
    return 2147500033LL;
}
