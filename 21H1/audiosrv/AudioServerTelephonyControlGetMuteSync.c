/*
 * XREFs of AudioServerTelephonyControlGetMuteSync @ 0x1800E1880
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlGetMuteSync(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  struct IUnknown *v4; // rcx
  unsigned int v8; // eax
  unsigned int v9; // ebx
  struct IUnknown *v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v11 = 0LL;
  if ( g_TelephonyControl
    && (ATL::AtlComQIPtrAssign(&v11, g_TelephonyControl, &GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4), (v4 = v11) != 0LL) )
  {
    v8 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, _QWORD, __int64))v11->lpVtbl[1].AddRef)(v11, a2, a3, a4);
    v4 = v11;
    v9 = v8;
  }
  else
  {
    v9 = -2147467262;
  }
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return v9;
}
