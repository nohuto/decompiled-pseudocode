/*
 * XREFs of ?CreateUsermodeParameters@QueryFontFileRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE29FC
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A (--$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall QueryFontFileRequest::CreateUsermodeParameters(
        QueryFontFileRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  unsigned int v4; // edi
  int v5; // ecx
  size_t v6; // edi
  _DWORD *v7; // ecx
  int v9; // [esp+14h] [ebp-24h] BYREF
  size_t Size; // [esp+18h] [ebp-20h] BYREF
  int v11; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v9 = 0;
  Size = 0;
  v11 = 0;
  v4 = *((_DWORD *)this + 8);
  if ( !UmfdTls::TryGetAlignedFieldSize(0x14u, &Size) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(v4, (unsigned int *)&v11) )
    return -1073741801;
  v6 = Size;
  UmfdTls::CommitUMBuffer<_QUERYFONTPARAMETERS>(a2, &v9, Size, v11, v5);
  v7 = (_DWORD *)v9;
  if ( !v9 )
    return -1073741801;
  if ( *((_DWORD *)this + 9) )
    *((_DWORD *)this + 11) = v6 + v9;
  ms_exc.registration.TryLevel = 0;
  *v7 = **((_DWORD **)this + 6);
  v7[1] = *((_DWORD *)this + 7);
  v7[2] = *((_DWORD *)this + 8);
  v7[3] = *((_DWORD *)this + 11);
  ms_exc.registration.TryLevel = -2;
  *a3 = v7;
  return 0;
}
