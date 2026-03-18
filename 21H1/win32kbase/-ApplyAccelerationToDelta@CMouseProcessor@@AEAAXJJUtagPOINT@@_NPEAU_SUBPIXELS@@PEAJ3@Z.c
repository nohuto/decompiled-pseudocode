/*
 * XREFs of ?ApplyAccelerationToDelta@CMouseProcessor@@AEAAXJJUtagPOINT@@_NPEAU_SUBPIXELS@@PEAJ3@Z @ 0x1C00A5E98
 * Callers:
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00A5AB4 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorData@@@Z @ 0x1C01C33FC (-PrepareDataForIntercept@CMouseProcessor@@AEAAXAEBVMouseInputDataEx@1@_NPEAU_MouseInterceptorDat.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C0063F80 (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ?Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z @ 0x1C00A5F18 (-Accelerate@CDeviceAcceleration@@QEAAXPEAH0PEAU_SUBPIXELS@@@Z.c)
 *     ?RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z @ 0x1C00A6138 (-RegionFromPoint@Mouse@InputConfig@@SA_NUtagPOINT@@PEAVCLockedInputSpaceRegion@@@Z.c)
 *     rand @ 0x1C00CC7F8 (rand.c)
 *     GetNormalizedMouseSensitivityFactor @ 0x1C01B15B0 (GetNormalizedMouseSensitivityFactor.c)
 */

void __fastcall CMouseProcessor::ApplyAccelerationToDelta(
        CMouseProcessor *this,
        int a2,
        int a3,
        struct tagPOINT a4,
        bool a5,
        struct _SUBPIXELS *a6,
        int *a7,
        int *a8)
{
  int v9; // edi
  int v10; // esi
  CDeviceAcceleration *v12; // rcx
  struct _SUBPIXELS *v13; // r9
  int NormalizedMouseSensitivityFactor; // eax
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  struct _SUBPIXELS *v19; // rbx
  int v20; // edx
  int v21; // eax
  _QWORD v22[2]; // [rsp+20h] [rbp-10h] BYREF
  int v23; // [rsp+58h] [rbp+28h] BYREF
  int v24; // [rsp+60h] [rbp+30h] BYREF

  v24 = a3;
  v23 = a2;
  v9 = a3;
  v10 = a2;
  if ( a5 && (*((_BYTE *)qword_1C0247098 + 112) || (*(_BYTE *)(&qword_1C0250FC0 + 1) & 0x40) == 0) )
  {
    v12 = qword_1C02470B0;
    v13 = (struct _SUBPIXELS *)v22;
    goto LABEL_4;
  }
  v12 = qword_1C0247098;
  if ( *((_BYTE *)qword_1C0247098 + 112) )
  {
    v13 = a6;
LABEL_4:
    CDeviceAcceleration::Accelerate(v12, &v23, &v24, v13);
    v9 = v24;
    v10 = v23;
    goto LABEL_5;
  }
  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v22);
  InputConfig::Mouse::RegionFromPoint(a4, (struct CLockedInputSpaceRegion *)v22);
  NormalizedMouseSensitivityFactor = GetNormalizedMouseSensitivityFactor(v22[0]);
  if ( NormalizedMouseSensitivityFactor == 256 )
  {
    v21 = rand();
    v19 = a6;
    *(_DWORD *)a6 = v21 % 0x10000;
    v20 = rand() % 0x10000;
  }
  else
  {
    if ( v10 )
    {
      v15 = *((_DWORD *)this + 15) + v10 * NormalizedMouseSensitivityFactor;
      v16 = v15 % 256;
      *((_DWORD *)this + 15) = v15 % 256;
      v10 = v15 / 256;
      if ( v15 < 0 && v16 > 0 )
      {
        v10 = v15 / 256 + 1;
        *((_DWORD *)this + 15) = v16 - 256;
      }
    }
    if ( v9 )
    {
      v17 = *((_DWORD *)this + 16) + v9 * NormalizedMouseSensitivityFactor;
      v18 = v17 % 256;
      *((_DWORD *)this + 16) = v17 % 256;
      v9 = v17 / 256;
      if ( v17 < 0 && v18 > 0 )
      {
        ++v9;
        *((_DWORD *)this + 16) = v18 - 256;
      }
    }
    v19 = a6;
    *(_DWORD *)a6 = *((_DWORD *)this + 15) << 8;
    v20 = *((_DWORD *)this + 16) << 8;
  }
  *((_DWORD *)v19 + 1) = v20;
  ExReleaseResourceLite(*(PERESOURCE *)v22[1]);
  KeLeaveCriticalRegion();
LABEL_5:
  *a7 = v10;
  *a8 = v9;
}
