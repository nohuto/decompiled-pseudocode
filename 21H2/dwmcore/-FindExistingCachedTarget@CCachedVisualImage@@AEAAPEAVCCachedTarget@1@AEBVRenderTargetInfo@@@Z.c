/*
 * XREFs of ?FindExistingCachedTarget@CCachedVisualImage@@AEAAPEAVCCachedTarget@1@AEBVRenderTargetInfo@@@Z @ 0x18005FF48
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x18005FCDC (-EnsureRenderTargetBitmap@CCachedVisualImage@@AEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 * Callees:
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180060010 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

struct CCachedVisualImage::CCachedTarget *__fastcall CCachedVisualImage::FindExistingCachedTarget(
        CCachedVisualImage *this,
        const struct RenderTargetInfo *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rsi
  void (__fastcall ***v5)(_QWORD, _DWORD *); // rax
  int v6; // eax
  char IsHDR; // al
  char v8; // dl
  _DWORD v10[2]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  char v12; // [rsp+34h] [rbp-14h]

  v2 = *((_QWORD *)this + 23);
  v4 = *((_QWORD *)this + 24);
  while ( v2 != v4 )
  {
    v5 = (void (__fastcall ***)(_QWORD, _DWORD *))(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)v2 + 8LL)
                                                                                    + 64LL))(*(_QWORD *)(*(_QWORD *)v2 + 8LL));
    (**v5)(v5, v10);
    if ( v10[0] == *(_DWORD *)a2 && v10[1] == *((_DWORD *)a2 + 1) )
    {
      v6 = *((_DWORD *)a2 + 2);
      if ( v11 == v6 || v11 == DisplayId::None || v6 == DisplayId::All )
      {
        RenderTargetInfo::IsHDR(a2);
        IsHDR = RenderTargetInfo::IsHDR((RenderTargetInfo *)v10);
        if ( IsHDR == v8 && v12 == *((_BYTE *)a2 + 20) )
          return *(struct CCachedVisualImage::CCachedTarget **)v2;
      }
    }
    v2 += 8LL;
  }
  return 0LL;
}
