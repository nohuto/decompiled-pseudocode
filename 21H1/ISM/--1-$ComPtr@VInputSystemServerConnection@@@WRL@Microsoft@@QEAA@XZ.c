/*
 * XREFs of ??1?$ComPtr@VInputSystemServerConnection@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BC00C
 * Callers:
 *     _InputSystemServerConnection::Create_::_1_::dtor$2 @ 0x18005142C (_InputSystemServerConnection--Create_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x1800334B8 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 */

Microsoft::Bamo::BaseBamoConnection *__fastcall Microsoft::WRL::ComPtr<InputSystemServerConnection>::~ComPtr<InputSystemServerConnection>(
        Microsoft::Bamo::BaseBamoConnection **a1)
{
  Microsoft::Bamo::BaseBamoConnection *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (Microsoft::Bamo::BaseBamoConnection *)Microsoft::Bamo::BaseBamoConnection::Release(result);
  }
  return result;
}
