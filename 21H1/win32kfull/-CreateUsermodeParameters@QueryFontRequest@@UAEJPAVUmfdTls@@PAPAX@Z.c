/*
 * XREFs of ?CreateUsermodeParameters@QueryFontRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0xE0700
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A (--$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall QueryFontRequest::CreateUsermodeParameters(QueryFontRequest *this, struct UmfdTls *a2, void **a3)
{
  int v4; // ecx
  size_t v5; // edi
  _DWORD *v6; // ecx
  int v8; // [esp+14h] [ebp-24h] BYREF
  size_t Size; // [esp+18h] [ebp-20h] BYREF
  int v10; // [esp+1Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  Size = 0;
  v10 = 0;
  v8 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(0x14u, &Size) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(4u, (unsigned int *)&v10) )
    return -1073741801;
  v5 = Size;
  UmfdTls::CommitUMBuffer<_QUERYFONTPARAMETERS>(a2, &v8, Size, v10, v4);
  v6 = (_DWORD *)v8;
  if ( !v8 )
    return -1073741801;
  *((_DWORD *)this + 11) = v8 + v5;
  v6[3] = (char *)v6 + v5;
  ms_exc.registration.TryLevel = 0;
  *v6 = *((_DWORD *)this + 6);
  v6[1] = **((_DWORD **)this + 7);
  v6[2] = *((_DWORD *)this + 8);
  ms_exc.registration.TryLevel = -2;
  *a3 = v6;
  return 0;
}
