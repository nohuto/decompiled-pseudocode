/*
 * XREFs of PnpGetServiceStartType @ 0x140742F34
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PnpGetServiceStartType(__int64 a1, void *a2, _DWORD *a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  HANDLE Handle[2]; // [rsp+30h] [rbp-10h] BYREF
  int v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v15 = 0;
  Handle[0] = 0LL;
  *a3 = 4;
  if ( (ExpManufacturingInformation & 1) != 0 )
  {
    v8 = qword_140CF5798;
    if ( qword_140CF5798 )
    {
      if ( qword_140CF5798 == -1 )
        goto LABEL_2;
      v10 = 0;
    }
    else
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v9 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      else
        v9 = 0LL;
      v10 = SysCtxRegOpenKey(
              v9,
              2147483650LL,
              (__int64)L"System\\CurrentControlSet\\Control\\ManufacturingMode\\Current\\Services\\",
              0,
              0x20019u,
              (__int64)&qword_140CF5798);
      if ( v10 == -1073741772 )
      {
        v8 = -1LL;
        qword_140CF5798 = -1LL;
      }
      else
      {
        v8 = qword_140CF5798;
      }
    }
    if ( v10 >= 0 )
    {
      if ( *(_QWORD *)&PiPnpRtlCtx )
        v11 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
      else
        v11 = 0LL;
      if ( (int)SysCtxRegOpenKey(v11, v8, a1, 0, 0x20019u, (__int64)Handle) >= 0 )
      {
        LODWORD(v16) = 4;
        v6 = RegRtlQueryValue(Handle[0], L"Start", &v15, a3, (unsigned int *)&v16);
        if ( v6 >= 0 && v15 == 4 )
          goto LABEL_5;
      }
      v12 = (__int64)qword_140CF5790;
      if ( qword_140CF5790 )
      {
        if ( qword_140CF5790 == (HANDLE)-1LL )
          goto LABEL_2;
        v13 = 0;
      }
      else
      {
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v12 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        v13 = SysCtxRegOpenKey(v12, qword_140CF5798, (__int64)L"*Driver", 0, 0x20019u, (__int64)&qword_140CF5790);
        if ( v13 == -1073741772 )
        {
          v12 = -1LL;
          qword_140CF5790 = (HANDLE)-1LL;
        }
        else
        {
          v12 = (__int64)qword_140CF5790;
        }
      }
      if ( v13 >= 0 )
      {
        LODWORD(v16) = 4;
        v6 = RegRtlQueryValue((HANDLE)v12, L"Start", &v15, a3, (unsigned int *)&v16);
        if ( v6 >= 0 && v15 == 4 )
          goto LABEL_5;
      }
    }
  }
LABEL_2:
  LODWORD(v16) = 4;
  v6 = RegRtlQueryValue(a2, L"Start", &v15, a3, (unsigned int *)&v16);
  if ( v6 >= 0 && v15 != 4 )
  {
    v6 = -1073741772;
    *a3 = 4;
  }
LABEL_5:
  if ( Handle[0] )
    ZwClose(Handle[0]);
  return (unsigned int)v6;
}
