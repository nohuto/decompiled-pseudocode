/*
 * XREFs of ?UpdateFeatureLevels@CDeviceManager@@SAXAEBV?$span@U_LUID@@$0?0@gsl@@@Z @ 0x1800CDDA0
 * Callers:
 *     ?ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ @ 0x18007A150 (-ComputeOverlayConfiguration@CRenderTargetManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006AB34 (-GetExistingDevice@CDeviceManager@@QEBAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18006AEF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x18006AF20 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 */

int __fastcall CDeviceManager::UpdateFeatureLevels(__int64 *a1)
{
  int v2; // esi
  unsigned __int8 v3; // cl
  int v4; // r15d
  unsigned __int8 v5; // r13
  __int64 v6; // rdi
  struct _LUID *v7; // rbx
  __int64 v8; // rdx
  struct CComposition *v9; // rax
  __int64 v10; // r14
  CDeviceManager *v11; // rcx
  __int64 v12; // rdx
  int v13; // r9d
  int v14; // edx
  int v15; // r10d
  int v16; // ecx
  char v18; // [rsp+20h] [rbp-30h]
  __int128 v20; // [rsp+28h] [rbp-28h]
  CD3DDevice *v21; // [rsp+38h] [rbp-18h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = 0;
  v18 = 0;
  v5 = 1;
  v6 = 0LL;
  v7 = (struct _LUID *)a1[1];
  v8 = *a1;
  v9 = (struct CComposition *)&v7[*a1];
  v10 = *a1 & 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 > (struct _LUID *)v9 )
    v10 = 0LL;
  if ( v10 )
  {
    while ( 1 )
    {
      v21 = 0LL;
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v21);
      LODWORD(v9) = CDeviceManager::GetExistingDevice(v11, *v7, &v21);
      if ( (int)v9 >= 0 )
        break;
LABEL_13:
      if ( v21 )
        LODWORD(v9) = CD3DDevice::Release(v21);
      ++v7;
      if ( ++v6 == v10 )
      {
        v3 = v18;
        v8 = *a1;
        goto LABEL_17;
      }
    }
    LODWORD(v9) = *((_DWORD *)v21 + 156);
    v12 = *((_QWORD *)v21 + 76);
    if ( !v2 || (int)v9 < v2 )
      v2 = *((_DWORD *)v21 + 156);
    if ( (int)v9 > v4 )
    {
      if ( v12 )
        goto LABEL_33;
      v4 = *((_DWORD *)v21 + 156);
    }
    if ( !v12 )
    {
LABEL_11:
      if ( (int)v9 < 37632 || *((_BYTE *)v21 + 1433) )
        v5 = 0;
      goto LABEL_13;
    }
LABEL_33:
    v18 = 1;
    goto LABEL_11;
  }
LABEL_17:
  if ( v8 > 0 )
  {
    v13 = 37120;
    v14 = v3;
    v15 = 37120;
    v16 = v5;
    if ( v2 )
      v15 = v2;
    DWORD2(v20) = v14;
    HIDWORD(v20) = v5;
    LODWORD(v20) = v15;
    if ( v4 )
      v13 = v4;
    DWORD1(v20) = v13;
    if ( CCommonRegistryData::m_forceEffectMode == 1 )
    {
      v16 = 0;
    }
    else
    {
      if ( CCommonRegistryData::m_forceEffectMode != 2 )
      {
LABEL_24:
        v9 = g_pComposition;
        if ( *((_DWORD *)g_pComposition + 288) != v15
          || *((_DWORD *)g_pComposition + 289) != v13
          || *((_DWORD *)g_pComposition + 290) != v14
          || *((_DWORD *)g_pComposition + 291) != v16 )
        {
          *((_BYTE *)g_pComposition + 1133) = 1;
          *((_OWORD *)v9 + 72) = v20;
        }
        return (int)v9;
      }
      v14 = 0;
      v16 = 1;
      DWORD2(v20) = 0;
    }
    HIDWORD(v20) = v16;
    goto LABEL_24;
  }
  return (int)v9;
}
