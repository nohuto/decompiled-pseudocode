/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x180299E20
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180299AC8 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006ACA0 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x18020C06C (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  HANDLE Event; // rax
  __int64 v7; // rcx
  HANDLE v8; // rax
  bool v9; // zf
  CDeviceManager *v10; // rcx
  int Device; // eax
  int v12; // r9d
  unsigned int v14; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  *((struct _LUID *)this + 21) = a2;
  v4 = *(_QWORD *)(v2 + 264);
  *((_QWORD *)this + 20) = v4;
  if ( v4 )
  {
    *((_DWORD *)this + 50) = 87;
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *((_QWORD *)this + 28) = Event;
    if ( Event )
    {
      v8 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
      v9 = *((_QWORD *)this + 28) == 0LL;
      *((_QWORD *)this + 29) = v8;
      if ( !v9 )
      {
        Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 22);
        Device = CDeviceManager::GetDevice(v10, *(struct _LUID *)((char *)this + 168), (struct CD3DDevice **)this + 22);
        v5 = Device;
        if ( Device >= 0 )
          return v5;
        v12 = Device;
        v14 = 91;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0LL, v12, v14);
        return v5;
      }
      v14 = 88;
    }
    else
    {
      v14 = 86;
    }
    v12 = -2147024882;
    v5 = -2147024882;
    goto LABEL_10;
  }
  v5 = -2147418113;
  MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147418113, 0x4Eu);
  return v5;
}
