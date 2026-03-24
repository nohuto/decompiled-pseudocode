/*
 * XREFs of ?PinResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@PEAVDXGPAGINGQUEUE@@PEA_K@Z @ 0x1C0255D08
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01723F0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002BD4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006910 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     Feature_253710648__private_IsEnabledDeviceUsage @ 0x1C00260E4 (Feature_253710648__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z @ 0x1C0254B40 (-DxgkpValidateResourcesForPinOperation@@YA_NIPEBVDXGRESOURCEREFERENCE@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinResources(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGRESOURCEREFERENCE *a3,
        struct DXGPAGINGQUEUE *a4,
        unsigned __int64 *a5)
{
  struct DXGPAGINGQUEUE *v6; // r13
  const struct DXGRESOURCEREFERENCE *v7; // r12
  int v8; // edi
  bool v10; // bl
  __int64 v11; // rsi
  const struct DXGRESOURCEREFERENCE *v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // r8
  int v16; // r13d
  bool v17; // zf
  __int64 v18; // rdi
  bool v19; // bp
  char *v20; // r14
  __int64 v21; // rbx
  __int64 v22; // rbx
  bool v23; // [rsp+40h] [rbp-58h]
  _BYTE v24[80]; // [rsp+48h] [rbp-50h] BYREF

  v6 = a4;
  v7 = a3;
  v8 = 0;
  if ( !DxgkpValidateResourcesForPinOperation(a2, a3) )
    return 3221225485LL;
  v10 = (unsigned int)Feature_253710648__private_IsEnabledDeviceUsage() != 0;
  v11 = 0LL;
  v23 = v10;
  if ( a2 )
  {
    v12 = v7;
LABEL_5:
    v13 = *(_QWORD *)v12;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*(_QWORD *)v12 + 80LL), 0);
    if ( v10 )
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v14 = *(_QWORD *)(v13 + 24);
    while ( 1 )
    {
      if ( !v14 )
      {
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        v11 = (unsigned int)(v11 + 1);
        v12 = (const struct DXGRESOURCEREFERENCE *)((char *)v12 + 8);
        if ( (unsigned int)v11 >= a2 )
          goto LABEL_21;
        v10 = v23;
        goto LABEL_5;
      }
      v15 = v6 ? *((_QWORD *)v6 + 4) : 0LL;
      v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 232LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              *(_QWORD *)(v14 + 24),
              v15,
              0LL,
              0LL,
              a5);
      if ( v16 < 0 )
        break;
      *(_DWORD *)(v14 + 72) |= 0x800u;
      v14 = *(_QWORD *)(v14 + 64);
      v17 = v16 == 259;
      v6 = a4;
      if ( v17 )
        v8 = 259;
    }
    v18 = *(_QWORD *)(v13 + 24);
    if ( v18 != v14 )
    {
      do
      {
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL) + 240LL))(
          *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
          *(_QWORD *)(v18 + 24));
        v18 = *(_QWORD *)(v18 + 64);
      }
      while ( v18 != v14 );
      v7 = a3;
    }
    v8 = v16;
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
LABEL_21:
    if ( v8 < 0 && (_DWORD)v11 )
    {
      v19 = v23;
      v20 = (char *)v7 + 8 * v11;
      do
      {
        v21 = *(_QWORD *)v20;
        DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (struct DXGFASTMUTEX *const)(*(_QWORD *)v20 + 80LL), 0);
        if ( v19 )
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
        v22 = *(_QWORD *)(v21 + 24);
        if ( v22 )
        {
          do
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 640LL) + 8LL)
                                                   + 240LL))(
              *(_QWORD *)(*((_QWORD *)this + 2) + 648LL),
              *(_QWORD *)(v22 + 24));
            v22 = *(_QWORD *)(v22 + 64);
          }
          while ( v22 );
          v19 = v23;
        }
        DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
        --v11;
      }
      while ( v11 );
    }
  }
  return (unsigned int)v8;
}
