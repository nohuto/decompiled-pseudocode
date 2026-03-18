/*
 * XREFs of ??_GCPrimitiveGroupDrawListGenerator@@EEAAPEAXI@Z @ 0x1800373F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x180039BC0 (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 */

CPrimitiveGroupDrawListGenerator *__fastcall CPrimitiveGroupDrawListGenerator::`scalar deleting destructor'(
        CPrimitiveGroupDrawListGenerator *this,
        char a2)
{
  CPrimitiveGroupDrawListGenerator::~CPrimitiveGroupDrawListGenerator(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x80uLL);
  return this;
}
