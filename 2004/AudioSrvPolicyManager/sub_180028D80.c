/*
 * XREFs of sub_180028D80 @ 0x180028D80
 * Callers:
 *     PbmRegisterAppManagerNotification @ 0x180023980 (PbmRegisterAppManagerNotification.c)
 * Callees:
 *     sub_180017E30 @ 0x180017E30 (sub_180017E30.c)
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002B5C0 @ 0x18002B5C0 (sub_18002B5C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180028D80(__int64 a1)
{
  __int64 v1; // rsi
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  unsigned int v3; // edi
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rdx
  __int64 result; // rax
  ATL::CAtlException *v7; // rbx
  _QWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+10h]
  int v12; // [rsp+70h] [rbp+18h]
  __int64 v13; // [rsp+78h] [rbp+20h]

  v10 = a1;
  v1 = a1;
  v2 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  v13 = qword_18004FE78 + 32;
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  v8[1] = v2;
  v3 = sub_18002880C(*(_DWORD *)(v1 + 196), 1, 0LL, v8);
  v11 = v3;
  if ( v3 )
    goto LABEL_10;
  try
  {
    sub_180017E30((__int64 *)(v8[0] + 56LL), &v10);
  }
  catch ( ATL::CAtlException *v9 )
  {
    v7 = v9;
    if ( *(_DWORD *)v9 == -1073741571 )
      o__resetstkoflw();
    v12 = *(_DWORD *)v7;
    v3 = v11;
    v2 = (struct _RTL_CRITICAL_SECTION *)v13;
    if ( v12 >= 0 )
    {
      v1 = v10;
      goto LABEL_5;
    }
LABEL_10:
    if ( v2 )
      LeaveCriticalSection(v2);
    result = v3;
  }
LABEL_5:
  _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 4uLL);
  if ( v5 )
    *v5 = 0;
  else
    v5 = 0LL;
  if ( v5 )
  {
    *v5 = *(_DWORD *)(v10 + 196);
    sub_18002B5C0();
  }
  goto LABEL_10;
}
