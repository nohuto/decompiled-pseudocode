/*
 * XREFs of _lambda_54745379ff30d9fd4bff252b54f177dd_::operator() @ 0x1801196C0
 * Callers:
 *     ?DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffectChainDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180029318 (-DecideVssEffectUsage@CEndpointCharacteristics@@AEAAJPEAVSystemEffectDescriptor@@PEAVSystemEffec.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x18001F460 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
bool __fastcall lambda_54745379ff30d9fd4bff252b54f177dd_::operator()(__int64 a1, __int64 a2, DWORD a3, WORD a4)
{
  bool v5; // si
  struct IAudioMediaType *v6; // rbx
  struct IAudioMediaType *v7; // rdi
  struct IAudioMediaType *v9; // [rsp+30h] [rbp-50h] BYREF
  struct IAudioMediaType *v10; // [rsp+38h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-40h] BYREF
  struct tWAVEFORMATEX v12; // [rsp+48h] [rbp-38h] BYREF
  struct tWAVEFORMATEX v13; // [rsp+60h] [rbp-20h] BYREF

  v5 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v12.wFormatTag = 3;
  v12.nChannels = a4;
  v12.nSamplesPerSec = a3;
  v12.nAvgBytesPerSec = 4 * a3 * a4;
  v12.nBlockAlign = 4 * a4;
  *(_DWORD *)&v12.wBitsPerSample = 32;
  *(_DWORD *)&v13.wFormatTag = 131075;
  v13.nSamplesPerSec = a3;
  v13.nAvgBytesPerSec = 8 * a3;
  *(_DWORD *)&v13.nBlockAlign = 2097160;
  v13.cbSize = 0;
  CAudioMediaType::Create(&v12, 0x12u, &v10, 0.0, 0);
  CAudioMediaType::Create(&v13, 0x12u, &v9, 0.0, 0);
  v6 = v9;
  v7 = v10;
  if ( v10 )
  {
    if ( v9 )
    {
      v11 = 0LL;
      v5 = (*(unsigned int (__fastcall **)(__int64, struct IAudioMediaType *, struct IAudioMediaType *, __int64 *))(*(_QWORD *)a2 + 56LL))(
             a2,
             v9,
             v10,
             &v11) == 0;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  if ( v6 )
    ((void (__fastcall *)(struct IAudioMediaType *))v6->lpVtbl->Release)(v6);
  return v5;
}
