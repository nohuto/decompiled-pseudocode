/*
 * XREFs of ?GetSaDevices@CDeviceGraphObjectsStore@@IEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180044BD4
 * Callers:
 *     ?GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180044BC0 (-GetAllSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Mic.c)
 *     ?GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E8550 (-GetOffloadSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL.c)
 *     ?GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E8570 (-GetSharedSaDevices@CDeviceGraphObjectsStore@@UEAAJPEAV-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@.c)
 * Callees:
 *     _lambda_0e41d75607236968788bdd59460e85d3_::operator() @ 0x1800E74A4 (_lambda_0e41d75607236968788bdd59460e85d3_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDeviceGraphObjectsStore::GetSaDevices(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  int *i; // rax
  __int64 j; // rdi
  __int64 v9; // r15
  __int64 k; // rsi
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF
  char v14; // [rsp+64h] [rbp+1Ch] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h]

  v3 = a3;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v15 = v6;
  v13 = 0;
  if ( (int)v3 < 4 )
  {
    *((_BYTE *)&v13 + v3) = 1;
  }
  else
  {
    for ( i = &v13; i != (int *)&v14; i = (int *)((char *)i + 1) )
      *(_BYTE *)i = 1;
  }
  for ( j = 0LL; (unsigned int)j < 4; j = (unsigned int)(j + 1) )
  {
    if ( *((_BYTE *)&v13 + j) )
    {
      v12 = a2;
      v9 = *(_QWORD *)(a1 + 24 * j + 96);
      for ( k = *(_QWORD *)(a1 + 24 * j + 88); k != v9; k += 8LL )
        lambda_0e41d75607236968788bdd59460e85d3_::operator()(&v12, k);
    }
  }
  if ( v6 )
    LeaveCriticalSection(v6);
  return 0LL;
}
