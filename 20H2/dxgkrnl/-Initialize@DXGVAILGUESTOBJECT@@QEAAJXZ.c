/*
 * XREFs of ?Initialize@DXGVAILGUESTOBJECT@@QEAAJXZ @ 0x1C02B4160
 * Callers:
 *     ?VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02B5648 (-VailGuestConnect@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     ?SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C004C9E0 (-SetVmBusChannel@DXGVAILGUESTOBJECT@@QEAAXPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z @ 0x1C02B3710 (-CreateVmBusChannel@@YAJPEAXPEAPEAVDXGVMBUSCHANNEL@@@Z.c)
 *     ?CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ @ 0x1C02B37A8 (-CreateVmBusGuestSubscribers@DXGVAILGUESTOBJECT@@IEAAJXZ.c)
 */

__int64 __fastcall DXGVAILGUESTOBJECT::Initialize(DXGVAILGUESTOBJECT *this, __int64 a2, const struct _GUID *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rax
  int VmBusGuestSubscribers; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct _GUID v16; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)&v16.Data1 = 0LL;
  v4 = CreateVmBusChannel(0LL, &v16, a3);
  v8 = v4;
  if ( v4 >= 0 )
  {
    DXGVAILGUESTOBJECT::SetVmBusChannel(this, *(struct DXGVMBUSCHANNEL **)&v16.Data1);
  }
  else
  {
    v9 = WdLogNewEntry5_WdWarning(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = v8;
    WdLogEvent5_WdWarning(v9);
  }
  if ( (int)v8 >= 0 )
  {
    VmBusGuestSubscribers = DXGVAILGUESTOBJECT::CreateVmBusGuestSubscribers(this);
    v8 = VmBusGuestSubscribers;
    if ( VmBusGuestSubscribers < 0 )
    {
      v14 = WdLogNewEntry5_WdWarning(v12, v11, v13);
      *(_QWORD *)(v14 + 24) = v8;
      WdLogEvent5_WdWarning(v14);
      DXGVAILGUESTOBJECT::SetVmBusChannel(this, 0LL);
    }
  }
  return (unsigned int)v8;
}
