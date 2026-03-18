/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01A7430
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C003FF4C (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C003FF90 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D2E00 (memset.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v6; // rdi
  unsigned int i; // edx
  int v8; // eax
  _QWORD v10[18]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v10, 0, 0x88uLL);
  v6 = 0LL;
  *(_DWORD *)a2 = 0;
  for ( i = 0; ; i = *(_DWORD *)a2 )
  {
    v8 = *((_DWORD *)a2 + 1);
    if ( !v8 || (unsigned int)v6 >= 0x11 )
      break;
    if ( (v8 & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, i) )
    {
      v10[v6] = CRIMBase::GetDispatcherObjectByIndex(this, *(_DWORD *)a2);
      v6 = (unsigned int)(v6 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v6,
           v10);
}
