/*
 * XREFs of ?GetResourceSetInfo@ResourceSetClientProxy@@UEBAJPEAPEAU_ResourceSetInfo@ExecutionModel@@@Z @ 0x180013190
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A8E0 (--2@YAPEAX_K@Z.c)
 *     ??0_ResourceSetInfo@ExecutionModel@@QEAA@XZ @ 0x1800123C4 (--0_ResourceSetInfo@ExecutionModel@@QEAA@XZ.c)
 */

__int64 __fastcall ResourceSetClientProxy::GetResourceSetInfo(
        ResourceSetClientProxy *this,
        struct ExecutionModel::_ResourceSetInfo **a2)
{
  ExecutionModel::_ResourceSetInfo *v4; // rax
  unsigned int v5; // ebx
  ExecutionModel::_ResourceSetInfo *v6; // rax
  __int64 v7; // rdx
  _OWORD *v8; // rcx
  __int128 v9; // xmm1

  v4 = (ExecutionModel::_ResourceSetInfo *)operator new(0x178uLL);
  v5 = 0;
  if ( v4 )
    v6 = ExecutionModel::_ResourceSetInfo::_ResourceSetInfo(v4);
  else
    v6 = 0LL;
  *a2 = v6;
  if ( v6 )
  {
    v7 = 2LL;
    v8 = (_OWORD *)((char *)this + 40);
    do
    {
      *(_OWORD *)v6 = *v8;
      *((_OWORD *)v6 + 1) = v8[1];
      *((_OWORD *)v6 + 2) = v8[2];
      *((_OWORD *)v6 + 3) = v8[3];
      *((_OWORD *)v6 + 4) = v8[4];
      *((_OWORD *)v6 + 5) = v8[5];
      *((_OWORD *)v6 + 6) = v8[6];
      v6 = (ExecutionModel::_ResourceSetInfo *)((char *)v6 + 128);
      v9 = v8[7];
      v8 += 8;
      *((_OWORD *)v6 - 1) = v9;
      --v7;
    }
    while ( v7 );
    *(_OWORD *)v6 = *v8;
    *((_OWORD *)v6 + 1) = v8[1];
    *((_OWORD *)v6 + 2) = v8[2];
    *((_OWORD *)v6 + 3) = v8[3];
    *((_OWORD *)v6 + 4) = v8[4];
    *((_OWORD *)v6 + 5) = v8[5];
    *((_OWORD *)v6 + 6) = v8[6];
    *((_QWORD *)v6 + 14) = *((_QWORD *)v8 + 14);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v5;
}
