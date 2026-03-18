/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C0001F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z @ 0x1C00021F8 (-GetHDRMetaDataType@CCompositionSurface@@QEBAJ_KPEAW4DXGI_HDR_METADATA_TYPE@@@Z.c)
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C00033A8 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C00035A4 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0004758 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0016724 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        struct CCompositionBuffer *a1,
        unsigned __int64 *a2,
        struct CCompositionBuffer *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  int HDRMetaDataType; // ebx
  unsigned __int64 v9; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // r8
  CCompositionSurface *v15; // r15
  __m128i v16; // xmm1
  int v18; // eax
  int v19; // [rsp+24h] [rbp-B4h] BYREF
  CCompositionSurface *v20; // [rsp+28h] [rbp-B0h] BYREF
  struct CCompositionBuffer *v21; // [rsp+30h] [rbp-A8h] BYREF
  struct CCompositionBuffer *v22; // [rsp+38h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-90h]
  _OWORD v25[5]; // [rsp+50h] [rbp-88h] BYREF

  v22 = a1;
  v21 = a3;
  v20 = (CCompositionSurface *)a5;
  HDRMetaDataType = 0;
  v9 = 0LL;
  v24 = 0LL;
  v19 = 0;
  memset(v25, 0, 0x48uLL);
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    v24 = *a2;
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( HDRMetaDataType >= 0 )
  {
    Global = DXGGLOBAL::GetGlobal();
    if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64))(*((_QWORD *)Global + 38033) + 296LL))(
            *((_QWORD *)Global + 38033),
            v11,
            v12,
            v13) )
      HDRMetaDataType = -1073741790;
    if ( HDRMetaDataType >= 0 )
    {
      Object = 0LL;
      HDRMetaDataType = CompositionSurfaceObject::ResolveHandle(
                          a1,
                          1u,
                          v14,
                          (struct CompositionSurfaceObject **)&Object);
      if ( HDRMetaDataType >= 0 )
      {
        v20 = 0LL;
        HDRMetaDataType = CompositionSurfaceObject::LockForRead(Object, &v20);
        if ( HDRMetaDataType < 0 )
        {
LABEL_15:
          ObfDereferenceObject(Object);
          goto LABEL_16;
        }
        v15 = v20;
        HDRMetaDataType = CCompositionSurface::GetHDRMetaDataType(v20, v9, (enum DXGI_HDR_METADATA_TYPE *)&v19);
        if ( HDRMetaDataType < 0 || !v19 )
        {
LABEL_14:
          CCompositionSurface::UnlockAndRelease(v15);
          goto LABEL_15;
        }
        if ( v19 == 1 )
        {
          v22 = 0LL;
          HDRMetaDataType = CCompositionSurface::FindBuffer(v15, v9, &v22);
          if ( HDRMetaDataType < 0 )
            goto LABEL_14;
          v18 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v22 + 144LL))(v22, v25);
        }
        else
        {
          if ( v19 != 2 )
          {
            HDRMetaDataType = -1073741811;
            goto LABEL_14;
          }
          v21 = 0LL;
          HDRMetaDataType = CCompositionSurface::FindBuffer(v15, v9, &v21);
          if ( HDRMetaDataType < 0 )
            goto LABEL_14;
          v18 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *, _OWORD *))(*(_QWORD *)v21 + 152LL))(v21, v25);
        }
        HDRMetaDataType = v18;
        goto LABEL_14;
      }
    }
  }
LABEL_16:
  if ( a3 )
  {
    if ( (struct CCompositionBuffer *)((char *)a3 + 4) < a3 || (unsigned __int64)a3 + 4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = v19;
  }
  else
  {
    HDRMetaDataType = -1073741811;
  }
  if ( HDRMetaDataType >= 0 && a5 && v19 )
  {
    if ( v19 != 1 )
    {
      if ( v19 != 2 )
      {
        HDRMetaDataType = -1073741811;
        goto LABEL_39;
      }
      if ( a4 >= 0x48 )
      {
        if ( a5 + 72 < a5 || a5 + 72 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = v25[0];
        *(_OWORD *)(a5 + 16) = v25[1];
        *(_OWORD *)(a5 + 32) = v25[2];
        *(_OWORD *)(a5 + 48) = v25[3];
        *(_QWORD *)(a5 + 64) = *(_QWORD *)&v25[4];
        goto LABEL_39;
      }
LABEL_38:
      HDRMetaDataType = -1073741789;
      goto LABEL_39;
    }
    if ( a4 < 0x1C )
      goto LABEL_38;
    if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a5 = v25[0];
    v16 = (__m128i)v25[1];
    *(_QWORD *)(a5 + 16) = *(_QWORD *)&v25[1];
    *(_DWORD *)(a5 + 24) = _mm_cvtsi128_si32(_mm_srli_si128(v16, 8));
  }
LABEL_39:
  KeLeaveCriticalRegion();
  return (unsigned int)HDRMetaDataType;
}
