/*
 * XREFs of ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800F56A8
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x180079A00 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18007E4B0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x1800BB1E8 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

struct CComposition *__fastcall CDeviceManager::UpdateFeatureLevels(CD3DDevice *a1)
{
  struct _LUID *v1; // rbx
  int v2; // esi
  int v3; // edi
  unsigned __int8 v4; // r15
  unsigned __int8 v5; // r14
  struct _LUID *v6; // rbp
  struct _LUID v7; // rdx
  int ExistingDevice; // eax
  int v9; // eax
  char v10; // dl
  int v11; // r9d
  int v12; // edx
  int v13; // r10d
  int v14; // ecx
  struct CComposition *result; // rax
  __int128 v16; // xmm0
  CD3DDevice *v17[2]; // [rsp+20h] [rbp-38h] BYREF

  v1 = (struct _LUID *)*((_QWORD *)a1 + 1);
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 1;
  v6 = &v1[*(_QWORD *)a1];
  while ( v1 != v6 )
  {
    v7 = *v1;
    v17[0] = 0LL;
    ExistingDevice = CDeviceManager::GetExistingDevice(a1, v7, v17);
    a1 = v17[0];
    if ( ExistingDevice < 0 )
      goto LABEL_11;
    v9 = *((_DWORD *)v17[0] + 146);
    v10 = *((_BYTE *)v17[0] + 1509);
    if ( !v2 || v9 < v2 )
      v2 = *((_DWORD *)v17[0] + 146);
    if ( v9 <= v3 )
    {
      if ( v10 )
LABEL_28:
        v4 = 1;
    }
    else
    {
      if ( v10 )
        goto LABEL_28;
      v3 = *((_DWORD *)v17[0] + 146);
    }
    if ( v9 < 37632 || *((_BYTE *)v17[0] + 1505) )
      v5 = 0;
LABEL_11:
    if ( v17[0] )
      CD3DDevice::Release(v17[0]);
    ++v1;
  }
  v11 = 37120;
  v12 = v4;
  v13 = 37120;
  v14 = v5;
  if ( v2 )
    v13 = v2;
  LODWORD(v17[1]) = v4;
  HIDWORD(v17[1]) = v5;
  LODWORD(v17[0]) = v13;
  if ( v3 )
    v11 = v3;
  HIDWORD(v17[0]) = v11;
  if ( CCommonRegistryData::m_forceEffectMode == 1 )
  {
    v14 = 0;
    goto LABEL_34;
  }
  if ( CCommonRegistryData::m_forceEffectMode == 2 )
  {
    v12 = 0;
    LODWORD(v17[1]) = 0;
    v14 = 1;
LABEL_34:
    HIDWORD(v17[1]) = v14;
  }
  result = g_pComposition;
  if ( *((_DWORD *)g_pComposition + 324) != v13
    || *((_DWORD *)g_pComposition + 325) != v11
    || *((_DWORD *)g_pComposition + 326) != v12
    || *((_DWORD *)g_pComposition + 327) != v14 )
  {
    v16 = *(_OWORD *)v17;
    *((_BYTE *)g_pComposition + 1278) = 1;
    *((_OWORD *)result + 81) = v16;
  }
  return result;
}
