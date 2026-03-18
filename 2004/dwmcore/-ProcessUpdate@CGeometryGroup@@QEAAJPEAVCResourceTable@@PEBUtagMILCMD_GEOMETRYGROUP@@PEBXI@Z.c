/*
 * XREFs of ?ProcessUpdate@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B51A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180098DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z @ 0x18009DCF8 (-RegisterNNotifiersInternal@CResource@@AEAAJPEAPEAV1@_K@Z.c)
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800AAB34 (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 *     ?ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z @ 0x1801B4614 (-ProcessAppend@CGeometryGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRYGROUP@@PEBXI@Z.c)
 *     ?UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ @ 0x1801B5CF0 (-UnRegisterNotifiers@CGeometryGroup@@UEAAXXZ.c)
 */

__int64 __fastcall CGeometryGroup::ProcessUpdate(
        CGeometryGroup *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRYGROUP *a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // eax
  __int64 v10; // rcx
  struct CResource **v11; // rdx
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-38h]
  struct CResource **v17; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_DWORD *)a3 + 3) )
  {
    v9 = CGeometryGroup::ProcessAppend(this, a2, a3, a4, a5);
    v12 = v9;
    if ( v9 >= 0 )
      goto LABEL_12;
    v16 = 557;
LABEL_10:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, v16, 0LL);
    goto LABEL_11;
  }
  CGeometryGroup::UnRegisterNotifiers(this);
  v9 = CResource::UnmarshalResourceArray(
         a4,
         a5,
         *((_DWORD *)a3 + 2),
         0x41u,
         (unsigned int *)this + 40,
         (void **)&v17,
         (__int64)a2,
         0);
  v11 = v17;
  v12 = v9;
  *((_QWORD *)this + 21) = v17;
  if ( v9 < 0 )
  {
    v16 = 550;
    goto LABEL_10;
  }
  v13 = CResource::RegisterNNotifiersInternal(this, v11, *((unsigned int *)this + 40));
  v12 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2A1u, 0LL);
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v12, 0x229u, 0LL);
LABEL_11:
    CGeometryGroup::UnRegisterNotifiers(this);
  }
LABEL_12:
  *((_DWORD *)this + 8) |= 1u;
  CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  return (unsigned int)v12;
}
