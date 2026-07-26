/*
 * XREFs of ?ndisMiniportQueryDevicePropertyData@@YAJPEAU_NDIS_MINIPORT_BLOCK@@AEBU_DEVPROPKEY@@PEAPEA_W@Z @ 0x1C010AC40
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C012C504 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000DF10 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C0015380 (WPP_RECORDER_SF_qqd.c)
 *     ??$MakeSizedPoolPtr@_W@@YA?AV?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@K_K@Z @ 0x1C010ADA0 (--$MakeSizedPoolPtr@_W@@YA-AV-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@K_K@Z.c)
 */

__int64 __fastcall ndisMiniportQueryDevicePropertyData(
        struct _NDIS_MINIPORT_BLOCK *a1,
        const struct _DEVPROPKEY *a2,
        wchar_t **a3)
{
  _DEVICE_OBJECT *PhysicalDeviceObject; // rsi
  char v5; // r14
  __int64 v6; // rdx
  unsigned int DevicePropertyData; // ebx
  wchar_t *v8; // rbx
  NTSTATUS v9; // eax
  unsigned int v10; // edi
  size_t v11; // rdi
  wchar_t *v12; // rax
  PDEVPROPTYPE Type; // [rsp+38h] [rbp-8h]
  PDEVPROPTYPE Typea; // [rsp+38h] [rbp-8h]
  ULONG v16; // [rsp+70h] [rbp+30h] BYREF
  const struct _DEVPROPKEY *RequiredSize; // [rsp+78h] [rbp+38h] BYREF
  PVOID Data; // [rsp+80h] [rbp+40h] BYREF

  RequiredSize = a2;
  *a3 = 0LL;
  PhysicalDeviceObject = a1->PhysicalDeviceObject;
  LODWORD(RequiredSize) = 0;
  v16 = 0;
  v5 = (char)a1;
  DevicePropertyData = IoGetDevicePropertyData(
                         PhysicalDeviceObject,
                         &DEVPKEY_Device_InstanceId,
                         0,
                         0,
                         0,
                         0LL,
                         (PULONG)&RequiredSize,
                         &v16);
  if ( (int)(DevicePropertyData + 0x80000000) < 0 || DevicePropertyData == -1073741789 )
  {
    if ( (unsigned int)RequiredSize < 2 || ((unsigned __int8)RequiredSize & 1) != 0 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xDu,
          0x16u,
          &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
          v5,
          PhysicalDeviceObject);
      return 3221225534LL;
    }
    else
    {
      MakeSizedPoolPtr<wchar_t>(&Data, v6, (unsigned int)RequiredSize);
      v8 = (wchar_t *)Data;
      if ( Data )
      {
        v9 = IoGetDevicePropertyData(
               PhysicalDeviceObject,
               &DEVPKEY_Device_InstanceId,
               0,
               0,
               (ULONG)RequiredSize,
               Data,
               (PULONG)&RequiredSize,
               &v16);
        v10 = v9;
        if ( v9 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v9;
            WPP_RECORDER_SF_qqd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x18u,
              &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
              v5,
              (char)PhysicalDeviceObject,
              Typea);
          }
        }
        else if ( v16 == 18 || v16 == 25 )
        {
          v11 = (unsigned __int64)(unsigned int)RequiredSize >> 1;
          if ( v11 - 1 == wcsnlen(v8, v11) )
          {
            v12 = v8;
            v8 = 0LL;
            v10 = 0;
            *a3 = v12;
          }
          else
          {
            if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                *((_QWORD *)WPP_GLOBAL_Control + 8),
                2u,
                0xDu,
                0x1Au,
                &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
                v5,
                PhysicalDeviceObject);
            v10 = -1073741762;
          }
        }
        else
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(Typea) = v16;
            WPP_RECORDER_SF_qqL(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0xDu,
              0x19u,
              &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
              v5,
              (char)PhysicalDeviceObject,
              Typea);
          }
          v10 = -1073741811;
        }
      }
      else
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xDu,
            0x17u,
            &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
            v5,
            PhysicalDeviceObject);
        v10 = -1073741670;
      }
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
      return v10;
    }
  }
  else
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LODWORD(Type) = DevicePropertyData;
      WPP_RECORDER_SF_qqd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xDu,
        0x15u,
        &WPP_09eb4e84d2783563c6fda650882f065c_Traceguids,
        v5,
        (char)PhysicalDeviceObject,
        Type);
    }
    return DevicePropertyData;
  }
}
