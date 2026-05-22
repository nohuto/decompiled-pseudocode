/*
 * XREFs of ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180178380
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AE40 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017ABB4 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProc.c)
 */

__int64 __fastcall EdgyProcessor::OnInput(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  EdgyProcessorTarget *v4; // rcx
  unsigned int v5; // ebx

  v4 = (EdgyProcessorTarget *)*((_QWORD *)this + 9);
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)EdgyProcessorTarget::OnContextualInput(v4, a2, a3, a4);
  }
  else
  {
    *((_DWORD *)a4 + 2) = 0;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)a4 + 10);
  }
  return v5;
}
