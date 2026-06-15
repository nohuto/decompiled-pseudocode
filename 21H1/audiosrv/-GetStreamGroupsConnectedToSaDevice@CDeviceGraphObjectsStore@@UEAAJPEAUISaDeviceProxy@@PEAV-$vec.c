/*
 * XREFs of ?GetStreamGroupsConnectedToSaDevice@CDeviceGraphObjectsStore@@UEAAJPEAUISaDeviceProxy@@PEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800E9150
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator() @ 0x1800E83F0 (_lambda_be69e1ba3195fa9d17e767510f2d9f3f_--operator().c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CDeviceGraphObjectsStore::GetStreamGroupsConnectedToSaDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  const char *v6; // r9
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 result; // rax
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+20h]

  v13 = a3;
  v12 = a2;
  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 184);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v14 = a1 + 24;
  v10[0] = &v12;
  v10[1] = &v13;
  v7 = *(_QWORD **)(a1 + 72);
  v8 = *(_QWORD **)(a1 + 64);
  try
  {
    while ( v8 != v7 )
      lambda_be69e1ba3195fa9d17e767510f2d9f3f_::operator()((__int64)v10, v8++);
    if ( v5 )
      LeaveCriticalSection(v5);
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x264,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
                           v6);
  }
  return result;
}
