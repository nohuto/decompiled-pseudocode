/*
 * XREFs of ?ProcessPenUpdatePayload@PenDevice@@QEAAXPEAXKPEAU_GUID@@@Z @ 0x1801318E4
 * Callers:
 *     ?HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z @ 0x18012F958 (-HandleRIMDeviceInput@PenDeviceManager@@QEAAXPEAX0K@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?ExtractPenIdFromReport@PenIdentity@@YA_NPEAXKW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEAU_GUID@@@Z @ 0x180132138 (-ExtractPenIdFromReport@PenIdentity@@YA_NPEAXKW4_HIDP_REPORT_TYPE@@PEAU_HIDP_PREPARSED_DATA@@PEA.c)
 */

void __fastcall PenDevice::ProcessPenUpdatePayload(PenDevice *this, CHAR *a2, ULONG a3, struct _GUID *a4)
{
  _QWORD *v6; // rax
  const char *v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _GUID *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( PenIdentity::ExtractPenIdFromReport(
         a2,
         a3,
         a3,
         (enum _HIDP_REPORT_TYPE)*((_QWORD *)this + 11),
         (struct _HIDP_PREPARSED_DATA *)a4,
         v10) )
  {
    if ( *((_BYTE *)this + 177) )
    {
      v6 = (_QWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 24LL))((char *)this + 8);
      v8 = *v6 - *(_QWORD *)&a4->Data1;
      if ( *v6 == *(_QWORD *)&a4->Data1 )
        v8 = v6[1] - *(_QWORD *)a4->Data4;
      if ( v8 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          75LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\pendevice.cpp",
          v7);
        __debugbreak();
      }
    }
    v9 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v9 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v9 )
    {
      *((_BYTE *)this + 176) = 0;
      (*(void (__fastcall **)(char *, struct _GUID *))(*((_QWORD *)this + 1) + 32LL))((char *)this + 8, a4);
    }
    else
    {
      *((_BYTE *)this + 176) = 1;
    }
  }
}
