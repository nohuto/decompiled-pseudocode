/*
 * XREFs of PiPnpRtlGetDeviceRelationsList @ 0x14089EFD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwPlugPlayControl @ 0x1403F4970 (ZwPlugPlayControl.c)
 */

__int64 __fastcall PiPnpRtlGetDeviceRelationsList(
        __int64 a1,
        __int128 *a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        int a7)
{
  unsigned int v7; // ecx
  __int128 v8; // xmm0
  NTSTATUS v9; // eax
  unsigned int v10; // eax
  __int128 PnPControlData; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]
  unsigned int v14; // [rsp+34h] [rbp-14h]
  __int64 v15; // [rsp+38h] [rbp-10h]

  if ( !a2 || !a6 || a7 )
    return (unsigned int)-1073741811;
  v8 = *a2;
  v13 = a3;
  PnPControlData = v8;
  v15 = a4;
  v14 = a5;
  v9 = ZwPlugPlayControl(PlugPlayControlQueryDeviceRelations, &PnPControlData, 0x20u);
  v7 = v9;
  if ( v9 < 0 )
  {
    if ( v9 == -1073741789 )
    {
      *a6 = v14;
      return v7;
    }
    return (unsigned int)-1073741772;
  }
  v10 = v14;
  *a6 = v14;
  if ( !v10 )
    return (unsigned int)-1073741772;
  if ( v10 > a5 )
    return (unsigned int)-1073741789;
  return v7;
}
