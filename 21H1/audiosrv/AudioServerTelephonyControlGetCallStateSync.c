/*
 * XREFs of AudioServerTelephonyControlGetCallStateSync @ 0x1800E1710
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002C164 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AudioServerTelephonyControlGetCallStateSync(__int64 a1, __int64 a2, __int64 a3)
{
  struct IUnknown *v3; // rcx
  unsigned int v6; // eax
  unsigned int v7; // ebx
  struct IUnknown *v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  v9 = 0LL;
  if ( g_TelephonyControl
    && (ATL::AtlComQIPtrAssign(&v9, g_TelephonyControl, &GUID_12f0ac85_d91a_4950_96a5_e7385ed7b7f4), (v3 = v9) != 0LL) )
  {
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64, __int64))v9->lpVtbl[1].QueryInterface)(v9, a2, a3);
    v3 = v9;
    v7 = v6;
  }
  else
  {
    v7 = -2147467262;
  }
  if ( v3 )
    ((void (__fastcall *)(struct IUnknown *))v3->lpVtbl->Release)(v3);
  return v7;
}
