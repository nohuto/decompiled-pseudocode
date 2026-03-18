/*
 * XREFs of ?CreateUsermodeParameters@UnloadFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x24B765
 * Callers:
 *     <none>
 * Callees:
 *     ?CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z @ 0x8C446 (-CommitUMBuffer@UmfdTls@@QAEPAXK_N@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall UnloadFontFileRequest::CreateUsermodeParameters(
        UnloadFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  _DWORD *v4; // eax

  v4 = UmfdTls::CommitUMBuffer(a2, 8u, 1);
  if ( !v4 )
    return -1073741801;
  *v4 = **((_DWORD **)this + 6);
  *a3 = v4;
  return 0;
}
