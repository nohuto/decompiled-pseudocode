/*
 * XREFs of ?PopulateDispatcherObjectWithCustomInputEvents@CBaseInput@@QEAAJAEAVCEventBitmap@@PEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C01A16D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C004CABC (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C004CB00 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 */

__int64 __fastcall CBaseInput::PopulateDispatcherObjectWithCustomInputEvents(
        CBaseInput *this,
        struct CEventBitmap *a2,
        struct IRegisterInputDispatcherObjects *a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 i; // rdx
  int v10; // eax
  _QWORD v12[18]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v12, 0, 0x88uLL);
  v8 = 0LL;
  *(_DWORD *)a2 = 0;
  for ( i = 0LL; ; i = *(unsigned int *)a2 )
  {
    v10 = *((_DWORD *)a2 + 1);
    if ( !v10 || (unsigned int)v8 >= 0x11 )
      break;
    if ( (v10 & 1) != 0 && CRIMBase::IsDispatcherObjectValid(this, i, v6, v7) )
    {
      v12[v8] = CRIMBase::GetDispatcherObjectByIndex(this, *(unsigned int *)a2, v6, v7);
      v8 = (unsigned int)(v8 + 1);
    }
    ++*(_DWORD *)a2;
    *((_DWORD *)a2 + 1) >>= 1;
  }
  return (*(__int64 (__fastcall **)(struct IRegisterInputDispatcherObjects *, _QWORD, _QWORD *))(*(_QWORD *)a3 + 8LL))(
           a3,
           (unsigned int)v8,
           v12);
}
