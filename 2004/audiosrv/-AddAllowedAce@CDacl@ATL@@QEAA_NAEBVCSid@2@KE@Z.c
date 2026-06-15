/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180006ED0
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x180006278 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180006478 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x1800070F0 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x180007A90 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x1800D61C8 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  DWORD LengthSid; // eax
  unsigned __int64 v9; // r14
  int Error; // ecx

  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)this + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)this + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  v7 = v6;
  if ( v6 )
  {
    *v6 = &ATL::CAcl::CAce::`vftable';
    v6[1] = &ATL::CSid::`vftable';
    *((_BYTE *)v6 + 84) = *((_BYTE *)a2 + 76);
    *((_DWORD *)v6 + 22) = *((_DWORD *)a2 + 20);
    v6[12] = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 11) - 24LL) + 24;
    v7[13] = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 12) - 24LL) + 24;
    v7[14] = ATL::CSimpleStringT<unsigned short,0>::CloneData(*((_QWORD *)a2 + 13) - 24LL) + 24;
    v7[15] = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    if ( *((_BYTE *)a2 + 76) )
    {
      if ( !IsValidSid((char *)a2 + 8) )
        ATL::AtlThrowImpl(-2147024809);
      LengthSid = GetLengthSid((char *)a2 + 8);
      if ( !CopySid(LengthSid, v7 + 2, (char *)a2 + 8) )
      {
        Error = ATL::AtlHresultFromLastError();
        ATL::AtlThrowImpl(Error);
      }
    }
    *((_DWORD *)v7 + 32) = a3;
    *((_BYTE *)v7 + 132) = 0;
    v7[17] = 0LL;
    *v7 = &ATL::CDacl::CAccessAce::`vftable';
    *((_BYTE *)v7 + 144) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !v7
    || (v9 = *((_QWORD *)this + 4), v9 >= *((_QWORD *)this + 5))
    && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                           (char *)this + 24,
                           v9 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9) = v7;
  ++*((_QWORD *)this + 4);
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  return 1;
}
