/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x18026D584
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x18026D2B0 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x18026D6D0 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  __int64 v2; // rdx
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  *(_QWORD *)this = &CD3DTexture::`vftable';
  *((_QWORD *)this + 3) = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 4) + 4LL) + 32) = &CD3DTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 4) + 4LL);
  *(_DWORD *)((char *)this + v2 + 28) = v2 - 216;
  v3 = (_QWORD *)*((_QWORD *)this + 23);
  if ( v3 )
  {
    LODWORD(v4) = *((_DWORD *)this + 44);
    if ( (_DWORD)v4 )
    {
      v5 = v3;
      do
      {
        v4 = (unsigned int)(v4 - 1);
        *((_DWORD *)this + 44) = v4;
        v6 = v3[v4];
        if ( v6 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(v3[v4]);
          v3 = (_QWORD *)*((_QWORD *)this + 23);
          LODWORD(v4) = *((_DWORD *)this + 44);
          v5 = v3;
        }
      }
      while ( (_DWORD)v4 );
      v3 = v5;
    }
    *((_DWORD *)this + 44) = v4 - 1;
    operator delete(v3);
  }
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 26);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 27);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = *((_QWORD *)this + 28);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  CD3DResource::~CD3DResource(this);
}
