/*
 * XREFs of ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EB90
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015BF34 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A7E8C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180159830 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B344 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER_V2>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        unsigned int a2,
        const void *a3,
        __int64 a4,
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *a5)
{
  char v7; // si
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v8; // rdx
  DWORD v9; // edi
  int v10; // r14d
  unsigned __int64 v11; // rdx
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v12; // rcx
  int v13; // eax
  int v14; // ebx
  unsigned __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // rdx
  const char *v19; // [rsp+28h] [rbp-38h]
  unsigned int *v20; // [rsp+30h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  unsigned int v22; // [rsp+98h] [rbp+38h] BYREF

  v22 = a2;
  v7 = 1;
  v8 = a5;
  *((_QWORD *)a5 + 2) = *((_QWORD *)a5 + 1);
  *(_QWORD *)v8 = 12LL;
  v22 = 0;
  v9 = 12;
  v10 = 0;
  v11 = 0LL;
  v12 = a5;
  while ( 1 )
  {
    v13 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v12, v11);
    v14 = v13;
    if ( v13 < 0 )
      break;
    v14 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            a1,
            0x5B8430u,
            a3,
            0x18u,
            *((_QWORD *)a5 + 1),
            v9,
            &v22);
    if ( v14 < 0 )
      goto LABEL_15;
    v12 = a5;
    if ( v22 < 0xC )
    {
      v14 = -2147418113;
      v16 = 2147549183LL;
      v17 = 390LL;
      goto LABEL_14;
    }
    v15 = **((unsigned int **)a5 + 1);
    v11 = v15;
    v9 = v15 + 12;
    if ( v22 == v15 + 12 )
      goto LABEL_11;
    if ( v22 != 12 )
    {
      v14 = -2147418113;
      v16 = 2147549183LL;
      v17 = 397LL;
      goto LABEL_14;
    }
    if ( !v15 )
    {
LABEL_11:
      Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(a5, v15);
      v7 = 0;
      v14 = 0;
      goto LABEL_15;
    }
    if ( (unsigned int)++v10 >= 0xA )
    {
      LODWORD(v20) = 12;
      LODWORD(v19) = 10;
      v14 = -2147418113;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        412LL,
        (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        (const char *)0x8000FFFFLL,
        (int)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize = %u, requiredSize ="
             " %zu, ioctlCode = 0x%x",
        v19,
        v20,
        v15,
        v15 + 12,
        5997616,
        &a5,
        1);
      goto LABEL_15;
    }
  }
  v16 = (unsigned int)v13;
  v17 = 374LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v17,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
    (const char *)v16);
LABEL_15:
  if ( v7 )
    *((_QWORD *)a5 + 2) = *((_QWORD *)a5 + 1);
  return (unsigned int)v14;
}
