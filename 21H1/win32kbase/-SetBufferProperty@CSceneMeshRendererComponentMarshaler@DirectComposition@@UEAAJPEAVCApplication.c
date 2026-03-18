/*
 * XREFs of ?SetBufferProperty@CSceneMeshRendererComponentMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C01F8E10
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     memcpy_s @ 0x1C00CDE64 (memcpy_s.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rcx
  void *v14; // rcx

  v6 = 0;
  *a6 = 0;
  if ( a3 == 2 && (a4 || !MaxCount) )
  {
    v9 = MaxCount >> 3;
    if ( (unsigned int)(MaxCount >> 3) > *((_DWORD *)this + 20) )
    {
      v12 = Win32AllocPoolWithQuota(MaxCount, 0x687A4344u);
      if ( !v12 )
        return (unsigned int)-1073741801;
      v13 = *((_QWORD *)this + 9);
      if ( v13 )
        Win32FreePool(v13, v10, v11);
      *((_QWORD *)this + 9) = v12;
    }
    v14 = (void *)*((_QWORD *)this + 9);
    *((_QWORD *)this + 10) = (unsigned int)v9;
    memcpy_s(v14, 8LL * (unsigned int)v9, a4, MaxCount);
    *a6 = 1;
    *((_DWORD *)this + 4) |= 0x80u;
    return v6;
  }
  return (unsigned int)-1073741811;
}
