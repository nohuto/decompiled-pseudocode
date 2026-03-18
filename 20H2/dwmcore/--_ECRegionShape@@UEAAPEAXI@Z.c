/*
 * XREFs of ??_ECRegionShape@@UEAAPEAXI@Z @ 0x1800A7550
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180072F50 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008B360 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x1800A6350 (--1CRegionShape@@UEAA@XZ.c)
 */

CRegionShape *__fastcall CRegionShape::`vector deleting destructor'(CRegionShape *this, char a2)
{
  CRegionShape::~CRegionShape(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
