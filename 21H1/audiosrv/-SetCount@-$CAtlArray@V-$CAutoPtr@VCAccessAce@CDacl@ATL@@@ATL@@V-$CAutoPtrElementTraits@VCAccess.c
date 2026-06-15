/*
 * XREFs of ?SetCount@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_N_KH@Z @ 0x1800371F0
 * Callers:
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x1800049CC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?RemoveAllAces@CDacl@ATL@@UEAAXXZ @ 0x180047B00 (-RemoveAllAces@CDacl@ATL@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::SetCount(
        __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  char result; // al

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = 0LL;
    v4 = *(_QWORD *)(a1 + 8);
    if ( v4 )
    {
      do
      {
        v5 = (void (__fastcall ***)(_QWORD, __int64))v1[v3];
        if ( v5 )
          (**v5)(v5, 1LL);
        v1[v3++] = 0LL;
      }
      while ( v3 < v4 );
      v1 = *(_QWORD **)a1;
    }
    free(v1);
    *(_QWORD *)a1 = 0LL;
  }
  result = 1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  return result;
}
