/*
 * XREFs of ?Attach@?$ComPtr@VCVisual@@@WRL@Microsoft@@QEAAXPEAVCVisual@@@Z @ 0x1800BA42C
 * Callers:
 *     ?ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ @ 0x1800BA4E0 (-ReinitializeDComp@UdwmDcompVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVisual>::Attach(CBaseObject **a1, CBaseObject *a2)
{
  CBaseObject *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = CBaseObject::Release(v4);
  *a1 = a2;
  return result;
}
