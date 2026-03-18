/*
 * XREFs of ??_ECVisualGroup@@UEAAPEAXI@Z @ 0x180156E10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ??1CResource@@MEAA@XZ @ 0x1800A40A8 (--1CResource@@MEAA@XZ.c)
 *     ?_Tidy@?$vector@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@V?$allocator@V?$unique_ptr@VCExcludeVisualReference@@U?$default_delete@VCExcludeVisualReference@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1801578C4 (-_Tidy@-$vector@V-$unique_ptr@VCExcludeVisualReference@@U-$default_delete@VCExcludeVisualReferen.c)
 */

CVisualGroup *__fastcall CVisualGroup::`vector deleting destructor'(CVisualGroup *this, char a2)
{
  std::vector<std::unique_ptr<CExcludeVisualReference>>::_Tidy((char *)this + 56);
  CResource::~CResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
