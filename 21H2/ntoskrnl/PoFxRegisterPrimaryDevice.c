/*
 * XREFs of PoFxRegisterPrimaryDevice @ 0x1408E4570
 * Callers:
 *     <none>
 * Callees:
 *     PopFxRegisterDevice @ 0x1407B4EDC (PopFxRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1407B5C9C (PopFxConvertV1Components.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterPrimaryDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  char *v3; // rdi
  int v7; // esi
  __int64 v8; // rax
  int v9; // r9d
  __int64 v11; // [rsp+20h] [rbp-78h]
  _QWORD v12[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+80h] [rbp-18h]

  v3 = 0LL;
  if ( DeviceObject && a2 && *(_DWORD *)a2 == 1 )
  {
    v3 = PopFxConvertV1Components(a2 + 80, *(_DWORD *)(a2 + 4));
    if ( !v3 )
      return (unsigned int)-1073741670;
    v8 = *(_QWORD *)(a2 + 16);
    v9 = *(_DWORD *)(a2 + 4);
    v12[7] = 0LL;
    v12[0] = v8;
    v12[1] = *(_QWORD *)(a2 + 24);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[3] = *(_QWORD *)(a2 + 40);
    v12[4] = *(_QWORD *)(a2 + 48);
    v12[5] = *(_QWORD *)(a2 + 56);
    v12[6] = *(_QWORD *)(a2 + 64);
    v11 = *(_QWORD *)(a2 + 72);
    v13 = 0LL;
    v7 = PopFxRegisterDevice(DeviceObject, (int)v12, (int)v3, v9, v11, 0LL, a3);
    if ( v7 >= 0 && PopErrataDisablePrimaryDeviceFastResume && (*(_DWORD *)(a2 + 8) & 1) != 0 )
      _InterlockedOr((volatile signed __int32 *)(*a3 + 824LL), 0x80u);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4D584650u);
  return (unsigned int)v7;
}
