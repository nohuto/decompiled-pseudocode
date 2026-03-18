/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C01CF040
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C0195A00 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0210BEC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // edi
  unsigned __int8 (__fastcall ***v7)(_QWORD, _QWORD); // rcx
  unsigned __int64 v8; // rax
  _DWORD *v9; // rax
  _DWORD *v10; // rsi
  unsigned int v11; // ebp
  unsigned int v12; // r8d
  __int64 v13; // rax
  unsigned __int8 result; // al

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    WdLogSingleEntry1(1LL, 63LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"m_FreeCount == 0 || m_pEntryTable[m_FreeHandleListTail].NextFreeIndex == HMGRTABLE_INVALID_INDEX",
      63LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v5 = *((_DWORD *)this + 4);
  v6 = v5 + g_HmgrTableSizeIncrement;
  if ( v5 + g_HmgrTableSizeIncrement < v5 )
    return 0;
  if ( v6 > 0xFFFFFF )
    return 0;
  v7 = (unsigned __int8 (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 3);
  if ( v7 )
  {
    if ( !(**v7)(v7, v6) )
      return 0;
  }
  v8 = 16LL * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v8 = -1LL;
  v9 = (_DWORD *)operator new[](v8, 0x4B677844u, 256LL, a4);
  v10 = v9;
  if ( v9 )
  {
    memmove(v9, *(const void **)this, 16LL * *((unsigned int *)this + 4));
    operator delete[](*(void **)this);
    v11 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
    v12 = *((_DWORD *)this + 4);
    *(_QWORD *)this = v10;
    if ( v12 < v6 )
    {
      v13 = 16LL * v12;
      do
      {
        v13 += 16LL;
        *(_DWORD *)(v13 + *(_QWORD *)this - 16) = ++v12;
        *(_DWORD *)(v13 + *(_QWORD *)this - 8) &= 0xFFFFFFE0;
        *(_DWORD *)(*(_QWORD *)this + v13 - 8) = *(_DWORD *)(*(_QWORD *)this + v13 - 8) & 0xFFFFFF9F | 0x20;
        *(_DWORD *)(v13 + *(_QWORD *)this - 8) &= 0xFFFFE07F;
      }
      while ( v12 < v6 );
      v10 = *(_DWORD **)this;
    }
    v10[4 * v12 - 4] = -16777216;
    if ( *((_DWORD *)this + 5) )
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
    else
      *((_DWORD *)this + 3) = 127;
    if ( v12 != v6 )
    {
      WdLogSingleEntry1(1LL, 130LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"TableIndex == NewTableSize", 130LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_DWORD *)this + 5) = v11;
    result = 1;
    *((_DWORD *)this + 4) = v6;
  }
  else
  {
    operator delete[](0LL);
    return 0;
  }
  return result;
}
