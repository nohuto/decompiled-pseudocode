/*
 * XREFs of ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x1C01BE0D0
 * Callers:
 *     ?FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ @ 0x1C01C278C (-FlushInputDestinedForContainer@ContainerMouseInputBuffer@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x1C01BE278 (-SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMou.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::SendMouseInput(
        IVRootDeliver::Mouse *this,
        struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3)
{
  struct CONTAINER_ID *v3; // rbx
  IVRootDeliver::Mouse::Detail *v4; // r9
  int v5; // r14d
  __int64 v6; // r15
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int64 v9; // rcx
  char v10; // dl
  const struct CONTAINER_ID *v11; // r12
  unsigned __int64 v12; // rax
  __int64 v13; // r13
  int v14; // eax
  int v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  int v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+54h] [rbp-Ch]
  char v22; // [rsp+B0h] [rbp+50h]
  __int64 v23; // [rsp+B8h] [rbp+58h]

  v3 = a2;
  v4 = this;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      21,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
    v4 = this;
  }
  v5 = 0;
  if ( *((_DWORD *)gpMouseSensor + 314) )
  {
    v6 = *(_QWORD *)v3;
    v7 = 1;
    v8 = *((_DWORD *)v3 + 2);
    v9 = *(_QWORD *)v3;
    v23 = *(_QWORD *)v3;
    v10 = 0;
    v22 = 0;
    v11 = *(const struct CONTAINER_ID **)(*(_QWORD *)v3 + 24LL);
    if ( v8 )
    {
      do
      {
        v12 = (unsigned __int64)v7 << 6;
        v13 = v12 + v6;
        if ( *(const struct CONTAINER_ID **)(v12 + v6 + 24) != v11 || v7 == v8 )
        {
          LOBYTE(v16) = 0;
          v17 = v9;
          v18 = (__int64)(v6 + v12 - v9) >> 6;
          v20 = v16;
          v19 = 0LL;
          if ( !v10 && *((_BYTE *)v3 + 20) )
          {
            v14 = *((_DWORD *)v3 + 5);
            v19 = *(_QWORD *)((char *)v3 + 12);
            v20 = v14;
            v22 = 1;
          }
          v5 = IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(v4, v11, &v17, v4);
          if ( v5 < 0 )
            break;
          v10 = v22;
          if ( v7 == v8 )
          {
            v9 = v23;
          }
          else
          {
            v11 = *(const struct CONTAINER_ID **)(v13 + 24);
            v9 = v13;
            v23 = v13;
          }
        }
        v8 = *((_DWORD *)v3 + 2);
        ++v7;
        v4 = this;
      }
      while ( v7 <= v8 );
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      12,
      22,
      (__int64)&WPP_ce934868e6283481801d375bb45badae_Traceguids);
  }
  return (unsigned int)v5;
}
