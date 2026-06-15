/*
 * XREFs of sub_180002BB0 @ 0x180002BB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002E28 @ 0x180002E28 (sub_180002E28.c)
 *     sub_180002E58 @ 0x180002E58 (sub_180002E58.c)
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_180020090 @ 0x180020090 (sub_180020090.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180050904 @ 0x180050904 (sub_180050904.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180002BB0(__int64 a1, char a2)
{
  __int64 v4; // rax
  int v5; // eax
  int v6; // edi
  void *v7; // rcx
  bool v8; // of
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rdi
  __int64 v12; // rdx
  unsigned int i; // ecx
  __int64 v14; // rax
  int v15; // esi
  void *v16; // rcx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  HANDLE ProcessHeap; // rax
  __int128 v22; // [rsp+40h] [rbp-48h] BYREF
  LPVOID *p_pv; // [rsp+50h] [rbp-38h]
  void *v24; // [rsp+58h] [rbp-30h] BYREF
  char v25; // [rsp+60h] [rbp-28h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  LPVOID pv; // [rsp+90h] [rbp+8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v28 = 0LL;
  v4 = sub_180002E28(a1 + 656);
  v5 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)::pv + 24LL))(
         ::pv,
         v4,
         0LL,
         0LL,
         &v28);
  v6 = v5;
  if ( v5 < 0 )
  {
    sub_18004BD84(retaddr, 1635LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v5);
  }
  else
  {
    pv = 0LL;
    v22 = xmmword_18015B730;
    p_pv = &pv;
    v24 = 0LL;
    v25 = 1;
    v6 = sub_180020090(v28, 0LL, &v22, &v24);
    if ( v25 )
    {
      v7 = *p_pv;
      *p_pv = v24;
      if ( v7 )
        CoTaskMemFree(v7);
    }
    if ( v6 < 0 )
    {
      sub_18004BD84(retaddr, 1645LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", (unsigned int)v6);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
      v9 = 4LL * *((unsigned __int16 *)pv + 1);
      v8 = (*((unsigned __int16 *)pv + 1) * (unsigned __int128)4uLL) >> 64 != 0;
      *(_DWORD *)(a1 + 960) = *((unsigned __int16 *)pv + 1);
      if ( v8 )
        v9 = -1LL;
      v10 = sub_18006A1B0(v9, &unk_18019F848);
      v11 = *(void **)(a1 + 968);
      v12 = v10;
      *(_QWORD *)(a1 + 968) = v10;
      if ( v11 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v11);
        v12 = *(_QWORD *)(a1 + 968);
      }
      if ( v12 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 960); *(_DWORD *)(v12 + 4 * v14) = 1065353216 )
          v14 = i++;
        if ( a1 != -808 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
        v15 = a2 & 2;
        *(_BYTE *)(a1 + 984) = v15 != 0;
        if ( !v15 )
          goto LABEL_16;
        v18 = *(_QWORD *)(a1 + 992);
        *(_QWORD *)(a1 + 992) = 0LL;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        v19 = sub_180002FD4(a1, a1 + 992);
        if ( (int)sub_180002E58(
                    (_DWORD)retaddr,
                    1674,
                    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
                    v19,
                    2,
                    2) >= 0
          && *(_QWORD *)(a1 + 992)
          && (v20 = sub_180050904(a1), v6 = v20, v20 < 0) )
        {
          sub_18004BD84(
            retaddr,
            1678LL,
            "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
            (unsigned int)v20);
        }
        else
        {
LABEL_16:
          v6 = 0;
        }
      }
      else
      {
        v6 = -2147024882;
        sub_18004BD84(retaddr, 1653LL, "avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", 2147942414LL);
        if ( a1 != -808 )
          LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 808));
      }
    }
    v16 = pv;
    pv = 0LL;
    if ( v16 )
      CoTaskMemFree(v16);
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  return (unsigned int)v6;
}
