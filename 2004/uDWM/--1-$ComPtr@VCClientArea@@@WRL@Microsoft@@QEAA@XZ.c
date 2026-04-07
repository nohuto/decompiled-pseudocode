/*
 * XREFs of ??1?$ComPtr@VCClientArea@@@WRL@Microsoft@@QEAA@XZ @ 0x18008558C
 * Callers:
 *     ?EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ @ 0x18001A0FC (-EnsureClientAreaNode@CTopLevelWindow@@QEAAJXZ.c)
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x180022EF0 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 */

CBaseObject *__fastcall Microsoft::WRL::ComPtr<CClientArea>::~ComPtr<CClientArea>(CBaseObject **a1)
{
  CBaseObject *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (CBaseObject *)CBaseObject::Release(result);
  }
  return result;
}
