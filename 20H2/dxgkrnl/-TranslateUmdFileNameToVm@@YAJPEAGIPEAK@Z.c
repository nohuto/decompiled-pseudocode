/*
 * XREFs of ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02214B0
 * Callers:
 *     ?PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z @ 0x1C0220F38 (-PostProcessUMDFileName@@YAJW4_KMTQUERYADAPTERINFOTYPE@@PEAXI@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02215D0 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C0247E58 (-VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1C02608C0 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000AE88 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C0220AB0 (-GenerateUmdFileName@@YAJQEAGPEBG1@Z.c)
 */

__int64 __fastcall TranslateUmdFileNameToVm(size_t *a1, unsigned int a2, unsigned int *a3)
{
  size_t *v6; // rax
  const unsigned __int16 *v7; // rdx
  int UmdFileName; // ebx
  __int64 v9; // rdx
  unsigned __int16 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  wchar_t String[264]; // [rsp+20h] [rbp-458h] BYREF
  unsigned __int16 v16[4]; // [rsp+230h] [rbp-248h] BYREF
  size_t v17[65]; // [rsp+238h] [rbp-240h] BYREF

  RtlStringCbCopyW(String, 0x104uLL, a1);
  _wcslwr(String);
  v6 = (size_t *)wcsstr(String, L"\\filerepository\\");
  UmdFileName = 0;
  if ( !v6 )
    return (unsigned int)UmdFileName;
  UmdFileName = GenerateUmdFileName(v16, v7, v6);
  if ( UmdFileName < 0 )
  {
LABEL_11:
    v13 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = UmdFileName;
    WdLogEvent5_WdWarning(v13);
    return (unsigned int)UmdFileName;
  }
  UmdFileName = RtlStringCbCopyW((unsigned __int16 *)a1, 2LL * a2, v17);
  if ( UmdFileName < 0 )
  {
    if ( !a3 )
      goto LABEL_10;
    UmdFileName = -2147483643;
  }
  if ( a3 )
  {
    v10 = v16;
    v12 = -1LL;
    do
      ++v12;
    while ( v16[v12] );
    *a3 = 2 * v12 + 2;
  }
LABEL_10:
  if ( UmdFileName < 0 )
    goto LABEL_11;
  return (unsigned int)UmdFileName;
}
