/*
 * XREFs of InternalOpRegionHandler @ 0x1C0026060
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InternalOpRegionHandler(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(_QWORD, __int64, _QWORD); // rax
  unsigned int v7; // ebx
  __int64 v9; // [rsp+28h] [rbp-30h]

  if ( a6 && (v6 = *(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a6 + 16)) != 0LL )
  {
    v9 = *(_QWORD *)(a6 + 24);
    v7 = v6(a1, a2, a3);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v9) = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        3u,
        0xCu,
        (__int64)&WPP_46f050f87a9c3f86e1bf3d4ff5286087_Traceguids,
        v9);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v7;
}
