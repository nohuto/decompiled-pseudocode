/*
 * XREFs of ?OnTouchInfo@EdgyProcessorTarget@@UEAAJPEAUTouchInfo@@@Z @ 0x18017AEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z @ 0x18017AC5C (-OnGestureUpdate@EdgyProcessorTarget@@QEAAJW4GestureType@@@Z.c)
 *     ?OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z @ 0x18017B00C (-OnTouchSessionBegin@EdgyProcessorTarget@@AEAAJAEBUTouchInfo@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x18017BB38 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

__int64 __fastcall EdgyProcessorTarget::OnTouchInfo(EdgyProcessorTarget *this, struct TouchInfo *a2)
{
  __int64 v4; // rcx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v8; // r8
  const char *v9; // r9
  int v10; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = 0;
  if ( (a2->Flags & 0x400) != 0 )
  {
    *((_DWORD *)this + 6) = 1;
    *((_DWORD *)this + 18) = -1;
    *(_QWORD *)((char *)this + 76) = 0LL;
    *(_QWORD *)((char *)this + 84) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    v4 = *((_QWORD *)this + 14);
    goto LABEL_21;
  }
  if ( (a2->Flags & 1) != 0 && (unsigned int)(*((_DWORD *)this + 7) - 2) > 1 )
  {
    v5 = EdgyProcessorTarget::OnTouchSessionBegin((EdgyProcessorTarget *)((char *)this - 8), a2);
    if ( v5 < 0 )
    {
      v6 = 441LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\processor\\edgytarget.cpp",
        (const char *)(unsigned int)v5);
      return (unsigned int)v5;
    }
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, struct TouchInfo *))(**((_QWORD **)this + 18) + 32LL))(
           *((_QWORD *)this + 18),
           a2);
    if ( v5 < 0 )
    {
      v6 = 446LL;
      goto LABEL_7;
    }
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**((_QWORD **)this + 18) + 64LL))(
           *((_QWORD *)this + 18),
           &v12);
    if ( v5 < 0 )
    {
      v6 = 447LL;
      goto LABEL_7;
    }
    v5 = EdgyProcessorTarget::OnGestureUpdate((EdgyProcessorTarget *)((char *)this - 8), v12, v8, v9);
    if ( v5 < 0 )
    {
      v6 = 449LL;
      goto LABEL_7;
    }
  }
  if ( (a2->Flags & 4) == 0 )
    return 0LL;
  v10 = *((_DWORD *)this + 6);
  if ( !v10 || v10 == 3 )
  {
    *((_DWORD *)this + 6) = 1;
    v10 = 1;
  }
  if ( v10 != 1 )
    return 0LL;
  *((_DWORD *)this + 18) = -1;
  v4 = *((_QWORD *)this + 14);
  *(_QWORD *)((char *)this + 76) = 0LL;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
LABEL_21:
  EdgyImpl::Reset((EdgyImpl *)(v4 + 80));
  return 0LL;
}
