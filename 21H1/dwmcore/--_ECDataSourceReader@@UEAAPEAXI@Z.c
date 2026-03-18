/*
 * XREFs of ??_ECDataSourceReader@@UEAAPEAXI@Z @ 0x1801C2A80
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x18007E868 (--1CResource@@MEAA@XZ.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DC280 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     ?RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z @ 0x1801693F4 (-RemoveReaderFromReadyList@DataProviderManager@@QEAAXPEAVCDataSourceReader@@@Z.c)
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x1801694B0 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 */

CDataSourceReader *__fastcall CDataSourceReader::`vector deleting destructor'(CDataSourceReader *this, char a2)
{
  char v4; // al

  *(_QWORD *)this = &CDataSourceReader::`vftable';
  v4 = *((_BYTE *)this + 72);
  if ( (v4 & 2) != 0 )
  {
    DataProviderManager::RemoveReaderFromReadyList(*(DataProviderManager **)(*((_QWORD *)this + 2) + 1096LL), this);
    *((_BYTE *)this + 72) &= ~2u;
    v4 = *((_BYTE *)this + 72);
  }
  if ( (v4 & 1) != 0 )
  {
    DataProviderManager::UnregisterReaderForDataSource(
      *(DataProviderManager **)(*((_QWORD *)this + 2) + 1096LL),
      *((_QWORD *)this + 7),
      *((_QWORD *)this + 8),
      this);
    *((_BYTE *)this + 72) &= ~1u;
  }
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x50);
    else
      operator delete(this);
  }
  return this;
}
