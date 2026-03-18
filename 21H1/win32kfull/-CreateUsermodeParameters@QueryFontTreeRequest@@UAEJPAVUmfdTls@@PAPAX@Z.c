/*
 * XREFs of ?CreateUsermodeParameters@QueryFontTreeRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B0CC
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z @ 0x8B16A (--$CommitUMBuffer@U_QUERYFONTPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTPARAMETERS@@II_N@Z.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall QueryFontTreeRequest::CreateUsermodeParameters(
        QueryFontTreeRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // ecx
  size_t v5; // edi
  _DWORD *v6; // ecx
  unsigned int v8; // [esp+0h] [ebp-38h]
  unsigned int v9; // [esp+0h] [ebp-38h]
  unsigned int *v10; // [esp+4h] [ebp-34h]
  unsigned int *v11; // [esp+4h] [ebp-34h]
  int v12; // [esp+14h] [ebp-24h] BYREF
  size_t Size; // [esp+18h] [ebp-20h]
  int v14; // [esp+1Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  Size = 0;
  v14 = 0;
  v12 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(v8, v10) )
    return -1073741801;
  if ( !UmfdTls::TryGetAlignedFieldSize(v9, v11) )
    return -1073741801;
  v5 = Size;
  UmfdTls::CommitUMBuffer<_QUERYFONTPARAMETERS>(a2, (int)&v12, Size, v14, v4);
  v6 = (_DWORD *)v12;
  if ( !v12 )
    return -1073741801;
  *((_DWORD *)this + 12) = v12 + v5;
  v6[4] = (char *)v6 + v5;
  ms_exc.registration.TryLevel = 0;
  *v6 = *((_DWORD *)this + 6);
  v6[1] = **((_DWORD **)this + 7);
  v6[2] = *((_DWORD *)this + 8);
  v6[3] = *((_DWORD *)this + 9);
  ms_exc.registration.TryLevel = -2;
  *a3 = v6;
  return 0;
}
