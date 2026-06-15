/*
 * XREFs of ?TsSessionDeleteAppManagerClient@@YAJPEAVTSSession@@PEAVCProcess@@@Z @ 0x18002E084
 * Callers:
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18002EBE8 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 * Callees:
 *     ?RemoveAt@?$CAtlList@PEAVCApplication@@V?$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x18001D91C (-RemoveAt@-$CAtlList@PEAVCApplication@@V-$CElementTraits@PEAVCApplication@@@ATL@@@ATL@@QEAAXPEAU.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TsSessionDeleteAppManagerClient(struct TSSession *a1, struct CProcess *a2)
{
  __int64 **v3; // rcx
  __int64 *i; // rdx

  v3 = (__int64 **)((char *)a1 + 56);
  for ( i = *v3; i && (struct CProcess *)i[2] != a2; i = (__int64 *)*i )
    ;
  if ( i )
  {
    ATL::CAtlList<CApplication *,ATL::CElementTraits<CApplication *>>::RemoveAt(v3, i);
    *((_DWORD *)a2 + 121) = 0;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)a2 + 32LL))(a2);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)a2 + 24LL))(a2, 1LL);
    }
  }
  return 0LL;
}
