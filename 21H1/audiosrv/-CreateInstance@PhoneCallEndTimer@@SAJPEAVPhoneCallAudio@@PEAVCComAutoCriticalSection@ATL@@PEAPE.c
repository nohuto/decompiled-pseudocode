/*
 * XREFs of ?CreateInstance@PhoneCallEndTimer@@SAJPEAVPhoneCallAudio@@PEAVCComAutoCriticalSection@ATL@@PEAPEAV1@@Z @ 0x180067604
 * Callers:
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x1800673F8 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180056710 (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ @ 0x180069A70 (-Free@-$CAutoPtr@VPhoneCallEndTimer@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall PhoneCallEndTimer::CreateInstance(
        struct PhoneCallAudio *a1,
        struct ATL::CComAutoCriticalSection *a2,
        struct PhoneCallEndTimer **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  _QWORD *v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( a1 && a2 )
  {
    if ( a3 )
    {
      v7 = operator new(0x28uLL);
      if ( v7 )
      {
        v7[2] = 0LL;
        *v7 = &PhoneCallEndTimer::`vftable';
        v7[1] = 0LL;
        v7[3] = 0LL;
        v7[4] = 0LL;
      }
      else
      {
        v7 = 0LL;
      }
      v9 = v7;
      if ( v7 )
      {
        v7[1] = a1;
        *((_DWORD *)v7 + 4) = 3000;
        v7[3] = a2;
        *a3 = (struct PhoneCallEndTimer *)v7;
        v9 = 0LL;
      }
      else
      {
        v3 = -2147024882;
      }
    }
    else
    {
      v3 = -2147467261;
    }
  }
  else
  {
    v3 = -2147024809;
  }
  ATL::CAutoPtr<PhoneCallEndTimer>::Free(&v9);
  return v3;
}
