/*
 * XREFs of ?Initialize@CHolographicInteropTarget@@QEAAJU_LUID@@@Z @ 0x180255080
 * Callers:
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180254F10 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18006A610 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B8BB8 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CHolographicInteropTarget::Initialize(CHolographicInteropTarget *this, struct _LUID a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  _QWORD *v6; // rsi
  int v7; // ebx
  HANDLE Event; // rax
  __int64 v9; // rcx
  HANDLE v10; // rax
  bool v11; // zf
  CDeviceManager *v12; // rcx
  int Device; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v2 = *((_QWORD *)this + 2);
  *((struct _LUID *)this + 20) = a2;
  v4 = *(_QWORD *)(v2 + 136);
  *((_QWORD *)this + 19) = v4;
  if ( !v4 )
  {
    v5 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x4Eu, 0LL);
    return v5;
  }
  *((_DWORD *)this + 45) = 87;
  v6 = (_QWORD *)((char *)this + 200);
  v7 = 0;
  do
  {
    Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    *v6 = Event;
    if ( !Event )
    {
      v16 = 86;
      goto LABEL_11;
    }
    v10 = CreateEventExW(0LL, 0LL, 2u, 0x1F0003u);
    v11 = *v6 == 0LL;
    v6[1] = v10;
    if ( v11 )
    {
      v16 = 88;
LABEL_11:
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, v16, 0LL);
      return v5;
    }
    ++v7;
    ++v6;
  }
  while ( !v7 );
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 21);
  Device = CDeviceManager::GetDevice(v12, *(struct _LUID *)((char *)this + 160), (struct CD3DDevice **)this + 21);
  v5 = Device;
  if ( Device < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, Device, 0x5Bu, 0LL);
  return v5;
}
