/*
 * XREFs of PiCMGetRegistryProperty @ 0x1406CD554
 * Callers:
 *     PiCMHandleIoctl @ 0x14063CA80 (PiCMHandleIoctl.c)
 * Callees:
 *     PiCMReturnBufferResultData @ 0x14063F9B4 (PiCMReturnBufferResultData.c)
 *     _CmGetDeviceRegProp @ 0x14066B77C (_CmGetDeviceRegProp.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406CD71C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMConvertRegistryProperty @ 0x1406CD770 (PiCMConvertRegistryProperty.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406CD8A8 (PiCMCaptureRegistryPropertyInputData.c)
 *     _CmGetInstallerClassRegProp @ 0x14075AD98 (_CmGetInstallerClassRegProp.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiCMGetRegistryProperty(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r13
  PVOID PoolWithTag; // rdi
  signed int v10; // ebx
  signed int DeviceRegProp; // eax
  signed int v12; // eax
  int v14; // [rsp+58h] [rbp-9h] BYREF
  int v15; // [rsp+5Ch] [rbp-5h] BYREF
  __int128 v16; // [rsp+60h] [rbp-1h] BYREF
  __int128 v17; // [rsp+70h] [rbp+Fh]
  __int128 v18; // [rsp+80h] [rbp+1Fh]
  __int64 v19; // [rsp+90h] [rbp+2Fh]

  v6 = a6;
  v14 = 0;
  v15 = 0;
  LODWORD(a6) = 0;
  *v6 = 0;
  PoolWithTag = 0LL;
  v16 = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v10 = PiCMCaptureRegistryPropertyInputData(a1, a2, a5, &v16);
  if ( v10 < 0 )
    goto LABEL_21;
  if ( (_QWORD)v17 && !DWORD1(v16) && !*((_QWORD *)&v18 + 1) && !(_DWORD)v19 && !(_DWORD)v18 )
  {
    if ( !a3 || a4 < 0x14 )
    {
      v10 = -1073741811;
      goto LABEL_22;
    }
    if ( a4 != 20 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, a4 - 20, 0x34706E50u);
      if ( !PoolWithTag )
        v10 = -1073741670;
    }
    if ( v10 < 0 )
      goto LABEL_22;
    v10 = PiCMConvertRegistryProperty(HIDWORD(v17), &v15);
    if ( v10 < 0 )
      goto LABEL_22;
    LODWORD(a6) = a4 - 20;
    if ( DWORD2(v16) == 1 )
    {
      DeviceRegProp = CmGetDeviceRegProp(
                        *(__int64 *)&PiPnpRtlCtx,
                        v17,
                        0LL,
                        v15,
                        (__int64)&v14,
                        (__int64)PoolWithTag,
                        (__int64)&a6,
                        0);
LABEL_16:
      v10 = DeviceRegProp;
      goto LABEL_17;
    }
    if ( DWORD2(v16) == 2 )
    {
      DeviceRegProp = CmGetInstallerClassRegProp(
                        PiPnpRtlCtx,
                        v17,
                        0,
                        v15,
                        (__int64)&v14,
                        (__int64)PoolWithTag,
                        (__int64)&a6);
      goto LABEL_16;
    }
  }
  v10 = -1073741811;
LABEL_17:
  if ( v10 >= 0 )
  {
    v12 = PiCMReturnBufferResultData(
            v10,
            (unsigned int)a6,
            v14,
            PoolWithTag,
            (unsigned int)a6,
            SHIDWORD(v19),
            a3,
            a4,
            v6);
    goto LABEL_19;
  }
LABEL_22:
  v12 = PiCMReturnBufferResultData(v10, (unsigned int)a6, v14, 0LL, 0, SHIDWORD(v19), a3, a4, v6);
LABEL_19:
  v10 = v12;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_21:
  PiCMReleaseRegistryPropertyInputData(&v16);
  return (unsigned int)v10;
}
