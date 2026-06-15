/*
 * XREFs of ?CallDestructors@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@CAXPEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@_K@Z @ 0x1800D615C
 * Callers:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800049CC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ??1?$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ @ 0x1800D592C (--1-$CAutoPtrArray@VCAccessAce@CDacl@ATL@@@ATL@@QEAA@XZ.c)
 *     ?RemoveAt@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800D8764 (-RemoveAt@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccess.c)
 * Callees:
 *     ??1?$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ @ 0x1800D76D4 (--1-$CAutoPtr@VCConstraintModel@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::CallDestructors(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax

  if ( a2 )
  {
    v2 = a2;
    do
    {
      result = ATL::CAutoPtr<CConstraintModel>::~CAutoPtr<CConstraintModel>(a1);
      a1 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
