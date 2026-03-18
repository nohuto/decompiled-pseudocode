/*
 * XREFs of ?ProcessSetClearColor@CRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETCLEARCOLOR@@@Z @ 0x18016FA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTarget::ProcessSetClearColor(
        CRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETCLEARCOLOR *a3)
{
  bool v3; // zf

  if ( *((float *)this + 28) != *((float *)a3 + 2)
    || *((float *)this + 29) != *((float *)a3 + 3)
    || *((float *)this + 30) != *((float *)a3 + 4)
    || *((float *)this + 31) != *((float *)a3 + 5) )
  {
    v3 = *((_BYTE *)this + 128) == 0;
    *((_OWORD *)this + 7) = *(_OWORD *)((char *)a3 + 8);
    if ( !v3 )
      *((_BYTE *)this + 129) = 1;
  }
  return 0LL;
}
