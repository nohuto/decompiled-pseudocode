/*
 * XREFs of ?IsProtected@CRenderData@@UEBA_NXZ @ 0x1800F0420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?IsProtected@CCachedVisualImage@@UEBA_NXZ @ 0x18016FC60 (-IsProtected@CCachedVisualImage@@UEBA_NXZ.c)
 */

char __fastcall CRenderData::IsProtected(CRenderData *this)
{
  unsigned int v1; // eax
  char v2; // di
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rcx

  v1 = *((_DWORD *)this + 38);
  v2 = 0;
  if ( v1 )
  {
    v4 = 0LL;
    v5 = v1;
    do
    {
      v6 = *(_QWORD *)(v4 + *((_QWORD *)this + 16));
      if ( v6
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 56LL))(v6, 15LL)
        && CCachedVisualImage::IsProtected((CCachedVisualImage *)(*(_QWORD *)(v4 + *((_QWORD *)this + 16)) + 64LL)) )
      {
        v2 = 1;
      }
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  return v2;
}
