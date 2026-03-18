/*
 * XREFs of ?SupportGetPostCompositionCaps@DXGADAPTER@@QEBAEXZ @ 0x1C003A0A4
 * Callers:
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C01598A8 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGADAPTER::SupportGetPostCompositionCaps(DXGADAPTER *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 145) )
    return *((_BYTE *)this + 2642) != 0;
  return result;
}
