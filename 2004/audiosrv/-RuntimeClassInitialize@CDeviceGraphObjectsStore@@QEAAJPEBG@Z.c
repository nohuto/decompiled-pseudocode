/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18002A67C
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002A4C0 (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18002A740 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::RuntimeClassInitialize(
        CDeviceGraphObjectsStore *this,
        const unsigned __int16 *a2)
{
  void *v2; // rdi
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbp
  unsigned __int16 *v7; // rax
  int v8; // ebx
  DWORD LastError; // ebx
  unsigned __int16 **v11; // [rsp+20h] [rbp-38h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-30h]
  unsigned int v13; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 2) = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = v5 + 1;
  if ( v5 + 1 < v5 )
  {
    v8 = -2147024362;
    goto LABEL_14;
  }
  if ( is_mul_ok(v6, 2uLL) )
  {
    v7 = (unsigned __int16 *)CoTaskMemAlloc(2 * v6);
    *((_QWORD *)this + 2) = v7;
    if ( !v7 )
    {
      v8 = -2147024882;
      goto LABEL_14;
    }
    v8 = 0;
    StringCchCopyNExW(v7, v5 + 1, a2, v5, v11, v12, v13);
  }
  else
  {
    v8 = -2147024362;
  }
  if ( v8 >= 0 )
    return 0LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v8,
    (int)v11);
  return (unsigned int)v8;
}
