/*
 * XREFs of ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x180012D90
 * Callers:
 *     ?OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x180013990 (-OnRepresentationUpdated@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180026C94 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CSecondaryWindowRepresentation::ReleaseAllResources(CSecondaryWindowRepresentation *this)
{
  unsigned int v1; // edi
  char *v2; // rbx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx

  v1 = 0;
  v2 = (char *)this + 184;
  do
  {
    v3 = (CBaseObject *)*((_QWORD *)v2 - 1);
    if ( v3 )
    {
      CBaseObject::Release(v3);
      *((_QWORD *)v2 - 1) = 0LL;
    }
    if ( *(_QWORD *)v2 )
    {
      CBaseObject::Release(*(CBaseObject **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    v4 = (CBaseObject *)*((_QWORD *)v2 + 1);
    if ( v4 )
    {
      CBaseObject::Release(v4);
      *((_QWORD *)v2 + 1) = 0LL;
    }
    v2[16] = 0;
    ++v1;
    v2 += 32;
  }
  while ( v1 < 5 );
}
