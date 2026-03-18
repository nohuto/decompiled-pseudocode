/*
 * XREFs of ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801C2B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x1801691B8 (-GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z.c)
 */

int __fastcall CDataSourceReader::GetProperty(CDataSourceReader *this, unsigned int a2, struct CExpressionValue *a3)
{
  if ( (*((_BYTE *)this + 72) & 1) != 0 )
    return DataProviderManager::GetPropertyValue(
             *(DataProviderManager **)(*((_QWORD *)this + 2) + 1096LL),
             this,
             *((_QWORD *)this + 7),
             *((_QWORD *)this + 8),
             a2,
             a3);
  else
    return -2147467259;
}
