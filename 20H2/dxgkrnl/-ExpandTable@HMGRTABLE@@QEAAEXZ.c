/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C015430C
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C018C6BC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027140 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  unsigned __int8 (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  SIZE_T v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rsi
  __int64 v8; // rdx
  unsigned int v9; // ebp
  unsigned int v10; // r8d
  __int64 v11; // rcx
  unsigned __int8 result; // al
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 2LL * *((unsigned int *)this + 3));
    *(_QWORD *)(v13 + 24) = 63LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v2 = *((_DWORD *)this + 4);
  v3 = v2 + g_HmgrTableSizeIncrement;
  if ( v2 + g_HmgrTableSizeIncrement < v2 )
    return 0;
  if ( v3 > 0xFFFFFF )
    return 0;
  v4 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( !(**v4)(v4, v3) )
      return 0;
  }
  v5 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, 0x4B677844u, PagedPool);
  v7 = v6;
  if ( !v6 )
  {
    operator delete[](0LL);
    return 0;
  }
  memmove(v6, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  operator delete[](*(void **)this);
  v9 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  v10 = *((_DWORD *)this + 4);
  *(_QWORD *)this = v7;
  if ( v10 < v3 )
  {
    v8 = 16LL * v10;
    do
    {
      *(_DWORD *)(v8 + *(_QWORD *)this) = ++v10;
      v8 += 16LL;
      *(_DWORD *)(v8 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
      *(_DWORD *)(v8 + *(_QWORD *)this - 8) = *(_DWORD *)(v8 + *(_QWORD *)this - 8) & 0xFFFFFF9F | 0x20;
      *(_DWORD *)(v8 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
    }
    while ( v10 < v3 );
    v7 = *(_DWORD **)this;
  }
  v11 = 2LL * (v10 - 1);
  v7[4 * v10 - 4] = -16777216;
  if ( *((_DWORD *)this + 5) )
  {
    v11 = *(_QWORD *)this;
    v8 = 2LL * *((unsigned int *)this + 3);
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
  }
  else
  {
    *((_DWORD *)this + 3) = 127;
  }
  if ( v10 != v3 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v8);
    *(_QWORD *)(v14 + 24) = 130LL;
    WdLogEvent5_WdAssertion(v14);
  }
  *((_DWORD *)this + 4) = v3;
  result = 1;
  *((_DWORD *)this + 5) = v9;
  return result;
}
