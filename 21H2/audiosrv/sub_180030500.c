/*
 * XREFs of sub_180030500 @ 0x180030500
 * Callers:
 *     sub_18002FD00 @ 0x18002FD00 (sub_18002FD00.c)
 * Callees:
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800E24A0 @ 0x1800E24A0 (sub_1800E24A0.c)
 *     sub_1800E280C @ 0x1800E280C (sub_1800E280C.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180030500(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  HRESULT Instance; // eax
  int v9; // esi
  HRESULT v10; // eax
  int v11; // eax
  IUnknown *v12; // rcx
  IUnknown *v13; // rbx
  char *v14; // rdi
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // r15
  _WORD *v17; // rax
  _WORD *v18; // r9
  unsigned __int64 v19; // rax
  _WORD *v20; // rdx
  int v21; // r10d
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  char *v24; // rdi
  __int16 v25; // cx
  unsigned __int64 v26; // r15
  __int64 v27; // rbx
  LPVOID v28; // rdi
  size_t v29; // rsi
  __int64 v30; // rcx
  struct _RTL_CRITICAL_SECTION *v31; // rax
  struct _RTL_CRITICAL_SECTION *v32; // rbx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v34; // rax
  __int64 v35; // rbx
  int v37; // eax
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 *v40; // rax
  int v41; // eax
  struct _RTL_CRITICAL_SECTION *v42; // rcx
  struct _RTL_CRITICAL_SECTION *v43; // rcx
  struct _RTL_CRITICAL_SECTION **v44; // [rsp+40h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+48h] [rbp-18h] BYREF
  IUnknown *pProxy; // [rsp+50h] [rbp-10h] BYREF
  LPMALLOC ppMalloc; // [rsp+58h] [rbp-8h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]

  pProxy = 0LL;
  Instance = CoCreateInstance(&stru_18015BD58, 0LL, 0x17u, &stru_18015BD68, (LPVOID *)&pProxy);
  v9 = Instance;
  if ( Instance < 0 )
  {
    sub_18004BD84(
      retaddr,
      858LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)Instance);
    goto LABEL_36;
  }
  v10 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  v9 = v10;
  if ( v10 < 0 )
  {
    sub_18004BD84(
      retaddr,
      864LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v10);
    goto LABEL_36;
  }
  v11 = ((__int64 (__fastcall *)(IUnknown *, __int64))pProxy->lpVtbl[3].QueryInterface)(pProxy, a3);
  v9 = v11;
  if ( v11 < 0 )
  {
    sub_18004BD84(
      retaddr,
      866LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v11);
    goto LABEL_36;
  }
  v12 = *(IUnknown **)(a1 + 88);
  v13 = pProxy;
  if ( v12 != pProxy )
  {
    if ( pProxy )
    {
      ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->AddRef)(pProxy);
      v12 = *(IUnknown **)(a1 + 88);
    }
    *(_QWORD *)(a1 + 88) = v13;
    if ( v12 )
      ((void (__fastcall *)(IUnknown *))v12->lpVtbl->Release)(v12);
  }
  v14 = *(char **)a2;
  v15 = -1LL;
  do
    ++v15;
  while ( *(_WORD *)&v14[2 * v15] );
  *(_QWORD *)(a1 + 56) = 0LL;
  v16 = v15 + 1;
  if ( v15 + 1 < v15 )
  {
    v9 = -2147024362;
    goto LABEL_54;
  }
  if ( !is_mul_ok(v16, 2uLL) )
  {
    v9 = -2147024362;
    goto LABEL_26;
  }
  v17 = CoTaskMemAlloc(2 * v16);
  v18 = v17;
  *(_QWORD *)(a1 + 56) = v17;
  if ( !v17 )
  {
    v9 = -2147024882;
    goto LABEL_54;
  }
  v9 = 0;
  if ( v16 > 0x7FFFFFFF )
  {
LABEL_47:
    *v17 = 0;
    goto LABEL_26;
  }
  if ( v15 >= 0x7FFFFFFF )
  {
    if ( v15 == -1LL )
      goto LABEL_26;
    goto LABEL_47;
  }
  if ( !v14 )
  {
    v14 = (char *)&unk_18015C744;
    v15 = 0LL;
  }
  if ( v16 )
  {
    v19 = v16;
    v20 = v18;
    v21 = 0;
    v22 = 0LL;
    v23 = v15 - v16;
    v24 = (char *)(v14 - (char *)v18);
    while ( v23 + v19 )
    {
      v25 = *(_WORD *)((char *)v20 + (_QWORD)v24);
      if ( !v25 )
        break;
      *v20++ = v25;
      ++v22;
      if ( !--v19 )
      {
        --v20;
        --v22;
        v21 = -2147024774;
        break;
      }
    }
    *v20 = 0;
    v26 = v16 - v22;
    if ( v21 >= 0 && v26 > 1 && 2 * v26 > 2 )
      memset(&v18[v22 + 1], 0, 2 * v26 - 2);
  }
LABEL_26:
  if ( v9 >= 0 )
  {
    v27 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 16) + 16LL);
    v28 = CoTaskMemAlloc(v27 + 18);
    *(_QWORD *)(a1 + 48) = v28;
    if ( v28 )
    {
      v29 = 0LL;
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v29 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v28);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset(*(void **)(a1 + 48), 0, v29);
      memcpy(*(void **)(a1 + 48), *(const void **)(a2 + 16), v27 + 18);
      v30 = *(_QWORD *)(a2 + 56);
      if ( v30 )
      {
        v37 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, a1 + 72);
        v9 = v37;
        if ( v37 < 0 )
        {
          v38 = (unsigned int)v37;
          v39 = 221LL;
          goto LABEL_55;
        }
      }
      *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 32);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 144) = 0LL;
      *(_DWORD *)(a1 + 152) = 0;
      *(_BYTE *)(a1 + 64) = *(_BYTE *)(a2 + 49);
      *(_BYTE *)(a1 + 65) = *(_BYTE *)(a2 + 50);
      v31 = (struct _RTL_CRITICAL_SECTION *)sub_18006A18C(64LL, &unk_18019F848);
      v32 = v31;
      v45 = v31;
      if ( v31 )
      {
        InitializeCriticalSectionEx(v31, 0, 0);
        v32[1].DebugInfo = 0LL;
        *(_QWORD *)&v32[1].LockCount = 0LL;
        ProcessHeap = GetProcessHeap();
        v34 = (struct _RTL_CRITICAL_SECTION_DEBUG *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
        *(_QWORD *)&v34->Type = v34;
        v34->CriticalSection = (struct _RTL_CRITICAL_SECTION *)v34;
        v34->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v34;
        LOWORD(v34->ProcessLocksList.Blink) = 257;
        v32[1].DebugInfo = v34;
        LODWORD(v32[1].OwningThread) = a4;
      }
      else
      {
        v32 = 0LL;
      }
      *(_QWORD *)(a1 + 80) = v32;
      if ( v32 )
        goto LABEL_34;
      v9 = -2147024882;
      sub_18004BD84(retaddr, 233LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", 2147942414LL);
    }
    else
    {
      v9 = -2147024882;
      sub_18004BD84(retaddr, 216LL, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", 2147942414LL);
    }
LABEL_56:
    sub_18004BD84(
      retaddr,
      869LL,
      "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (unsigned int)v9);
    goto LABEL_36;
  }
LABEL_54:
  v38 = (unsigned int)v9;
  v39 = 213LL;
LABEL_55:
  sub_18004BD84(retaddr, v39, "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v38);
  if ( v9 < 0 )
    goto LABEL_56;
LABEL_34:
  v35 = *(_QWORD *)(a1 + 72);
  if ( !v35 || *(_DWORD *)(v35 + 8) || *(_QWORD *)(v35 + 16) )
  {
LABEL_35:
    v9 = 0;
    goto LABEL_36;
  }
  sub_1800E24A0(&ppMalloc, a1);
  v45 = 0LL;
  v44 = &v45;
  v40 = (__int64 *)sub_1800524EC(&v44);
  if ( (int)sub_1800274A0(ppMalloc, v40) < 0
    || (LODWORD(v44) = 0, sub_1800461B8(a1 + 1608), (int)sub_1800E280C(a1 + 1608, &v45, v35 + 24, &v44) < 0)
    || (v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)&dwCreationFlags + 48LL))(
                *(_QWORD *)&dwCreationFlags,
                *(_QWORD *)(a1 + 1608)),
        v9 = v41,
        v41 >= 0) )
  {
    v43 = v45;
    if ( v45 )
    {
      v45 = 0LL;
      ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v43->DebugInfo->ProcessLocksList.Flink)(v43);
    }
    sub_1800461B8(&ppMalloc);
    goto LABEL_35;
  }
  sub_18004BD84(
    retaddr,
    888LL,
    "avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (unsigned int)v41);
  v42 = v45;
  if ( v45 )
  {
    v45 = 0LL;
    ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v42->DebugInfo->ProcessLocksList.Flink)(v42);
  }
  sub_1800461B8(&ppMalloc);
LABEL_36:
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  return (unsigned int)v9;
}
