/*
 * XREFs of PnpGetDevicePropertyData @ 0x1407496A8
 * Callers:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x14081C1B0 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x1409BB670 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v16; // rax
  unsigned int *v17; // rdx
  __int64 v18; // [rsp+60h] [rbp-108h] BYREF
  _BYTE *v19; // [rsp+68h] [rbp-100h]
  _BYTE v20[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v20, 0, 0xAAuLL);
  v18 = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741808;
  v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  if ( !v11 )
    return (unsigned int)-1073741808;
  v12 = *(_QWORD *)(v11 + 48);
  if ( !v12 )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    WORD1(v18) = 170;
    v19 = v20;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, &v18) )
      return (unsigned int)-1073741823;
    v12 = *(_QWORD *)(v11 + 48);
    v13 = (__int64)v19;
  }
  else
  {
    v13 = 0LL;
  }
  ObjectProperty = PnpGetObjectProperty(PiPnpRtlCtx, v12, 1, 0, v13, a2, a8, (__int64)a6, a5, (__int64)a7, 0);
  if ( *(_DWORD *)(a2 + 16) != 2 )
    goto LABEL_7;
  v16 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
  if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
    v16 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
  if ( v16 )
  {
LABEL_7:
    if ( ObjectProperty != -1073741275 )
      return ObjectProperty;
    return (unsigned int)-1073741772;
  }
  if ( ObjectProperty != -1073741772 && ObjectProperty != -1073741275 )
  {
    if ( !ObjectProperty )
      PnpCompareInterruptInformation(a1, a6, *a7);
    return ObjectProperty;
  }
  v17 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
  if ( !v17 )
    return (unsigned int)-1073741772;
  if ( a7 )
    *a7 = *v17;
  if ( a5 >= *v17 )
  {
    memmove(a6, v17 + 1, *v17);
    return 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
}
