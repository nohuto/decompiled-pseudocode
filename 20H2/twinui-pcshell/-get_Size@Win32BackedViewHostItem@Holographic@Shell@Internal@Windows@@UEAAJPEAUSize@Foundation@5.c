/*
 * XREFs of ?get_Size@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAUSize@Foundation@5@@Z @ 0x180255EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_CalculateCurrentLogicalWindowSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@AEAAJPEAUSize@Foundation@5@@Z @ 0x1802534BC (-_CalculateCurrentLogicalWindowSize@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@.c)
 */

__int64 __fastcall Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::get_Size(
        RTL_SRWLOCK *this,
        struct Windows::Foundation::Size *a2)
{
  RTL_SRWLOCK *v2; // rbx
  float v5; // xmm6_4
  float v6; // xmm7_4
  PVOID Ptr; // rdi
  signed int v8; // eax
  unsigned int v9; // edi
  __int64 result; // rax
  int v11; // xmm6_4
  int v12; // xmm7_4
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  PVOID v14; // [rsp+60h] [rbp+8h]
  void *v15; // [rsp+68h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v2 = this + 28;
  AcquireSRWLockShared(this + 28);
  v5 = *(float *)&this[67].Ptr;
  v6 = *((float *)&this[67].Ptr + 1);
  Ptr = this[66].Ptr;
  v14 = this[67].Ptr;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  if ( Ptr && v5 == 0.0 && v6 == 0.0 )
  {
    v15 = 0LL;
    v8 = Windows::Internal::Shell::Holographic::Win32BackedViewHostItem::_CalculateCurrentLogicalWindowSize(
           this,
           (struct Windows::Foundation::Size *)&v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x220,
        (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\win32backedviewhostitem.cpp",
        (const char *)(unsigned int)v8);
      return v9;
    }
    v11 = (int)v15;
    v12 = HIDWORD(v15);
    v14 = v15;
    AcquireSRWLockExclusive(v2);
    LODWORD(this[67].Ptr) = v11;
    HIDWORD(this[67].Ptr) = v12;
    if ( v2 )
      ReleaseSRWLockExclusive(v2);
  }
  result = 0LL;
  *(_QWORD *)a2 = v14;
  return result;
}
