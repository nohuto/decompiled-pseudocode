/*
 * XREFs of ?GetClsids@CCompositeSystemEffect@@UEAAJPEAIPEAPEAU_GUID@@@Z @ 0x1800354D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C654 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180074C4F (memcpy_0.c)
 */

__int64 __fastcall CCompositeSystemEffect::GetClsids(CCompositeSystemEffect *this, unsigned int *a2, struct _GUID **a3)
{
  struct _GUID *v3; // rbx
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r9
  struct _GUID *v10; // rax
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = 0LL;
  *a2 = 0;
  *a3 = 0LL;
  if ( *((int *)this + 16) <= 0 )
    return 0LL;
  v7 = *((int *)this + 16);
  v8 = -1LL;
  if ( v7 != 1 )
    v8 = 0xFFFFFFFFFFFFFFFFuLL / v7;
  if ( v8 >= 0x10 )
  {
    v9 = 16 * v7;
    if ( v9 <= 0x7FFFFFFF )
    {
      v10 = (struct _GUID *)CoTaskMemAlloc((unsigned int)v9);
      v3 = v10;
      if ( v10 )
      {
        memcpy_0(v10, *((const void **)this + 7), 16LL * *((int *)this + 16));
        *a3 = v3;
        *a2 = *((_DWORD *)this + 16);
        CoTaskMemFree(0LL);
        return 0LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2D2,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)0x8007000ELL,
    v12);
  CoTaskMemFree(v3);
  return 2147942414LL;
}
