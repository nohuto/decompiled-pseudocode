/*
 * XREFs of ?ValidateSpatialAudioSettings@CPolicyConfig@@UEAAJXZ @ 0x1800D97D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x180067E3C (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::ValidateSpatialAudioSettings(CPolicyConfig *this)
{
  __int64 v1; // rax
  int v2; // eax
  unsigned int v3; // ebx
  int v5[2]; // [rsp+20h] [rbp-48h] BYREF
  int *v6; // [rsp+58h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  *(_QWORD *)v5 = &off_180156268;
  v6 = v5;
  v1 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)g_AudioService + 128LL))(g_AudioService);
  v2 = CSerialWorkQueue::QueueWorkItem(v1, (__int64)v5);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xA82,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
