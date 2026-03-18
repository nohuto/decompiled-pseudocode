/*
 * XREFs of ??1DXGDODPRESENT@@QEAA@XZ @ 0x1C03BB31C
 * Callers:
 *     ??_GDXGDODPRESENT@@QEAAPEAXI@Z @ 0x1C00456B8 (--_GDXGDODPRESENT@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??_GBLTQUEUE@@QEAAPEAXI@Z @ 0x1C00585B0 (--_GBLTQUEUE@@QEAAPEAXI@Z.c)
 */

void __fastcall DXGDODPRESENT::~DXGDODPRESENT(DXGDODPRESENT *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)this; ++i )
    BLTQUEUE::`scalar deleting destructor'((BLTQUEUE *)(*((_QWORD *)this + 1) + 2920LL * i), 0);
}
