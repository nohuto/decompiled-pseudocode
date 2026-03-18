/*
 * XREFs of OSNotifyCreateProcessor @ 0x1C0005604
 * Callers:
 *     OSNotifyCreate @ 0x1C0009DF0 (OSNotifyCreate.c)
 *     ACPIBuildMissingChildren @ 0x1C004A3DC (ACPIBuildMissingChildren.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     ACPIInitReferenceDeviceExtension @ 0x1C00056D8 (ACPIInitReferenceDeviceExtension.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     ACPIBuildProcessorExtension @ 0x1C001F0E0 (ACPIBuildProcessorExtension.c)
 */

__int64 __fastcall OSNotifyCreateProcessor(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rsi
  ULONG_PTR v5; // rbx
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ebx
  __int64 v9; // rcx
  int v11; // [rsp+28h] [rbp-30h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AMLIGetParent();
  v5 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v5 )
    v5 = RootDeviceExtension;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = a1;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x11u,
      (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
      v11);
  }
  v6 = ACPIBuildProcessorExtension(a1, v5, &v12);
  v8 = v6;
  if ( v6 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_qD(
        WPP_GLOBAL_Control->DeviceExtension,
        v7,
        22,
        18,
        (__int64)&WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids,
        a1,
        v6);
    }
  }
  else
  {
    ACPIInitReferenceDeviceExtension(v12);
    _InterlockedOr64((volatile signed __int64 *)(v9 + 8), a2);
    v8 = 259;
  }
  AMLIDereferenceHandleEx(v4);
  return v8;
}
