/*
 * XREFs of sub_140035338 @ 0x140035338
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z @ 0x140002110 (--4-$CComPtr@UIAudioMediaType@@@ATL@@QEAAPEAUIAudioMediaType@@AEBV01@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

void __fastcall sub_140035338(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        int a13,
        int a14,
        __int64 a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        int a20,
        int a21,
        __int64 a22,
        __int64 a23)
{
  if ( (int)a9 < 0 )
  {
    if ( a22 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a22 + 16LL))(a22);
    if ( a10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a10 + 16LL))(a10);
    if ( a12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a12 + 16LL))(a12);
    JUMPOUT(0x1400354C1LL);
  }
  a23 = 0LL;
  ATL::CComPtr<IAudioMediaType>::operator=(&a11, &a22);
  if ( a22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a22 + 16LL))(a22);
  JUMPOUT(0x14000C036LL);
}
