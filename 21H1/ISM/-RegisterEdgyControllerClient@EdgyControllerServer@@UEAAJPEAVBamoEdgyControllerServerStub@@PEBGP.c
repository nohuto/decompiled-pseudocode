/*
 * XREFs of ?RegisterEdgyControllerClient@EdgyControllerServer@@UEAAJPEAVBamoEdgyControllerServerStub@@PEBGPEAVBamoEdgyControllerClientProxy@@@Z @ 0x1801009E0
 * Callers:
 *     <none>
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B840 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 */

int __fastcall EdgyControllerServer::RegisterEdgyControllerClient(
        EdgyConnection **this,
        struct BamoEdgyControllerServerStub *a2,
        const unsigned __int16 *a3,
        struct BamoEdgyControllerClientProxy *a4)
{
  unsigned __int64 v6; // r8

  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  std::wstring::assign((char *)a4 + 88, a3, v6);
  return EdgyConnection::RegisterControllerClient(this[7], a3, a4);
}
