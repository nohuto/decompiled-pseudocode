/*
 * XREFs of ?ResetCallState@TelephonyController@@AEAAJXZ @ 0x1801437E0
 * Callers:
 *     ?CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z @ 0x180142004 (-CreateInstance@TelephonyController@@SAJPEAPEAUITelephonyController@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180058174 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TelephonyController::ResetCallState(TelephonyController *this)
{
  int v2; // r15d
  __int64 v3; // rdx
  unsigned int v4; // ecx
  __int64 v5; // rdi
  struct IUnknown *v6; // rbx
  __int64 v7; // r9
  __int64 v8; // rsi
  unsigned int v9; // r8d
  __int64 v10; // rdx
  __int64 v11; // rax
  struct IUnknown *v12; // rdx
  GUID v14; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+50h] [rbp-28h]
  int v16; // [rsp+54h] [rbp-24h]
  GUID v17; // [rsp+58h] [rbp-20h] BYREF
  int v18; // [rsp+68h] [rbp-10h]
  int v19; // [rsp+6Ch] [rbp-Ch]
  char v20; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+40h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v23; // [rsp+C8h] [rbp+50h] BYREF

  v2 = 0;
  if ( *((_QWORD *)this + 16) )
  {
    v3 = 0LL;
    v4 = *((_DWORD *)this + 34);
    if ( v4 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 15) + 8 * v3);
        if ( v5 )
          break;
        v3 = (unsigned int)(v3 + 1);
        if ( (unsigned int)v3 >= v4 )
          return (unsigned int)v2;
      }
      do
      {
        v6 = 0LL;
        v23 = 0LL;
        v21 = 0LL;
        v22 = 0LL;
        v7 = v5;
        v8 = *(_QWORD *)(v5 + 16);
        if ( !v8 )
        {
          v9 = *((_DWORD *)this + 34);
          v10 = *(_DWORD *)(v5 + 24) % v9 + 1;
          do
          {
            if ( (unsigned int)v10 >= v9 )
              break;
            v11 = *((_QWORD *)this + 15);
            if ( *(_QWORD *)(v11 + 8 * v10) )
              v8 = *(_QWORD *)(v11 + 8 * v10);
            v10 = (unsigned int)(v10 + 1);
          }
          while ( !v8 );
        }
        v5 = v8;
        v12 = *(struct IUnknown **)(v7 + 8);
        if ( v12 )
        {
          ATL::AtlComPtrAssign(&v23, v12);
          v6 = v23;
        }
        v14 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
        v15 = 1;
        v16 = 1;
        v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v6->lpVtbl[1].QueryInterface)(
               v6,
               &v14,
               24LL,
               &v21,
               8,
               &v20);
        if ( v2 >= 0 && HIDWORD(v21) )
        {
          v22 = (unsigned int)v21;
          v17 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
          v18 = 2;
          v19 = 2;
          v2 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64, __int64 *, int, char *))v6->lpVtbl[1].QueryInterface)(
                 v6,
                 &v17,
                 24LL,
                 &v22,
                 8,
                 &v20);
        }
        ((void (__fastcall *)(struct IUnknown *))v6->lpVtbl->Release)(v6);
      }
      while ( v8 );
    }
  }
  return (unsigned int)v2;
}
