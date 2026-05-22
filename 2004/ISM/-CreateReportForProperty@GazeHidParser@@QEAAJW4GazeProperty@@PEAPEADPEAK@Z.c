/*
 * XREFs of ?CreateReportForProperty@GazeHidParser@@QEAAJW4GazeProperty@@PEAPEADPEAK@Z @ 0x1801295E4
 * Callers:
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x18009D824 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18009D944 (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x18009DA88 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C6C0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x18003D304 (--_U@YAPEAX_K@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x180129F84 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     ?at@?$map@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@@std@@QEAAAEAGAEBW4GazeProperty@@@Z @ 0x18012A090 (-at@-$map@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@V-$allocator@U-$pair@$$CBW4GazeProperty.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::CreateReportForProperty(__int64 a1, unsigned int a2, void **a3, _DWORD *a4)
{
  char v8; // si
  USHORT v10; // r8
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  USAGE v14; // cx
  const struct std::nothrow_t *v15; // rdx
  _BYTE *v16; // rax
  void *v17; // rcx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-69h] BYREF
  void *v19; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-59h] BYREF
  void **v21; // [rsp+58h] [rbp-51h]
  char v22; // [rsp+60h] [rbp-49h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+70h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]

  v20 = a2;
  v19 = 0LL;
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  v8 = 1;
  ValueCapsLength = 1;
  if ( !(unsigned __int8)GazeHidParser::IsPropertySupported(a1, a2) )
    return 2147943568LL;
  v10 = *(_WORD *)std::map<enum GazeProperty,unsigned short>::at(a1 + 72, &v20);
  v11 = a2 - 1;
  if ( !v11 )
  {
    v14 = 1024;
LABEL_10:
    v21 = &v19;
    v22 = 1;
    if ( HidP_GetSpecificValueCaps(
           HidP_Feature,
           0x12u,
           v10,
           v14,
           &ValueCaps,
           &ValueCapsLength,
           *(PHIDP_PREPARSED_DATA *)(a1 + 64)) == 1114112 )
    {
      v16 = operator new[](*(unsigned __int16 *)(a1 + 8));
      v19 = v16;
      if ( v16 )
      {
        *v16 = ValueCaps.ReportID;
        v17 = v19;
        *a3 = v19;
        *a4 = *(unsigned __int16 *)(a1 + 8);
        v8 = 0;
        v13 = 0;
LABEL_16:
        if ( v8 )
        {
          if ( v17 )
            operator delete(v17, v15);
        }
        return v13;
      }
      v13 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
        (const char *)0x8007000ELL);
    }
    else
    {
      v13 = -2147023728;
    }
    v17 = v19;
    goto LABEL_16;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    v14 = 769;
    goto LABEL_10;
  }
  if ( v12 == 1 )
  {
    v14 = 512;
    goto LABEL_10;
  }
  v13 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9A,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\gaze\\hid\\lib\\gazehidparser.cpp",
    (const char *)0x80070057LL);
  return v13;
}
