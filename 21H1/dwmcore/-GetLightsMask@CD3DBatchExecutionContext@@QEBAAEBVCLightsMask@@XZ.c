/*
 * XREFs of ?GetLightsMask@CD3DBatchExecutionContext@@QEBAAEBVCLightsMask@@XZ @ 0x18001A34C
 * Callers:
 *     ?SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x180046C80 (-SetStateOnDevice@CBrushRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x1802698B0 (-SetStateOnDevice@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800E1D10 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800E1D78 (_Init_thread_header.c)
 */

const struct CLightsMask *__fastcall CD3DBatchExecutionContext::GetLightsMask(CD3DBatchExecutionContext *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    return (const struct CLightsMask *)(v1 + 16);
  if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer
                                                                     + (unsigned int)tls_index)
                                                                   + 4LL) )
  {
    Init_thread_header(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    if ( __TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA == -1 )
    {
      `CLightsMask::NoLights'::`2'::noLights = -1;
      Init_thread_footer(&__TSS0__1__NoLights_CLightsMask__SAAEBV2_XZ_4HA);
    }
  }
  return (const struct CLightsMask *)&`CLightsMask::NoLights'::`2'::noLights;
}
