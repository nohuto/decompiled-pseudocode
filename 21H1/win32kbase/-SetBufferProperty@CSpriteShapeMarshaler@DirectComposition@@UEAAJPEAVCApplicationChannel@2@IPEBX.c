/*
 * XREFs of ?SetBufferProperty@CSpriteShapeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01E9EE0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memcpy_s @ 0x1C00CDE64 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSpriteShapeMarshaler::SetBufferProperty(
        DirectComposition::CSpriteShapeMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount)
{
  unsigned int v5; // ebx
  unsigned __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r14
  __int64 v12; // rcx
  void *v13; // rcx

  v5 = 0;
  if ( a3 == 9 && (a4 || !MaxCount) )
  {
    v8 = MaxCount >> 2;
    if ( (unsigned int)(MaxCount >> 2) > *((_DWORD *)this + 24) )
    {
      v11 = Win32AllocPoolWithQuota(MaxCount, 0x64734344u);
      if ( !v11 )
        return (unsigned int)-1073741801;
      v12 = *((_QWORD *)this + 11);
      if ( v12 )
        Win32FreePool(v12, v9, v10);
      *((_QWORD *)this + 11) = v11;
    }
    v13 = (void *)*((_QWORD *)this + 11);
    *((_QWORD *)this + 12) = (unsigned int)v8;
    memcpy_s(v13, 4LL * (unsigned int)v8, a4, MaxCount);
    *((_DWORD *)this + 4) |= 0x400u;
    return v5;
  }
  return (unsigned int)-1073741811;
}
