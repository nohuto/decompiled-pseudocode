/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800E6240
 * Callers:
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800E6400 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A0C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006A33C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x18007418F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800BB754 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ??0CResourcePriorityTracker@@QEAA@K@Z @ 0x1800E3250 (--0CResourcePriorityTracker@@QEAA@K@Z.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v3; // r15
  unsigned __int64 v4; // rsi
  unsigned __int64 v8; // rbp
  int v9; // ebx
  char *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  CResourcePriorityTracker *v14; // rax
  CResourcePriorityTracker *v15; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = *(const unsigned __int16 **)a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  v8 = v4 + 1;
  *((_QWORD *)this + 6) = 0LL;
  if ( v4 + 1 < v4 )
  {
    v9 = -2147024362;
    goto LABEL_22;
  }
  if ( is_mul_ok(v8, 2uLL) )
  {
    v10 = (char *)CoTaskMemAlloc(2 * v8);
    *((_QWORD *)this + 6) = v10;
    if ( !v10 )
    {
      v9 = -2147024882;
      goto LABEL_22;
    }
    v9 = 0;
    StringCchCopyNExW(v10, v4 + 1, v3, v4);
  }
  else
  {
    v9 = -2147024362;
  }
  if ( v9 < 0 )
  {
LABEL_22:
    v12 = 213LL;
    goto LABEL_23;
  }
  v11 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
  v9 = CTCoAllocPolicy::Alloc(this, 1, v11 + 18, (void **)this + 5);
  if ( v9 >= 0 )
  {
    memcpy_0(*((void **)this + 5), *((const void **)a2 + 2), v11 + 18);
    v13 = *((_QWORD *)a2 + 7);
    if ( v13
      && (v9 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 8LL))(v13, (char *)this + 64), v9 < 0) )
    {
      v12 = 221LL;
    }
    else
    {
      *(_OWORD *)((char *)this + 24) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 2) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 15) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 17) = 0LL;
      *((_DWORD *)this + 36) = 0;
      *((_BYTE *)this + 56) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 57) = *((_BYTE *)a2 + 50);
      v14 = (CResourcePriorityTracker *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v14 )
        v15 = CResourcePriorityTracker::CResourcePriorityTracker(v14, a3);
      else
        v15 = 0LL;
      *((_QWORD *)this + 9) = v15;
      if ( v15 )
        return 0LL;
      v9 = -2147024882;
      v12 = 233LL;
    }
  }
  else
  {
    v12 = 216LL;
  }
LABEL_23:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)(unsigned int)v9);
  return (unsigned int)v9;
}
