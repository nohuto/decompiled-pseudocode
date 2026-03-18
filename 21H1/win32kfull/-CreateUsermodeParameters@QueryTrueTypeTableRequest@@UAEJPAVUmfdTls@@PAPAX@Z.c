/*
 * XREFs of ?CreateUsermodeParameters@QueryTrueTypeTableRequest@@UAEJPAVUmfdTls@@PAPAX@Z @ 0x8B2C2
 * Callers:
 *     <none>
 * Callees:
 *     ??$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N@Z @ 0x8B1A0 (--$CommitUMBuffer@U_QUERYFONTDATAPARAMETERS@@@UmfdTls@@QAEXPAPAU_QUERYFONTDATAPARAMETERS@@IIII_N.c)
 *     ?TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z @ 0x8C526 (-TryGetAlignedFieldSize@UmfdTls@@CG_NIPAI@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __thiscall QueryTrueTypeTableRequest::CreateUsermodeParameters(
        QueryTrueTypeTableRequest *this,
        struct UmfdTls *a2,
        void **a3)
{
  int v4; // edi
  int v5; // ecx
  bool AlignedFieldSize; // al
  unsigned int v7; // edi
  unsigned int v8; // ebx
  _DWORD *v9; // ecx
  size_t v10; // eax
  unsigned int v11; // eax
  int v13; // [esp-8h] [ebp-48h]
  unsigned int v14; // [esp+0h] [ebp-40h]
  unsigned int v15; // [esp+0h] [ebp-40h]
  unsigned int v16; // [esp+0h] [ebp-40h]
  unsigned int v17; // [esp+0h] [ebp-40h]
  unsigned int *v18; // [esp+4h] [ebp-3Ch]
  unsigned int *v19; // [esp+4h] [ebp-3Ch]
  unsigned int *v20; // [esp+4h] [ebp-3Ch]
  unsigned int *v21; // [esp+4h] [ebp-3Ch]
  int v22; // [esp+14h] [ebp-2Ch] BYREF
  unsigned int v23; // [esp+18h] [ebp-28h]
  unsigned int v24; // [esp+1Ch] [ebp-24h]
  int v25; // [esp+20h] [ebp-20h]
  size_t Size; // [esp+24h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+28h] [ebp-18h]

  v22 = 0;
  Size = 0;
  v23 = 0;
  v24 = 0;
  v4 = 0;
  v25 = 0;
  if ( !UmfdTls::TryGetAlignedFieldSize(v14, v18) || !UmfdTls::TryGetAlignedFieldSize(v15, v19) )
    return -1073741801;
  if ( UmfdTls::TryGetAlignedFieldSize(v16, v20) )
  {
    AlignedFieldSize = UmfdTls::TryGetAlignedFieldSize(v17, v21);
    v4 = v25;
  }
  else
  {
    AlignedFieldSize = 0;
  }
  if ( !AlignedFieldSize )
    return -1073741801;
  v13 = v4;
  v7 = v24;
  v8 = v23;
  UmfdTls::CommitUMBuffer<_QUERYFONTDATAPARAMETERS>(a2, &v22, Size, v23, v24, v13, v5);
  v9 = (_DWORD *)v22;
  if ( !v22 )
    return -1073741801;
  v10 = v22 + Size;
  *((_DWORD *)this + 15) = v22 + Size;
  v11 = v8 + v10;
  *((_DWORD *)this + 16) = v11;
  *((_DWORD *)this + 17) = v7 + v11;
  if ( !*((_DWORD *)this + 11) )
    *((_DWORD *)this + 15) = 0;
  ms_exc.registration.TryLevel = 0;
  *v9 = **((_DWORD **)this + 6);
  v9[1] = *((_DWORD *)this + 7);
  v9[2] = *((_DWORD *)this + 8);
  v9[3] = *((_DWORD *)this + 9);
  v9[5] = *((_DWORD *)this + 15);
  v9[4] = *((_DWORD *)this + 10);
  if ( *((_DWORD *)this + 12) )
    v9[6] = *((_DWORD *)this + 16);
  if ( *((_DWORD *)this + 13) )
    v9[7] = *((_DWORD *)this + 17);
  ms_exc.registration.TryLevel = -2;
  *a3 = v9;
  return 0;
}
