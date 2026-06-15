/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140042810
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSystemAudioDeviceExclusive@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400426C0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140012460 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x14001CC68 (--2@YAPEAX_K@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001EBA4 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z @ 0x1400421C0 (--0-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x140043288 (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSystemAudioDeviceExclusive>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  CSystemAudioDeviceExclusive *v7; // rax
  volatile int *v8; // rdx
  CSystemAudioDeviceExclusive *v9; // rdi
  int v10; // eax
  _QWORD v11[11]; // [rsp+0h] [rbp-58h] BYREF
  CSystemAudioDeviceExclusive *v14; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  try
  {
    *a3 = 0LL;
    v6 = -2147024882;
    v7 = (CSystemAudioDeviceExclusive *)operator new(0x188uLL);
    v11[4] = v7;
    if ( v7 )
      v9 = ATL::CComObject<CSystemAudioDeviceExclusive>::CComObject<CSystemAudioDeviceExclusive>(v7);
    else
      v9 = 0LL;
    v14 = v9;
  }
  catch ( ... )
  {
    v8 = (volatile int *)v11;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v14;
  }
  if ( v9 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CSystemAudioDeviceExclusive *)((char *)v9 + 296), v8);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 304));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 344) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    CSystemAudioDeviceExclusive::InternalFinalConstructRelease(v9);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CSystemAudioDeviceExclusive *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CSystemAudioDeviceExclusive *, __int64))(*(_QWORD *)v9 + 184LL))(v9, 1LL);
    }
  }
  return v6;
}
