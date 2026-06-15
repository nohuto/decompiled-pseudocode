/*
 * XREFs of sub_180034800 @ 0x180034800
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180068150 @ 0x180068150 (sub_180068150.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180034800(__int64 a1, const WCHAR *a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  __int64 v7; // rbx
  __int64 *v8; // r13
  __int64 *i; // rsi
  const WCHAR *v10; // rax
  char v11; // al
  unsigned int v12; // esi
  int v14; // eax
  unsigned int v15; // ebx
  void *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v17; // [rsp+70h] [rbp+8h] BYREF
  PCNZWCH lpString2; // [rsp+78h] [rbp+10h]
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+88h] [rbp+20h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v19 = v6;
  lpString2 = a2;
  v7 = 0LL;
  v17 = 0LL;
  EnterCriticalSection(v6);
  v8 = *(__int64 **)(a1 + 64);
  for ( i = *(__int64 **)(a1 + 56); i != v8; ++i )
  {
    v10 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*i + 32LL))(*i);
    if ( CompareStringW(0x7Fu, 1u, v10, -1, lpString2, -1) == 2 )
      break;
  }
  if ( i == *(__int64 **)(a1 + 64) )
  {
    if ( v6 )
      LeaveCriticalSection(v6);
    v11 = 0;
  }
  else
  {
    v7 = *i;
    if ( *i )
    {
      v17 = *i;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      v17 = 0LL;
    }
    if ( v6 )
      LeaveCriticalSection(v6);
    v11 = 1;
  }
  if ( v11 )
    goto LABEL_10;
  v17 = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v14 = sub_180068150(a1, a2, &v17);
  v15 = v14;
  if ( v14 >= 0 )
  {
    v7 = v17;
LABEL_10:
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    if ( v12 >= 0x3FFFFFFF )
    {
      sub_18000F708(&v17);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 2147942414LL;
    }
    else
    {
      *a3 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      if ( v6 )
        LeaveCriticalSection(v6);
      return 0LL;
    }
  }
  sub_18004BD84(retaddr, 155LL, "avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp", (unsigned int)v14);
  sub_18000F708(&v17);
  if ( v6 )
    LeaveCriticalSection(v6);
  return v15;
}
