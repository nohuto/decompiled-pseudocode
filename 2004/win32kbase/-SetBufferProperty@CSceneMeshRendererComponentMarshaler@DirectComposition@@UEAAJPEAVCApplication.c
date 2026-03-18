/*
 * XREFs of ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F33E0
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C0098C10 (Win32AllocPoolWithQuota.c)
 *     memcpy_s @ 0x1C00CE714 (memcpy_s.c)
 */

__int64 __fastcall DirectComposition::CSceneMeshRendererComponentMarshaler::SetBufferProperty(
        DirectComposition::CSceneMeshRendererComponentMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        rsize_t MaxCount,
        bool *a6)
{
  unsigned int v6; // ebx
  unsigned __int64 v9; // rbp
  __int64 v10; // r14
  __int64 v11; // rcx
  void *v12; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 && (a4 || !MaxCount) )
  {
    v9 = MaxCount >> 3;
    if ( (unsigned int)(MaxCount >> 3) > *((_DWORD *)this + 20) )
    {
      v10 = Win32AllocPoolWithQuota(MaxCount, 0x687A4344u);
      if ( !v10 )
        return (unsigned int)-1073741801;
      v11 = *((_QWORD *)this + 9);
      if ( v11 )
        Win32FreePool(v11);
      *((_QWORD *)this + 9) = v10;
    }
    v12 = (void *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = (unsigned int)v9;
    memcpy_s(v12, 8LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
