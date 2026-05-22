/*
 * XREFs of ??$GetPropertyOfVariableSize@UHOLOGRAPHIC_DEVICE_PROPERTY_HEADER@@@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBX_KPEAVVariableSizeStructWrapperBase@123@@Z @ 0x18014EE34
 * Callers:
 *     ?GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015C394 (-GetDevicePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEB.c)
 *     ?GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEAVVariableSizeStructWrapperBase@234@P6AJPEBX_K@ZW4PropertyCacheBehavior@234@@Z @ 0x18015D890 (-GetNodePropertyOfVariableSize@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJAEBUS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A824C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x180159C90 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x18015B7A4 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::GetPropertyOfVariableSize<HOLOGRAPHIC_DEVICE_PROPERTY_HEADER>(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *a1,
        unsigned int a2,
        const void *a3,
        unsigned int a4,
        Windows::Internal::Holographic::VariableSizeStructWrapperBase *a5)
{
  char v9; // si
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v10; // r10
  DWORD v11; // edi
  int v12; // ebp
  unsigned __int64 v13; // rdx
  Windows::Internal::Holographic::VariableSizeStructWrapperBase *v14; // rcx
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // r9
  __int64 v19; // rdx
  const char *v21; // [rsp+28h] [rbp-70h]
  unsigned int *v22; // [rsp+30h] [rbp-68h]
  unsigned int v23; // [rsp+50h] [rbp-48h] BYREF
  Windows::Internal::Holographic::VariableSizeStructWrapperBase **v24; // [rsp+58h] [rbp-40h]
  char v25; // [rsp+60h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v24 = &a5;
  v9 = 1;
  v25 = 1;
  v10 = a5;
  *((_QWORD *)a5 + 2) = *((_QWORD *)a5 + 1);
  *(_QWORD *)v10 = 4LL;
  v23 = 0;
  v11 = 4;
  v12 = 0;
  v13 = 0LL;
  v14 = a5;
  while ( 1 )
  {
    v15 = Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(v14, v13);
    v16 = v15;
    if ( v15 < 0 )
      break;
    v16 = Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceIoControlHelper(
            a1,
            a2,
            a3,
            a4,
            *((_QWORD *)a5 + 1),
            v11,
            &v23);
    if ( v16 < 0 )
      goto LABEL_15;
    v14 = a5;
    if ( v23 < 4 )
    {
      v16 = -2147418113;
      v18 = 2147549183LL;
      v19 = 390LL;
      goto LABEL_14;
    }
    v17 = **((unsigned int **)a5 + 1);
    v13 = v17;
    v11 = v17 + 4;
    if ( v23 == v17 + 4 )
      goto LABEL_11;
    if ( v23 != 4 )
    {
      v16 = -2147418113;
      v18 = 2147549183LL;
      v19 = 397LL;
      goto LABEL_14;
    }
    if ( !v17 )
    {
LABEL_11:
      Windows::Internal::Holographic::VariableSizeStructWrapperBase::Allocate(a5, v17);
      v9 = 0;
      v16 = 0;
      goto LABEL_15;
    }
    if ( (unsigned int)++v12 >= 0xA )
    {
      LODWORD(v22) = 4;
      LODWORD(v21) = 10;
      v16 = -2147418113;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        412LL,
        (unsigned int)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
        (const char *)0x8000FFFFLL,
        (int)"failed to read variable-size property after %u tries: bytesReturned = %u, propertySize = %u, requiredSize ="
             " %zu, ioctlCode = 0x%x",
        v21,
        v22,
        v17,
        v17 + 4,
        a2);
      goto LABEL_15;
    }
  }
  v18 = (unsigned int)v15;
  v19 = 374LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\HolographicDriverHandleWrapper.h",
    (const char *)v18);
LABEL_15:
  if ( v9 )
    *((_QWORD *)a5 + 2) = *((_QWORD *)a5 + 1);
  return (unsigned int)v16;
}
